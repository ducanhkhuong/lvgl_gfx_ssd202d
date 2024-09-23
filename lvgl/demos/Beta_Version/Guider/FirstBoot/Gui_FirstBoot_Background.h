
	ui->screen_FirstBoot_Background_tileview_Img   = lv_tileview_create(ui->screen_FirstBoot_Background);
	ui->screen_FirstBoot_Background_tileview_Img_1 = lv_tileview_add_tile(ui->screen_FirstBoot_Background_tileview_Img, 0, 0, LV_DIR_LEFT  |LV_DIR_RIGHT);
	ui->screen_FirstBoot_Background_tileview_Img_2 = lv_tileview_add_tile(ui->screen_FirstBoot_Background_tileview_Img, 1, 0, LV_DIR_LEFT  |LV_DIR_RIGHT);
	ui->screen_FirstBoot_Background_tileview_Img_3 = lv_tileview_add_tile(ui->screen_FirstBoot_Background_tileview_Img, 2, 0, LV_DIR_LEFT  |LV_DIR_RIGHT);
	ui->screen_FirstBoot_Background_tileview_Img_4 = lv_tileview_add_tile(ui->screen_FirstBoot_Background_tileview_Img, 3, 0, LV_DIR_LEFT  |LV_DIR_RIGHT);
	ui->screen_FirstBoot_Background_tileview_Img_5 = lv_tileview_add_tile(ui->screen_FirstBoot_Background_tileview_Img, 4, 0, LV_DIR_LEFT  |LV_DIR_RIGHT);
	lv_obj_set_pos(ui->screen_FirstBoot_Background_tileview_Img, 0, 132);
	lv_obj_set_size(ui->screen_FirstBoot_Background_tileview_Img, 720, 452);
	lv_obj_set_scrollbar_mode(ui->screen_FirstBoot_Background_tileview_Img, LV_SCROLLBAR_MODE_OFF);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Background_tileview_Img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Background_tileview_Img, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Background_tileview_Img, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Background_tileview_Img, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Background_tileview_Img, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Background_tileview_Img, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Background_tileview_Img, lv_color_hex(0xeaeff3), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Background_tileview_Img, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Background_tileview_Img, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);




	ui->screen_FirstBoot_Background_img_1 = lv_img_create(ui->screen_FirstBoot_Background_tileview_Img_1);
	lv_obj_add_flag(ui->screen_FirstBoot_Background_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_FirstBoot_Background_img_1, &_background_1);
	lv_img_set_pivot(ui->screen_FirstBoot_Background_img_1, 50,50);
	lv_img_set_angle(ui->screen_FirstBoot_Background_img_1, 0);
	lv_obj_set_pos(ui->screen_FirstBoot_Background_img_1, 160, 25);
	lv_obj_set_size(ui->screen_FirstBoot_Background_img_1, 400, 400);
	lv_obj_set_style_img_opa(ui->screen_FirstBoot_Background_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);



	
	ui->screen_FirstBoot_Background_img_2 = lv_img_create(ui->screen_FirstBoot_Background_tileview_Img_2);
	lv_obj_add_flag(ui->screen_FirstBoot_Background_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_FirstBoot_Background_img_2, &_background_2);
	lv_img_set_pivot(ui->screen_FirstBoot_Background_img_2, 50,50);
	lv_img_set_angle(ui->screen_FirstBoot_Background_img_2, 0);
	lv_obj_set_pos(ui->screen_FirstBoot_Background_img_2, 160, 25);
	lv_obj_set_size(ui->screen_FirstBoot_Background_img_2, 400, 400);
	lv_obj_set_style_img_opa(ui->screen_FirstBoot_Background_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);




	ui->screen_FirstBoot_Background_img_3 = lv_img_create(ui->screen_FirstBoot_Background_tileview_Img_3);
	lv_obj_add_flag(ui->screen_FirstBoot_Background_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_FirstBoot_Background_img_3, &_background_3);
	lv_img_set_pivot(ui->screen_FirstBoot_Background_img_3, 50,50);
	lv_img_set_angle(ui->screen_FirstBoot_Background_img_3, 0);
	lv_obj_set_pos(ui->screen_FirstBoot_Background_img_3, 160, 25);
	lv_obj_set_size(ui->screen_FirstBoot_Background_img_3, 400, 400);
	lv_obj_set_style_img_opa(ui->screen_FirstBoot_Background_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);




	ui->screen_FirstBoot_Background_img_4 = lv_img_create(ui->screen_FirstBoot_Background_tileview_Img_4);
	lv_obj_add_flag(ui->screen_FirstBoot_Background_img_4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_FirstBoot_Background_img_4, &_background_4);
	lv_img_set_pivot(ui->screen_FirstBoot_Background_img_4, 50,50);
	lv_img_set_angle(ui->screen_FirstBoot_Background_img_4, 0);
	lv_obj_set_pos(ui->screen_FirstBoot_Background_img_4, 160, 25);
	lv_obj_set_size(ui->screen_FirstBoot_Background_img_4, 400, 400);
	lv_obj_set_style_img_opa(ui->screen_FirstBoot_Background_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);



	ui->screen_FirstBoot_Background_img_5 = lv_img_create(ui->screen_FirstBoot_Background_tileview_Img_5);
	lv_obj_add_flag(ui->screen_FirstBoot_Background_img_5, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_FirstBoot_Background_img_5, &_background_5);
	lv_img_set_pivot(ui->screen_FirstBoot_Background_img_5, 50,50);
	lv_img_set_angle(ui->screen_FirstBoot_Background_img_5, 0);
	lv_obj_set_pos(ui->screen_FirstBoot_Background_img_5, 160, 25);
	lv_obj_set_size(ui->screen_FirstBoot_Background_img_5, 400, 400);
	lv_obj_set_style_img_opa(ui->screen_FirstBoot_Background_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_FirstBoot_Background_Header = lv_label_create(ui->screen_FirstBoot_Background);
	lv_label_set_text(ui->screen_FirstBoot_Background_Header, "Background");
	lv_label_set_long_mode(ui->screen_FirstBoot_Background_Header, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_FirstBoot_Background_Header, 20, 33);
	lv_obj_set_size(ui->screen_FirstBoot_Background_Header, 680, 80);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Background_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Background_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Background_Header, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Background_Header, &lv_font_montserrat_48, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Background_Header, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_FirstBoot_Background_Header, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_FirstBoot_Background_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Background_Header, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Background_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_FirstBoot_Background_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_FirstBoot_Background_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_FirstBoot_Background_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_FirstBoot_Background_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Background_Header, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	
	ui->screen_FirstBoot_Background_btn_Previous = lv_btn_create(ui->screen_FirstBoot_Background);
	ui->screen_FirstBoot_Background_btn_Previous_label = lv_label_create(ui->screen_FirstBoot_Background_btn_Previous);
	lv_label_set_text(ui->screen_FirstBoot_Background_btn_Previous_label, "Previous");
	lv_label_set_long_mode(ui->screen_FirstBoot_Background_btn_Previous_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_FirstBoot_Background_btn_Previous_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_FirstBoot_Background_btn_Previous, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_FirstBoot_Background_btn_Previous_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_FirstBoot_Background_btn_Previous, 20, 607);
	lv_obj_set_size(ui->screen_FirstBoot_Background_btn_Previous, 330, 92);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Background_btn_Previous, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Background_btn_Previous, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Background_btn_Previous, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Background_btn_Previous, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Background_btn_Previous, 92, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Background_btn_Previous, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Background_btn_Previous, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Background_btn_Previous, &lv_font_montserrat_48, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Background_btn_Previous, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Background_btn_Previous, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);


	ui->screen_FirstBoot_Background_btn_Next = lv_btn_create(ui->screen_FirstBoot_Background);
	ui->screen_FirstBoot_Background_btn_Next_label = lv_label_create(ui->screen_FirstBoot_Background_btn_Next);
	lv_label_set_text(ui->screen_FirstBoot_Background_btn_Next_label, "Next");
	lv_label_set_long_mode(ui->screen_FirstBoot_Background_btn_Next_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_FirstBoot_Background_btn_Next_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_FirstBoot_Background_btn_Next, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_FirstBoot_Background_btn_Next_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_FirstBoot_Background_btn_Next, 370, 607);
	lv_obj_set_size(ui->screen_FirstBoot_Background_btn_Next, 330, 92);
	lv_obj_set_style_bg_opa(ui->screen_FirstBoot_Background_btn_Next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_FirstBoot_Background_btn_Next, lv_color_hex(0x1c1c1c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot_Background_btn_Next, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_FirstBoot_Background_btn_Next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_FirstBoot_Background_btn_Next, 92, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_FirstBoot_Background_btn_Next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_FirstBoot_Background_btn_Next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_FirstBoot_Background_btn_Next, &lv_font_montserrat_48, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_FirstBoot_Background_btn_Next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_FirstBoot_Background_btn_Next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);