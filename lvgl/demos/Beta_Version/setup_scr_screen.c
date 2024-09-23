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
#include "events_init.h"
#include "widgets_init.h"



void setup_scr_screen(lv_ui *ui)
{
	//Main----------------------------------
	#include "Guider/Main/Config_Screen_main.h"
	//--------------------------------------


    //Đặt phần Setting mặc định lên trên-----
	#include "Guider/Settings/Config_TileView_Settings.h"
	#include "Guider/Settings/Gui_Settings_Setting.h"
	#include "Guider/Settings/Gui_Settings_Datetime.h"
	#include "Guider/Settings/Gui_Settings_Brightness.h"
	#include "Guider/Settings/Gui_Settings_Sleep.h"
	#include "Guider/Settings/Gui_Settings_Language.h"
	#include "Guider/Settings/Gui_Settings_Not_Network.h"
	#include "Guider/Settings/Gui_Settings_Network.h"
	#include "Guider/Settings/Gui_Settings_HomeController_scanHC.h"
	#include "Guider/Settings/Gui_Settings_HomeController_printHC.h"
	#include "Guider/Settings/Gui_Settings_HomeController_noHC.h"
	#include "Guider/Settings/Gui_Settings_HomeController_inputHC.h"
	#include "Guider/Settings/Gui_Settings_About.h"
	//--------------------------------------


	//Phần Device----------------------------------- 
	#include "Guider/Device/Device/Config_TileView_Device.h"
	#include "Guider/Device/Device/Gui_Device_LockScreen.h"
	#include "Guider/Device/Device/Gui_Device_Device1.h"
	#include "Guider/Device/Device/Gui_Device_Device2.h"
	#include "Guider/Device/Device/Gui_Device_Device3.h"
	#include "Guider/Device/Device/Gui_Device_Device4.h"
	#include "Guider/Device/Device/Gui_Device_Device5.h"
	#include "Guider/Device/Device/Gui_Device_Device6.h"
	#include "Guider/Device/Device/Gui_Device_Device7.h"
	#include "Guider/Device/Device/Gui_Device_Device8.h"
	#include "Guider/Device/SetupDevice/Gui_Device_Setup1.h"
	#include "Guider/Device/SetupDevice/Gui_Device_Setup2.h"
	#include "Guider/Device/SetupDevice/Gui_Device_Setup3.h"
	#include "Guider/Device/SetupDevice/Gui_Device_Setup4.h"
	#include "Guider/Device/SetupDevice/Gui_Device_Setup5.h"
	//-----------------------------------------------
	

	//Đặt phần FirstBoot ở dưới cuối---------
	#include "Guider/FirstBoot/Config_TileView_FirstBoot.h"
	#include "Guider/FirstBoot/Gui_FirstBoot_Logo.h"
	#include "Guider/FirstBoot/Gui_FirstBoot_Welcome.h"
	#include "Guider/FirstBoot/Gui_FirstBoot_Language.h"
	#include "Guider/FirstBoot/Gui_FirstBoot_Background.h"
	#include "Guider/FirstBoot/Gui_FirstBoot_Datetime.h"
	#include "Guider/FirstBoot/Gui_FirstBoot_Not_Network.h"
	#include "Guider/FirstBoot/Gui_FirstBoot_Network.h"
	#include "Guider/FirstBoot/Gui_FirstBoot_HomeController_scanHC.h"
	#include "Guider/FirstBoot/Gui_FirstBoot_HomeController_printHC.h"
	#include "Guider/FirstBoot/Gui_FirstBoot_HomeController_noHC.h"
	#include "Guider/FirstBoot/Gui_FirstBoot_HomeController_inputHC.h"
	#include "Guider/FirstBoot/Gui_FirstBoot_SetupDone.h"
	//--------------------------------------
	lv_obj_update_layout(ui->screen);
	events_init_screen(ui);
}
