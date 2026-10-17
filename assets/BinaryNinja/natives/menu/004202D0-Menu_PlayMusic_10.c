// Original IGI.EXE function: Menu_PlayMusic_10 (VA 0x004202D0; static CFG gate PASS, CFG score 1.000).
#include "Menu_PlayMusic_10.h"
int32_t Menu_PlayMusic_10(int32_t context, int32_t param_2)

{
    int32_t result = *(context + 0x248);

    if (result)
        *(context + 0xa0) = (param_2 + 0.5f) / result;

    return result;
}
