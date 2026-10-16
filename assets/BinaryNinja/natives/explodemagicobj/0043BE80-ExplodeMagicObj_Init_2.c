#include "ExplodeMagicObj_Init_2.h"

int32_t* ExplodeMagicObj_Init_2(float pThis, int32_t* param)

{
    DynObj_QtasklistIsFull(Level_InitTextures_4(), pThis);
    void* eax_2 = DynObj_Missing(*param);

    if (eax_2)
    {
        __builtin_memcpy(pThis + 0xf0, &param[8], 0x18);
        __builtin_memcpy(pThis + 0x108, &param[0x18], 0x28);
        DynObj_LookupHashItem_6(param[1], pThis, eax_2);
        long double x87_r7 = *(pThis + 0x9c);
        long double x87_r6 = *(pThis + 0xa0);
        x87_r6 - x87_r7;
        long double x87_r7_1;

        if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_1 = *(pThis + 0xa0);
        else
            x87_r7_1 = *(pThis + 0x9c);

        long double x87_r6_1 = *(pThis + 0x98);
        x87_r6_1 - x87_r7_1;
        long double x87_r7_3;

        if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_4 = *(pThis + 0x9c);
            long double x87_r6_2 = *(pThis + 0xa0);
            x87_r6_2 - x87_r7_4;

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = *(pThis + 0xa0);
            else
                x87_r7_3 = *(pThis + 0x9c);
        }
        else
            x87_r7_3 = *(pThis + 0x98);

        long double x87_r7_6 = Render_ComputeNormals(*(pThis + 0x6c)) * x87_r7_3;
        DynObj_LinkDynamicCube_8(param[1], pThis, &param[2], x87_r7_6, 2);
        __builtin_memcpy(pThis + 0x70, &param[0xe], 0x28);
        void* eax_6 = param[0x23];
        *(pThis + 0x13c) = 0;
        *(pThis + 0x138) = eax_6;
        int32_t ecx_2 = *(eax_6 + 0x10);
        *(pThis + 0x148) = 0;
        *(pThis + 0x140) = ecx_2;
        *(pThis + 0x144) = *(eax_6 + 0x1c);
        int32_t ebx_1 = param[0x22];
        *(pThis + 0x130) = ebx_1;
        return Car_GunCreate(pThis, pThis, ebx_1);
    }

    int32_t __saved_esi_1 = *param;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
