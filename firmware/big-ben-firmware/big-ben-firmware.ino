#include "RTClib.h"
#include "EPD.h"
#include "GUI_Paint.h"
#include "face.h"
#include "math.h"

#define WIDTH 200
#define HEIGHT 200

const int hourPin = 2;
const int minutePin = 3;

RTC_DS3231 rtc;

long lastMillis = -60000;
int hourButtonState = 0;
int minuteButtonState = 0;

void drawHourHand(int hour, int minute) {
  int xc = WIDTH/2;
  int yc = HEIGHT/2;
  int l = 40;
  int w = 4;
  float adjustedHour = hour + minute / 60.0;
  double theta = M_PI - adjustedHour*M_PI/6;
  int xTip = xc+int(l*sin(theta));
  int yTip = yc+int(l*cos(theta));
  int xBase1 = xc+int(w*sin(theta+M_PI/2));
  int yBase1 = yc+int(w*cos(theta+M_PI/2));
  int xBase2 = xc+int(w*sin(theta-M_PI/2));
  int yBase2 = yc+int(w*cos(theta-M_PI/2));
  Paint_DrawLine(xc, yc, xTip, yTip, BLACK, LINE_STYLE_SOLID, DOT_PIXEL_2X2);
  Paint_DrawLine(xc, yc, xBase1, yBase1, BLACK, LINE_STYLE_SOLID, DOT_PIXEL_2X2);
  Paint_DrawLine(xBase1, yBase1, xTip, yTip, BLACK, LINE_STYLE_SOLID, DOT_PIXEL_2X2);
  Paint_DrawLine(xc, yc, xBase2, yBase2, BLACK, LINE_STYLE_SOLID, DOT_PIXEL_2X2);
  Paint_DrawLine(xBase2, yBase2, xTip, yTip, BLACK, LINE_STYLE_SOLID, DOT_PIXEL_2X2);
  Paint_DrawCircle(xc, yc, 8, BLACK, DRAW_FILL_FULL, DOT_PIXEL_1X1);
}

void drawMinuteHand(int minute) {
  int xc = WIDTH/2;
  int yc = HEIGHT/2;
  int lA = 70;
  int lB = 15;
  double theta = M_PI - minute*M_PI/30;
  int xTipA = xc+int(lA*sin(theta));
  int yTipA = yc+int(lA*cos(theta));
  int xTipB = xc-int(lB*sin(theta));
  int yTipB = yc-int(lB*cos(theta));
  Paint_DrawLine(xTipA, yTipA, xTipB, yTipB, BLACK, LINE_STYLE_SOLID, DOT_PIXEL_2X2);
}

void setup() {
  pinMode(hourPin, INPUT);
  pinMode(minutePin, INPUT);
  rtc.begin();

  DEV_Module_Init();
  EPD_1IN54_V2_Init();
  EPD_1IN54_V2_Clear();
  DEV_Delay_ms(500);
}

DateTime now;

void loop() {
  hourButtonState = digitalRead(hourPin);
  minuteButtonState = digitalRead(minutePin);
  if (hourButtonState == LOW) {
    now = rtc.now();
    rtc.adjust(DateTime(now.year(), now.month(), now.day(), now.hour()+1, now.minute(), now.second()));
    lastMillis = -60000;
  }
  if (minuteButtonState == LOW) {
    now = rtc.now();
    rtc.adjust(DateTime(now.year(), now.month(), now.day(), now.hour(), now.minute()+1, now.second()));
    lastMillis = -60000;
  }
  if(millis() - lastMillis > 60000) {
    lastMillis = millis();
    now = rtc.now();
    Paint_NewImage(IMAGE_BW, EPD_1IN54_V2_WIDTH, EPD_1IN54_V2_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_POSITIVE);
    Paint_Clear(WHITE);   
    
    Paint_DrawBitMap(FACE);
    drawHourHand(now.twelveHour(), now.minute());
    drawMinuteHand(now.minute());
    
    EPD_1IN54_V2_Display();
  }
}
