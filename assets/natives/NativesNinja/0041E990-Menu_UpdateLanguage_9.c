#include "0041E990-Menu_UpdateLanguage_9.h"
/* 0x0041e990 Menu_UpdateLanguage_9 full linked: callers=3 callees=0 */
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
