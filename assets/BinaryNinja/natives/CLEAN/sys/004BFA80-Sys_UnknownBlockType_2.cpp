// IGI native provenance: Sys_UnknownBlockType_2 - 0x004BFA80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BFA80-Sys_UnknownBlockType_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_UnknownBlockType_2.h"
int32_t Sys_UnknownBlockType_2(void* context)

{
    void* dest_val = context;
    int32_t data_1 = *(dest_val + 8) - 1;

    if (data_1 <= 6)
    {
        while (true)
            switch (jump_table_4bfbc0[data_1])
            {
                case 0x4bfa9b:
                {
                    data_1 = Sys_ReadFileBlock_24(*(dest_val + 0xc));

                    if (!data_1)
                    {
                        int32_t* i_5 = *(dest_val + 0x14);

                        for (int32_t* i = *i_5; i; i = *i)
                        {
                            data_1 = Sys_ReadFileBlock_24(i_5[3]);

                            if (data_1)
                                return Sys_UnknownBlockType_2(i_5[4]);

                            i_5 = i;
                        }

                        dest_val = *(dest_val + 0x20);

                        if (dest_val)
                            goto label_4bfadb;
                    }
                    else
                    {
                        dest_val = *(dest_val + 0x10);
                    label_4bfadb:
                        data_1 = *(dest_val + 8) - 1;

                        if (data_1 > 6)
                            break;

                        continue;
                    }

                    return data_1;
                    break;
                }
                case 0x4bfaf7:
                {
                    char* dest_1 = *(dest_val + 0xc);

                    if (dest_1)
                        return Sys_ReadFileBlock_24(dest_1);

                    return data_1;
                    break;
                }
                case 0x4bfb0b:
                {
                    int32_t* i_6 = *(dest_val + 0xc);
                    int32_t* i_1 = *i_6;

                    if (!i_1)
                        return data_1;

                    int32_t data_5;

                    do
                    {
                        data_5 = Sys_UnknownBlockType_2(i_6);
                        i_6 = i_1;
                        i_1 = *i_1;
                    } while (i_1);

                    return data_5;
                    break;
                }
                case 0x4bfb29:
                {
                    data_1 = Sys_ReadFileBlock_24(*(dest_val + 0xc));

                    if (!data_1)
                        return data_1;

                    int32_t i_2;

                    do
                    {
                        Sys_UnknownBlockType_2(*(dest_val + 0x10));
                        i_2 = Sys_ReadFileBlock_24(*(dest_val + 0xc));
                    } while (i_2);

                    return i_2;
                    break;
                }
                case 0x4bfb56:
                {
                    int32_t i_3;

                    do
                    {
                        Sys_UnknownBlockType_2(*(dest_val + 0x10));
                        i_3 = Sys_ReadFileBlock_24(*(dest_val + 0xc));
                    } while (i_3);

                    return i_3;
                    break;
                }
                case 0x4bfb73:
                {
                    char* i_4 = *(dest_val + 0xc);

                    if (!i_4)
                        goto label_4bfb83;

                    do
                    {
                        Sys_ReadFileBlock_24(i_4);
                    label_4bfb83:
                        char* data_8 = *(dest_val + 0x10);

                        if (data_8)
                        {
                            data_1 = Sys_ReadFileBlock_24(data_8);

                            if (!data_1)
                                return data_1;
                        }

                        Sys_UnknownBlockType_2(*(dest_val + 0x18));
                        i_4 = *(dest_val + 0x14);
                    } while (i_4);
                    break;
                }
                case 0x4bfbb0:  /* "h4~T" */
                {
                    break;
                    break;
                }
            }
    }

    Error_Show("Unknown block type.");

    while (true)
        /* nop */
}
