// IGI native provenance: DynObj_RegisterSymbol_15 - 0x004CF9D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CF9D0-DynObj_RegisterSymbol_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RegisterSymbol_15.h"
int32_t* DynObj_RegisterSymbol_15(int32_t* context)

{
    Camera_ApplyHandiCam_33(context);
    int32_t i = 0;

    if (context[0x11] > 0)
    {
        void* context_1 = nullptr;

        do
        {
            Sys_PopStack_21(context_1 + context[0xf]);
            i += 1;
            context_1 += 0xc;
        } while (i < context[0x11]);
    }

    void* data_4 = context[0xf];

    if (data_4)
    {
        Sys_ExecuteBytecode_2(data_4);
        context[0xf] = 0;
    }

    int32_t i_1 = 0;

    if (context[0x10] > 0)
    {
        void* dest_val = nullptr;

        do
        {
            int32_t entity_1 = context[0xe];

            if (*(dest_val + entity_1 + 4))
                Sys_PopStack_21(dest_val + entity_1);

            i_1 += 1;
            dest_val += 0xc;
        } while (i_1 < context[0x10]);
    }

    void* data_8 = context[0xe];

    if (data_8)
    {
        Sys_ExecuteBytecode_2(data_8);
        context[0xe] = 0;
    }

    int32_t i_10 = context[0x10];

    if (i_10 - 1 >= 0)
    {
        int32_t i_8 = i_10;
        int32_t dest_2 = (i_10 - 1) * 0x24;
        int32_t i_2;

        do
        {
            Struct_Clear36(dest_2 + context[0xd]);
            dest_2 -= 0x24;
            i_2 = i_8;
            i_8 -= 1;
        } while (i_2 != 1);
    }

    void* data_10 = context[0xd];

    if (data_10)
    {
        Sys_ExecuteBytecode_2(data_10);
        context[0xd] = 0;
    }

    int32_t* i_6 = context[9];

    for (int32_t* i_3 = i_6[1]; i_3; i_3 = i_3[1])
    {
        DynObj_InsertHashItem_15(i_6);
        i_6 = i_3;
    }

    int32_t* i_7 = context[6];

    for (int32_t* i_4 = i_7[1]; i_4; i_4 = i_4[1])
    {
        DynObj_FindSymbol_15(i_7);
        i_7 = i_4;
    }

    int32_t* i_9 = context[0xc];

    for (int32_t* i_5 = i_9[1]; i_5; i_5 = i_5[1])
    {
        Camera_ApplyHandiCam_33(i_9);
        Sys_ExecuteBytecode_2(i_9);
        i_9 = i_5;
    }

    Resource_Flush(context[3]);

    if (!context[0x12])
        Resource_Flush(context[2]);

    Sys_ExecuteBytecode_2(context);
    return DynObj_FindSymbol_14();
}
