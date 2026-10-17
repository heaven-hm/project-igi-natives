// Original IGI.EXE function: Menu_PlayMusic_15 (VA 0x00424E50; static CFG gate PASS, CFG score 1.000).
#include "Menu_PlayMusic_15.h"
int32_t Menu_PlayMusic_15(void* context, int32_t* param_2, int32_t* param_3, int32_t* param_4, int32_t* param_5)

{
    *param_2 = *(context + 0x24);
    *param_3 = *(context + 0x28);
    *param_4 = *(context + 0x3c);
    int32_t result = *(context + 0x38);
    *param_5 = result;
    return result;
}
