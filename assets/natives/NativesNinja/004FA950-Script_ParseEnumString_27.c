#include "004FA950-Script_ParseEnumString_27.h"
/* 0x004fa950 Script_ParseEnumString_27 full linked: callers=2 callees=6 */
uint32_t sub_4fa950(void* a1, int32_t a2)

{
    sub_4b17c0(*(a1 + 4));
    void var_104;
    Resource_Unpack(*(a1 + 4), &var_104, 2);
    int32_t var_103;
    uint32_t result_1 = var_103;
    sub_4b17c0(*(a1 + 4));
    Resource_Unpack(*(a1 + 4), (&var_103 + 1), result_1);
    uint32_t result = result_1;
    int32_t esi_1;
    int32_t edi_2;
    edi_2 = memcpy(a2, (&var_103 + 1), result_1 & 0xfffffffc);
    int32_t count = result & 3;
    result = 1;
    memcpy(edi_2, esi_1, count);
    return result;
}
