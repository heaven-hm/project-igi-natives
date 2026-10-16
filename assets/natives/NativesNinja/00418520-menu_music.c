#include "00418520-menu_music.h"
/* 0x00418520 menu_music full linked: callers=1 callees=4 */
int32_t menu_music(void* a1)

{
    if (!*(a1 + 0x2838))
    {
        *(a1 + 0x2830) = sub_497450("menu_music");
        *(a1 + 0x2834) = sub_497410("menu_music");
        *(a1 + 0x283c) = 0x30;
        sub_4974a0(a1 + 0x2840);
    }

    return sub_4e6d60(a1 + 0x2830);
}
