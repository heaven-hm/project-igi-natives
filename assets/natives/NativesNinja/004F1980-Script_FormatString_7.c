#include "004F1980-Script_FormatString_7.h"
/* 0x004f1980 Script_FormatString_7 full linked: callers=19 callees=3 */
int32_t* sub_4f1980(int32_t* a1, int32_t a2)

{
    int32_t* result = sub_4f1950(*a1 + a2);
    int32_t ecx_1 = *a1 << 4;
    int32_t esi_1;
    int32_t edi_1;
    edi_1 = memcpy(result[2], a1[2], ecx_1 & 0xfffffffc);
    memcpy(edi_1, esi_1, ecx_1 & 3);
    *result = *a1;
    return result;
}
