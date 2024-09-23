
	ui->screen_FirstBoot_Network_tileview = lv_tileview_create(ui->screen_FirstBoot_Network);
	ui->screen_FirstBoot_Network_tileview_item = lv_tileview_add_tile(ui->screen_FirstBoot_Network_tileview, 0, 0, LV_DIR_RIGHT | LV_DIR_LEFT);
	lv_obj_set_pos(ui->screen_FirstBoot_Network_tileview, 0, 228);
	lv_obj_set_size(ui->screen_FirstBoot_Network_tileview, 720, 331);
	lv_obj_set_scrollbar_mode(ui->screen_FirstBoot_Network_tileview, LV_SCROLLBAR_MODE_OFF);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_tileview, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_tileview, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_tileview, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_tileview, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview, lv_color_hex(0xeaeff3), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_tileview, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);


	ui->screen_FirstBoot_Network_tileview_item_btn_IP = lv_btn_create(ui->screen_FirstBoot_Network_tileview_item);
	ui->screen_FirstBoot_Network_tileview_item_btn_IP_label = lv_label_create(ui->screen_FirstBoot_Network_tileview_item_btn_IP);
	lv_label_set_text(ui->screen_FirstBoot_Network_tileview_item_btn_IP_label, "    IP");
	lv_label_set_long_mode(ui->screen_FirstBoot_Network_tileview_item_btn_IP_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_FirstBoot_Network_tileview_item_btn_IP_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_FirstBoot_Network_tileview_item_btn_IP, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_FirstBoot_Network_tileview_item_btn_IP_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_FirstBoot_Network_tileview_item_btn_IP, 20, 19);
	lv_obj_set_size(ui->screen_FirstBoot_Network_tileview_item_btn_IP, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_tileview_item_btn_IP, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview_item_btn_IP, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_tileview_item_btn_IP, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_tileview_item_btn_IP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview_item_btn_IP, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_tileview_item_btn_IP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Network_tileview_item_btn_IP, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Network_tileview_item_btn_IP, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Network_tileview_item_btn_IP, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Network_tileview_item_btn_IP, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);


	ui->screen_FirstBoot_Network_tileview_item_btn_GateWay = lv_btn_create(ui->screen_FirstBoot_Network_tileview_item);
	ui->screen_FirstBoot_Network_tileview_item_btn_GateWay_label = lv_label_create(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay);
	lv_label_set_text(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay_label, "    Gateway");
	lv_label_set_long_mode(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay, 20, 148);
	lv_obj_set_size(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Network_tileview_item_btn_GateWay, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_FirstBoot_Network_tileview_item_btn_Subnet = lv_btn_create(ui->screen_FirstBoot_Network_tileview_item);
	ui->screen_FirstBoot_Network_tileview_item_btn_Subnet_label = lv_label_create(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet);
	lv_label_set_text(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet_label, "    Subnet");
	lv_label_set_long_mode(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet, 20, 277);
	lv_obj_set_size(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Network_tileview_item_btn_Subnet, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);


	ui->screen_FirstBoot_Network_tileview_item_btn_DNS = lv_btn_create(ui->screen_FirstBoot_Network_tileview_item);
	ui->screen_FirstBoot_Network_tileview_item_btn_DNS_label = lv_label_create(ui->screen_FirstBoot_Network_tileview_item_btn_DNS);
	lv_label_set_text(ui->screen_FirstBoot_Network_tileview_item_btn_DNS_label, "    DNS");
	lv_label_set_long_mode(ui->screen_FirstBoot_Network_tileview_item_btn_DNS_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_FirstBoot_Network_tileview_item_btn_DNS_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_FirstBoot_Network_tileview_item_btn_DNS, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_FirstBoot_Network_tileview_item_btn_DNS_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_FirstBoot_Network_tileview_item_btn_DNS, 20, 406);
	lv_obj_set_size(ui->screen_FirstBoot_Network_tileview_item_btn_DNS, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_tileview_item_btn_DNS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview_item_btn_DNS, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_tileview_item_btn_DNS, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_tileview_item_btn_DNS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview_item_btn_DNS, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_tileview_item_btn_DNS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Network_tileview_item_btn_DNS, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Network_tileview_item_btn_DNS, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Network_tileview_item_btn_DNS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Network_tileview_item_btn_DNS, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	//setting mode keyboard
	lv_keyboard_set_mode(ui->g_kb_screen, LV_KEYBOARD_MODE_NUMBER);

	ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay = lv_textarea_create(ui->screen_FirstBoot_Network_tileview_item);
	lv_textarea_set_text(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, "");
	lv_textarea_set_placeholder_text(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, "Enter Gateway ");
	//lv_textarea_set_password_bullet(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, "*");
	//lv_textarea_set_password_mode(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, false);
	lv_textarea_set_one_line(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, true);
	lv_textarea_set_accepted_chars(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, "0123456789.");
	lv_textarea_set_max_length(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 16);
	#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
		lv_obj_add_event_cb(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, ta_event_cb, LV_EVENT_ALL, ui->g_kb_screen);
	#endif
	lv_obj_set_pos(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 325, 174);
	lv_obj_set_size(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 350, 60);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, lv_color_hex(0x1c1c1c), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview_item_textarea_GateWay, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);


    ui->screen_FirstBoot_Network_tileview_item_textarea_IP = lv_textarea_create(ui->screen_FirstBoot_Network_tileview_item);
	lv_textarea_set_text(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, "");
	lv_textarea_set_placeholder_text(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, "Enter IP ");
	//lv_textarea_set_password_bullet(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, "*");
	//lv_textarea_set_password_mode(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, true);
	lv_textarea_set_one_line(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, true);
	lv_textarea_set_accepted_chars(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, "0123456789.");
	lv_textarea_set_max_length(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 16);
	#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
		lv_obj_add_event_cb(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, ta_event_cb, LV_EVENT_ALL, ui->g_kb_screen);
	#endif
	lv_obj_set_pos(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 325, 42);
	lv_obj_set_size(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 350, 60);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, lv_color_hex(0x1c1c1c), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview_item_textarea_IP, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);


	ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet = lv_textarea_create(ui->screen_FirstBoot_Network_tileview_item);
	lv_textarea_set_text(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, "");
	lv_textarea_set_placeholder_text(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, "Enter Subnet ");
	//lv_textarea_set_password_bullet(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, "*");
	//lv_textarea_set_password_mode(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, false);
	lv_textarea_set_one_line(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, true);
	lv_textarea_set_accepted_chars(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, "0123456789.");
	lv_textarea_set_max_length(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 16);
	#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
		lv_obj_add_event_cb(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, ta_event_cb, LV_EVENT_ALL, ui->g_kb_screen);
	#endif
	lv_obj_set_pos(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 325, 303);
	lv_obj_set_size(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 350, 60);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, lv_color_hex(0x1c1c1c), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview_item_textarea_Subnet, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	
	ui->screen_FirstBoot_Network_tileview_item_textarea_DNS = lv_textarea_create(ui->screen_FirstBoot_Network_tileview_item);
	lv_textarea_set_text(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, "");
	lv_textarea_set_placeholder_text(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, "Enter DNS ");
	//lv_textarea_set_password_bullet(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, "*");
	//lv_textarea_set_password_mode(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, false);
	lv_textarea_set_one_line(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, true);
	lv_textarea_set_accepted_chars(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, "0123456789.");
	lv_textarea_set_max_length(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 16);
	#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
		lv_obj_add_event_cb(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, ta_event_cb, LV_EVENT_ALL, ui->g_kb_screen);
	#endif
	lv_obj_set_pos(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 325, 431);
	lv_obj_set_size(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 350, 60);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, lv_color_hex(0x1c1c1c), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_tileview_item_textarea_DNS, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);



	ui->screen_FirstBoot_Network_Header = lv_label_create(ui->screen_FirstBoot_Network);
	lv_label_set_text(ui->screen_FirstBoot_Network_Header, "Network");
	lv_label_set_long_mode(ui->screen_FirstBoot_Network_Header, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_FirstBoot_Network_Header, 20, 33);
	lv_obj_set_size(ui->screen_FirstBoot_Network_Header, 680, 80);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Network_Header, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Network_Header, &lumi_font_helvetica_48, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Network_Header, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_FirstBoot_Network_Header, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_FirstBoot_Network_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Network_Header, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_FirstBoot_Network_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_FirstBoot_Network_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_FirstBoot_Network_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_FirstBoot_Network_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	
	ui->screen_FirstBoot_Network_btn_Previous = lv_btn_create(ui->screen_FirstBoot_Network);
	ui->screen_FirstBoot_Network_btn_Previous_label = lv_label_create(ui->screen_FirstBoot_Network_btn_Previous);
	lv_label_set_text(ui->screen_FirstBoot_Network_btn_Previous_label, "Previous");
	lv_label_set_long_mode(ui->screen_FirstBoot_Network_btn_Previous_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_FirstBoot_Network_btn_Previous_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_FirstBoot_Network_btn_Previous, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_FirstBoot_Network_btn_Previous_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_FirstBoot_Network_btn_Previous, 20, 607);
	lv_obj_set_size(ui->screen_FirstBoot_Network_btn_Previous, 330, 92);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_btn_Previous, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_btn_Previous, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_btn_Previous, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_btn_Previous, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_btn_Previous, 92, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_btn_Previous, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Network_btn_Previous, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Network_btn_Previous, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Network_btn_Previous, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Network_btn_Previous, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_FirstBoot_Network_btn_Next = lv_btn_create(ui->screen_FirstBoot_Network);
	ui->screen_FirstBoot_Network_btn_Next_label = lv_label_create(ui->screen_FirstBoot_Network_btn_Next);
	lv_label_set_text(ui->screen_FirstBoot_Network_btn_Next_label, "Next");
	lv_label_set_long_mode(ui->screen_FirstBoot_Network_btn_Next_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_FirstBoot_Network_btn_Next_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_FirstBoot_Network_btn_Next, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_FirstBoot_Network_btn_Next_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_FirstBoot_Network_btn_Next, 370, 607);
	lv_obj_set_size(ui->screen_FirstBoot_Network_btn_Next, 330, 92);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_btn_Next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_btn_Next, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_btn_Next, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_btn_Next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_btn_Next, 92, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_btn_Next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Network_btn_Next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Network_btn_Next, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Network_btn_Next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Network_btn_Next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);


	ui->screen_FirstBoot_Network_btn_DHCP = lv_btn_create(ui->screen_FirstBoot_Network);
	ui->screen_FirstBoot_Network_btn_DHCP_label = lv_label_create(ui->screen_FirstBoot_Network_btn_DHCP);
	lv_label_set_text(ui->screen_FirstBoot_Network_btn_DHCP_label, "    DHCP");
	lv_label_set_long_mode(ui->screen_FirstBoot_Network_btn_DHCP_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_FirstBoot_Network_btn_DHCP_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_FirstBoot_Network_btn_DHCP, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_FirstBoot_Network_btn_DHCP_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_FirstBoot_Network_btn_DHCP, 20, 117);
	lv_obj_set_size(ui->screen_FirstBoot_Network_btn_DHCP, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_btn_DHCP, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_btn_DHCP, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_btn_DHCP, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_btn_DHCP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_btn_DHCP, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_btn_DHCP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Network_btn_DHCP, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Network_btn_DHCP, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Network_btn_DHCP, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Network_btn_DHCP, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_FirstBoot_Network_sw_Check = lv_switch_create(ui->screen_FirstBoot_Network);
	lv_obj_set_pos(ui->screen_FirstBoot_Network_sw_Check, 580, 151);
	lv_obj_set_size(ui->screen_FirstBoot_Network_sw_Check, 90, 40);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_sw_Check, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_sw_Check, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_sw_Check, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_sw_Check, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_sw_Check, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Network_sw_Check, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_sw_Check, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_sw_Check, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_sw_Check, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_sw_Check, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Network_sw_Check, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Network_sw_Check, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Network_sw_Check, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Network_sw_Check, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Network_sw_Check, 10, LV_PART_KNOB|LV_STATE_DEFAULT);