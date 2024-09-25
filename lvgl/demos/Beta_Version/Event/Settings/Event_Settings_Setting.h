static void btn_network_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_PRESSED){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_Setting_tileview_item_btn_Network, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }else if(code == LV_EVENT_CLICKED){
        lv_obj_set_tile_id(guider_ui.screen_Setting, 2, 0, LV_ANIM_OFF); 
    }else if(code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_Setting_tileview_item_btn_Network, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void btn_datetime_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_PRESSED){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_Setting_tileview_item_btn_DateTime, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }else if(code == LV_EVENT_CLICKED){
        lv_obj_set_tile_id(guider_ui.screen_Setting, 3, 0, LV_ANIM_OFF); 
    }else if(code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_Setting_tileview_item_btn_DateTime, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void btn_language_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_PRESSED){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_Setting_tileview_item_btn_Language, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }else if(code == LV_EVENT_CLICKED){
        lv_obj_set_tile_id(guider_ui.screen_Setting, 4, 0, LV_ANIM_OFF); 
    }else if(code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_Setting_tileview_item_btn_Language, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void btn_sleep_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_PRESSED){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_Setting_tileview_item_btn_Sleep, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }else if(code == LV_EVENT_CLICKED){
        lv_obj_set_tile_id(guider_ui.screen_Setting, 6, 0, LV_ANIM_OFF); 
    }else if(code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_Setting_tileview_item_btn_Sleep, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void btn_brightness_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_PRESSED){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_Setting_tileview_item_btn_Brightnes, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }else if(code == LV_EVENT_CLICKED){
        lv_obj_set_tile_id(guider_ui.screen_Setting, 5, 0, LV_ANIM_OFF); 
    }else if(code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_Setting_tileview_item_btn_Brightnes, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void btn_about_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_PRESSED){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_Setting_tileview_item_btn_About, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }else if(code == LV_EVENT_CLICKED){
        lv_obj_set_tile_id(guider_ui.screen_Setting, 11, 0, LV_ANIM_OFF); 
    }else if(code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_Setting_tileview_item_btn_About, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

void Event_Settings_Setting(){
    lv_obj_add_event_cb(guider_ui.screen_Setting_Setting_tileview_item_btn_Network  , btn_network_event_handler,    LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_Setting_Setting_tileview_item_btn_DateTime , btn_datetime_event_handler,   LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_Setting_Setting_tileview_item_btn_Language , btn_language_event_handler,   LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_Setting_Setting_tileview_item_btn_Sleep    , btn_sleep_event_handler,      LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_Setting_Setting_tileview_item_btn_Brightnes, btn_brightness_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_Setting_Setting_tileview_item_btn_About    , btn_about_event_handler,      LV_EVENT_ALL, NULL);
}