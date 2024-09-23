ui->screen_FirstBoot 				= lv_tileview_create(ui->screen);
ui->screen_FirstBoot_Logo 			= lv_tileview_add_tile(ui->screen_FirstBoot, 0, 0, LV_DIR_RIGHT | LV_DIR_LEFT);
ui->screen_FirstBoot_Welcome	    = lv_tileview_add_tile(ui->screen_FirstBoot, 1, 0, LV_DIR_RIGHT | LV_DIR_LEFT);
ui->screen_FirstBoot_Language 		= lv_tileview_add_tile(ui->screen_FirstBoot, 2, 0, LV_DIR_RIGHT | LV_DIR_LEFT);
ui->screen_FirstBoot_Background 	= lv_tileview_add_tile(ui->screen_FirstBoot, 3, 0, LV_DIR_RIGHT | LV_DIR_LEFT);
ui->screen_FirstBoot_DateTime 		= lv_tileview_add_tile(ui->screen_FirstBoot, 4, 0, LV_DIR_RIGHT | LV_DIR_LEFT);
ui->screen_FirstBoot_NotNetwork 	= lv_tileview_add_tile(ui->screen_FirstBoot, 5, 0, LV_DIR_RIGHT | LV_DIR_LEFT);
ui->screen_FirstBoot_Network 		= lv_tileview_add_tile(ui->screen_FirstBoot, 6, 0, LV_DIR_RIGHT | LV_DIR_LEFT);
ui->screen_FirstBoot_HomeController_scanHC 	= lv_tileview_add_tile(ui->screen_FirstBoot, 7, 0, LV_DIR_RIGHT  | LV_DIR_LEFT);
ui->screen_FirstBoot_HomeController_printHC = lv_tileview_add_tile(ui->screen_FirstBoot, 8, 0, LV_DIR_RIGHT  | LV_DIR_LEFT);
ui->screen_FirstBoot_HomeController_noHC 	= lv_tileview_add_tile(ui->screen_FirstBoot, 9, 0, LV_DIR_RIGHT  | LV_DIR_LEFT);
ui->screen_FirstBoot_HomeController_inputHC = lv_tileview_add_tile(ui->screen_FirstBoot, 10, 0, LV_DIR_RIGHT | LV_DIR_LEFT);
ui->screen_FirstBoot_Setupdone 			    = lv_tileview_add_tile(ui->screen_FirstBoot, 11, 0, LV_DIR_RIGHT | LV_DIR_LEFT);

lv_obj_set_pos(ui->screen_FirstBoot, 0, 0);
lv_obj_set_size(ui->screen_FirstBoot, 720, 720);
lv_obj_set_scrollbar_mode(ui->screen_FirstBoot, LV_SCROLLBAR_MODE_OFF);
lv_obj_set_style_bg_opa(ui->screen_FirstBoot, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui->screen_FirstBoot, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot, LV_GRAD_DIR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui->screen_FirstBoot, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui->screen_FirstBoot, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
lv_obj_set_style_bg_opa(ui->screen_FirstBoot, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui->screen_FirstBoot, lv_color_hex(0xeaeff3), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_dir(ui->screen_FirstBoot, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui->screen_FirstBoot, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

