
	//scan HC
	ui->screen_FirstBoot_HomeController_scanHC_Header = lv_label_create(ui->screen_FirstBoot_HomeController_scanHC);
	lv_label_set_text(ui->screen_FirstBoot_HomeController_scanHC_Header, "Add to HC");
	lv_label_set_long_mode(ui->screen_FirstBoot_HomeController_scanHC_Header, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_FirstBoot_HomeController_scanHC_Header, 20, 33);
	lv_obj_set_size(ui->screen_FirstBoot_HomeController_scanHC_Header, 680, 80);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_HomeController_scanHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_HomeController_scanHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_HomeController_scanHC_Header, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_HomeController_scanHC_Header, &lumi_font_helvetica_48, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_HomeController_scanHC_Header, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_FirstBoot_HomeController_scanHC_Header, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_FirstBoot_HomeController_scanHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_HomeController_scanHC_Header, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_HomeController_scanHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_FirstBoot_HomeController_scanHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_FirstBoot_HomeController_scanHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_FirstBoot_HomeController_scanHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_FirstBoot_HomeController_scanHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_HomeController_scanHC_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_FirstBoot_HomeController_scanHC_btn_Previous = lv_btn_create(ui->screen_FirstBoot_HomeController_scanHC);
	ui->screen_FirstBoot_HomeController_scanHC_btn_Previous_label = lv_label_create(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous);
	lv_label_set_text(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous_label, "Previous");
	lv_label_set_long_mode(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous, 20, 607);
	lv_obj_set_size(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous, 330, 92);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous, 92, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_HomeController_scanHC_btn_Previous, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_FirstBoot_HomeController_scanHC_btn_Next = lv_btn_create(ui->screen_FirstBoot_HomeController_scanHC);
	ui->screen_FirstBoot_HomeController_scanHC_btn_Next_label = lv_label_create(ui->screen_FirstBoot_HomeController_scanHC_btn_Next);
	lv_label_set_text(ui->screen_FirstBoot_HomeController_scanHC_btn_Next_label, "Next");
	lv_label_set_long_mode(ui->screen_FirstBoot_HomeController_scanHC_btn_Next_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_FirstBoot_HomeController_scanHC_btn_Next_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_FirstBoot_HomeController_scanHC_btn_Next, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_FirstBoot_HomeController_scanHC_btn_Next_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_FirstBoot_HomeController_scanHC_btn_Next, 370, 607);
	lv_obj_set_size(ui->screen_FirstBoot_HomeController_scanHC_btn_Next, 330, 92);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_HomeController_scanHC_btn_Next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_HomeController_scanHC_btn_Next, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_HomeController_scanHC_btn_Next, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_HomeController_scanHC_btn_Next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_HomeController_scanHC_btn_Next, 92, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_HomeController_scanHC_btn_Next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_HomeController_scanHC_btn_Next, lv_color_hex(0xacacac), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_HomeController_scanHC_btn_Next, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_HomeController_scanHC_btn_Next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_HomeController_scanHC_btn_Next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_animimg_1 = lv_animimg_create(ui->screen_FirstBoot_HomeController_scanHC);
	lv_animimg_set_src(ui->screen_animimg_1, (const void **) screen_animimg_1_imgs, 18);
	lv_animimg_set_duration(ui->screen_animimg_1, 30*18);
	lv_animimg_set_repeat_count(ui->screen_animimg_1, LV_ANIM_REPEAT_INFINITE);
	lv_animimg_start(ui->screen_animimg_1);
	lv_obj_set_pos(ui->screen_animimg_1, 306, 194);
	lv_obj_set_size(ui->screen_animimg_1, 100, 100);


	ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual = lv_btn_create(ui->screen_FirstBoot_HomeController_scanHC);
	ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual_label = lv_label_create(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual);
	lv_label_set_text(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual_label, "Add manual");
	lv_label_set_long_mode(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual, 195, 404);
	lv_obj_set_size(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual, 330, 92);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual, 92, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_HomeController_scanHC_btn_Addmanual, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC = lv_label_create(ui->screen_FirstBoot_HomeController_scanHC);
	lv_label_set_text(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, "Finding HC");
	lv_label_set_long_mode(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, 20, 339);
	lv_obj_set_size(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, 680, 43);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, &lumi_font_helvetica_40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_HomeController_scanHC_label_FindingHC, 0, LV_PART_MAIN|LV_STATE_DEFAULT);