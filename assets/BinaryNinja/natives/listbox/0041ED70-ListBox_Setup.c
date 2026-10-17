// Original IGI.EXE function: ListBox_Setup (VA 0x0041ED70; static CFG gate PASS, CFG score 0.926).
#include "ListBox_Setup.h"
int32_t ListBox_Setup(void* a1)

{
    void* srcS = *(a1 + 0xd4);
    void* dstD = *(a1 + 0xd8);
    long double x87_r7_1 = (Menu_FormatScreen_4(*(a1 + 0x44)) - 8) * 0.125f;
    long double f0 = 0f;
    x87_r7_1 - f0;
    float v_8c_1;

    v_8c_1 = *(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0f : x87_r7_1;

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(a1);
    int32_t tmpD = *(srcS + 0x28);
    int32_t valA8 = *(a1 + 0x20) + 2;
    int32_t objC3 = *(a1 + 0x24) + 2;
    *(srcS + 0x20) = valA8;
    *(srcS + 0x24) = objC3;
    int32_t valA9 = *(a1 + 0xbec);
    *(dstD + 0x24) = objC3;
    *(dstD + 0x20) = tmpD + valA8 + valA9 + 2;
    void* srcS1 = *(a1 + 0xd4);
    int32_t valA10 = StatusScreen_GetEvent();
    int32_t objC4 = 0;
    objC4 = *(srcS1 + 0x1c);
    (*(((valA10 * 0x180 + objC4) << 2) + &g_a96ae0))(srcS1);
    void* srcS2 = *(a1 + 0xd8);
    int32_t valA15 = StatusScreen_GetEvent();
    int32_t valA16 = 0;
    valA16 = *(srcS2 + 0x1c);
    (*(((valA15 * 0x180 + valA16) << 2) + &g_a96ae0))(srcS2);

    if (*(a1 + 0xbe0))
    {
        int32_t* ctxB3 = *(a1 + 0xbf4);

        if (ctxB3)
        {
            int32_t valA21 = Sys_PopStack_18(*(*ctxB3 + 8), a1 + *(a1 + 0xbe4) * 0x2c + 0xe4);
            int32_t valA22 = *(a1 + 0xbe4);
            char (* valA27)[0x80];

            if (valA21 <= *(a1 + 0xbec) - 4)
                valA27 = a1 + valA22 * 0x2c + 0xe4;
            else
            {
                int32_t i = 0xffffffff;
                void* dstD1 = a1 + valA22 * 0x2c + 0xe4;

                while (i)
                {
                    bool cond_1_1 = 0 != *dstD1;
                    dstD1 += 1;
                    i -= 1;

                    if (!cond_1_1)
                        break;
                }

                int32_t objC9 = ~i;
                char v_80[0x80];
                int32_t srcS4;
                int32_t dstD3;
                dstD3 = memcpy(&v_80, dstD1 - objC9, objC9 & 0xfffffffc);
                memcpy(dstD3, srcS4, objC9 & 3);
                char (* dstD4)[0x80] = &v_80;
                int32_t i_1 = 0xffffffff;

                while (i_1)
                {
                    bool cond_2_1 = 0 != *dstD4;
                    dstD4 = &(*dstD4)[1];
                    i_1 -= 1;

                    if (!cond_2_1)
                        break;
                }

                int32_t objC13 = ~i_1;
                int32_t i_5 = objC13 - 1;

                if (objC13 != 1)
                {
                    int32_t i_2;

                    do
                    {
                        if (Sys_PopStack_18(*(*ctxB3 + 8), &v_80) <= *(a1 + 0xbec) - 0xc)
                            break;

                        i_2 = i_5;
                        i_5 -= 1;
                        v_80[i_5] = 0;
                    } while (i_2 != 1);
                }

                void* dstD5 = &g_53b6b8;
                int32_t i_3 = 0xffffffff;

                while (i_3)
                {
                    bool cond_4_1 = 0 != *dstD5;
                    dstD5 += 1;
                    i_3 -= 1;

                    if (!cond_4_1)
                        break;
                }

                int32_t objC17 = ~i_3;
                char (* dstD7)[0x80] = &v_80;
                int32_t i_4 = 0xffffffff;

                while (i_4)
                {
                    bool cond_5_1 = 0 != *dstD7;
                    dstD7 = &(*dstD7)[1];
                    i_4 -= 1;

                    if (!cond_5_1)
                        break;
                }

                int32_t srcS6;
                int32_t dstD9;
                dstD9 = memcpy(dstD7 - 1, dstD5 - objC17, objC17 & 0xfffffffc);
                valA27 = &v_80;
                memcpy(dstD9, srcS6, objC17 & 3);
            }

            Sys_FreeMemory_18(ctxB3, valA27);
            int32_t valA28 = Sys_AllocateMemory_22(ctxB3);
            int32_t valA30;
            int32_t tmpD12;
            tmpD12 = HIGHD(*(a1 + 0x2c) - valA28);
            valA30 = LOWD(*(a1 + 0x2c) - valA28);
            int32_t dstD10 = ((valA30 - tmpD12) >> 1) + *(a1 + 0x24) + 1;
            int32_t valA33 = Sys_CheckHeap_21(ctxB3);
            int32_t valA35;
            int32_t tmpD14;
            tmpD14 = HIGHD(*(a1 + 0x28) - valA33);
            valA35 = LOWD(*(a1 + 0x28) - valA33);
            int32_t valA37 = ((valA35 - tmpD14) >> 1) + *(a1 + 0x20) + (g_c28b44 >> 1) - 0x140;
            int32_t objC29 = g_c28b48 >> 1;
            ctxB3[5] = 0;
            ctxB3[7] = 0;
            ctxB3[1] = valA37;
            int32_t tmpD19 = ctxB3[9] | 0x80000;
            ctxB3[6] = 0x43000000;
            ctxB3[9] = tmpD19;
            ctxB3[2] = dstD10 + objC29 - 0xf0;
            ctxB3[4] = v_8c_1;
            Sys_CloseFileStream_18(ctxB3);
        }
    }

    return Menu_DrawWidget_14(a1, 0.5f, v_8c_1, *(a1 + 0x4d));
}
