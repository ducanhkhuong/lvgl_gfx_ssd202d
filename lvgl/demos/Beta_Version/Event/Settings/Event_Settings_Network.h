

void Settings_switch_event_handler(lv_event_t * e) {
    lv_obj_t * obj = lv_event_get_target(e);
    bool Settings_state = lv_obj_has_state(obj, LV_STATE_CHECKED);

    if(Settings_state) {
        lv_obj_add_flag(guider_ui.screen_Setting_Network_tileview, LV_OBJ_FLAG_HIDDEN); // Ẩn tiêu đề nếu công tắc bật
    } else {
        lv_obj_clear_flag(guider_ui.screen_Setting_Network_tileview, LV_OBJ_FLAG_HIDDEN); // Hiển thị tiêu đề nếu công tắc tắt
    }
}

static void Settings_btn_return_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_CLICKED) {
        lv_obj_set_tile_id(guider_ui.screen_Setting, 0 , 0, LV_ANIM_OFF); 
    }
}


void Event_Settings_Network(){
    lv_obj_add_event_cb(guider_ui.screen_Setting_Network_tileview_item_sw_Check  , Settings_switch_event_handler     , LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_add_event_cb(guider_ui.screen_Setting_Network_tileview_item_btn_Return, Settings_btn_return_event_handler , LV_EVENT_CLICKED, NULL);
}