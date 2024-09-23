ui->screen_FirstBoot_Logo_img = lv_img_create(ui->screen_FirstBoot_Logo);
lv_obj_add_flag(ui->screen_FirstBoot_Logo_img, LV_OBJ_FLAG_CLICKABLE);
lv_img_set_src(ui->screen_FirstBoot_Logo_img, &_Logo_Lumi);
lv_img_set_pivot(ui->screen_FirstBoot_Logo_img, 50,50);
lv_img_set_angle(ui->screen_FirstBoot_Logo_img, 0);
lv_obj_set_pos(ui->screen_FirstBoot_Logo_img, 162, 290);
lv_obj_set_size(ui->screen_FirstBoot_Logo_img, 400, 135);
lv_obj_set_style_img_opa(ui->screen_FirstBoot_Logo_img, 255, LV_PART_MAIN|LV_STATE_DEFAULT);