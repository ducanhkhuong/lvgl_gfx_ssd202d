
static void Settings_datetime_btn_return_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_CLICKED){
        lv_obj_set_tile_id(guider_ui.screen_Setting, 0 , 0, LV_ANIM_OFF);
    }
}


static void Settings_datetime_btn_timezone_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_PRESSED){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_datetime_btn_TimeZone, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }else if(code == LV_EVENT_CLICKED){
        lv_obj_set_tile_id(guider_ui.screen_Setting_DateTime_tileview_item, 0, 1, LV_ANIM_OFF); 
    }else if(code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST){
        lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_datetime_btn_TimeZone, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }

}


static void Settings_timezone_btn_datetime_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_CLICKED){
        lv_obj_set_tile_id(guider_ui.screen_Setting_DateTime_tileview_item, 0 , 0, LV_ANIM_OFF);
    }
}


static void Settings_timezone_Bangkok_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t *btn = lv_event_get_target(e);
  if (code == LV_EVENT_CLICKED)
  {
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Bangkok, lv_color_hex(0x008c4f), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Jakata, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_HCM, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Hongkong, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
   }
}

static void Settings_timezone_Jarkata_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t *btn = lv_event_get_target(e);
  if (code == LV_EVENT_CLICKED)
  {
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Bangkok, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Jakata, lv_color_hex(0x008c4f), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_HCM, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Hongkong, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void Settings_timezone_HCM_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t *btn = lv_event_get_target(e);
  if (code == LV_EVENT_CLICKED)
  {
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Bangkok, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Jakata, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_HCM, lv_color_hex(0x008c4f), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Hongkong, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void Settings_timezone_HongKong_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t *btn = lv_event_get_target(e);
  if (code == LV_EVENT_CLICKED)
  {
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Bangkok, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Jakata, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_HCM, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Hongkong, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }
}

void Event_Settings_DateTime(){
  //set auto
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Bangkok, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Jakata, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_HCM, lv_color_hex(0x008c4f), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Hongkong, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
  //    
  lv_obj_add_event_cb(guider_ui.screen_Setting_DateTime_tileview_item_datetime_btn_TimeZone, Settings_datetime_btn_timezone_event_handler          , LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(guider_ui.screen_Setting_DateTime_tileview_item_datetime_btn_Return, Settings_datetime_btn_return_event_handler              , LV_EVENT_CLICKED, NULL);
  lv_obj_add_event_cb(guider_ui.screen_Setting_DateTime_tileview_item_timezone_btn_Return, Settings_timezone_btn_datetime_event_handler            , LV_EVENT_CLICKED, NULL);
  lv_obj_add_event_cb(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Bangkok, Settings_timezone_Bangkok_event_handler  , LV_EVENT_CLICKED, NULL);
  lv_obj_add_event_cb(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Jakata, Settings_timezone_Jarkata_event_handler   , LV_EVENT_CLICKED, NULL);
  lv_obj_add_event_cb(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_HCM, Settings_timezone_HCM_event_handler          , LV_EVENT_CLICKED, NULL);
  lv_obj_add_event_cb(guider_ui.screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Hongkong, Settings_timezone_HongKong_event_handler, LV_EVENT_CLICKED, NULL);  
}
  