// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: sql_test_v0

#include "ui.h"

void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PanelBackS2 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_PanelBackS2, 480);
    lv_obj_set_height(ui_PanelBackS2, 320);
    lv_obj_set_align(ui_PanelBackS2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PanelBackS2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PanelBackS2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PanelBackS2, lv_color_hex(0x5A82D4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelBackS2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_PanelBackS2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_UnidadS2 = lv_label_create(ui_PanelBackS2);
    lv_obj_set_width(ui_UnidadS2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_UnidadS2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_UnidadS2, 100);
    lv_obj_set_y(ui_UnidadS2, 0);
    lv_obj_set_align(ui_UnidadS2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_UnidadS2, "g/L");
    lv_obj_set_style_text_color(ui_UnidadS2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_UnidadS2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_UnidadS2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MedicionS2 = lv_label_create(ui_PanelBackS2);
    lv_obj_set_width(ui_MedicionS2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MedicionS2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MedicionS2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MedicionS2, "00.0");
    lv_obj_set_style_text_color(ui_MedicionS2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MedicionS2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MedicionS2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bar3 = lv_bar_create(ui_PanelBackS2);
    lv_bar_set_range(ui_Bar3, 0, 1000);
    lv_bar_set_value(ui_Bar3, 500, LV_ANIM_OFF);
    lv_bar_set_start_value(ui_Bar3, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Bar3, 250);
    lv_obj_set_height(ui_Bar3, 20);
    lv_obj_set_x(ui_Bar3, 0);
    lv_obj_set_y(ui_Bar3, 50);
    lv_obj_set_align(ui_Bar3, LV_ALIGN_CENTER);
    lv_obj_set_style_outline_color(ui_Bar3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Bar3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Bar3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Bar3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Bar3, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Image4 = lv_img_create(ui_PanelBackS2);
    lv_img_set_src(ui_Image4, &ui_img_519233071);
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image4, 0);
    lv_obj_set_y(ui_Image4, -40);
    lv_obj_set_align(ui_Image4, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image6 = lv_img_create(ui_PanelBackS2);
    lv_img_set_src(ui_Image6, &ui_img_464426383);
    lv_obj_set_width(ui_Image6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image6, 0);
    lv_obj_set_y(ui_Image6, -40);
    lv_obj_set_align(ui_Image6, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button3 = lv_btn_create(ui_PanelBackS2);
    lv_obj_set_width(ui_Button3, 70);
    lv_obj_set_height(ui_Button3, 70);
    lv_obj_set_x(ui_Button3, 0);
    lv_obj_set_y(ui_Button3, 40);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button3, &ui_img_1389121707, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Button3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Button3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Button3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Button3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Button3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelSuperiorS2 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_PanelSuperiorS2, 480);
    lv_obj_set_height(ui_PanelSuperiorS2, 50);
    lv_obj_set_x(ui_PanelSuperiorS2, 0);
    lv_obj_set_y(ui_PanelSuperiorS2, -135);
    lv_obj_set_align(ui_PanelSuperiorS2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PanelSuperiorS2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PanelSuperiorS2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PanelSuperiorS2, lv_color_hex(0x385196), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelSuperiorS2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_PanelSuperiorS2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TituloS2 = lv_label_create(ui_PanelSuperiorS2);
    lv_obj_set_width(ui_TituloS2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TituloS2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TituloS2, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_TituloS2, "Etilometro");
    lv_obj_set_style_text_color(ui_TituloS2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TituloS2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TituloS2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_fechaS2 = lv_label_create(ui_PanelSuperiorS2);
    lv_obj_set_width(ui_fechaS2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_fechaS2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_fechaS2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_fechaS2, "fecha");
    lv_obj_set_style_text_color(ui_fechaS2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_fechaS2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_fechaS2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_fechaS2, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image5 = lv_img_create(ui_PanelSuperiorS2);
    lv_img_set_src(ui_Image5, &ui_img_902681826);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image5, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);

}
