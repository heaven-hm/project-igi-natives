// Original IGI.EXE function: DynObj_ParseConfigFile_7 (VA 0x004C5F00; static CFG gate PASS, CFG score 0.857).
#include "DynObj_ParseConfigFile_7.h"
int32_t DynObj_ParseConfigFile_7(void* a1, int32_t a2)

{
    int32_t i = 0xffffffff;
    int32_t dstD = a2;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC = ~i;
    int32_t srcS1;
    int32_t dstD2;
    dstD2 = memcpy(0xb97c20, dstD - objC, objC & 0xfffffffc);
    memcpy(dstD2, srcS1, objC & 3);
    int32_t dstD3 = a2;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD3;
        dstD3 += 1;
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t objC4 = ~i_1;
    void v_480;
    int32_t srcS3;
    int32_t dstD5;
    dstD5 = memcpy(&v_480, dstD3 - objC4, objC4 & 0xfffffffc);
    memcpy(dstD5, srcS3, objC4 & 3);
    char* dstD6 = ".tex";
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond_2_1 = 0 != *dstD6;
        dstD6 = &dstD6[1];
        i_2 -= 1;

        if (!cond_2_1)
            break;
    }

    int32_t objC8 = ~i_2;
    void* dstD8 = &v_480;
    int32_t i_3 = 0xffffffff;

    while (i_3)
    {
        bool cond_3_1 = 0 != *dstD8;
        dstD8 += 1;
        i_3 -= 1;

        if (!cond_3_1)
            break;
    }

    int32_t srcS5;
    int32_t dstD10;
    dstD10 = memcpy(dstD8 - 1, dstD6 - objC8, objC8 & 0xfffffffc);

    if (Sys_PushStack_8(memcpy(dstD10, srcS5, objC8 & 3)) > 1)
        Sys_ExecuteBytecode_8(0);

    int32_t* valA3;
    int32_t objC14;
    valA3 = Terrain_TextureFileNotOfRequ(&v_480);
    *(a1 + 0xdbc) = valA3;

    if (Sys_PushStack_8(objC14) > 1)
        Sys_ExecuteBytecode_8(0xffffffff);

    int32_t i_4 = 0;
    void v_400;
    void* objC15 = &v_400;

    do
    {
        objC15 += 4;
        *(objC15 - 4) = i_4 << 0x10;
        i_4 += 1;
    } while (i_4 < 0x100);

    int32_t* valA5 = Mem_Alloc(0xc, 4);
    *(a1 + 0xdf4) = valA5;
    Sys_PushStack_21(valA5, &v_400, 1);
    int32_t result = FX_FragmentSimulate_25();

    if (result)
    {
        int32_t i_5 = 0xffffffff;
        int32_t dstD11 = a2;

        while (i_5)
        {
            bool cond_4_1 = 0 != *dstD11;
            dstD11 += 1;
            i_5 -= 1;

            if (!cond_4_1)
                break;
        }

        int32_t objC16 = ~i_5;
        int32_t srcS7;
        int32_t dstD13;
        dstD13 = memcpy(&v_480, dstD11 - objC16, objC16 & 0xfffffffc);
        memcpy(dstD13, srcS7, objC16 & 3);
        char* dstD14 = ".lmp";
        int32_t i_6 = 0xffffffff;

        while (i_6)
        {
            bool cond_5_1 = 0 != *dstD14;
            dstD14 = &dstD14[1];
            i_6 -= 1;

            if (!cond_5_1)
                break;
        }

        int32_t objC20 = ~i_6;
        void* dstD16 = &v_480;
        int32_t i_7 = 0xffffffff;

        while (i_7)
        {
            bool cond_6_1 = 0 != *dstD16;
            dstD16 += 1;
            i_7 -= 1;

            if (!cond_6_1)
                break;
        }

        int32_t srcS9;
        int32_t dstD18;
        dstD18 = memcpy(dstD16 - 1, dstD14 - objC20, objC20 & 0xfffffffc);
        memcpy(dstD18, srcS9, objC20 & 3);
        void* dstD19 = &v_480;
        int32_t i_8 = 0xffffffff;

        while (i_8)
        {
            bool cond_7_1 = 0 != *dstD19;
            dstD19 += 1;
            i_8 -= 1;

            if (!cond_7_1)
                break;
        }

        int32_t objC25 = ~i_8;
        int32_t srcS11;
        int32_t dstD22;
        dstD22 = memcpy(a1 + 0xe00, dstD19 - objC25, objC25 & 0xfffffffc);
        memcpy(dstD22, srcS11, objC25 & 3);
        void* objC29;
        result = Sys_AllocateMemory_16(&v_480);

        if (result)
        {
            void* v_49c_1 = &v_480;
            int32_t v_484;
            int32_t* valA9;
            int32_t objC30;
            valA9 = Resource_Load(&v_480, &v_484, objC29, &v_484);
            int32_t* dstD23 = valA9;
            *(a1 + 0xdf8) = dstD23;

            if (dstD23)
            {
                int32_t flagP2 = 0;

                if (v_484 > 0)
                {
                    int32_t* ctxB2 = &g_b81b20;

                    do
                    {
                        int32_t srcS12 = *dstD23;

                        if (srcS12)
                        {
                            if (Sys_PushStack_8(objC30) > 1)
                                Sys_ExecuteBytecode_8(1);

                            int32_t valA13;
                            valA13 = Sys_PushStack_8(Sys_FreeMemory_8(&ctxB2[2], *(a1 + 0xdf4), srcS12,
                                srcS12, srcS12, 1, 0, 0x20000000, &dstD23[1]));

                            if (valA13 > 1)
                                objC30 = Sys_ExecuteBytecode_8(0xffffffff);

                            *ctxB2 = srcS12;
                            ctxB2[1] = &dstD23[1];
                        }

                        ctxB2 = &ctxB2[0xb];
                        int32_t valA15 = srcS12 * srcS12;
                        dstD23 = &dstD23[1] + valA15;
                        flagP2 = flagP2 + 4 + valA15;
                    } while (flagP2 < v_484);
                }
            }

            return Resource_Unload(&v_480);
        }
    }

    return result;
}
