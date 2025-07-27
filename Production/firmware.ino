#include <WiFi.h>
#include <NTPClient.h>
#include <WifiUdp.h>
#include <SPI.h>
#include <LedControl.h>

#define CLK_PIN   18 
#define DATA_PIN  23 
#define CS_PIN    5

LedControl lc = LedControl(DATA_PIN, CLK_PIN, CS_PIN, 1);

const char* ssid     = "<will add later>";
const char* password = "<will add later>";

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", 19800, 3600000);

unsigned long lastSyncMillis = 0;
unsigned long syncInterval = 3600000;
unsigned long localMillisAtSync = 0;
int syncedHour = 0;
int syncedMinute = 0;
int syncedSecond = 0;

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print("Connecting.");
  }
  Serial.println("");
  Serial.println("WiFi connected.");
  timeClient.begin();
  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);
}

void loop() {
  if (millis() - lastSyncMillis >= syncInterval) {
    syncTime();
  }
  displayTime();
  delay(1000);
}

void syncTime() {
  Serial.println("Syncing time with NTP...");
  timeClient.update();

  syncedHour = timeClient.getHours();
  syncedMinute = timeClient.getMinutes();
  syncedSecond = timeClient.getSeconds();

  localMillisAtSync = millis();
  lastSyncMillis = millis();

  Serial.printf("Time synced: %02d:%02d:%02d\n", syncedHour, syncedMinute, syncedSecond);
}

void getCurrentTime(int &hours, int &minutes, int &seconds) {
  unsigned long elapsed = (millis() - localMillisAtSync) / 1000;
  int totalSeconds = syncedSecond + elapsed;
  minutes = syncedMinute + totalSeconds / 60;
  seconds = totalSeconds % 60;
  hours = (syncedHour + minutes / 60) % 24;
  minutes = minutes % 60;
}

void displayTime(){
  int hours, minutes, seconds;
  getCurrentTime(hours, minutes, seconds);
  int h1 = hours / 10;
  int h2 = hours % 10;
  int m1 = minutes / 10;
  int m2 = minutes % 10;

  bool colonOn = (millis() / 1000) % 2 == 0;

  lc.setDigit(0,3,h1,false);
  lc.setDigit(0, 2, h2, colonOn);
  lc.setDigit(0, 1, m1, false);
  lc.setDigit(0, 0, m2, false);
}