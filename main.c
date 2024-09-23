// /*
//  * test.c
//  */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include "src/core/lv_obj.h"
#include "sstar_port.h"
#include "src/widgets/lv_label.h"
#include "src/core/lv_disp.h"
#include "src/misc/lv_style.h"
#include "lv_demos.h"
#include <sys/time.h>
#include "music/lv_demo_music.h"
#include "Beta_Version/gui_guider.h" 



#define PATH_IMAGE	"/customer/"


void *tick_thread(void * data)
{
    (void)data;

    while(1) {
        usleep(1000);
        lv_tick_inc(1); /*Tell LittelvGL that 5 milliseconds were elapsed*/
    }

    return 0;
}

unsigned int _GetTime0()
{
    struct timespec ts;
    unsigned int ms;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    ms = (ts.tv_sec * 1000) + (ts.tv_nsec / 1000000);
    if(ms == 0)
    {
        ms = 1;
    }
    return ms;
}

lv_style_t  style;
lv_ui guider_ui;

int main(int argc, char *argv[])
{
	char test_path[1024] = { 0 };
    pthread_t pt;
    if (0 != sstar_lv_init()) {
        printf("ERR: sstar_lv_init failed.\n");
        return -1;
    }

    if (0 == strcmp(argv[1], "music")) {
        lv_demo_music();
    }else if(0 == strcmp(argv[1], "beta")){
        ui_init_style(&style);
        init_scr_del_flag(&guider_ui);
        setup_ui(&guider_ui);
    }
    pthread_create(&pt, NULL, tick_thread, NULL);
    while(1) {
        unsigned int curr = _GetTime0();
        lv_task_handler();
        unsigned int time_diff = _GetTime0() - curr;
        if (time_diff < 10) {
            usleep(( 10 - time_diff ) * 1000);
        }
    }
    pthread_join(pt, NULL);

    sstar_lv_deinit();
    return 0;
}
