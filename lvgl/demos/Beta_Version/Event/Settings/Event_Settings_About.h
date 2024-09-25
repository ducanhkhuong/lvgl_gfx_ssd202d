
static void Settings_about_btn_return_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_CLICKED) {
        lv_obj_set_tile_id(guider_ui.screen_Setting, 0 , 0, LV_ANIM_OFF);
    }
}

void Event_Settings_About(){
   lv_obj_add_event_cb(guider_ui.screen_Setting_About_btn_Return, Settings_about_btn_return_event_handler, LV_EVENT_CLICKED, NULL);
}