#include "004BFA80-Sys_UnknownBlockType_2.h"
/* 0x004bfa80 Sys_UnknownBlockType_2 full linked: callers=6 callees=14 */
int32_t sub_4bfa80(void* a1)

{
    void* edi = a1;
    int32_t eax_1 = *(edi + 8) - 1;

    if (eax_1 <= 6)
    {
        while (true)
            switch (jump_table_4bfbc0[eax_1])
            {
                case 0x4bfa9b:
                {
                    eax_1 = sub_4b9120(*(edi + 0xc));

                    if (!eax_1)
                    {
                        int32_t* i_5 = *(edi + 0x14);

                        for (int32_t* i = *i_5; i; i = *i)
                        {
                            eax_1 = sub_4b9120(i_5[3]);

                            if (eax_1)
                                return sub_4bfa80(i_5[4]);

                            i_5 = i;
                        }

                        edi = *(edi + 0x20);

                        if (edi)
                            goto label_4bfadb;
                    }
                    else
                    {
                        edi = *(edi + 0x10);
                    label_4bfadb:
                        eax_1 = *(edi + 8) - 1;

                        if (eax_1 > 6)
                            break;

                        continue;
                    }

                    return eax_1;
                    break;
                }
                case 0x4bfaf7:
                {
                    char* edi_1 = *(edi + 0xc);

                    if (edi_1)
                        return sub_4b9120(edi_1);

                    return eax_1;
                    break;
                }
                case 0x4bfb0b:
                {
                    int32_t* i_6 = *(edi + 0xc);
                    int32_t* i_1 = *i_6;

                    if (!i_1)
                        return eax_1;

                    int32_t eax_5;

                    do
                    {
                        eax_5 = sub_4bfa80(i_6);
                        i_6 = i_1;
                        i_1 = *i_1;
                    } while (i_1);

                    return eax_5;
                    break;
                }
                case 0x4bfb29:
                {
                    eax_1 = sub_4b9120(*(edi + 0xc));

                    if (!eax_1)
                        return eax_1;

                    int32_t i_2;

                    do
                    {
                        sub_4bfa80(*(edi + 0x10));
                        i_2 = sub_4b9120(*(edi + 0xc));
                    } while (i_2);

                    return i_2;
                    break;
                }
                case 0x4bfb56:
                {
                    int32_t i_3;

                    do
                    {
                        sub_4bfa80(*(edi + 0x10));
                        i_3 = sub_4b9120(*(edi + 0xc));
                    } while (i_3);

                    return i_3;
                    break;
                }
                case 0x4bfb73:
                {
                    char* i_4 = *(edi + 0xc);

                    if (!i_4)
                        goto label_4bfb83;

                    do
                    {
                        sub_4b9120(i_4);
                    label_4bfb83:
                        char* eax_8 = *(edi + 0x10);

                        if (eax_8)
                        {
                            eax_1 = sub_4b9120(eax_8);

                            if (!eax_1)
                                return eax_1;
                        }

                        sub_4bfa80(*(edi + 0x18));
                        i_4 = *(edi + 0x14);
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
