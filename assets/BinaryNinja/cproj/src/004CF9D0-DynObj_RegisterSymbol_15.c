#include "gi_platform.h"
#include "004CF9D0-DynObj_RegisterSymbol_15.h"
int32_t* DynObj_RegisterSymbol_15(int32_t* a1)

{
    Camera_ApplyHandiCam_33(a1);
    int32_t i = 0;

    if (a1[0x11] > 0)
    {
        void* ctxB1 = nullptr;

        do
        {
            Sys_PopStack_21(ctxB1 + a1[0xf]);
            i += 1;
            ctxB1 += 0xc;
        } while (i < a1[0x11]);
    }

    void* valA4 = a1[0xf];

    if (valA4)
    {
        Sys_ExecuteBytecode_2(valA4);
        a1[0xf] = 0;
    }

    int32_t i_1 = 0;

    if (a1[0x10] > 0)
    {
        void* dstD = nullptr;

        do
        {
            int32_t objC1 = a1[0xe];

            if ((*(int32_t*)(uintptr_t)(dstD + objC1 + 4)))
                Sys_PopStack_21(dstD + objC1);

            i_1 += 1;
            dstD += 0xc;
        } while (i_1 < a1[0x10]);
    }

    void* valA8 = a1[0xe];

    if (valA8)
    {
        Sys_ExecuteBytecode_2(valA8);
        a1[0xe] = 0;
    }

    int32_t i_10 = a1[0x10];

    if (i_10 - 1 >= 0)
    {
        int32_t i_8 = i_10;
        int32_t dstD2 = (i_10 - 1) * 0x24;
        int32_t i_2;

        do
        {
            Struct_Clear36(dstD2 + a1[0xd]);
            dstD2 -= 0x24;
            i_2 = i_8;
            i_8 -= 1;
        } while (i_2 != 1);
    }

    void* valA10 = a1[0xd];

    if (valA10)
    {
        Sys_ExecuteBytecode_2(valA10);
        a1[0xd] = 0;
    }

    int32_t* i_6 = a1[9];

    for (int32_t* i_3 = i_6[1]; i_3; i_3 = i_3[1])
    {
        DynObj_InsertHashItem_15(i_6);
        i_6 = i_3;
    }

    int32_t* i_7 = a1[6];

    for (int32_t* i_4 = i_7[1]; i_4; i_4 = i_4[1])
    {
        DynObj_FindSymbol_15(i_7);
        i_7 = i_4;
    }

    int32_t* i_9 = a1[0xc];

    for (int32_t* i_5 = i_9[1]; i_5; i_5 = i_5[1])
    {
        Camera_ApplyHandiCam_33(i_9);
        Sys_ExecuteBytecode_2(i_9);
        i_9 = i_5;
    }

    Resource_Flush(a1[3]);

    if (!a1[0x12])
        Resource_Flush(a1[2]);

    Sys_ExecuteBytecode_2(a1);
    return DynObj_FindSymbol_14();
}
