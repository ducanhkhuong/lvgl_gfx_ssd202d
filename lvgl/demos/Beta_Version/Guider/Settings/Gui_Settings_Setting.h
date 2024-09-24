//Setting
	ui->screen_Setting_Setting_Header = lv_label_create(ui->screen_Setting_Setting);
	lv_label_set_text(ui->screen_Setting_Setting_Header, "Settings");
	lv_label_set_long_mode(ui->screen_Setting_Setting_Header, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_Setting_Setting_Header, 20, 32);
	lv_obj_set_size(ui->screen_Setting_Setting_Header, 680, 80);
	lv_obj_set_style_border_width(ui->screen_Setting_Setting_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_Setting_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_Setting_Header, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_Setting_Header, &lumi_font_helvetica_48, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_Setting_Header, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_Setting_Setting_Header, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_Setting_Setting_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_Setting_Header, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_Setting_Setting_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_Setting_Setting_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_Setting_Setting_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_Setting_Setting_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_Setting_Setting_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_Setting_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview = lv_tileview_create(ui->screen_Setting_Setting);
	ui->screen_Setting_Setting_tileview_item = lv_tileview_add_tile(ui->screen_Setting_Setting_tileview, 0, 0, LV_DIR_NONE);
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview, 0, 120);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview, 720, 550);
	lv_obj_set_scrollbar_mode(ui->screen_Setting_Setting_tileview, LV_SCROLLBAR_MODE_OFF);
	lv_obj_set_style_bg_opa(ui->screen_Setting_Setting_tileview, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_Setting_tileview, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_Setting_tileview, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_Setting_tileview, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_Setting_tileview, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_Setting_Setting_tileview, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_Setting_tileview, lv_color_hex(0xeaeff3), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_Setting_tileview, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_Setting_tileview, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_btn_Network = lv_btn_create(ui->screen_Setting_Setting_tileview_item);
	ui->screen_Setting_Setting_tileview_item_btn_Network_label = lv_label_create(ui->screen_Setting_Setting_tileview_item_btn_Network);
	lv_label_set_text(ui->screen_Setting_Setting_tileview_item_btn_Network_label, "       Network");//"LV_SYMBOL_RIGHT"
	lv_label_set_long_mode(ui->screen_Setting_Setting_tileview_item_btn_Network_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_Setting_Setting_tileview_item_btn_Network_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_Setting_Setting_tileview_item_btn_Network, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_Setting_Setting_tileview_item_btn_Network_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_btn_Network, 20, 19);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_btn_Network, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_Setting_Setting_tileview_item_btn_Network, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_Setting_tileview_item_btn_Network, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_Setting_tileview_item_btn_Network, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_Setting_Setting_tileview_item_btn_Network, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_Setting_tileview_item_btn_Network, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_Setting_tileview_item_btn_Network, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_Setting_tileview_item_btn_Network, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_Setting_tileview_item_btn_Network, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_Setting_tileview_item_btn_Network, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_Setting_tileview_item_btn_Network, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_btn_DateTime = lv_btn_create(ui->screen_Setting_Setting_tileview_item);
	ui->screen_Setting_Setting_tileview_item_btn_DateTime_label = lv_label_create(ui->screen_Setting_Setting_tileview_item_btn_DateTime);
	lv_label_set_text(ui->screen_Setting_Setting_tileview_item_btn_DateTime_label, "       Date&Time");//"LV_SYMBOL_RIGHT"
	lv_label_set_long_mode(ui->screen_Setting_Setting_tileview_item_btn_DateTime_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_Setting_Setting_tileview_item_btn_DateTime_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_Setting_Setting_tileview_item_btn_DateTime, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_Setting_Setting_tileview_item_btn_DateTime_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_btn_DateTime, 20, 148);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_btn_DateTime, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_Setting_Setting_tileview_item_btn_DateTime, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_Setting_tileview_item_btn_DateTime, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_Setting_tileview_item_btn_DateTime, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_Setting_Setting_tileview_item_btn_DateTime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_Setting_tileview_item_btn_DateTime, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_Setting_tileview_item_btn_DateTime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_Setting_tileview_item_btn_DateTime, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_Setting_tileview_item_btn_DateTime, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_Setting_tileview_item_btn_DateTime, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_Setting_tileview_item_btn_DateTime, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_btn_Language = lv_btn_create(ui->screen_Setting_Setting_tileview_item);
	ui->screen_Setting_Setting_tileview_item_btn_Language_label = lv_label_create(ui->screen_Setting_Setting_tileview_item_btn_Language);
	lv_label_set_text(ui->screen_Setting_Setting_tileview_item_btn_Language_label, "       Language");//"LV_SYMBOL_RIGHT"
	lv_label_set_long_mode(ui->screen_Setting_Setting_tileview_item_btn_Language_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_Setting_Setting_tileview_item_btn_Language_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_Setting_Setting_tileview_item_btn_Language, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_Setting_Setting_tileview_item_btn_Language_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_btn_Language, 20, 277);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_btn_Language, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_Setting_Setting_tileview_item_btn_Language, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_Setting_tileview_item_btn_Language, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_Setting_tileview_item_btn_Language, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_Setting_Setting_tileview_item_btn_Language, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_Setting_tileview_item_btn_Language, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_Setting_tileview_item_btn_Language, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_Setting_tileview_item_btn_Language, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_Setting_tileview_item_btn_Language, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_Setting_tileview_item_btn_Language, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_Setting_tileview_item_btn_Language, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_btn_Brightnes = lv_btn_create(ui->screen_Setting_Setting_tileview_item);
	ui->screen_Setting_Setting_tileview_item_btn_Brightnes_label = lv_label_create(ui->screen_Setting_Setting_tileview_item_btn_Brightnes);
	lv_label_set_text(ui->screen_Setting_Setting_tileview_item_btn_Brightnes_label, "       Brightness");//"LV_SYMBOL_RIGHT"
	lv_label_set_long_mode(ui->screen_Setting_Setting_tileview_item_btn_Brightnes_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_Setting_Setting_tileview_item_btn_Brightnes_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_Setting_Setting_tileview_item_btn_Brightnes, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_Setting_Setting_tileview_item_btn_Brightnes_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_btn_Brightnes, 20, 406);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_btn_Brightnes, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_Setting_Setting_tileview_item_btn_Brightnes, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_Setting_tileview_item_btn_Brightnes, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_Setting_tileview_item_btn_Brightnes, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_Setting_Setting_tileview_item_btn_Brightnes, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_Setting_tileview_item_btn_Brightnes, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_Setting_tileview_item_btn_Brightnes, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_Setting_tileview_item_btn_Brightnes, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_Setting_tileview_item_btn_Brightnes, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_Setting_tileview_item_btn_Brightnes, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_Setting_tileview_item_btn_Brightnes, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_btn_Sleep = lv_btn_create(ui->screen_Setting_Setting_tileview_item);
	ui->screen_Setting_Setting_tileview_item_btn_Sleep_label = lv_label_create(ui->screen_Setting_Setting_tileview_item_btn_Sleep);
	lv_label_set_text(ui->screen_Setting_Setting_tileview_item_btn_Sleep_label, "       Sleep");//"LV_SYMBOL_RIGHT"
	lv_label_set_long_mode(ui->screen_Setting_Setting_tileview_item_btn_Sleep_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_Setting_Setting_tileview_item_btn_Sleep_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_Setting_Setting_tileview_item_btn_Sleep, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_Setting_Setting_tileview_item_btn_Sleep_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_btn_Sleep, 20, 535);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_btn_Sleep, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_Setting_Setting_tileview_item_btn_Sleep, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_Setting_tileview_item_btn_Sleep, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_Setting_tileview_item_btn_Sleep, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_Setting_Setting_tileview_item_btn_Sleep, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_Setting_tileview_item_btn_Sleep, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_Setting_tileview_item_btn_Sleep, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_Setting_tileview_item_btn_Sleep, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_Setting_tileview_item_btn_Sleep, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_Setting_tileview_item_btn_Sleep, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_Setting_tileview_item_btn_Sleep, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_btn_HomeController = lv_btn_create(ui->screen_Setting_Setting_tileview_item);
	ui->screen_Setting_Setting_tileview_item_btn_HomeController_label = lv_label_create(ui->screen_Setting_Setting_tileview_item_btn_HomeController);
	lv_label_set_text(ui->screen_Setting_Setting_tileview_item_btn_HomeController_label, "       Home Controller");//"LV_SYMBOL_RIGHT"
	lv_label_set_long_mode(ui->screen_Setting_Setting_tileview_item_btn_HomeController_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_Setting_Setting_tileview_item_btn_HomeController_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_Setting_Setting_tileview_item_btn_HomeController, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_Setting_Setting_tileview_item_btn_HomeController_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_btn_HomeController, 20, 664);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_btn_HomeController, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_Setting_Setting_tileview_item_btn_HomeController, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_Setting_tileview_item_btn_HomeController, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_Setting_tileview_item_btn_HomeController, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_Setting_Setting_tileview_item_btn_HomeController, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_Setting_tileview_item_btn_HomeController, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_Setting_tileview_item_btn_HomeController, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_Setting_tileview_item_btn_HomeController, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_Setting_tileview_item_btn_HomeController, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_Setting_tileview_item_btn_HomeController, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_Setting_tileview_item_btn_HomeController, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_btn_About = lv_btn_create(ui->screen_Setting_Setting_tileview_item);
	ui->screen_Setting_Setting_tileview_item_btn_About_label = lv_label_create(ui->screen_Setting_Setting_tileview_item_btn_About);
	lv_label_set_text(ui->screen_Setting_Setting_tileview_item_btn_About_label, "       About");//"LV_SYMBOL_RIGHT"
	lv_label_set_long_mode(ui->screen_Setting_Setting_tileview_item_btn_About_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_Setting_Setting_tileview_item_btn_About_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_Setting_Setting_tileview_item_btn_About, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_Setting_Setting_tileview_item_btn_About_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_btn_About, 20, 793);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_btn_About, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_Setting_Setting_tileview_item_btn_About, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_Setting_tileview_item_btn_About, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_Setting_tileview_item_btn_About, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_Setting_Setting_tileview_item_btn_About, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_Setting_tileview_item_btn_About, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_Setting_tileview_item_btn_About, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_Setting_tileview_item_btn_About, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_Setting_tileview_item_btn_About, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_Setting_tileview_item_btn_About, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_Setting_tileview_item_btn_About, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview = lv_img_create(ui->screen_Setting_Setting);
	lv_obj_add_flag(ui->screen_Setting_Setting_tileview, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_Setting_Setting_tileview, &_Frame11439);
	lv_img_set_pivot(ui->screen_Setting_Setting_tileview, 50,50);
	lv_img_set_angle(ui->screen_Setting_Setting_tileview, 0);
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview, 554, 41);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview, 116, 48);
	lv_obj_set_style_img_opa(ui->screen_Setting_Setting_tileview, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_img_Network = lv_img_create(ui->screen_Setting_Setting_tileview_item);
	lv_obj_add_flag(ui->screen_Setting_Setting_tileview_item_img_Network, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_Setting_Setting_tileview_item_img_Network, &_lan);
	lv_img_set_pivot(ui->screen_Setting_Setting_tileview_item_img_Network, 50,50);
	lv_img_set_angle(ui->screen_Setting_Setting_tileview_item_img_Network, 0);
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_img_Network, 30, 40);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_img_Network, 52, 52);
	lv_obj_set_style_img_opa(ui->screen_Setting_Setting_tileview_item_img_Network, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_img_DateTime = lv_img_create(ui->screen_Setting_Setting_tileview_item);
	lv_obj_add_flag(ui->screen_Setting_Setting_tileview_item_img_DateTime, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_Setting_Setting_tileview_item_img_DateTime, &_datetime);
	lv_img_set_pivot(ui->screen_Setting_Setting_tileview_item_img_DateTime, 50,50);
	lv_img_set_angle(ui->screen_Setting_Setting_tileview_item_img_DateTime, 0);
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_img_DateTime, 30, 170);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_img_DateTime, 52, 52);
	lv_obj_set_style_img_opa(ui->screen_Setting_Setting_tileview_item_img_DateTime, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_img_Language = lv_img_create(ui->screen_Setting_Setting_tileview_item);
	lv_obj_add_flag(ui->screen_Setting_Setting_tileview_item_img_Language, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_Setting_Setting_tileview_item_img_Language, &_language);
	lv_img_set_pivot(ui->screen_Setting_Setting_tileview_item_img_Language, 50,50);
	lv_img_set_angle(ui->screen_Setting_Setting_tileview_item_img_Language, 0);
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_img_Language, 30, 300);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_img_Language, 52, 52);
	lv_obj_set_style_img_opa(ui->screen_Setting_Setting_tileview_item_img_Language, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_img_Brightness = lv_img_create(ui->screen_Setting_Setting_tileview_item);
	lv_obj_add_flag(ui->screen_Setting_Setting_tileview_item_img_Brightness, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_Setting_Setting_tileview_item_img_Brightness, &_brightness_high);
	lv_img_set_pivot(ui->screen_Setting_Setting_tileview_item_img_Brightness, 50,50);
	lv_img_set_angle(ui->screen_Setting_Setting_tileview_item_img_Brightness, 0);
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_img_Brightness, 30, 430);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_img_Brightness, 52, 52);
	lv_obj_set_style_img_opa(ui->screen_Setting_Setting_tileview_item_img_Brightness, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_img_Sleep = lv_img_create(ui->screen_Setting_Setting_tileview_item);
	lv_obj_add_flag(ui->screen_Setting_Setting_tileview_item_img_Sleep, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_Setting_Setting_tileview_item_img_Sleep, &_nightlight);
	lv_img_set_pivot(ui->screen_Setting_Setting_tileview_item_img_Sleep, 50,50);
	lv_img_set_angle(ui->screen_Setting_Setting_tileview_item_img_Sleep, 0);
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_img_Sleep, 30, 560);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_img_Sleep, 52, 52);
	lv_obj_set_style_img_opa(ui->screen_Setting_Setting_tileview_item_img_Sleep, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_img_HomeController = lv_img_create(ui->screen_Setting_Setting_tileview_item);
	lv_obj_add_flag(ui->screen_Setting_Setting_tileview_item_img_HomeController, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_Setting_Setting_tileview_item_img_HomeController, &_home_controller);
	lv_img_set_pivot(ui->screen_Setting_Setting_tileview_item_img_HomeController, 50,50);
	lv_img_set_angle(ui->screen_Setting_Setting_tileview_item_img_HomeController, 0);
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_img_HomeController, 30, 690);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_img_HomeController, 52, 52);
	lv_obj_set_style_img_opa(ui->screen_Setting_Setting_tileview_item_img_HomeController, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_Setting_tileview_item_img_About = lv_img_create(ui->screen_Setting_Setting_tileview_item);
	lv_obj_add_flag(ui->screen_Setting_Setting_tileview_item_img_About, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_Setting_Setting_tileview_item_img_About, &_info);
	lv_img_set_pivot(ui->screen_Setting_Setting_tileview_item_img_About, 50,50);
	lv_img_set_angle(ui->screen_Setting_Setting_tileview_item_img_About, 0);
	lv_obj_set_pos(ui->screen_Setting_Setting_tileview_item_img_About, 30, 820);
	lv_obj_set_size(ui->screen_Setting_Setting_tileview_item_img_About, 52, 52);
	lv_obj_set_style_img_opa(ui->screen_Setting_Setting_tileview_item_img_About, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
