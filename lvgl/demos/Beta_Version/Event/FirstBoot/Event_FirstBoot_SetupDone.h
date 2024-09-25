
static void Setupdone_next_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_PRESSED){
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Setupdone_btn_Gotodashboard, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }else if (code == LV_EVENT_CLICKED){
        lv_obj_add_flag(   guider_ui.screen_FirstBoot, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag( guider_ui.screen_Setting  , LV_OBJ_FLAG_HIDDEN);
        lv_obj_set_tile_id(guider_ui.screen_Setting   , 0, 0, LV_ANIM_ON);
    }else if (code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Setupdone_btn_Gotodashboard, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

void Event_FirstBoot_SetupDone(){
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Setupdone_btn_Gotodashboard, Setupdone_next_event_handler, LV_EVENT_ALL, NULL);
}

