// Original IGI.EXE function: Menu_PlayMusic_15 (VA 0x00424E50; static CFG gate PASS, CFG score 1.000).
#include "Menu_PlayMusic_15.h"
int32_t Menu_PlayMusic_15(void* a1, int32_t* a2, int32_t* a3, int32_t* a4, int32_t* a5)

{
    *a2 = *(a1 + 0x24);
    *a3 = *(a1 + 0x28);
    *a4 = *(a1 + 0x3c);
    int32_t result = *(a1 + 0x38);
    *a5 = result;
    return result;
}
