#include "004F2B90-EditRigidObj_Update.h"
/* 0x004f2b90 EditRigidObj_Update full linked: callers=1 callees=11 */
float* sub_4f2b90(float a1)

{
    uint32_t ebx = a1;
    *(ebx + 0xa8) = *(ebx + 0x140);
    *(ebx + 0xac) = *(ebx + 0x144);
    *(ebx + 0xb0) = *(ebx + 0x148);
    *(ebx + 0xb4) = *(ebx + 0x14c);
    *(ebx + 0xb8) = *(ebx + 0x150);
    *(ebx + 0xbc) = *(ebx + 0x154);
    memcpy(ebx + 0x70, ebx + 0x108, 0x28);
    void* eax_4 = sub_4cec10(ebx + 0x130);

    if (eax_4)
        sub_4c48d0(ebx, eax_4);

    long double x87_r7 = *(ebx + 0x9c);
    long double x87_r6 = *(ebx + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(ebx + 0xa0);
    else
        x87_r7_1 = *(ebx + 0x9c);

    long double x87_r6_1 = *(ebx + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(ebx + 0x9c);
        long double x87_r6_2 = *(ebx + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(ebx + 0xa0);
        else
            x87_r7_3 = *(ebx + 0x9c);
    }
    else
        x87_r7_3 = *(ebx + 0x98);

    long double x87_r7_6 = sub_4d0950(*(ebx + 0x6c)) * x87_r7_3;
    sub_4c6940(*(ebx + 0x68), ebx, ebx + 0xf0, x87_r7_6);
    sub_4dcf00(*(ebx + 0x68), ebx, ebx + 0xf0);
    int32_t* eax_7 = *(ebx + 0xe8);

    if (eax_7)
        QTask_FindType(eax_7);

    struct status_msg* eax_8 = sub_4e0930(nullptr, ebx);
    *(ebx + 0xe8) = eax_8;
    sub_4c4950(eax_8, ebx, ebx);
    int32_t* i = *(*(ebx + 0xe8) + 8);

    if (*i && i)
    {
        int32_t ecx_4 = g_afa7e0;

        do
        {
            int32_t* edx_5 = *i;
            void* eax_13;

            if (!edx_5)
                eax_13 = nullptr;
            else
            {
                int32_t eax_10 = *edx_5;
                int32_t eax_11 = -(eax_10);
                eax_13 = (eax_11 - eax_11) & edx_5;
            }

            *((ecx_4 << 2) + &g_afa6e0) = eax_13;
            g_afa7e0 = ecx_4 + 1;
            uint32_t eax_15 = sub_4f1a70();
            int32_t edx_6 = 0;
            edx_6 = i[7];
            int32_t eax_16 = *(((eax_15 * 0x180 + edx_6) << 2) + &g_a96ae0);

            if (eax_16)
                eax_16(i, 0);

            ecx_4 = g_afa7e0 - 1;
            g_afa7e0 = ecx_4;
            i = *((ecx_4 << 2) + &g_afa6e0);
        } while (i);
    }

    return sub_4f2d50(ebx);
}
