// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: sql_test_v0

#ifndef _SQL_TEST_V0_UI_H
#define _SQL_TEST_V0_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_Presentacion
void ui_Presentacion_screen_init(void);
void ui_event_Presentacion(lv_event_t * e);
extern lv_obj_t * ui_Presentacion;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_Image3;
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_PanelBackS1;
extern lv_obj_t * ui_Image8;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Label3;
void ui_event_Button1(lv_event_t * e);
extern lv_obj_t * ui_Button1;
extern lv_obj_t * ui_PanelSuperiorS1;
extern lv_obj_t * ui_TituloS1;
extern lv_obj_t * ui_fechaS1;
extern lv_obj_t * ui_Image1;
// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
extern lv_obj_t * ui_Screen2;
extern lv_obj_t * ui_PanelBackS2;
extern lv_obj_t * ui_UnidadS2;
extern lv_obj_t * ui_MedicionS2;
extern lv_obj_t * ui_Bar3;
extern lv_obj_t * ui_Image4;
extern lv_obj_t * ui_Image6;
void ui_event_Button3(lv_event_t * e);
extern lv_obj_t * ui_Button3;
extern lv_obj_t * ui_PanelSuperiorS2;
extern lv_obj_t * ui_TituloS2;
extern lv_obj_t * ui_fechaS2;
extern lv_obj_t * ui_Image5;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_logo_triple_dependencia_png);    // assets/logo_triple_dependencia.png
LV_IMG_DECLARE(ui_img_logo_gba_footer_blanco_png);    // assets/logo_gba_footer_blanco.png
LV_IMG_DECLARE(ui_img_1834955054);    // assets/Iconos/ci--settings.png
LV_IMG_DECLARE(ui_img_1727328033);    // assets/Iconos/ci--ruler.png
LV_IMG_DECLARE(ui_img_902681826);    // assets/Iconos/tabler--battery-charging.png
LV_IMG_DECLARE(ui_img_519233071);    // assets/Iconos/tabler--beer-off.png
LV_IMG_DECLARE(ui_img_464426383);    // assets/Iconos/tabler--beer.png
LV_IMG_DECLARE(ui_img_1389121707);    // assets/Iconos/ci--caret-circle-left.png






void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
