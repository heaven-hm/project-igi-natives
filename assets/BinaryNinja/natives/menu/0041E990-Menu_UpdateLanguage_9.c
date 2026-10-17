// Original IGI.EXE function: Menu_UpdateLanguage_9 (VA 0x0041E990; static CFG gate PASS, CFG score 1.000).
#include "Menu_UpdateLanguage_9.h"
int32_t* Menu_UpdateLanguage_9(void* a1)

{
    int32_t i_1 = 0x40;
    int32_t* result = a1 + 0xe0;
    int32_t i;

    do
    {
        result[1] = 0;
        *result = 0;
        result = &result[0xb];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(a1 + 0xbe0) = 0;
    *(a1 + 0xbe4) = 0;
    *(a1 + 0xbe8) = 0;
    return result;
}
