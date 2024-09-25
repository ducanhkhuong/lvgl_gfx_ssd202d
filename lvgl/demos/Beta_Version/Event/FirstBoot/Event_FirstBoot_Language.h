
static void VietNam_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_PRESSED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Language_btn_TiengViet, lv_color_hex(0x008c4f), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Language_btn_English, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
        for(int i = 0 ; i < sizeof(vietnamese_texts)/sizeof((vietnamese_texts)[0]) ; i++){
            lv_label_set_text(labels[i],vietnamese_texts[i]);
        }
    }
}

static void English_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_PRESSED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Language_btn_TiengViet, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Language_btn_English, lv_color_hex(0x008c4f), LV_PART_MAIN);
        for(int i = 0 ; i < sizeof(english_texts)/sizeof((english_texts)[0]) ; i++){
            lv_label_set_text(labels[i],english_texts[i]);
        }
    }
}

static void Language_next_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_PRESSED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Language_btn_Next, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }
    else if (code == LV_EVENT_CLICKED)
    {
        lv_obj_set_tile_id_copy(guider_ui.screen_FirstBoot, 3, 0, LV_ANIM_ON);
    }
    else if (code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Language_btn_Next, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void Language_previous_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_PRESSED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Language_btn_Previous, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }
    else if (code == LV_EVENT_CLICKED)
    {
        lv_obj_set_tile_id_copy(guider_ui.screen_FirstBoot, 1, 0, LV_ANIM_ON);
    }
    else if (code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Language_btn_Previous, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

void Event_FirstBoot_Language()
{
    //set auto
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Language_btn_TiengViet, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Language_btn_English, lv_color_hex(0x008c4f), LV_PART_MAIN);
    //
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Language_btn_TiengViet, VietNam_event_handler, LV_EVENT_PRESSED, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Language_btn_English, English_event_handler, LV_EVENT_PRESSED, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Language_btn_Next, Language_next_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Language_btn_Previous, Language_previous_event_handler, LV_EVENT_ALL, NULL);
}