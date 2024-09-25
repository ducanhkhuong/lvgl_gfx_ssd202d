uint32_t value_slider ;
char buffer[6] ;

static void Settings_brightness_slider_event_handler(lv_event_t * e){
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * slider = lv_event_get_target(e);
    if(code == LV_EVENT_VALUE_CHANGED){
      value_slider = lv_slider_get_value(slider);
      sprintf(buffer,"%d",value_slider);
      lv_label_set_text(guider_ui.screen_Setting_Brightness_label_ValueBrightness,buffer);
    }
}
static void Settings_brightness_btn_return_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_CLICKED){
        lv_obj_set_tile_id(guider_ui.screen_Setting, 0 , 0, LV_ANIM_OFF);
    }
}

void Event_Settings_Brightness(){
   lv_obj_add_event_cb(guider_ui.screen_Setting_Brightness_slide_ValueBrightness, Settings_brightness_slider_event_handler, LV_EVENT_ALL , NULL); 
   lv_obj_add_event_cb(guider_ui.screen_Setting_Brightness_btn_Return           , Settings_brightness_btn_return_event_handler, LV_EVENT_CLICKED, NULL);
}