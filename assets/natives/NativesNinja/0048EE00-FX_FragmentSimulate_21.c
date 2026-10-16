#include "0048EE00-FX_FragmentSimulate_21.h"
/* 0x0048ee00 FX_FragmentSimulate_21 full linked: callers=0 callees=14 */
int32_t sub_48ee00(int32_t a1, int32_t* a2)

{
    int32_t* ebp_1 = a2[0xa] + 8;
    void* eax_2 = Table_GetAt(*(a1 + 0x14) + 0x4c4, 0);
    int32_t var_24 = ebp_1[1];
    int32_t var_28 = *ebp_1;
    char* var_2c = "Fire At Task - %d, %d";
    int32_t var_30 = 0xffffffff;
    int32_t var_34 = a1;
    int32_t eax_4 = ebp_1[1];
    ebp_1[1] = eax_4 - 1;

    if (eax_4 < 0 || !eax_2)
        return sub_450ff0(a1, a2);

    int32_t var_8;
    sub_4f23d0(eax_2, &var_8);
    int32_t eax_5 = var_8;

    if (!eax_5)
    {
        eax_5 = ebp_1[4];

        if (eax_5)
        {
            *(a1 + 0x3c94) = 0x3f800000;
            return eax_5;
        }

        sub_4f2350(eax_2, 1);
        *(ebp_1 + 0x11) = 0;
    }

    int32_t ecx_1 = *ebp_1;
    void* eax_6 = sub_4f1030(ecx_1);
    void* esi_1 = eax_6;

    if (!esi_1)
    {
        int32_t var_1c_2 = *ebp_1;
        Warning_Show("HumanAI - FireAtTask, task id #%d not defined");
        return sub_450ff0(a1, a2);
    }

    eax_6 = g_548638;
    ecx_1 = *(esi_1 + 0x1c);

    if (!TaskType_IsDerivedFrom(ecx_1, eax_6))
    {
        Warning_Show("FireAtTask target not based on qobj tasktype");
        return sub_450ff0(a1, a2);
    }

    int32_t esi_3;
    int32_t edi_2;
    edi_2 = memcpy(a1 + 0x3e88, esi_1 + 0x20, 0x18);
    char eax_11;

    if (!*(ebp_1 + 0x11))
    {
        sub_48b9c0(ebp_1, esi_3, edi_2, a1, 0);
        *(ebp_1 + 0x11) = 1;
        eax_11 = *(ebp_1 + 0x11);
    }

    if (*(ebp_1 + 0x11) || eax_11)
    {
        int32_t eax_12 = ebp_1[3];

        if (eax_12 >= 0)
        {
            ebp_1[3] = eax_12 - 1;
            return eax_12 - 1;
        }

        eax_11 = sub_48d8e0(ebp_1, esi_3, edi_2, a1);

        if (eax_11)
        {
            int32_t edx_2 = ebp_1[2];
            *(ebp_1 + 0x11) = 0;
            ebp_1[3] = edx_2;
        }
    }

    return eax_11;
}
