static void Settings_language_VietNam_event_handler(lv_event_t *e){
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t *btn = lv_event_get_target(e);
  if (code == LV_EVENT_PRESSED)
  {
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Language_btn_TiengViet, lv_color_hex(0x008c4f), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Language_btn_English, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    for(int i = 0 ; i < sizeof(vietnamese_texts)/sizeof((vietnamese_texts)[0]) ; i++){
      lv_label_set_text(labels[i],vietnamese_texts[i]);
    }
  }
}

static void Settings_language_English_event_handler(lv_event_t *e){
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t *btn = lv_event_get_target(e);
  if (code == LV_EVENT_PRESSED)
  {
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Language_btn_TiengViet, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Language_btn_English, lv_color_hex(0x008c4f), LV_PART_MAIN);
    for(int i = 0 ; i < sizeof(english_texts)/sizeof((english_texts)[0]) ; i++){
      lv_label_set_text(labels[i],english_texts[i]);
    }
  }
}


static void Settings_language_btn_return_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_CLICKED) {
        lv_obj_set_tile_id(guider_ui.screen_Setting, 0 , 0, LV_ANIM_OFF);
    }
}



void Event_Settings_Language() {
  lv_obj_add_event_cb(guider_ui.screen_Setting_Language_btn_Return, Settings_language_btn_return_event_handler , LV_EVENT_CLICKED, NULL);
  lv_obj_add_event_cb(guider_ui.screen_Setting_Language_btn_TiengViet, Settings_language_VietNam_event_handler , LV_EVENT_PRESSED, NULL);
  lv_obj_add_event_cb(guider_ui.screen_Setting_Language_btn_English, Settings_language_English_event_handler   , LV_EVENT_PRESSED, NULL);    
}
