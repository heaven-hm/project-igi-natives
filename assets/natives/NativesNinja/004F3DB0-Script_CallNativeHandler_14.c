#include "004F3DB0-Script_CallNativeHandler_14.h"
/* 0x004f3db0 Script_CallNativeHandler_14 full linked: callers=0 callees=3 */
int32_t* sub_4f3db0(void* a1, int32_t* a2)

{
    void* eax_1 = sub_4f1030(*(a1 + 0x2014c));
    int32_t* result = a2;
    int32_t esi = *result;
    int32_t var_4 = result[1];
    int32_t var_8 = esi;
    var_8 = esi + 0xe8;
    memcpy(a1 + 0x6c, esi, 0xe8);
    *(a1 + 0x20154) = result[1];

    if (eax_1)
    {
        uint32_t eax_3 = sub_4f4130();
        int32_t ecx_2 = 0;
        ecx_2 = *(eax_1 + 0x1c);
        result = *(((eax_3 * 0x180 + ecx_2) << 2) + &g_a96ae0);

        if (result)
            return result(eax_1, &var_8);
    }

    return result;
}
