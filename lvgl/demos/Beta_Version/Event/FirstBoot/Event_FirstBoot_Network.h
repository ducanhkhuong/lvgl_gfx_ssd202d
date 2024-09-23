
//switch
void Network_switch_event_handler(lv_event_t * e) {
    lv_obj_t * obj = lv_event_get_target(e);
    bool state = lv_obj_has_state(obj, LV_STATE_CHECKED);
    if(state) {
        lv_obj_add_flag(guider_ui.screen_FirstBoot_Network_tileview, LV_OBJ_FLAG_HIDDEN); 
    } else {
        lv_obj_clear_flag(guider_ui.screen_FirstBoot_Network_tileview, LV_OBJ_FLAG_HIDDEN);
    }
}

//next
static void Network_next_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_PRESSED){
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Network_btn_Next, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }else if(code == LV_EVENT_CLICKED){
        lv_obj_set_tile_id(guider_ui.screen_FirstBoot, 7, 0, LV_ANIM_OFF); 
    }else if(code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST){
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Network_btn_Next, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

//previous
static void Network_previous_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_PRESSED){
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Network_btn_Previous, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }else if(code == LV_EVENT_CLICKED){
        lv_obj_set_tile_id(guider_ui.screen_FirstBoot, 4, 0, LV_ANIM_OFF); 
    }else if(code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST){
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Network_btn_Previous, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

void Event_FirstBoot_Network(){
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Network_sw_Check    , Network_switch_event_handler     , LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Network_btn_Next    , Network_next_event_handler      , LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Network_btn_Previous, Network_previous_event_handler  , LV_EVENT_ALL, NULL);
}