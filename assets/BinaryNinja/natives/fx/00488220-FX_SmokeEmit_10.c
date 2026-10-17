// Original IGI.EXE function: FX_SmokeEmit_10 (VA 0x00488220; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit_10.h"
int32_t FX_SmokeEmit_10(void* context)

{
    void* dest_val = context;
    void** flagP = nullptr;
    void** item_10 = nullptr;
    int32_t* source_val = *(dest_val + 8);

    if (*source_val)
    {
        int32_t* item_18_1 = source_val;

        if (source_val)
        {
            while (true)
            {
                int32_t* item_14 = nullptr;
                uint32_t data_2 = Script_ParseEnumInt32_8();
                int32_t entity_1 = 0;
                entity_1 = source_val[7];
                int32_t data_6 = *(((data_2 * 0x180 + entity_1) << 2) + &g_a96ae0);

                if (data_6)
                    data_6(source_val, &item_14);

                if (!item_14)
                {
                label_48836e:
                    int32_t* data_20 = *source_val;

                    if (!data_20 || !*data_20)
                    {
                        int32_t* source_3 = source_val[5];
                        item_18_1 = source_3;

                        if (source_3[5] == dest_val)
                            break;

                        item_10 = item_10[5];
                    }
                    else
                        item_18_1 = data_20;
                }
                else
                {
                    void** data_8 = FX_DebrisSpawn_10(flagP, source_val);

                    if (!flagP)
                        *(dest_val + 0x7c) = data_8;

                    data_8[9] = item_14;
                    data_8[0xa] = Mem_Alloc(*item_14 << 2, 4);
                    int32_t* data_11 = data_8[9];
                    int32_t i = 0;

                    if (*data_11 > 0)
                    {
                        int32_t item_c_1 = 0;

                        do
                        {
                            void** source_2 = data_11[2] + item_c_1;
                            void* dest_2 = *source_2 + item_18_1;
                            char data_13 = Script_SpawnNewTask_9();
                            int32_t item_8;
                            Script_ParseEnumString_8(dest_2, source_2[1], data_13, &item_8);
                            int32_t data_14 = item_8;

                            if (data_14)
                            {
                                *(data_8[0xa] + (i << 2)) = Mem_Alloc(data_14, 4);
                                int32_t item_4 = *(data_8[0xa] + (i << 2));
                                char data_17 = Script_ParseEnumInt32_9();
                                Script_ParseEnumString_8(dest_2, source_2[1], data_17, &item_4);
                            }

                            data_11 = data_8[9];
                            i += 1;
                            item_c_1 += 0x10;
                        } while (i < *data_11);

                        dest_val = context;
                        source_val = item_18_1;
                    }

                    int32_t* data_19 = source_val[2];

                    if (!*data_19 || !data_19)
                        goto label_48836e;

                    item_18_1 = data_19;
                    item_10 = data_8;
                }

                if (!item_18_1)
                    break;

                source_val = item_18_1;
                flagP = item_10;
            }
        }
    }

    int32_t* entity_8 = *(dest_val + 8);
    int32_t data_22 = *entity_8;
    int32_t data_23 = -(data_22);
    return QTask_FindType((data_23 - data_23) & entity_8);
}
