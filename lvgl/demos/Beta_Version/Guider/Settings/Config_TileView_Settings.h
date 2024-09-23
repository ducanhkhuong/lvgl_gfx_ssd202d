	ui->screen_Setting = lv_tileview_create(ui->screen);
	
	ui->screen_Setting_Setting        		 = lv_tileview_add_tile(ui->screen_Setting, 0, 0, LV_DIR_LEFT | LV_DIR_RIGHT);
	ui->screen_Setting_NotNetwork    		 = lv_tileview_add_tile(ui->screen_Setting, 1, 0, LV_DIR_LEFT | LV_DIR_RIGHT);
	ui->screen_Setting_Network        		 = lv_tileview_add_tile(ui->screen_Setting, 2, 0, LV_DIR_LEFT | LV_DIR_RIGHT);
	ui->screen_Setting_DateTime       		 = lv_tileview_add_tile(ui->screen_Setting, 3, 0, LV_DIR_LEFT | LV_DIR_RIGHT);
	ui->screen_Setting_Language       		 = lv_tileview_add_tile(ui->screen_Setting, 4, 0, LV_DIR_LEFT | LV_DIR_RIGHT);
    ui->screen_Setting_Brightness     		 = lv_tileview_add_tile(ui->screen_Setting, 5, 0, LV_DIR_LEFT | LV_DIR_RIGHT);
	ui->screen_Setting_Sleep          		 = lv_tileview_add_tile(ui->screen_Setting, 6, 0, LV_DIR_LEFT | LV_DIR_RIGHT);
	ui->screen_Setting_HomeController_scanHC = lv_tileview_add_tile(ui->screen_Setting, 7, 0, LV_DIR_LEFT | LV_DIR_RIGHT);
	ui->screen_Setting_HomeController_printHC= lv_tileview_add_tile(ui->screen_Setting, 8, 0, LV_DIR_LEFT | LV_DIR_RIGHT);
	ui->screen_Setting_HomeController_NoHC   = lv_tileview_add_tile(ui->screen_Setting, 9, 0, LV_DIR_LEFT | LV_DIR_RIGHT);
    ui->screen_Setting_HomeController_InputHC= lv_tileview_add_tile(ui->screen_Setting, 10, 0, LV_DIR_LEFT | LV_DIR_RIGHT);
	ui->screen_Setting_About				 = lv_tileview_add_tile(ui->screen_Setting, 11, 0, LV_DIR_LEFT | LV_DIR_RIGHT);

	lv_obj_set_pos(ui->screen_Setting, 0, 0);
	lv_obj_set_size(ui->screen_Setting, 720, 720);
	lv_obj_set_scrollbar_mode(ui->screen_Setting, LV_SCROLLBAR_MODE_OFF);
	lv_obj_set_style_bg_opa(ui->screen_Setting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_Setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_Setting, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_Setting, lv_color_hex(0xeaeff3), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_Setting, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_Setting, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);