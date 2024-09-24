
static void datetime_next_timezone_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_PRESSED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Timezone, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }
    else if (code == LV_EVENT_CLICKED)
    {
        lv_obj_set_tile_id(guider_ui.screen_FirstBoot_DateTime_tileview_gui, 0, 1, LV_ANIM_OFF);
    }
    else if (code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Timezone, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void timezone_next_datetime_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_PRESSED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_SaveTimeZone, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }
    else if (code == LV_EVENT_CLICKED)
    {
        lv_obj_set_tile_id(guider_ui.screen_FirstBoot_DateTime_tileview_gui, 0, 0, LV_ANIM_OFF);
    }
    else if (code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_SaveTimeZone, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void datetime_next_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_PRESSED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Next, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }
    else if (code == LV_EVENT_CLICKED)
    {
        lv_obj_set_tile_id(guider_ui.screen_FirstBoot, 6, 0, LV_ANIM_OFF);
    }
    else if (code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Next, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void datetime_previous_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_PRESSED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Previous, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }
    else if (code == LV_EVENT_CLICKED)
    {
        lv_obj_set_tile_id(guider_ui.screen_FirstBoot, 3, 0, LV_ANIM_ON);
    }
    else if (code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Previous, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void timezone_Bangkok_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_BangCok, lv_color_hex(0x008c4f), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_Jarkata, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HCM, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HongKong, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void timezone_Jarkata_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_BangCok, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_Jarkata, lv_color_hex(0x008c4f), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HCM, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HongKong, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void timezone_HCM_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_BangCok, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_Jarkata, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HCM, lv_color_hex(0x008c4f), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HongKong, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void timezone_HongKong_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_BangCok, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_Jarkata, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HCM, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HongKong, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }
}

void Event_FirstBoot_Datetime()
{
    // date&time
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Previous    , datetime_previous_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Next        , datetime_next_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Timezone    , datetime_next_timezone_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_SaveTimeZone, timezone_next_datetime_event_handler, LV_EVENT_ALL, NULL);
    // timezone
    lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HCM, lv_color_hex(0x008c4f), LV_PART_MAIN);
    
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_BangCok, timezone_Bangkok_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_Jarkata, timezone_Jarkata_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HCM, timezone_HCM_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HongKong, timezone_HongKong_event_handler, LV_EVENT_ALL, NULL);
}