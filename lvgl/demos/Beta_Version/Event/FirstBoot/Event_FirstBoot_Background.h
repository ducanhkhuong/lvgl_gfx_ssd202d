
static void image2_event_handle(lv_event_t *e)
{
    lv_obj_set_style_border_color(guider_ui.screen_FirstBoot_Background_img_1, lv_color_hex(0x008C4F), 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_1, 3, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_2, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_3, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_4, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_5, 0, 0);
}

static void image3_event_handle(lv_event_t *e)
{
    lv_obj_set_style_border_color(guider_ui.screen_FirstBoot_Background_img_2, lv_color_hex(0x008C4F), 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_2, 3, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_3, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_4, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_5, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_1, 0, 0);
}

static void image4_event_handle(lv_event_t *e)
{
    lv_obj_set_style_border_color(guider_ui.screen_FirstBoot_Background_img_3, lv_color_hex(0x008C4F), 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_3, 3, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_1, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_2, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_5, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_4, 0, 0);
}

static void image5_event_handle(lv_event_t *e)
{
    lv_obj_set_style_border_color(guider_ui.screen_FirstBoot_Background_img_4, lv_color_hex(0x008C4F), 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_4, 3, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_1, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_2, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_3, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_5, 0, 0);
}

static void image6_event_handle(lv_event_t *e)
{
    lv_obj_set_style_border_color(guider_ui.screen_FirstBoot_Background_img_5, lv_color_hex(0x008C4F), 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_5, 3, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_1, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_2, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_3, 0, 0);
    lv_obj_set_style_border_width(guider_ui.screen_FirstBoot_Background_img_4, 0, 0);
}
static void Background_next_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_PRESSED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Background_btn_Next, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }
    else if (code == LV_EVENT_CLICKED)
    {
        lv_obj_set_tile_id(guider_ui.screen_FirstBoot, 4, 0, LV_ANIM_ON);
    }
    else if (code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Background_btn_Next, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

static void Background_previous_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_PRESSED)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Background_btn_Previous, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }
    else if (code == LV_EVENT_CLICKED)
    {
        lv_obj_set_tile_id(guider_ui.screen_FirstBoot, 2, 0, LV_ANIM_ON);
    }
    else if (code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Background_btn_Previous, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}

void Event_FirstBoot_Background()
{
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Background_img_1, image2_event_handle, LV_EVENT_CLICKED, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Background_img_2, image3_event_handle, LV_EVENT_CLICKED, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Background_img_3, image4_event_handle, LV_EVENT_CLICKED, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Background_img_4, image5_event_handle, LV_EVENT_CLICKED, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Background_img_5, image6_event_handle, LV_EVENT_CLICKED, NULL);

    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Background_btn_Next, Background_next_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Background_btn_Previous, Background_previous_event_handler, LV_EVENT_ALL, NULL);
}