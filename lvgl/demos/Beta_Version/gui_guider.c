/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#if LV_USE_FREEMASTER
#include "gg_external_data.h"
#endif

void ui_init_style(lv_style_t * style)
{
	if (style->prop_cnt > 1)
		lv_style_reset(style);
	else
		lv_style_init(style);
}

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del)
{
	lv_obj_t * act_scr = lv_scr_act();

#if LV_USE_FREEMASTER
	if(auto_del) {
		gg_edata_task_clear(act_scr);
	}
#endif
	if (auto_del && is_clean) {
		lv_obj_clean(act_scr);
	}
	if (new_scr_del) {
		setup_scr(ui);
	}
	lv_scr_load_anim(*new_scr, anim_type, time, delay, auto_del);
	*old_scr_del = auto_del;
}

void init_scr_del_flag(lv_ui *ui)
{
  
	ui->screen_del = true;
}

void setup_ui(lv_ui *ui)
{
	init_scr_del_flag(ui);
	setup_scr_screen(ui);
	lv_scr_load(ui->screen);
}
