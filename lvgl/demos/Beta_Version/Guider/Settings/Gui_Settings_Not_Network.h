	ui->screen_Setting_NotNetwork_Header = lv_label_create(ui->screen_Setting_NotNetwork);
	lv_label_set_text(ui->screen_Setting_NotNetwork_Header, "Network");
	lv_label_set_long_mode(ui->screen_Setting_NotNetwork_Header, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_Setting_NotNetwork_Header, 20, 33);
	lv_obj_set_size(ui->screen_Setting_NotNetwork_Header, 680, 80);
	lv_obj_set_style_border_width(ui->screen_Setting_NotNetwork_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_NotNetwork_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_NotNetwork_Header, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_NotNetwork_Header, &lv_font_montserrat_48, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_NotNetwork_Header, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_Setting_NotNetwork_Header, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_Setting_NotNetwork_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_NotNetwork_Header, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_Setting_NotNetwork_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_Setting_NotNetwork_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_Setting_NotNetwork_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_Setting_NotNetwork_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_Setting_NotNetwork_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_NotNetwork_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    ui->screen_Setting_NotNetwork_label_Content = lv_label_create(ui->screen_Setting_NotNetwork);
	lv_label_set_text(ui->screen_Setting_NotNetwork_label_Content, "Not connected.\nPlug in your\nethernet cable.");
	lv_label_set_long_mode(ui->screen_Setting_NotNetwork_label_Content, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_Setting_NotNetwork_label_Content, 20, 295);
	lv_obj_set_size(ui->screen_Setting_NotNetwork_label_Content, 680, 130);
	lv_obj_set_style_border_width(ui->screen_Setting_NotNetwork_label_Content, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_NotNetwork_label_Content, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_NotNetwork_label_Content, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_NotNetwork_label_Content, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_NotNetwork_label_Content, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_Setting_NotNetwork_label_Content, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_Setting_NotNetwork_label_Content, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_NotNetwork_label_Content, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_Setting_NotNetwork_label_Content, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_Setting_NotNetwork_label_Content, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_Setting_NotNetwork_label_Content, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_Setting_NotNetwork_label_Content, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_Setting_NotNetwork_label_Content, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_NotNetwork_label_Content, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    ui->screen_Setting_NotNetwork_btn_Save = lv_btn_create(ui->screen_Setting_NotNetwork);
	ui->screen_Setting_NotNetwork_btn_Save_label = lv_label_create(ui->screen_Setting_NotNetwork_btn_Save);
	lv_label_set_text(ui->screen_Setting_NotNetwork_btn_Save_label, "Save");
	lv_label_set_long_mode(ui->screen_Setting_NotNetwork_btn_Save_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_Setting_NotNetwork_btn_Save_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_Setting_NotNetwork_btn_Save, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_Setting_NotNetwork_btn_Save_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_Setting_NotNetwork_btn_Save, 20, 607);
	lv_obj_set_size(ui->screen_Setting_NotNetwork_btn_Save, 680, 92);
	lv_obj_set_style_bg_opa(ui->screen_Setting_NotNetwork_btn_Save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_NotNetwork_btn_Save, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_NotNetwork_btn_Save, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_Setting_NotNetwork_btn_Save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_NotNetwork_btn_Save, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_NotNetwork_btn_Save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_NotNetwork_btn_Save, lv_color_hex(0xacacac), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_NotNetwork_btn_Save, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_NotNetwork_btn_Save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_NotNetwork_btn_Save, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_NotNetwork_btn_LEFT = lv_btn_create(ui->screen_Setting_NotNetwork);
	ui->screen_Setting_NotNetwork_btn_LEFT_label = lv_label_create(ui->screen_Setting_NotNetwork_btn_LEFT);
	lv_label_set_text(ui->screen_Setting_NotNetwork_btn_LEFT_label, "" LV_SYMBOL_LEFT "");
	lv_label_set_long_mode(ui->screen_Setting_NotNetwork_btn_LEFT_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_Setting_NotNetwork_btn_LEFT_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_Setting_NotNetwork_btn_LEFT, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_Setting_NotNetwork_btn_LEFT_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_Setting_NotNetwork_btn_LEFT, 10, 10);
	lv_obj_set_size(ui->screen_Setting_NotNetwork_btn_LEFT, 72, 72);
	lv_obj_set_style_bg_opa(ui->screen_Setting_NotNetwork_btn_LEFT, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_NotNetwork_btn_LEFT, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_NotNetwork_btn_LEFT, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_Setting_NotNetwork_btn_LEFT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_NotNetwork_btn_LEFT, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_NotNetwork_btn_LEFT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_NotNetwork_btn_LEFT, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_NotNetwork_btn_LEFT, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_NotNetwork_btn_LEFT, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_NotNetwork_btn_LEFT, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	