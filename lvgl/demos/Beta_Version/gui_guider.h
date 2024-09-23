/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"


typedef struct
{
	lv_obj_t *screen;
	bool screen_del;
	lv_obj_t *g_kb_screen;
	
    //First Boot
	lv_obj_t *screen_FirstBoot;

		//logo
		lv_obj_t *screen_FirstBoot_Logo;
		lv_obj_t *screen_FirstBoot_Logo_img;

		//Welcome
		lv_obj_t *screen_FirstBoot_Welcome;
		lv_obj_t *screen_FirstBoot_Welcome_Header;
		lv_obj_t *screen_FirstBoot_Welcome_btn_getstarted;
		lv_obj_t *screen_FirstBoot_Welcome_btn_getstarted_label;

		//Language
		lv_obj_t *screen_FirstBoot_Language;
		lv_obj_t *screen_FirstBoot_Language_Header;
		lv_obj_t *screen_FirstBoot_Language_btn_TiengViet;
		lv_obj_t *screen_FirstBoot_Language_btn_TiengViet_label;
		lv_obj_t *screen_FirstBoot_Language_btn_English;
		lv_obj_t *screen_FirstBoot_Language_btn_English_label;
		lv_obj_t *screen_FirstBoot_Language_btn_Previous;
		lv_obj_t *screen_FirstBoot_Language_btn_Previous_label;
		lv_obj_t *screen_FirstBoot_Language_btn_Next;
		lv_obj_t *screen_FirstBoot_Language_btn_Next_label;

		//Background
		lv_obj_t *screen_FirstBoot_Background;
		lv_obj_t *screen_FirstBoot_Background_tileview_Img;
		lv_obj_t *screen_FirstBoot_Background_tileview_Img_1;lv_obj_t *screen_FirstBoot_Background_img_1;
		lv_obj_t *screen_FirstBoot_Background_tileview_Img_2;lv_obj_t *screen_FirstBoot_Background_img_2;
		lv_obj_t *screen_FirstBoot_Background_tileview_Img_3;lv_obj_t *screen_FirstBoot_Background_img_3;
		lv_obj_t *screen_FirstBoot_Background_tileview_Img_4;lv_obj_t *screen_FirstBoot_Background_img_4;
		lv_obj_t *screen_FirstBoot_Background_tileview_Img_5;lv_obj_t *screen_FirstBoot_Background_img_5;

		lv_obj_t *screen_FirstBoot_Background_Header;
		lv_obj_t *screen_FirstBoot_Background_btn_Previous;
		lv_obj_t *screen_FirstBoot_Background_btn_Previous_label;
		lv_obj_t *screen_FirstBoot_Background_btn_Next;
		lv_obj_t *screen_FirstBoot_Background_btn_Next_label;

		//Date & Time
		//datetime
		lv_obj_t *screen_FirstBoot_DateTime;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_DateTime;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_DateTime_Header;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_DateTime_NameTimeZone;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_DateTime_Right;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_DateTime_sw_24hourse;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_24hourse;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_24hourse_label; 
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Timezone;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Timezone_label;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Previous;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Previous_label;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Next;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Next_label;
		//timezone
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone_Header;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone_tileview_gui;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone_tileview_gui_ch1;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_SaveTimeZone;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_SaveTimeZone_label;	
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_BangCok;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_BangCok_label;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HongKong;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HongKong_label;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HCM;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_HCM_label;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_Jarkata;
		lv_obj_t *screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_Jarkata_label;
		
		//Not Network
		lv_obj_t *screen_FirstBoot_NotNetwork;
		lv_obj_t *screen_FirstBoot_NotNetwork_Header;
		lv_obj_t *screen_FirstBoot_NotNetwork_label_Content;
		lv_obj_t *screen_FirstBoot_NotNetwork_btn_Next;
		lv_obj_t *screen_FirstBoot_NotNetwork_btn_Next_label;
		lv_obj_t *screen_FirstBoot_NotNetwork_btn_Previous;
		lv_obj_t *screen_FirstBoot_NotNetwork_btn_Previous_label;

		//Network
		lv_obj_t *screen_FirstBoot_Network;
		lv_obj_t *screen_FirstBoot_Network_btn_Previous;
		lv_obj_t *screen_FirstBoot_Network_btn_Previous_label;
		lv_obj_t *screen_FirstBoot_Network_btn_Next;
		lv_obj_t *screen_FirstBoot_Network_btn_Next_label;
		lv_obj_t *screen_FirstBoot_Network_btn_DHCP;
		lv_obj_t *screen_FirstBoot_Network_btn_DHCP_label;
		lv_obj_t *screen_FirstBoot_Network_Header;
		lv_obj_t *screen_FirstBoot_Network_sw_Check;
		lv_obj_t *screen_FirstBoot_Network_tileview;
		lv_obj_t *screen_FirstBoot_Network_tileview_item;
		lv_obj_t *screen_FirstBoot_Network_tileview_item_btn_IP;
		lv_obj_t *screen_FirstBoot_Network_tileview_item_btn_IP_label;
		lv_obj_t *screen_FirstBoot_Network_tileview_item_btn_GateWay;
		lv_obj_t *screen_FirstBoot_Network_tileview_item_btn_GateWay_label;
		lv_obj_t *screen_FirstBoot_Network_tileview_item_btn_Subnet;
		lv_obj_t *screen_FirstBoot_Network_tileview_item_btn_Subnet_label;
		lv_obj_t *screen_FirstBoot_Network_tileview_item_btn_DNS;
		lv_obj_t *screen_FirstBoot_Network_tileview_item_btn_DNS_label;
		lv_obj_t *screen_FirstBoot_Network_tileview_item_textarea_IP;
		lv_obj_t *screen_FirstBoot_Network_tileview_item_textarea_GateWay;
		lv_obj_t *screen_FirstBoot_Network_tileview_item_textarea_Subnet;
		lv_obj_t *screen_FirstBoot_Network_tileview_item_textarea_DNS;

		//HC(HomeController)
		//scan HC
		lv_obj_t *screen_FirstBoot_HomeController_scanHC;//obj_scanHC
		lv_obj_t *screen_FirstBoot_HomeController_scanHC_Header;
		lv_obj_t *screen_FirstBoot_HomeController_scanHC_label_FindingHC;
		lv_obj_t *screen_FirstBoot_HomeController_scanHC_btn_Previous;
		lv_obj_t *screen_FirstBoot_HomeController_scanHC_btn_Previous_label;
		lv_obj_t *screen_FirstBoot_HomeController_scanHC_btn_Next;
		lv_obj_t *screen_FirstBoot_HomeController_scanHC_btn_Next_label;
		lv_obj_t *screen_FirstBoot_HomeController_scanHC_btn_Addmanual;
		lv_obj_t *screen_FirstBoot_HomeController_scanHC_btn_Addmanual_label;
		lv_obj_t *screen_animimg_1;
		//

		//print HC
		lv_obj_t *screen_FirstBoot_HomeController_printHC;//obj_printHC
		lv_obj_t *screen_FirstBoot_HomeController_printHC_tileview;             
		lv_obj_t *screen_FirstBoot_HomeController_printHC_tileview_MAC;  
		lv_obj_t *screen_FirstBoot_HomeController_printHC_Header;
		lv_obj_t *screen_FirstBoot_HomeController_printHC_btn_Previous;
		lv_obj_t *screen_FirstBoot_HomeController_printHC_btn_Previous_label;
		lv_obj_t *screen_FirstBoot_HomeController_printHC_btn_Next;
		lv_obj_t *screen_FirstBoot_HomeController_printHC_btn_Next_label;
		lv_obj_t *screen_FirstBoot_HomeController_printHC_tileview_MAC_btn_MAC1;
		lv_obj_t *screen_FirstBoot_HomeController_printHC_tileview_MAC_btn_MAC1_label;
		lv_obj_t *screen_FirstBoot_HomeController_printHC_tileview_MAC_btn_MAC2;
		lv_obj_t *screen_FirstBoot_HomeController_printHC_tileview_MAC_btn_MAC2_label;
		lv_obj_t *screen_FirstBoot_HomeController_printHC_tileview_MAC_btn_MAC3;
		lv_obj_t *screen_FirstBoot_HomeController_printHC_tileview_MAC_btn_MAC3_label;
		lv_obj_t *screen_FirstBoot_HomeController_printHC_label_Refresh;
		lv_obj_t *screen_FirstBoot_HomeController_printHC_label_Addmanual;			
		lv_obj_t *screen_btn_34;
		lv_obj_t *screen_btn_34_label;
		lv_obj_t *screen_line_1;
		//

		//no HC
		lv_obj_t *screen_FirstBoot_HomeController_noHC;//obj_noHC
		lv_obj_t *screen_FirstBoot_HomeController_noHC_Header;
		lv_obj_t *screen_FirstBoot_HomeController_noHC_label_NoHCfound;
		lv_obj_t *screen_FirstBoot_HomeController_noHC_btn_Addmanual;
		lv_obj_t *screen_FirstBoot_HomeController_noHC_btn_Addmanual_label;
		lv_obj_t *screen_FirstBoot_HomeController_noHC_btn_Previous;
		lv_obj_t *screen_FirstBoot_HomeController_noHC_btn_Previous_label;
		lv_obj_t *screen_FirstBoot_HomeController_noHC_btn_Next;
		lv_obj_t *screen_FirstBoot_HomeController_noHC_btn_Next_label;	
		//

		//input HC
		lv_obj_t *screen_FirstBoot_HomeController_inputHC;//obj_inputHC
		lv_obj_t *screen_FirstBoot_HomeController_inputHC_Header;
		lv_obj_t *screen_FirstBoot_HomeController_inputHC_btn_LEFT;
		lv_obj_t *screen_FirstBoot_HomeController_inputHC_btn_LEFT_label;
		lv_obj_t *screen_FirstBoot_HomeController_inputHC_textarea_IP;
		lv_obj_t *screen_FirstBoot_HomeController_inputHC_btn_Done;
		lv_obj_t *screen_FirstBoot_HomeController_inputHC_btn_Done_label;
		//

		//Setup Done
		lv_obj_t *screen_FirstBoot_Setupdone;
		lv_obj_t *screen_FirstBoot_Setupdone_Header;
		lv_obj_t *screen_FirstBoot_Setupdone_label_Content;
		lv_obj_t *screen_FirstBoot_Setupdone_btn_Gotodashboard;
		lv_obj_t *screen_FirstBoot_Setupdone_btn_Gotodashboard_label;
	//




	//Setting
	lv_obj_t *screen_Setting;
		//Setting Menu
	    lv_obj_t *screen_Setting_Setting;
		lv_obj_t *screen_Setting_Setting_tileview;
		lv_obj_t *screen_Setting_Setting_tileview_item;
		lv_obj_t *screen_Setting_Setting_img_Frame;
		lv_obj_t *screen_Setting_Setting_Header;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_Network;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_Network_label;
		lv_obj_t *screen_Setting_Setting_tileview_item_img_Network;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_DateTime;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_DateTime_label;
		lv_obj_t *screen_Setting_Setting_tileview_item_img_DateTime;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_Language;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_Language_label;
		lv_obj_t *screen_Setting_Setting_tileview_item_img_Language;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_Brightnes;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_Brightnes_label;
		lv_obj_t *screen_Setting_Setting_tileview_item_img_Brightness;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_Sleep;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_Sleep_label;
		lv_obj_t *screen_Setting_Setting_tileview_item_img_Sleep;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_HomeController;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_HomeController_label;
		lv_obj_t *screen_Setting_Setting_tileview_item_img_HomeController;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_About;
		lv_obj_t *screen_Setting_Setting_tileview_item_btn_About_label;
		lv_obj_t *screen_Setting_Setting_tileview_item_img_About;


		//Not Network
		lv_obj_t *screen_Setting_NotNetwork;
		lv_obj_t *screen_Setting_NotNetwork_Header;
		lv_obj_t *screen_Setting_NotNetwork_label_Content;
		lv_obj_t *screen_Setting_NotNetwork_btn_Save;
		lv_obj_t *screen_Setting_NotNetwork_btn_Save_label;
		lv_obj_t *screen_Setting_NotNetwork_btn_LEFT;
		lv_obj_t *screen_Setting_NotNetwork_btn_LEFT_label;

		//Network
		lv_obj_t *screen_Setting_Network;
		lv_obj_t *screen_Setting_Network_tileview;
		lv_obj_t *screen_Setting_Network_tileview_item;
		lv_obj_t *screen_Setting_Network_tileview_item_btn_IP;
		lv_obj_t *screen_Setting_Network_tileview_item_btn_IP_label;
		lv_obj_t *screen_Setting_Network_tileview_item_btn_GateWay;
		lv_obj_t *screen_Setting_Network_tileview_item_btn_GateWay_label;
		lv_obj_t *screen_Setting_Network_tileview_item_btn_Subnet;
		lv_obj_t *screen_Setting_Network_tileview_item_btn_Subnet_label;
		lv_obj_t *screen_Setting_Network_tileview_item_btn_DNS;
		lv_obj_t *screen_Setting_Network_tileview_item_btn_DNS_label;
		lv_obj_t *screen_Setting_Network_tileview_item_btn_DHCP;
		lv_obj_t *screen_Setting_Network_tileview_item_btn_DHCP_label;
		lv_obj_t *screen_Setting_Network_tileview_item_btn_Save;
		lv_obj_t *screen_Setting_Network_tileview_item_btn_Save_label;
		lv_obj_t *screen_Setting_Network_tileview_item_textarea_IP;
		lv_obj_t *screen_Setting_Network_tileview_item_textarea_GateWay;
		lv_obj_t *screen_Setting_Network_tileview_item_textarea_Subnet;
		lv_obj_t *screen_Setting_Network_tileview_item_textarea_DNS;
		lv_obj_t *screen_Setting_Network_Header;
		lv_obj_t *screen_Setting_Network_tileview_item_sw_Check;
		lv_obj_t *screen_Setting_Network_tileview_item_btn_Return;//btn return
		lv_obj_t *screen_Setting_Network_tileview_item_btn_Return_label;

		//Datetime
		lv_obj_t *screen_Setting_DateTime ;
		lv_obj_t *screen_Setting_DateTime_tileview_item;

		//datetime
		lv_obj_t *screen_Setting_DateTime_tileview_item_datetime;
		lv_obj_t *screen_Setting_DateTime_tileview_item_datetime_btn_24hourse;
		lv_obj_t *screen_Setting_DateTime_tileview_item_datetime_btn_24hourse_label; 
		lv_obj_t *screen_Setting_DateTime_tileview_item_datetime_btn_TimeZone;
		lv_obj_t *screen_Setting_DateTime_tileview_item_datetime_btn_TimeZone_label;
		lv_obj_t *screen_Setting_DateTime_tileview_item_datetime_btn_Save;
		lv_obj_t *screen_Setting_DateTime_tileview_item_datetime_btn_Save_label;
		lv_obj_t *screen_Setting_DateTime_tileview_item_datetime_Header;
		lv_obj_t *screen_Setting_DateTime_tileview_item_datetime_NameTimeZone;
		lv_obj_t *screen_label_27;
		lv_obj_t *screen_Setting_DateTime_tileview_item_datetime_sw_Check;
		lv_obj_t *screen_Setting_DateTime_tileview_item_datetime_btn_Return;//btn return
		lv_obj_t *screen_Setting_DateTime_tileview_item_datetime_btn_Return_label;
		
		//timezone
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone;
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_tileview;
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_tileview_item;
        lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_Header;
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Hongkong;
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Hongkong_label;
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_HCM;
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_HCM_label;
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Jakata;
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Jakata_label;
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Bangkok;
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_tileview_item_btn_Bangkok_label;	
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_btn_Save;
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_btn_Save_label;
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_btn_Return;//btn return
		lv_obj_t *screen_Setting_DateTime_tileview_item_timezone_btn_Return_label;

		//Language
		lv_obj_t *screen_Setting_Language;
		lv_obj_t *screen_Setting_Language_Header;
		lv_obj_t *screen_Setting_Language_btn_TiengViet;
		lv_obj_t *screen_Setting_Language_btn_TiengViet_label;
		lv_obj_t *screen_Setting_Language_btn_English;
		lv_obj_t *screen_Setting_Language_btn_English_label;
		lv_obj_t *screen_Setting_Language_btn_Save;
		lv_obj_t *screen_Setting_Language_btn_Save_label;
		lv_obj_t *screen_Setting_Language_btn_Return;//btn return
		lv_obj_t *screen_Setting_Language_btn_Return_label;

		//Brightness
		lv_obj_t *screen_Setting_Brightness;
		lv_obj_t *screen_Setting_Brightness_Header;
		lv_obj_t *screen_Setting_Brightness_label_ValueBrightness;
		lv_obj_t *screen_Setting_Brightness_label_Symbol;
		lv_obj_t *screen_Setting_Brightness_btn_Save;
		lv_obj_t *screen_Setting_Brightness_btn_Save_label;
		lv_obj_t *screen_Setting_Brightness_slide_ValueBrightness;	
		lv_obj_t *screen_Setting_Brightness_btn_Return;//btn return
		lv_obj_t *screen_Setting_Brightness_btn_Return_label;
		lv_obj_t *screen_line_2;		
		lv_obj_t *screen_btn_67;
		lv_obj_t *screen_btn_67_label;		
		lv_obj_t *screen_label_31;

		//Sleep
		lv_obj_t *screen_Setting_Sleep;
		lv_obj_t *screen_Setting_Sleep_Header;
		lv_obj_t *screen_Setting_Sleep_btn_2minutes;
		lv_obj_t *screen_Setting_Sleep_btn_2minutes_label;
		lv_obj_t *screen_Setting_Sleep_btn_3minutes;
		lv_obj_t *screen_Setting_Sleep_btn_3minutes_label;
		lv_obj_t *screen_Setting_Sleep_btn_5minutes;
		lv_obj_t *screen_Setting_Sleep_btn_5minutes_label;
		lv_obj_t *screen_Setting_Sleep_btn_15minutes;
		lv_obj_t *screen_Setting_Sleep_btn_15minutes_label;
		lv_obj_t *screen_Setting_Sleep_btn_Save;
		lv_obj_t *screen_Setting_Sleep_btn_Save_label;
		lv_obj_t *screen_Setting_Sleep_btn_Return;//btn return
		lv_obj_t *screen_Setting_Sleep_btn_Return_label;

		//HomeController scan HC
		lv_obj_t *screen_Setting_HomeController_scanHC;
		lv_obj_t *screen_Setting_HomeController_scanHC_Header;
		lv_obj_t *screen_Setting_HomeController_scanHC_label_FindingHC;
		lv_obj_t *screen_Setting_HomeController_scanHC_btn_Addmanual;
		lv_obj_t *screen_Setting_HomeController_scanHC_btn_Addmanual_label;
		lv_obj_t *screen_Setting_HomeController_scanHC_btn_AddtoHC;
		lv_obj_t *screen_Setting_HomeController_scanHC_btn_AddtoHC_label;

		//HomeController print HC
		lv_obj_t *screen_Setting_HomeController_printHC;
		lv_obj_t *screen_Setting_HomeController_printHC_tileview;
		lv_obj_t *screen_Setting_HomeController_printHC_tileview_MAC;
		lv_obj_t *screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1;
		lv_obj_t *screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC1_label;
		lv_obj_t *screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2;
		lv_obj_t *screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC2_label;
		lv_obj_t *screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3;
		lv_obj_t *screen_Setting_HomeController_printHC_tileview_MAC_btn_MAC3_label;
		lv_obj_t *screen_Setting_HomeController_printHC_btn_AddtoHC;
		lv_obj_t *screen_Setting_HomeController_printHC_btn_AddtoHC_label;
		lv_obj_t *screen_Setting_HomeController_printHC_Header;
		lv_obj_t *screen_Setting_HomeController_printHC_label_Addmanual;
		lv_obj_t *screen_Setting_HomeController_printHC_label_Refresh;
		lv_obj_t *screen_btn_79;
		lv_obj_t *screen_btn_79_label;
		lv_obj_t *screen_line_3;

		//HomeController No HC
		lv_obj_t *screen_Setting_HomeController_NoHC;
		lv_obj_t *screen_Setting_HomeController_NoHC_Header;
		lv_obj_t *screen_Setting_HomeController_NoHC_label_NoHCfound;
		lv_obj_t *screen_Setting_HomeController_NoHC_btn_Addmanual;
		lv_obj_t *screen_Setting_HomeController_NoHC_btn_Addmanual_label;
		lv_obj_t *screen_Setting_HomeController_NoHC_btn_AddtoHC;
		lv_obj_t *screen_Setting_HomeController_NoHC_btn_AddtoHC_label;

		//HomeController InputHC
		lv_obj_t *screen_Setting_HomeController_InputHC;
		lv_obj_t *screen_Setting_HomeController_InputHC_textarea_InputIP;
		lv_obj_t *screen_Setting_HomeController_InputHC_Header;
		lv_obj_t *screen_Setting_HomeController_InputHC_btn_Done;
		lv_obj_t *screen_Setting_HomeController_InputHC_btn_Done_label;
		lv_obj_t *screen_Setting_HomeController_InputHC_btn_Return;//btn return
		lv_obj_t *screen_Setting_HomeController_InputHC_btn_Return_label;

		//About
		lv_obj_t *screen_Setting_About;
		lv_obj_t *screen_Setting_About_Header;
		lv_obj_t *screen_Setting_About_label_MAC;
		lv_obj_t *screen_Setting_About_label_Version;
		lv_obj_t *screen_Setting_About_label_Checkforupdate;
		lv_obj_t *screen_Setting_About_label_Reboot;
		lv_obj_t *screen_Setting_About_label_Resetfactory;
		lv_obj_t *screen_label_45;
		lv_obj_t *screen_line_4;
		lv_obj_t *screen_line_5;
		lv_obj_t *screen_btn_85;
		lv_obj_t *screen_btn_85_label;
		lv_obj_t *screen_btn_86;
		lv_obj_t *screen_btn_86_label;
		lv_obj_t *screen_btn_87;
		lv_obj_t *screen_btn_87_label;	
		lv_obj_t *screen_Setting_About_btn_Return;//btn return
		lv_obj_t *screen_Setting_About_btn_Return_label;		

}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);
void ui_init_style(lv_style_t * style);
void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);
void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_screen(lv_ui *ui);


//FirstBoot_IMG---------------------
LV_IMG_DECLARE(_Logo_Lumi);
LV_IMG_DECLARE(_background_1);
LV_IMG_DECLARE(_background_2);
LV_IMG_DECLARE(_background_3);
LV_IMG_DECLARE(_background_4);
LV_IMG_DECLARE(_background_5);
//-------------------------------




//Settings_IMG----------------------
#include "src/extra/widgets/animimg/lv_animimg.h"
LV_IMG_DECLARE(_Frame11439);
LV_IMG_DECLARE(_lan);
LV_IMG_DECLARE(_datetime);
LV_IMG_DECLARE(_language);
LV_IMG_DECLARE(_brightness_high);
LV_IMG_DECLARE(_nightlight);
LV_IMG_DECLARE(_home_controller);
LV_IMG_DECLARE(_info);
LV_IMG_DECLARE(screen_animimg_1load_0);
LV_IMG_DECLARE(screen_animimg_1load_1);
LV_IMG_DECLARE(screen_animimg_1load_2);
LV_IMG_DECLARE(screen_animimg_1load_3);
LV_IMG_DECLARE(screen_animimg_1load_4);
LV_IMG_DECLARE(screen_animimg_1load_5);
LV_IMG_DECLARE(screen_animimg_1load_6);
LV_IMG_DECLARE(screen_animimg_1load_7);
LV_IMG_DECLARE(screen_animimg_1load_8);
LV_IMG_DECLARE(screen_animimg_1load_9);
LV_IMG_DECLARE(screen_animimg_1load_10);
LV_IMG_DECLARE(screen_animimg_1load_11);
LV_IMG_DECLARE(screen_animimg_1load_12);
LV_IMG_DECLARE(screen_animimg_1load_13);
LV_IMG_DECLARE(screen_animimg_1load_14);
LV_IMG_DECLARE(screen_animimg_1load_15);
LV_IMG_DECLARE(screen_animimg_1load_16);
LV_IMG_DECLARE(screen_animimg_1load_17);
//---------------------------------


//FontText-----------------------------
LV_FONT_DECLARE(lv_font_montserrat_40)
LV_FONT_DECLARE(lv_font_montserrat_16)
LV_FONT_DECLARE(lv_font_montserrat_12)
LV_FONT_DECLARE(lv_font_montserrat_48)
LV_FONT_DECLARE(lv_font_montserrat_30)

//-------------------------------------

#ifdef __cplusplus
}
#endif
#endif
