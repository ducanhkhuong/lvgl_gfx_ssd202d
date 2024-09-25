
static void Settings_sleep_2minutes_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t *btn = lv_event_get_target(e);
  if (code == LV_EVENT_CLICKED)
  {
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_2minutes, lv_color_hex(0x008c4f), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_3minutes, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_5minutes, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_15minutes, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
  }
}

static void Settings_sleep_3minutes_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t *btn = lv_event_get_target(e);
  if (code == LV_EVENT_CLICKED)
  {
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_2minutes, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_3minutes, lv_color_hex(0x008c4f), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_5minutes, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_15minutes, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
  }
}

static void Settings_sleep_5minutes_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t *btn = lv_event_get_target(e);
  if (code == LV_EVENT_CLICKED)
  {
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_2minutes, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_3minutes, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_5minutes, lv_color_hex(0x008c4f), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_15minutes, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
  }
}

static void Settings_sleep_15minutes_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t *btn = lv_event_get_target(e);
  if (code == LV_EVENT_CLICKED)
  {
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_2minutes, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_3minutes, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_5minutes, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_Setting_Sleep_btn_15minutes, lv_color_hex(0x008c4f), LV_PART_MAIN);
  }
}

static void Settings_sleep_btn_return_event_handler(lv_event_t * e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * btn = lv_event_get_target(e);
    if(code == LV_EVENT_CLICKED) {
        lv_obj_set_tile_id(guider_ui.screen_Setting, 0 , 0, LV_ANIM_OFF);
    }
}

void Event_Settings_Sleep(){
  lv_obj_add_event_cb(guider_ui.screen_Setting_Sleep_btn_Return,    Settings_sleep_btn_return_event_handler, LV_EVENT_ALL, NULL);  
  lv_obj_add_event_cb(guider_ui.screen_Setting_Sleep_btn_2minutes,  Settings_sleep_2minutes_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(guider_ui.screen_Setting_Sleep_btn_3minutes,  Settings_sleep_3minutes_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(guider_ui.screen_Setting_Sleep_btn_5minutes,  Settings_sleep_5minutes_event_handler, LV_EVENT_ALL, NULL);
  lv_obj_add_event_cb(guider_ui.screen_Setting_Sleep_btn_15minutes, Settings_sleep_15minutes_event_handler, LV_EVENT_ALL, NULL);
}