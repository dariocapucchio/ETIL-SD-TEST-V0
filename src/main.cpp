/*********************************************************************************
 *  @file main.cpp 
 *  @brief Pantalla tactil para Etilometro
 *            
 *          Hardware:
 *            ESP32-3248S035C Sunton smart display
 *            - ST7796 Pantalla 3.5" 320x480
 *            - GT911 Panel tactil capacitivo
 *            
 *
 *  @author Dario Capucchio
 *  @date 05-07-2024
 *  @version 0.1
 *
 *********************************************************************************/
//============= LIBRERIAS ========================================================
#include <Arduino.h>                // Framework
#include <esp32_smartdisplay.h>     // Libreria para el hardware
#include <ESP32Time.h>              // Libreria para el RTC interno del ESP
#include "ui.h"                     // Libreria grafica generada con Squarespace
//============= DEFINICIONES =====================================================
#define CDS_PIN 34

ESP32Time rtc(3600);      // RTC interno del ESP

uint16_t medicion = 0;
char dato[6];
char FechaHora[20];
//============= SETUP ============================================================
void setup() {
  Serial.begin(115200);
  smartdisplay_init();

  auto disp = lv_disp_get_default();
  lv_disp_set_rotation(disp, LV_DISP_ROT_90);

  rtc.setTime(30, 24, 15, 17, 1, 2021);  // 17th Jan 2021 15:24:30

  smartdisplay_led_set_rgb(true,false,false);   // LED rojo
  ui_init();

  pinMode(CDS_PIN,INPUT);
  medicion = 0;
}
//============= LOOP =============================================================
void loop() {
  //medicion = analogRead(CDS_PIN);
  //Serial.println(analogRead(CDS_PIN));
  if(medicion%10 == 0){
    sprintf(dato,"%.2f",(float)medicion/1000.0);
    lv_label_set_text(ui_MedicionS2, dato);
    lv_bar_set_value(ui_Bar3, medicion, LV_ANIM_OFF);
    sprintf(FechaHora,"%d/%d/%d %d:%d:%d",rtc.getDay(),rtc.getMonth()+1,rtc.getYear(),rtc.getHour(true),rtc.getMinute(),rtc.getSecond());
    lv_label_set_text(ui_fechaS1, FechaHora);
    lv_label_set_text(ui_fechaS2, FechaHora);
  }
  medicion++;
  if(medicion == 1000){medicion = 0;}
  lv_timer_handler();
  delay(100);
}
//================================================================================
// EOF