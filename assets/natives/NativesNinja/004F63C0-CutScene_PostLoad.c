#include "004F63C0-CutScene_PostLoad.h"
/* 0x004f63c0 CutScene_PostLoad full linked: callers=0 callees=6 */
int32_t sub_4f63c0(void* a1, char* a2)

{
    long double x87_r7 = *(a1 + 0x74);
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1)
        *(a1 + 0x74) = 0;

    long double x87_r7_1 = *(a1 + 0x78);
    long double temp1 = 0f;
    x87_r7_1 - temp1;

    if (*(&((x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1 ? 1 : 0) << 0xe) + 1) & 1)
        *(a1 + 0x78) = 0;

    *(a1 + 0x64) = g_a76c54 * *(a1 + 0x68);

    if (!a2 || !*a2)
    {
        int32_t* i = *(a1 + 8);

        if (*i && i)
        {
            int32_t ecx_1 = g_afa7e0;

            do
            {
                int32_t* edx_1 = *i;
                void* eax_6;

                if (!edx_1)
                    eax_6 = nullptr;
                else
                {
                    int32_t eax_3 = *edx_1;
                    int32_t eax_4 = -(eax_3);
                    eax_6 = (eax_4 - eax_4) & edx_1;
                }

                *((ecx_1 << 2) + &g_afa6e0) = eax_6;
                g_afa7e0 = ecx_1 + 1;
                uint32_t eax_8 = sub_4f1a70();
                int32_t edx_2 = 0;
                edx_2 = i[7];
                int32_t eax_9 = *(((eax_8 * 0x180 + edx_2) << 2) + &g_a96ae0);

                if (eax_9)
                    eax_9(i, 0);

                ecx_1 = g_afa7e0 - 1;
                g_afa7e0 = ecx_1;
                i = *((ecx_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    sub_4f1400(a1 + 0x7c, a1);
    sub_4f1400(a1 + 0xcc, a1);
    sub_4f1400(a1 + 0x11c, a1);
    sub_4f1400(a1 + 0x16c, a1);
    sub_4f1400(a1 + 0x1bc, a1);
    return 0;
}
