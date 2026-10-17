// Original IGI.EXE function: Sys_UnknownBlockType_2 (VA 0x004BFA80; static CFG gate PASS, CFG score 1.000).
#include "Sys_UnknownBlockType_2.h"
int32_t Sys_UnknownBlockType_2(void* a1)

{
    void* dstD = a1;
    int32_t valA1 = *(dstD + 8) - 1;

    if (valA1 <= 6)
    {
        while (true)
            switch (jump_table_4bfbc0[valA1])
            {
                case 0x4bfa9b:
                {
                    valA1 = Sys_ReadFileBlock_24(*(dstD + 0xc));

                    if (!valA1)
                    {
                        int32_t* i_5 = *(dstD + 0x14);

                        for (int32_t* i = *i_5; i; i = *i)
                        {
                            valA1 = Sys_ReadFileBlock_24(i_5[3]);

                            if (valA1)
                                return Sys_UnknownBlockType_2(i_5[4]);

                            i_5 = i;
                        }

                        dstD = *(dstD + 0x20);

                        if (dstD)
                            goto label_4bfadb;
                    }
                    else
                    {
                        dstD = *(dstD + 0x10);
                    label_4bfadb:
                        valA1 = *(dstD + 8) - 1;

                        if (valA1 > 6)
                            break;

                        continue;
                    }

                    return valA1;
                    break;
                }
                case 0x4bfaf7:
                {
                    char* dstD1 = *(dstD + 0xc);

                    if (dstD1)
                        return Sys_ReadFileBlock_24(dstD1);

                    return valA1;
                    break;
                }
                case 0x4bfb0b:
                {
                    int32_t* i_6 = *(dstD + 0xc);
                    int32_t* i_1 = *i_6;

                    if (!i_1)
                        return valA1;

                    int32_t valA5;

                    do
                    {
                        valA5 = Sys_UnknownBlockType_2(i_6);
                        i_6 = i_1;
                        i_1 = *i_1;
                    } while (i_1);

                    return valA5;
                    break;
                }
                case 0x4bfb29:
                {
                    valA1 = Sys_ReadFileBlock_24(*(dstD + 0xc));

                    if (!valA1)
                        return valA1;

                    int32_t i_2;

                    do
                    {
                        Sys_UnknownBlockType_2(*(dstD + 0x10));
                        i_2 = Sys_ReadFileBlock_24(*(dstD + 0xc));
                    } while (i_2);

                    return i_2;
                    break;
                }
                case 0x4bfb56:
                {
                    int32_t i_3;

                    do
                    {
                        Sys_UnknownBlockType_2(*(dstD + 0x10));
                        i_3 = Sys_ReadFileBlock_24(*(dstD + 0xc));
                    } while (i_3);

                    return i_3;
                    break;
                }
                case 0x4bfb73:
                {
                    char* i_4 = *(dstD + 0xc);

                    if (!i_4)
                        goto label_4bfb83;

                    do
                    {
                        Sys_ReadFileBlock_24(i_4);
                    label_4bfb83:
                        char* valA8 = *(dstD + 0x10);

                        if (valA8)
                        {
                            valA1 = Sys_ReadFileBlock_24(valA8);

                            if (!valA1)
                                return valA1;
                        }

                        Sys_UnknownBlockType_2(*(dstD + 0x18));
                        i_4 = *(dstD + 0x14);
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
