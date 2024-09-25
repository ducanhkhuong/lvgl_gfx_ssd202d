void Event_FirstBoot_Logo(){   
    lv_obj_add_flag(   guider_ui.screen_Setting, LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag( guider_ui.screen_FirstBoot  , LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_tile_id(guider_ui.screen_FirstBoot   , 0, 0, LV_ANIM_ON);
}