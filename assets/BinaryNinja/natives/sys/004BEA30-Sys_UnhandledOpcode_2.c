// Original IGI.EXE function: Sys_UnhandledOpcode_2 (VA 0x004BEA30; static CFG gate PASS, CFG score 0.933).
#include "Sys_UnhandledOpcode_2.h"
char* Sys_UnhandledOpcode_2(int32_t* context)

{
    int32_t* source_val = context;
    char* data_1 = *source_val + source_val[5];
    int32_t entity_1 = 0;
    entity_1 = *data_1;
    uint32_t data_2;
    char* data_4;
    uint32_t context_1;
    int32_t flagP1;
    int32_t dest_1;

    if (entity_1 - 8 <= 6)
        switch (entity_1)
        {
            case 8:
            {
                dest_1 = 4;
                data_2 = *(data_1 + 1);
                goto label_4bea67;
            }
            case 9:
            {
                uint32_t temp_1 = 0;
                dest_1 = 1;
                temp_1 = data_1[1];
                data_2 = temp_1;
            label_4bea67:
                data_4 = Sys_DispatchOpcode_30(&source_val[0xc], data_2);

                if (data_4)
                {
                    Sys_ReadFileBlock_28(source_val, data_4, 3);
                    int32_t data_6 = source_val[5] + dest_1 + 1;
                    source_val[5] = data_6;
                    return data_6;
                }

            label_4bebc8:
                int32_t entity_12 = source_val[5];
                source_val[8] = 0xf;
                source_val[4] = entity_12;
                return data_4;
                break;
            }
            case 0xa:
            {
                dest_1 = 2;
                context = *(data_1 + 1);
                data_2 = context;
                goto label_4bea67;
            }
            case 0xc:
            {
                context_1 = *(data_1 + 1);
                flagP1 = 4;
                goto label_4beae7;
            }
            case 0xd:
            {
                context_1 = 0;
                flagP1 = 1;
                context_1 = data_1[1];
            label_4beae7:
                int32_t* data_13 = *(source_val[0x18] + (context_1 << 2));
                context = data_13;

                if (data_13)
                {
                label_4beb8c:
                    Sys_ExecuteBytecode_30(source_val, context);
                    int32_t data_22 = source_val[5] + flagP1 + 1;
                    source_val[5] = data_22;
                    return data_22;
                }

                void* data_15 = *(source_val[0x19] + (context_1 << 2));
                void* temp_4;
                char* dest_3;

                if (data_15)
                {
                    int32_t* data_16 = *(data_15 + 8);
                    context = data_16;

                    if (data_16)
                        goto label_4beb8c;

                    char* data_17 = Sys_DispatchOpcode_30(&source_val[0x12], context_1);

                    if (!data_17)
                        goto label_4beb8c;

                    int32_t temp_3 = source_val[5];
                    source_val[8] = 7;
                    source_val[4] = temp_3;
                    temp_4 = &source_val[0x1a];
                    dest_3 = data_17;
                    goto label_4beb2e;
                }

                data_4 = Sys_DispatchOpcode_30(&source_val[0x12], context_1);
                dest_3 = data_4;

                if (!dest_3)
                    goto label_4bebc8;

                if (Sys_ReadFileBlock_25(dest_3, &context))
                {
                    int32_t* data_20 = context;

                    if (data_20[2])
                        *(source_val[0x19] + (context_1 << 2)) = Sys_ExecuteBytecode_25(dest_3);
                    else
                        *(source_val[0x18] + (context_1 << 2)) = data_20;

                    goto label_4beb8c;
                }

                int32_t data_24 = source_val[5];
                source_val[8] = 7;
                source_val[4] = data_24;
                temp_4 = &source_val[0x1a];
            label_4beb2e:
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool flag_2_1 = 0 != *dest_3;
                    dest_3 = &dest_3[1];
                    i -= 1;

                    if (!flag_2_1)
                        break;
                }

                int32_t entity_5 = ~i;
                int32_t source_2;
                int32_t dest_6;
                dest_6 = memcpy(temp_4, dest_3 - entity_5, entity_5 & 0xfffffffc);
                memcpy(dest_6, source_2, entity_5 & 3);
                return entity_5;
                break;
            }
            case 0xe:
            {
                context = *(data_1 + 1);
                context_1 = context;
                flagP1 = 2;
                goto label_4beae7;
            }
        }
    Error_Show("Unhandled opcode.");

    while (true)
        /* nop */
}
