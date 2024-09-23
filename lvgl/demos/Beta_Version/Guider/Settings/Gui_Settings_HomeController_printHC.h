//print HC
	ui->screen_Setting_HomeController_printHC_Header = lv_label_create(ui->screen_Setting_HomeController_printHC);
	lv_label_set_text(ui->screen_Setting_HomeController_printHC_Header, "Add to HC");
	lv_label_set_long_mode(ui->screen_Setting_HomeController_printHC_Header, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_Setting_HomeController_printHC_Header, 20, 33);
	lv_obj_set_size(ui->screen_Setting_HomeController_printHC_Header, 680, 80);
	lv_obj_set_style_border_width(ui->screen_Setting_HomeController_printHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_HomeController_printHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_HomeController_printHC_Header, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_HomeController_printHC_Header, &lv_font_montserrat_48, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_HomeController_printHC_Header, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_Setting_HomeController_printHC_Header, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_Setting_HomeController_printHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_HomeController_printHC_Header, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_Setting_HomeController_printHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_Setting_HomeController_printHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_Setting_HomeController_printHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_Setting_HomeController_printHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_Setting_HomeController_printHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_HomeController_printHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_Setting_HomeController_printHC_tileview = lv_tileview_create(ui->screen_Setting_HomeController_printHC);
	ui->screen_Setting_HomeController_printHC_tileview_MAC = lv_tileview_add_tile(ui->screen_Setting_HomeController_printHC_tileview, 0, 0, LV_DIR_RIGHT);
	lv_obj_set_pos(ui->screen_Setting_HomeController_printHC_tileview, 0, 90);
	lv_obj_set_size(ui->screen_Setting_HomeController_printHC_tileview, 720, 484);
	lv_obj_set_scrollbar_mode(ui->screen_Setting_HomeController_printHC_tileview, LV_SCROLLBAR_MODE_OFF);
	lv_obj_set_style_bg_opa(ui->screen_Setting_HomeController_printHC_tileview, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_HomeController_printHC_tileview, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_HomeController_printHC_tileview, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_HomeController_printHC_tileview, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_HomeController_printHC_tileview, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_Setting_HomeController_printHC_tileview, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_HomeController_printHC_tileview, lv_color_hex(0xeaeff3), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_HomeController_printHC_tileview, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_HomeController_printHC_tileview, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);



	ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1 = lv_btn_create(ui->screen_Setting_HomeController_printHC_tileview_MAC);
	ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1_label = lv_label_create(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1);
	lv_label_set_text(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1_label, "    48:b0:2d:2e:65:25");
	lv_label_set_long_mode(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1, 20, 15);
	lv_obj_set_size(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2 = lv_btn_create(ui->screen_Setting_HomeController_printHC_tileview_MAC);
	ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2_label = lv_label_create(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2);
	lv_label_set_text(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2_label, "    48:b0:2d:2e:65:25");
	lv_label_set_long_mode(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2, 20, 144);
	lv_obj_set_size(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3 = lv_btn_create(ui->screen_Setting_HomeController_printHC_tileview_MAC);
	ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3_label = lv_label_create(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3);
	lv_label_set_text(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3_label, "    48:b0:2d:2e:65:25");
	lv_label_set_long_mode(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3, 20, 273);
	lv_obj_set_size(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3, 680, 104);
	lv_obj_set_style_bg_opa(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_btn_79 = lv_btn_create(ui->screen_Setting_HomeController_printHC_tileview_MAC);
	ui->screen_btn_79_label = lv_label_create(ui->screen_btn_79);
	lv_label_set_text(ui->screen_btn_79_label, "");
	lv_label_set_long_mode(ui->screen_btn_79_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_btn_79_label, LV_ALIGN_LEFT_MID, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_btn_79, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_btn_79_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_btn_79, 21, 435);
	lv_obj_set_size(ui->screen_btn_79, 680, 208);
	lv_obj_set_style_bg_opa(ui->screen_btn_79, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_btn_79, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_btn_79, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_btn_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_btn_79, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_btn_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_btn_79, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_btn_79, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_btn_79, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_btn_79, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_line_3 = lv_line_create(ui->screen_Setting_HomeController_printHC_tileview_MAC);
	static lv_point_t screen_line_3[] ={{680, 0},{0, 0},};
	lv_line_set_points(ui->screen_line_3, screen_line_3, 2);
	lv_obj_set_pos(ui->screen_line_3, 20, 537);
	lv_obj_set_size(ui->screen_line_3, 674, 1);
	lv_obj_set_style_line_width(ui->screen_line_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->screen_line_3, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->screen_line_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_rounded(ui->screen_line_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_Setting_HomeController_printHC_label_Addmanual = lv_label_create(ui->screen_Setting_HomeController_printHC_tileview_MAC);
	lv_label_set_text(ui->screen_Setting_HomeController_printHC_label_Addmanual, "Add manual");
	lv_label_set_long_mode(ui->screen_Setting_HomeController_printHC_label_Addmanual, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_Setting_HomeController_printHC_label_Addmanual, 40, 565);
	lv_obj_set_size(ui->screen_Setting_HomeController_printHC_label_Addmanual, 641, 60);
	lv_obj_set_style_border_width(ui->screen_Setting_HomeController_printHC_label_Addmanual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_HomeController_printHC_label_Addmanual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_HomeController_printHC_label_Addmanual, lv_color_hex(0x2fDA64), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_HomeController_printHC_label_Addmanual, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_HomeController_printHC_label_Addmanual, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_Setting_HomeController_printHC_label_Addmanual, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_Setting_HomeController_printHC_label_Addmanual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_HomeController_printHC_label_Addmanual, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_Setting_HomeController_printHC_label_Addmanual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_Setting_HomeController_printHC_label_Addmanual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_Setting_HomeController_printHC_label_Addmanual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_Setting_HomeController_printHC_label_Addmanual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_Setting_HomeController_printHC_label_Addmanual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_HomeController_printHC_label_Addmanual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);


	ui->screen_Setting_HomeController_printHC_label_Refresh = lv_label_create(ui->screen_Setting_HomeController_printHC_tileview_MAC);
	lv_label_set_text(ui->screen_Setting_HomeController_printHC_label_Refresh, "Refresh");
	lv_label_set_long_mode(ui->screen_Setting_HomeController_printHC_label_Refresh, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_Setting_HomeController_printHC_label_Refresh, 40, 467);
	lv_obj_set_size(ui->screen_Setting_HomeController_printHC_label_Refresh, 641, 60);
	lv_obj_set_style_border_width(ui->screen_Setting_HomeController_printHC_label_Refresh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_HomeController_printHC_label_Refresh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_HomeController_printHC_label_Refresh, lv_color_hex(0x2fDA64), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_HomeController_printHC_label_Refresh, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_HomeController_printHC_label_Refresh, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_Setting_HomeController_printHC_label_Refresh, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_Setting_HomeController_printHC_label_Refresh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_HomeController_printHC_label_Refresh, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_Setting_HomeController_printHC_label_Refresh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_Setting_HomeController_printHC_label_Refresh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_Setting_HomeController_printHC_label_Refresh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_Setting_HomeController_printHC_label_Refresh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_Setting_HomeController_printHC_label_Refresh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_HomeController_printHC_label_Refresh, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	ui->screen_Setting_HomeController_printHC_btn_AddtoHC = lv_btn_create(ui->screen_Setting_HomeController_printHC);
	ui->screen_Setting_HomeController_printHC_btn_AddtoHC_label = lv_label_create(ui->screen_Setting_HomeController_printHC_btn_AddtoHC);
	lv_label_set_text(ui->screen_Setting_HomeController_printHC_btn_AddtoHC_label, "Add to HC");
	lv_label_set_long_mode(ui->screen_Setting_HomeController_printHC_btn_AddtoHC_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_Setting_HomeController_printHC_btn_AddtoHC_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_Setting_HomeController_printHC_btn_AddtoHC, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_Setting_HomeController_printHC_btn_AddtoHC_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_Setting_HomeController_printHC_btn_AddtoHC, 20, 607);
	lv_obj_set_size(ui->screen_Setting_HomeController_printHC_btn_AddtoHC, 680, 92);
	lv_obj_set_style_bg_opa(ui->screen_Setting_HomeController_printHC_btn_AddtoHC, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting_HomeController_printHC_btn_AddtoHC, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting_HomeController_printHC_btn_AddtoHC, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_Setting_HomeController_printHC_btn_AddtoHC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting_HomeController_printHC_btn_AddtoHC, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting_HomeController_printHC_btn_AddtoHC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_Setting_HomeController_printHC_btn_AddtoHC, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_Setting_HomeController_printHC_btn_AddtoHC, &lv_font_montserrat_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_Setting_HomeController_printHC_btn_AddtoHC, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_Setting_HomeController_printHC_btn_AddtoHC, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);