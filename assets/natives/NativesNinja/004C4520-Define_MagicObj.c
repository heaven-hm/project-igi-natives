#include "004C4520-Define_MagicObj.h"
/* 0x004c4520 Define_MagicObj full linked: callers=0 callees=5 */
int32_t Define_MagicObj(int32_t a1, float a2 @ 0xc)

// Sig: void Define_MagicObj(...)
// Note: Defines a MAGIC OBJECT type during magicobj definition parsing (pairs
// with the MAGICOBJ\ folder data). Parser-context only.
{
    int32_t eax_1 = g_a4433c * 0x28;
    float edi = a2;
    *(eax_1 + &g_b97e24) = 0;
    char* var_24 = 0x10;
    int32_t var_2c = 0;
    float var_30 = edi;
    sub_4b8a80(var_30, var_2c, eax_1 + &g_b97e00, var_24);
    sub_4b8a80(edi, 1, g_a4433c * 0x28 + &g_b97e10, 0x10);
    int32_t esi_1 = g_a4433c * 0x28;
    *(esi_1 + 0xb97e20) = sub_4b8a20(edi, 2);
    int32_t eax_6 = 0;
    eax_6 = g_547f3d;
    int32_t ecx_1 = 0;
    *(esi_1 + &g_b97e24) = 0;
    ecx_1 = *(esi_1 + 0xb97e20);
    int32_t eax_10 = *(((eax_6 * 0x180 + ecx_1) << 2) + &g_a96ae0);
    void* var_18;

    if (eax_10)
    {
        eax_10(0, &a2);
        int32_t var_2c_1 = 4;
        var_30 = a2;
        void* eax_12 = Mem_Alloc(var_30, var_2c_1);
        int32_t ecx_2 = g_a4433c;
        var_18 = eax_12;
        int32_t edx_1 = 0;
        float var_14_1 = edi;
        int32_t var_10_1 = 3;
        int32_t ecx_4 = ecx_2 * 0x28;
        *(ecx_4 + &g_b97e24) = eax_12;
        edx_1 = *(ecx_4 + 0xb97e20);
        (*(((edx_1 + *g_547f3c * 0x180) << 2) + &g_a96ae0))(0, &var_18, var_30);
    }

    g_a4433c += 1;
    var_18 = 1;
    int32_t var_10_2 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
