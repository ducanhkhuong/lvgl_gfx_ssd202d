char * english_texts[] = {
    //Language
    "Language",
    "Next",
    "Previous",
    //Background
    "Background",
    "Next",
    "Previous",
    //Date&Time
    "Date & Time",
    "Next",
    "Previous",
    "    24-hours time",
    "    Timezone",
    //TimeZone
    "Timezone",
    "Save",
    //NotNetwork
    "Network",
    "Next",
    "Previous",
    "Not connected.\nPlug in your\nethernet cable.  ",
    //Network
    "Network",
    "Next",
    "Previous",
    //ScanHC
    "Add to HC",
    "Next",
    "Previous",
    "Add manual",
    "Finding HC",
    //PrintHC
    "Add to HC",
    "Next",
    "Previous",
    "Add manual",
    "Refresh",
    //NoHC
    "Add to HC",
    "Next",
    "Previous",
    "Add manual",
    "No HC found     ",
    //InputHC
    "Enter HC IP Address",
    "Done",    
    //Setup Done
    "Setup Done",
    "Switch panel\nsetup complete.",
    "Go to dashboard",
};

char *vietnamese_texts[] = {
    //Language
    "Ngôn ngữ",
    "Tiếp",
    "Trước",
    //Background
    "Hình nền",
    "Tiếp",
    "Trước",
    //Date&Time
    "Ngày & Giờ",
    "Tiếp",
    "Trước",
    "    Thời gian 24 giờ",
    "    Múi Giờ",
    //TimeZone
    "Múi Giờ",
    "Lưu",
    //NotNetwork
    "Mạng",
    "Tiếp",
    "Trước",
    "Chưa kết nối.\nHãy cắm cáp\nethernet của bạn.  ",
    //Network
    "Mạng",
    "Tiếp",
    "Trước",
    //ScanHC
    "Thêm HC",
    "Tiếp",
    "Trước",
    "Thêm hướng dẫn",
    "Tìm HC",
    //PrintHC
    "Thêm HC",
    "Tiếp",
    "Trước",
    "Thêm hướng dẫn",
    "Tải lại",
    //NoHC
    "Thêm HC",
    "Tiếp",
    "Trước",
    "Thêm hướng dẫn",
    "Không tìm thấy HC     ",
    //InputHC
    "Nhập địa chỉ IP HC",
    "Xong",    
    //Setup Done
    "Thiết lập xong",
    "Quá trình thiết lập đã hoàn tất.",
    "Đến bảng điều khiển",
};

static lv_obj_t *labels[40];

void config_label(){
    //Language
    labels[0] = guider_ui.screen_FirstBoot_Language_Header;
    labels[1] = guider_ui.screen_FirstBoot_Language_btn_Next_label;
    labels[2] = guider_ui.screen_FirstBoot_Language_btn_Previous_label;
    //Background
    labels[3] = guider_ui.screen_FirstBoot_Background_Header;
    labels[4] = guider_ui.screen_FirstBoot_Background_btn_Next_label;
    labels[5] = guider_ui.screen_FirstBoot_Background_btn_Previous_label;
    //Date&Time
    labels[6] = guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_Header;
    labels[7] = guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Next_label;
    labels[8] = guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Previous_label;
    labels[9] = guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_24hourse_label;
    labels[10] =guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Timezone_label;
    //TimeZone
    labels[11] =guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_Header;
    labels[12] =guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_SaveTimeZone_label;
    //NotNetwork
    labels[13] =guider_ui.screen_FirstBoot_NotNetwork_Header;
    labels[14] =guider_ui.screen_FirstBoot_NotNetwork_btn_Next_label;
    labels[15] =guider_ui.screen_FirstBoot_NotNetwork_btn_Previous_label;
    labels[16] =guider_ui.screen_FirstBoot_NotNetwork_label_Content;
    //Network
    labels[17] =guider_ui.screen_FirstBoot_Network_Header;
    labels[18] =guider_ui.screen_FirstBoot_Network_btn_Next_label;
    labels[19] =guider_ui.screen_FirstBoot_Network_btn_Previous_label;
    //ScanHC
    labels[20] =guider_ui.screen_FirstBoot_HomeController_scanHC_Header;
    labels[21] =guider_ui.screen_FirstBoot_HomeController_scanHC_btn_Next_label;
    labels[22] =guider_ui.screen_FirstBoot_HomeController_scanHC_btn_Previous_label;
    labels[23] =guider_ui.screen_FirstBoot_HomeController_scanHC_btn_Addmanual_label;
    labels[24] =guider_ui.screen_FirstBoot_HomeController_scanHC_label_FindingHC;
    //PrintHC
    labels[25] =guider_ui.screen_FirstBoot_HomeController_printHC_Header;
    labels[26] =guider_ui.screen_FirstBoot_HomeController_printHC_btn_Next_label;
    labels[27] =guider_ui.screen_FirstBoot_HomeController_printHC_btn_Previous_label;
    labels[28] =guider_ui.screen_FirstBoot_HomeController_printHC_label_Addmanual;
    labels[29] =guider_ui.screen_FirstBoot_HomeController_printHC_label_Refresh;
    //NoHC
    labels[30] =guider_ui.screen_FirstBoot_HomeController_noHC_Header;
    labels[31] =guider_ui.screen_FirstBoot_HomeController_noHC_btn_Next_label;
    labels[32] =guider_ui.screen_FirstBoot_HomeController_noHC_btn_Previous_label;
    labels[33] =guider_ui.screen_FirstBoot_HomeController_noHC_btn_Addmanual_label;
    labels[34] =guider_ui.screen_FirstBoot_HomeController_noHC_label_NoHCfound;
    //InputHC
    labels[35] =guider_ui.screen_FirstBoot_HomeController_inputHC_Header;
    labels[36] =guider_ui.screen_FirstBoot_HomeController_inputHC_btn_Done_label;
    //SetupDone
    labels[37] =guider_ui.screen_FirstBoot_Setupdone_Header;
    labels[38] =guider_ui.screen_FirstBoot_Setupdone_label_Content;
    labels[39] =guider_ui.screen_FirstBoot_Setupdone_btn_Gotodashboard_label;
}



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
            printf("%s \n",vietnamese_texts[i]);
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
            printf("%s \n",english_texts[i]);
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
    config_label();
    lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Language_btn_TiengViet, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Language_btn_English, lv_color_hex(0x008c4f), LV_PART_MAIN);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Language_btn_TiengViet, VietNam_event_handler, LV_EVENT_PRESSED, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Language_btn_English, English_event_handler, LV_EVENT_PRESSED, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Language_btn_Next, Language_next_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Language_btn_Previous, Language_previous_event_handler, LV_EVENT_ALL, NULL);
}