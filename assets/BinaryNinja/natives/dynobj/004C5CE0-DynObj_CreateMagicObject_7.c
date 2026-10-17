// IGI native provenance: DynObj_CreateMagicObject_7 - 0x004C5CE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C5CE0-DynObj_CreateMagicObject_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_CreateMagicObject_7.h"
int32_t DynObj_CreateMagicObject_7(int32_t* context)

{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    int32_t* source_val = context;
    void* data_val = source_val[0x370];

    if (data_val)
    {
        Sys_ExecuteBytecode_2(data_val);
        source_val[0x370] = 0;
    }

    void* data_1 = source_val[0x371];

    if (data_1)
    {
        Sys_ExecuteBytecode_2(data_1);
        source_val[0x371] = 0;
    }

    void* data_2 = source_val[0x36f];

    if (data_2)
    {
        Terrain_SampleHeightmap_5(data_2);
        source_val[0x36f] = 0;
    }

    int32_t* data_3 = source_val[0x37d];

    if (data_3)
    {
        Sys_PopStack_21(data_3);
        Sys_ExecuteBytecode_2(source_val[0x37d]);
        source_val[0x37d] = 0;
    }

    if (source_val[0x373])
    {
        void* flagP1 = nullptr;

        for (int32_t* i = nullptr; i < 0xc00; )
        {
            void* data_5 = *(i + source_val[0x373]);

            if (data_5 && !*(flagP1 + 0xb81a20))
            {
                Sys_ExecuteBytecode_2(data_5);
                *(i + source_val[0x373]) = 0;
            }

            i = &i[3];
            flagP1 += 1;
        }
    }

    if (source_val[0x374])
    {
        void* flagP2 = nullptr;

        for (int32_t* i_1 = nullptr; i_1 < 0xc00; )
        {
            void* data_7 = *(i_1 + source_val[0x374]);

            if (data_7 && !*(flagP2 + 0xb81920))
            {
                Sys_ExecuteBytecode_2(data_7);
                *(i_1 + source_val[0x374]) = 0;
            }

            i_1 = &i_1[3];
            flagP2 += 1;
        }
    }

    int32_t data_8 = source_val[2];

    if (data_8)
        Resource_Flush(data_8);

    int32_t data_9 = source_val[3];

    if (data_9)
    {
        Resource_Flush(data_9);
        Render_SetupLighting_3();
    }

    int32_t data_10 = source_val[1];

    if (data_10)
        Resource_Flush(data_10);

    int32_t data_11 = source_val[0x373];

    if (data_11)
        Resource_Flush(data_11);

    int32_t data_12 = source_val[0x374];

    if (data_12)
        Resource_Flush(data_12);

    for (int32_t* i_2 = &g_b81b28; i_2 < 0xb97b28; i_2 = &i_2[0xb])
    {
        if (i_2[-1])
            Struct_Clear36(i_2);
    }

    int32_t* flagP3 = &source_val[4];
    int32_t item_4 = 6;
    context = flagP3;
    bool flag_1_1;

    do
    {
        int32_t* data_13 = *(*flagP3 + 0x3c);

        if (data_13)
            DynCubeObj_Action(data_13);

        int32_t* dest_1 = source_val[0x345];
        int32_t temp_3 = *(dest_1 + *flagP3);
        int32_t data_16 = source_val[0x342] - 1;
        source_val[0x342] = data_16;

        if (temp_3 != data_16)
        {
            int32_t entity_3 = source_val[0x341];
            int32_t flagP4 = *(entity_3 + (temp_3 << 2));
            int32_t data_19 = *(entity_3 + (data_16 << 2)) * source_val[0x344] + source_val[0x340];
            int32_t dest_2 = *(dest_1 + data_19);
            *(entity_3 + (temp_3 << 2)) = *(entity_3 + (dest_2 << 2));
            *(source_val[0x341] + (dest_2 << 2)) = flagP4;
            flagP3 = context;
            *(source_val[0x345] + data_19) = temp_3;
        }

        flagP3 = &flagP3[1];
        flag_1_1 = item_4 != 1;
        context = flagP3;
        item_4 -= 1;
    } while (flag_1_1);
    Sys_OpenFileStream_2(&source_val[0x340]);
    return Sys_ExecuteBytecode_2(source_val);
}
