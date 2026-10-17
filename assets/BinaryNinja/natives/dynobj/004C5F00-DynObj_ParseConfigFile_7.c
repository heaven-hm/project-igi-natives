// Original IGI.EXE function: DynObj_ParseConfigFile_7 (VA 0x004C5F00; static CFG gate PASS, CFG score 0.857).
#include "DynObj_ParseConfigFile_7.h"
int32_t DynObj_ParseConfigFile_7(void* context, int32_t param_2)

{
    int32_t i = 0xffffffff;
    int32_t dest_val = param_2;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_val = ~i;
    int32_t source_1;
    int32_t dest_2;
    dest_2 = memcpy(0xb97c20, dest_val - entity_val, entity_val & 0xfffffffc);
    memcpy(dest_2, source_1, entity_val & 3);
    int32_t dest_3 = param_2;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool flag_1_1 = 0 != *dest_3;
        dest_3 += 1;
        i_1 -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t entity_4 = ~i_1;
    void item_480;
    int32_t source_3;
    int32_t dest_5;
    dest_5 = memcpy(&item_480, dest_3 - entity_4, entity_4 & 0xfffffffc);
    memcpy(dest_5, source_3, entity_4 & 3);
    char* dest_6 = ".tex";
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool flag_2_1 = 0 != *dest_6;
        dest_6 = &dest_6[1];
        i_2 -= 1;

        if (!flag_2_1)
            break;
    }

    int32_t entity_8 = ~i_2;
    void* dest_8 = &item_480;
    int32_t i_3 = 0xffffffff;

    while (i_3)
    {
        bool flag_3_1 = 0 != *dest_8;
        dest_8 += 1;
        i_3 -= 1;

        if (!flag_3_1)
            break;
    }

    int32_t source_5;
    int32_t dest_10;
    dest_10 = memcpy(dest_8 - 1, dest_6 - entity_8, entity_8 & 0xfffffffc);

    if (Sys_PushStack_8(memcpy(dest_10, source_5, entity_8 & 3)) > 1)
        Sys_ExecuteBytecode_8(0);

    int32_t* data_3;
    int32_t entity_14;
    data_3 = Terrain_TextureFileNotOfRequ(&item_480);
    *(context + 0xdbc) = data_3;

    if (Sys_PushStack_8(entity_14) > 1)
        Sys_ExecuteBytecode_8(0xffffffff);

    int32_t i_4 = 0;
    void item_400;
    void* entity_15 = &item_400;

    do
    {
        entity_15 += 4;
        *(entity_15 - 4) = i_4 << 0x10;
        i_4 += 1;
    } while (i_4 < 0x100);

    int32_t* data_5 = Mem_Alloc(0xc, 4);
    *(context + 0xdf4) = data_5;
    Sys_PushStack_21(data_5, &item_400, 1);
    int32_t result = FX_FragmentSimulate_25();

    if (result)
    {
        int32_t i_5 = 0xffffffff;
        int32_t dest_11 = param_2;

        while (i_5)
        {
            bool flag_4_1 = 0 != *dest_11;
            dest_11 += 1;
            i_5 -= 1;

            if (!flag_4_1)
                break;
        }

        int32_t entity_16 = ~i_5;
        int32_t source_7;
        int32_t dest_13;
        dest_13 = memcpy(&item_480, dest_11 - entity_16, entity_16 & 0xfffffffc);
        memcpy(dest_13, source_7, entity_16 & 3);
        char* dest_14 = ".lmp";
        int32_t i_6 = 0xffffffff;

        while (i_6)
        {
            bool flag_5_1 = 0 != *dest_14;
            dest_14 = &dest_14[1];
            i_6 -= 1;

            if (!flag_5_1)
                break;
        }

        int32_t entity_20 = ~i_6;
        void* dest_16 = &item_480;
        int32_t i_7 = 0xffffffff;

        while (i_7)
        {
            bool flag_6_1 = 0 != *dest_16;
            dest_16 += 1;
            i_7 -= 1;

            if (!flag_6_1)
                break;
        }

        int32_t source_9;
        int32_t dest_18;
        dest_18 = memcpy(dest_16 - 1, dest_14 - entity_20, entity_20 & 0xfffffffc);
        memcpy(dest_18, source_9, entity_20 & 3);
        void* dest_19 = &item_480;
        int32_t i_8 = 0xffffffff;

        while (i_8)
        {
            bool flag_7_1 = 0 != *dest_19;
            dest_19 += 1;
            i_8 -= 1;

            if (!flag_7_1)
                break;
        }

        int32_t entity_25 = ~i_8;
        int32_t source_11;
        int32_t dest_22;
        dest_22 = memcpy(context + 0xe00, dest_19 - entity_25, entity_25 & 0xfffffffc);
        memcpy(dest_22, source_11, entity_25 & 3);
        void* entity_29;
        result = Sys_AllocateMemory_16(&item_480);

        if (result)
        {
            void* item_49c_1 = &item_480;
            int32_t item_484;
            int32_t* data_9;
            int32_t entity_30;
            data_9 = Resource_Load(&item_480, &item_484, entity_29, &item_484);
            int32_t* dest_23 = data_9;
            *(context + 0xdf8) = dest_23;

            if (dest_23)
            {
                int32_t flagP2 = 0;

                if (item_484 > 0)
                {
                    int32_t* context_2 = &g_b81b20;

                    do
                    {
                        int32_t source_12 = *dest_23;

                        if (source_12)
                        {
                            if (Sys_PushStack_8(entity_30) > 1)
                                Sys_ExecuteBytecode_8(1);

                            int32_t data_13;
                            data_13 = Sys_PushStack_8(Sys_FreeMemory_8(&context_2[2], *(context + 0xdf4), source_12,
                                source_12, source_12, 1, 0, 0x20000000, &dest_23[1]));

                            if (data_13 > 1)
                                entity_30 = Sys_ExecuteBytecode_8(0xffffffff);

                            *context_2 = source_12;
                            context_2[1] = &dest_23[1];
                        }

                        context_2 = &context_2[0xb];
                        int32_t data_15 = source_12 * source_12;
                        dest_23 = &dest_23[1] + data_15;
                        flagP2 = flagP2 + 4 + data_15;
                    } while (flagP2 < item_484);
                }
            }

            return Resource_Unload(&item_480);
        }
    }

    return result;
}
