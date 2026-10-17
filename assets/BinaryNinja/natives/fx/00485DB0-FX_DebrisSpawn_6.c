// Original IGI.EXE function: FX_DebrisSpawn_6 (VA 0x00485DB0; static CFG gate PASS, CFG score 0.852).
#include "FX_DebrisSpawn_6.h"
❓  char* __stdcall FX_DebrisSpawn_6(int32_t a1 @ 0x281c, int32_t a2, float a3)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x2818);
    void* valA = FX_Font4Fnt(a1, a2);
    char* flagP = nullptr;
    void* arg_c = 3;
    int32_t arg_4 = 0;
    void* srcS1 = a1 + a2 * 0x102c + 0x20;
    void* arg_10 = srcS1;
    char* valA6 = *(srcS1 + 0xc);
    char* ctxB = srcS1 + 0x2c;
    char* dstD1 = ctxB;
    *valA6 = 0;
    *(&__return_addr + 3) = *valA6;
    int32_t arg_8 = srcS1 + 0x10;
    bool cond_0_1;

    do
    {
        Sys_FreeMemory_18(*arg_8, &g_567c74);
        cond_0_1 = arg_c != 1;
        arg_8 += 4;
        arg_c -= 1;
    } while (cond_0_1);
    char valA11 = *ctxB;
    *(&__return_addr + 2) = valA11;
    int32_t valA17;

    if (!valA11)
    {
    label_485f0e:
        valA17 = arg_4;
    }
    else
    {
        void arg_18;
        arg_c = &arg_18;

        while (true)
        {
            valA17 = arg_4;

            if (valA17 >= 9)
                break;

            *ctxB = 0;
            long double x87_r7_1 = Sys_PopStack_18(valA, dstD1);
            long double f1_1 = a3;
            x87_r7_1 - f1_1;
            void* valA14;

            valA14 = !(*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) || *(&__return_addr + 2) == 0xa ? 1
                : nullptr;

            *ctxB = *(&__return_addr + 2);

            if (valA14)
            {
                if (!flagP)
                    flagP = &ctxB[0xffffffff];

                char tmpD4 = *flagP;
                int32_t i = 0xffffffff;
                *flagP = 0;

                while (i)
                {
                    bool cond_4_1 = 0 != *dstD1;
                    dstD1 = &dstD1[1];
                    i -= 1;

                    if (!cond_4_1)
                        break;
                }

                *(&__return_addr + 2) = tmpD4;
                int32_t objC6 = ~i;
                int32_t srcS3;
                int32_t dstD4;
                dstD4 = memcpy(arg_c, dstD1 - objC6, objC6 & 0xfffffffc);
                memcpy(dstD4, srcS3, objC6 & 3);
                srcS1 = arg_10;
                *flagP = *(&__return_addr + 2);
                dstD1 = &flagP[1];
                arg_4 += 1;
                arg_c += 0x400;
            }

            if (*ctxB == 0x20)
                flagP = ctxB;

            char valA16 = ctxB[1];
            ctxB = &ctxB[1];
            *(&__return_addr + 2) = valA16;

            if (!valA16)
                goto label_485f0e;
        }
    }

    int32_t saved_dst;

    if (ctxB != dstD1)
    {
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_2_1 = 0 != *dstD1;
            dstD1 = &dstD1[1];
            i_1 -= 1;

            if (!cond_2_1)
                break;
        }

        int32_t objC12 = ~i_1;
        int32_t srcS5;
        int32_t dstD7;
        dstD7 = memcpy(&(&saved_dst)[valA17 * 0x100 + 0xa], dstD1 - objC12,
            objC12 & 0xfffffffc);
        valA17 = arg_4 + 1;
        memcpy(dstD7, srcS5, objC12 & 3);
        srcS1 = arg_10;
        arg_4 = valA17;
    }

    int32_t objC16;

    objC16 = valA17 <= 3 ? 0 : valA17 - 3;

    if (objC16 >= valA17)
    {
        char* valA24 = *(srcS1 + 0xc);
        *valA24 = *(&__return_addr + 3);
        return valA24;
    }

    int32_t* ctxB1 = srcS1 + 0x10;
    char* dstD8 = &(&saved_dst)[objC16 * 0x100 + 0xa];
    int32_t i_3 = valA17 - objC16;
    void* valA23;
    int32_t i_2;

    do
    {
        valA23 = Sys_FreeMemory_18(*ctxB1, dstD8);
        dstD8 = &dstD8[0x400];
        ctxB1 = &ctxB1[1];
        i_2 = i_3;
        i_3 -= 1;
    } while (i_2 != 1);
    **(srcS1 + 0xc) = *(&__return_addr + 3);
    return valA23;
}
