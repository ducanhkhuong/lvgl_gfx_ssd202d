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

char * english_texts[] = {
    //FirstBoot
        //Language
        "Language",
        "Next",
        "Previous",
        //Background
        "Background",
        "Next",
        "Previous",
        //Date&Time
        "Date&Time",
        "Next",
        "Previous",
        "    24-hours time",
        "    Timezone",
        //TimeZone
        "Timezone",
        "Save",
        //NotNetwork
        "Network",
        "Next",
        "Previous",
        "Not connected.\nPlug in your\nethernet cable.  ",
        //Network
        "Network",
        "Next",
        "Previous",
        //ScanHC
        "Add to HC",
        "Next",
        "Previous",
        "Add manual",
        "Finding HC",
        //PrintHC
        "Add to HC",
        "Next",
        "Previous",
        "Add manual",
        "Refresh",
        //NoHC
        "Add to HC",
        "Next",
        "Previous",
        "Add manual",
        "    No HC found     ",
        //InputHC
        "Enter HC IP Address",
        "Done",    
        //Setup Done
        "Setup Done",
        "Switch panel\nsetup complete.",
        "Go to dashboard",
    //end

    //Settings
        //Setting
        "Settings",
        "       Network",
        "       Date&Time",
        "       Language",
        "       Brightness",
        "       Sleep",
        "       Home Controller",
        "       About",
        //Not Network
        "Network",
        "Save",
        "Not connected.\nPlug in your\nethernet cable.  ",
        //Network
        "Network",
        "Save",
        //Date&Time
        "Date&Time",
        "Save",
        "    24-hours time",
        "    Timezone",
        //TimeZone
        "Timezone",
        "Save",
        //Language
        "Language",
        "Save",
        //Brightness
        "Brightness",
        "Save",
        "Brightness",
        //Sleep
        "Sleep",
        "Save",
        "2 minutes",
        "3 minutes",
        "5 minutes",
        "15 minutes",
        //Homecontroller Scan
        "Home Controller",
        "Add to HC",
        "Add manual",
        "Finding HC",
        //Homecontroller Print
        "Home Controller",
        "Add to HC",
        "Add manual",
        "Refresh",
        //Homecontroller NoHC
        "Home Controller",
        "Add to HC",
        "Add manual",
        "    No HC found",
        //Homecontroller InputHC
        "Enter HC IP Address",
        "Done",
        //About    
        "About",
        "Check for update",
        "Version",
        "Reset factory",
        "Reboot"
    //end    
};

char *vietnamese_texts[] = {
    //FisrtBoot
        //Language
        "Ngôn Ngữ",
        "Tiếp",
        "Trước",
        //Background
        "Hình Nền",
        "Tiếp",
        "Trước",
        //Date&Time
        "Ngày&Giờ",
        "Tiếp",
        "Trước",
        "    Thời gian 24 giờ",
        "    Múi Giờ",
        //TimeZone
        "Múi Giờ",
        "Lưu",
        //NotNetwork
        "Mạng",
        "Tiếp",
        "Trước",
        "Chưa kết nối.\nHãy cắm cáp\nethernet của bạn.  ",
        //Network
        "Mạng",
        "Tiếp",
        "Trước",
        //ScanHC
        "Thêm HC",
        "Tiếp",
        "Trước",
        "Thêm hướng dẫn",
        "Tìm HC",
        //PrintHC
        "Thêm HC",
        "Tiếp",
        "Trước",
        "Thêm hướng dẫn",
        "Tải lại",
        //NoHC
        "Thêm HC",
        "Tiếp",
        "Trước",
        "Thêm hướng dẫn",
        " Không tìm thấy HC      ",
        //InputHC
        "Nhập địa chỉ IP HC",
        "Xong",    
        //Setup Done
        "Thiết lập xong",
        "Quá trình thiết lập đã hoàn tất.",
        "Đến bảng điều khiển",
    //end

    //Settings
        //Setting
        "Thiết lập",
        "       Mạng",
        "       Ngày&Giờ",
        "       Ngôn Ngữ",
        "       Độ Sáng",
        "       Ngủ",
        "       Điều Khiển Nhà",
        "       Khác",
        //NotNetwork
        "Mạng",
        "Lưu",
        "Chưa kết nối.\nHãy cắm cáp\nethernet của bạn.  ",
        //Network
        "Mạng",
        "Lưu",
        //Date&Time
        "Ngày&Giờ",
        "Lưu",
        "    Thời gian 24 giờ",
        "    Múi Giờ",
        //TimeZone
        "Múi Giờ",
        "Lưu",
        //Language
        "Ngôn Ngữ",
        "Lưu",
        //Brightness
        "Độ Sáng",
        "Lưu",
        "Độ Sáng",
        //Sleep
        "Ngủ",
        "Lưu",
        "2 phút",
        "3 phút",
        "5 phút",
        "15 phút",
        //Homecontroller Scan
        "Điều Khiển Nhà",
        "Thêm HC",
        "Thêm hướng dẫn",
        "Tìm HC",
        //Homecontroller Print
        "Điều Khiển Nhà",
        "Thêm HC",
        "Thêm hướng dẫn",
        "Tải lại",
        //Homecontroller NoHC
        "Điều Khiển Nhà",
        "Thêm HC",
        "Thêm hướng dẫn",
        " Không tìm thấy HC      ",
        //Homecontroller InputHC
        "Nhập địa chỉ IP HC",
        "Xong",
        //About    
        "Khác",
        "Kiểm tra cập nhật",
        "Phiên bản",
        "Reset factory",
        "Khởi động lại",
    //end    

};

static lv_obj_t *labels[89];

void config_label(){
    //FirstBoot
        //Language
        labels[0] = guider_ui.screen_FirstBoot_Language_Header;
        labels[1] = guider_ui.screen_FirstBoot_Language_btn_Next_label;
        labels[2] = guider_ui.screen_FirstBoot_Language_btn_Previous_label;
        //Background
        labels[3] = guider_ui.screen_FirstBoot_Background_Header;
        labels[4] = guider_ui.screen_FirstBoot_Background_btn_Next_label;
        labels[5] = guider_ui.screen_FirstBoot_Background_btn_Previous_label;
        //Date&Time
        labels[6] = guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_Header;
        labels[7] = guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Next_label;
        labels[8] = guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Previous_label;
        labels[9] = guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_24hourse_label;
        labels[10] =guider_ui.screen_FirstBoot_DateTime_tileview_gui_DateTime_btn_Timezone_label;
        //TimeZone
        labels[11] =guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_Header;
        labels[12] =guider_ui.screen_FirstBoot_DateTime_tileview_gui_TimeZone_btn_SaveTimeZone_label;
        //NotNetwork
        labels[13] =guider_ui.screen_FirstBoot_NotNetwork_Header;
        labels[14] =guider_ui.screen_FirstBoot_NotNetwork_btn_Next_label;
        labels[15] =guider_ui.screen_FirstBoot_NotNetwork_btn_Previous_label;
        labels[16] =guider_ui.screen_FirstBoot_NotNetwork_label_Content;
        //Network
        labels[17] =guider_ui.screen_FirstBoot_Network_Header;
        labels[18] =guider_ui.screen_FirstBoot_Network_btn_Next_label;
        labels[19] =guider_ui.screen_FirstBoot_Network_btn_Previous_label;
        //ScanHC
        labels[20] =guider_ui.screen_FirstBoot_HomeController_scanHC_Header;
        labels[21] =guider_ui.screen_FirstBoot_HomeController_scanHC_btn_Next_label;
        labels[22] =guider_ui.screen_FirstBoot_HomeController_scanHC_btn_Previous_label;
        labels[23] =guider_ui.screen_FirstBoot_HomeController_scanHC_btn_Addmanual_label;
        labels[24] =guider_ui.screen_FirstBoot_HomeController_scanHC_label_FindingHC;
        //PrintHC
        labels[25] =guider_ui.screen_FirstBoot_HomeController_printHC_Header;
        labels[26] =guider_ui.screen_FirstBoot_HomeController_printHC_btn_Next_label;
        labels[27] =guider_ui.screen_FirstBoot_HomeController_printHC_btn_Previous_label;
        labels[28] =guider_ui.screen_FirstBoot_HomeController_printHC_label_Addmanual;
        labels[29] =guider_ui.screen_FirstBoot_HomeController_printHC_label_Refresh;
        //NoHC
        labels[30] =guider_ui.screen_FirstBoot_HomeController_noHC_Header;
        labels[31] =guider_ui.screen_FirstBoot_HomeController_noHC_btn_Next_label;
        labels[32] =guider_ui.screen_FirstBoot_HomeController_noHC_btn_Previous_label;
        labels[33] =guider_ui.screen_FirstBoot_HomeController_noHC_btn_Addmanual_label;
        labels[34] =guider_ui.screen_FirstBoot_HomeController_noHC_label_NoHCfound;
        //InputHC
        labels[35] =guider_ui.screen_FirstBoot_HomeController_inputHC_Header;
        labels[36] =guider_ui.screen_FirstBoot_HomeController_inputHC_btn_Done_label;
        //SetupDone
        labels[37] =guider_ui.screen_FirstBoot_Setupdone_Header;
        labels[38] =guider_ui.screen_FirstBoot_Setupdone_label_Content;
        labels[39] =guider_ui.screen_FirstBoot_Setupdone_btn_Gotodashboard_label;
    //

    //Device
    
    //end

    //Settings
        //Setting
        labels[40] =guider_ui.screen_Setting_Setting_Header;
        labels[41] =guider_ui.screen_Setting_Setting_tileview_item_btn_Network_label;
        labels[42] =guider_ui.screen_Setting_Setting_tileview_item_btn_DateTime_label;
        labels[43] =guider_ui.screen_Setting_Setting_tileview_item_btn_Language_label;
        labels[44] =guider_ui.screen_Setting_Setting_tileview_item_btn_Brightnes_label;
        labels[45] =guider_ui.screen_Setting_Setting_tileview_item_btn_Sleep_label;
        labels[46] =guider_ui.screen_Setting_Setting_tileview_item_btn_HomeController_label;
        labels[47] =guider_ui.screen_Setting_Setting_tileview_item_btn_About_label;
        //NotNetwork
        labels[48] =guider_ui.screen_Setting_NotNetwork_Header;
        labels[49] =guider_ui.screen_Setting_NotNetwork_btn_Save_label;
        labels[50] =guider_ui.screen_Setting_NotNetwork_label_Content;
        //Network
        labels[51] =guider_ui.screen_Setting_Network_Header;
        labels[52] =guider_ui.screen_Setting_Network_tileview_item_btn_Save_label;
        //Date&Time
        labels[53] =guider_ui.screen_Setting_DateTime_tileview_item_datetime_Header;
        labels[54] =guider_ui.screen_Setting_DateTime_tileview_item_datetime_btn_Save_label;
        labels[55] =guider_ui.screen_Setting_DateTime_tileview_item_datetime_btn_24hourse_label;
        labels[56] =guider_ui.screen_Setting_DateTime_tileview_item_datetime_btn_TimeZone_label;
        //TimeZone
        labels[57] =guider_ui.screen_Setting_DateTime_tileview_item_timezone_Header;
        labels[58] =guider_ui.screen_Setting_DateTime_tileview_item_timezone_btn_Save_label;
        //Language
        labels[59] =guider_ui.screen_Setting_Language_Header;
        labels[60] =guider_ui.screen_Setting_Language_btn_Save_label;
        //Brightness
        labels[61] =guider_ui.screen_Setting_Brightness_Header;
        labels[62] =guider_ui.screen_Setting_Brightness_btn_Save_label;
        labels[63] =guider_ui.screen_label_31;
        //Sleep
        labels[64] =guider_ui.screen_Setting_Sleep_Header;
        labels[65] =guider_ui.screen_Setting_Sleep_btn_Save_label;
        labels[66] =guider_ui.screen_Setting_Sleep_btn_2minutes_label;
        labels[67] =guider_ui.screen_Setting_Sleep_btn_3minutes_label;
        labels[68] =guider_ui.screen_Setting_Sleep_btn_5minutes_label;
        labels[69] =guider_ui.screen_Setting_Sleep_btn_15minutes_label;
        //Homecontroller Scan
        labels[70] =guider_ui.screen_Setting_HomeController_scanHC_Header;
        labels[71] =guider_ui.screen_Setting_HomeController_scanHC_btn_AddtoHC_label;
        labels[72] =guider_ui.screen_Setting_HomeController_scanHC_btn_Addmanual_label;
        labels[73] =guider_ui.screen_Setting_HomeController_scanHC_label_FindingHC;
        //Homecontroller Print
        labels[74] =guider_ui.screen_Setting_HomeController_printHC_Header;
        labels[75] =guider_ui.screen_Setting_HomeController_printHC_btn_AddtoHC_label;
        labels[76] =guider_ui.screen_Setting_HomeController_printHC_label_Addmanual;
        labels[77] =guider_ui.screen_Setting_HomeController_printHC_label_Refresh;
        //Homecontroller NoHC
        labels[78] =guider_ui.screen_Setting_HomeController_NoHC_Header;
        labels[79] =guider_ui.screen_Setting_HomeController_NoHC_btn_AddtoHC_label;
        labels[80] =guider_ui.screen_Setting_HomeController_NoHC_btn_Addmanual_label;
        labels[81] =guider_ui.screen_Setting_HomeController_NoHC_label_NoHCfound;
        //Homecontroller InputHC
        labels[82] =guider_ui.screen_Setting_HomeController_InputHC_Header;
        labels[83] =guider_ui.screen_Setting_HomeController_InputHC_btn_Done_label;
        //About
        labels[84] =guider_ui.screen_Setting_About_Header;
        labels[85] =guider_ui.screen_Setting_About_label_Checkforupdate;
        labels[86] =guider_ui.screen_label_45;
        labels[87] =guider_ui.screen_Setting_About_label_Resetfactory;
        labels[88] =guider_ui.screen_Setting_About_label_Reboot;
    //end    
}


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


static void screen_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);

    switch (code)
    {
    case LV_EVENT_SCREEN_LOADED:
    {   
        //Config
        config_label();
        //
        
        //FirstBoot
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
            Event_FirstBoot_SetupDone();
        //

        //Settings
            Event_Settings_Setting();
            Event_Settings_Network();
            Event_Settings_DateTime();
            Event_Settings_Language();
            Event_Settings_Brightness();
            Event_Settings_Sleep();
            // Event_Settings_HomeController_ScanHC();
            // Event_Settings_HomeController_PrintHC();
            // Event_Settings_HomeController_InputHC();
            // Event_Settings_HomeController_NoHC();
            Event_Settings_About();
        //
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
