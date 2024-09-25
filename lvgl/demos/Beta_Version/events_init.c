/*
 * Copyright 2024 NXP
 * NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
 * accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
 * comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
 * terms, then you may not retain, install, activate or otherwise use the software.
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

//Event-FirstBoot-------------------------------------
#include "Event/FirstBoot/Event_FirstBoot_Logo.h"
#include "Event/FirstBoot/Event_FirstBoot_Welcome.h"
#include "Event/FirstBoot/Event_FirstBoot_Language.h"
#include "Event/FirstBoot/Event_FirstBoot_Background.h"
#include "Event/FirstBoot/Event_FirstBoot_DateTime.h"
#include "Event/FirstBoot/Event_FirstBoot_Network.h"
#include "Event/FirstBoot/Event_FirstBoot_ScanHC.h"
#include "Event/FirstBoot/Event_FirstBoot_PrintHC.h"
#include "Event/FirstBoot/Event_FirstBoot_InputHC.h"
#include "Event/FirstBoot/Event_FirstBoot_NoHC.h"
#include "Event/FirstBoot/Event_FirstBoot_SetupDone.h"
//-----------------------------------------------------

//Event-Device---------------------------------------
#include "Event/Device/Event_Device_LockScreen.h"
#include "Event/Device/Event_Device_Device1.h"
#include "Event/Device/Event_Device_Device2.h"
#include "Event/Device/Event_Device_Device3.h"
#include "Event/Device/Event_Device_Device4.h"
#include "Event/Device/Event_Device_Device5.h"
#include "Event/Device/Event_Device_Device6.h"
#include "Event/Device/Event_Device_Device7.h"
#include "Event/Device/Event_Device_Device8.h"
//---------------------------------------------------

//Event-Setting--------------------------------------
#include "Event/Settings/Event_Settings_Setting.h"
#include "Event/Settings/Event_Settings_Network.h"
#include "Event/Settings/Event_Settings_DateTime.h"
#include "Event/Settings/Event_Settings_Language.h"
#include "Event/Settings/Event_Settings_Brightness.h"
#include "Event/Settings/Event_Settings_Sleep.h"
#include "Event/Settings/Event_Settings_HomeController_ScanHC.h"
#include "Event/Settings/Event_Settings_HomeController_PrintHC.h"
#include "Event/Settings/Event_Settings_HomeController_InputHC.h"
#include "Event/Settings/Event_Settings_HomeController_NoHC.h"
#include "Event/Settings/Event_Settings_About.h"
//-----------------------------------------------------


// test next to setting----------------------------------------------
static void next_test_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *btn = lv_event_get_target(e);
    if (code == LV_EVENT_PRESSED){
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Setupdone_btn_Gotodashboard, lv_color_hex(0x008c4f), LV_PART_MAIN);
    }else if (code == LV_EVENT_CLICKED){
        lv_obj_add_flag(   guider_ui.screen_FirstBoot, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag( guider_ui.screen_Setting  , LV_OBJ_FLAG_HIDDEN);
        lv_obj_set_tile_id(guider_ui.screen_Setting   , 0, 0, LV_ANIM_ON);
    }else if (code == LV_EVENT_RELEASED || code == LV_EVENT_PRESS_LOST)
    {
        lv_obj_set_style_bg_color(guider_ui.screen_FirstBoot_Setupdone_btn_Gotodashboard, lv_color_hex(0x1c1c1c), LV_PART_MAIN);
    }
}
void test(){
    lv_obj_add_event_cb(guider_ui.screen_FirstBoot_Setupdone_btn_Gotodashboard, next_test_event_handler, LV_EVENT_ALL, NULL);
}
//------------------------------------------------------------------


static void screen_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);

    switch (code)
    {
    case LV_EVENT_SCREEN_LOADED:
    {
        Event_FirstBoot_Logo();
        Event_FirstBoot_Welcome();
        Event_FirstBoot_Language();
        Event_FirstBoot_Background();
        Event_FirstBoot_Datetime();
        Event_FirstBoot_Network();
        // Event_FirstBoot_ScanHC();
        // Event_FirstBoot_PrintHC();
        // Event_FirstBoot_InputHC();
        // Event_FirstBoot_NoHC();
        // Event_FirstBoot_SetupDone();
        test();
        break;
    }
    default:
        break;
    }
}
void events_init_screen(lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen, screen_event_handler, LV_EVENT_ALL, ui);
}

void events_init(lv_ui *ui)
{
}
