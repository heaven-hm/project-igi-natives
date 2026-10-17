// Original IGI.EXE function: Sys_ReadFileBlock_24 (VA 0x004B9120; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_24.h"
int32_t Sys_ReadFileBlock_24(char* context)

{
    if (context)
        switch (context[1])
        {
            case 0:
            {
                switch (*context - 1)
                {
                    case 0:
                    {
                        return *(context + 8);
                        break;
                    }
                    case 2:
                    {
                        return *(context + 8);
                        break;
                    }
                    case 3:
                    case 4:
                    {
                        if (!*(context + 8))
                            *(context + 8) = Sys_ExecuteBytecode_25(*(context + 0x10));

                        void* data_10 = *(context + 8);

                        if (data_10)
                        {
                            void* data_11 = *(data_10 + 8);
                            void item_18;

                            if (data_11)
                                return
                                    *(*(data_11 + 0x10))(&item_18, *(data_11 + 0x18), *(context + 0xc));
                        }

                        void* data_14 = *(context + 0x18);

                        if (!data_14)
                        {
                            int32_t item_2c_5 = *(context + 0x24);
                            int32_t item_30_4 = *(context + 0x10);
                        }
                        else
                        {
                            int32_t item_2c_4 = *(context + 0x24);
                            int32_t item_30_3 = *(data_14 + 0x10);
                        }

                        Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
                        break;
                    }
                    case 5:
                    {
                        return Sys_ReadFileBlock_24(*(context + 8));
                        break;
                    }
                }
                break;
            }
            case 1:
            {
                int32_t data_33 = Sys_ReadFileBlock_24(*(context + 0x1c));
                return Sys_ReadFileBlock_24(*(context + 0x18)) + data_33;
                break;
            }
            case 2:
            {
                int32_t data_37 = Sys_ReadFileBlock_24(*(context + 0x1c));
                return Sys_ReadFileBlock_24(*(context + 0x18)) - data_37;
                break;
            }
            case 3:
            {
                return Sys_ReadFileBlock_24(*(context + 0x1c));
                break;
            }
            case 4:
            {
                return -(Sys_ReadFileBlock_24(*(context + 0x1c)));
                break;
            }
            case 5:
            {
                int32_t data_41 = Sys_ReadFileBlock_24(*(context + 0x1c));
                return Sys_ReadFileBlock_24(*(context + 0x18)) * data_41;
                break;
            }
            case 6:
            {
                int32_t data_44 = Sys_ReadFileBlock_24(*(context + 0x1c));

                if (!data_44)
                {
                    g_a965a8 = 1;
                    return 0;
                }

                return Sys_ReadFileBlock_24(*(context + 0x18)) / data_44;
                break;
            }
            case 8:
            {
                int32_t data_50 = Sys_ReadFileBlock_24(*(context + 0x1c));
                return Sys_ReadFileBlock_24(*(context + 0x18)) | data_50;
                break;
            }
            case 9:
            {
                int32_t data_54 = Sys_ReadFileBlock_24(*(context + 0x1c));
                return Sys_ReadFileBlock_24(*(context + 0x18)) ^ data_54;
                break;
            }
            case 0xa:
            {
                int32_t data_57 = Sys_ReadFileBlock_24(*(context + 0x1c));
                return Sys_ReadFileBlock_24(*(context + 0x18)) & data_57;
                break;
            }
            case 0xb:
            {
                char data_61 = Sys_ReadFileBlock_24(*(context + 0x1c));
                return Sys_ReadFileBlock_24(*(context + 0x18)) << (data_61 & 0x1f);
                break;
            }
            case 0xc:
            {
                char data_65 = Sys_ReadFileBlock_24(*(context + 0x1c));
                return Sys_ReadFileBlock_24(*(context + 0x18)) >> (data_65 & 0x1f);
                break;
            }
            case 0xd:
            {
                return ~Sys_ReadFileBlock_24(*(context + 0x1c));
                break;
            }
            case 0xe:
            {
                int32_t data_84 = Sys_ReadFileBlock_24(*(context + 0x1c));
                int32_t entity_19 = 0;
                entity_19 = Sys_ReadFileBlock_24(*(context + 0x18)) == data_84;
                return entity_19;
                break;
            }
            case 0xf:
            {
                int32_t data_88 = Sys_ReadFileBlock_24(*(context + 0x1c));
                int32_t entity_20 = 0;
                entity_20 = Sys_ReadFileBlock_24(*(context + 0x18)) != data_88;
                return entity_20;
                break;
            }
            case 0x10:
            {
                int32_t data_68 = Sys_ReadFileBlock_24(*(context + 0x1c));
                int32_t entity_15 = 0;
                entity_15 = Sys_ReadFileBlock_24(*(context + 0x18)) < data_68;
                return entity_15;
                break;
            }
            case 0x11:
            {
                int32_t data_72 = Sys_ReadFileBlock_24(*(context + 0x1c));
                int32_t entity_16 = 0;
                entity_16 = Sys_ReadFileBlock_24(*(context + 0x18)) > data_72;
                return entity_16;
                break;
            }
            case 0x12:
            {
                int32_t data_76 = Sys_ReadFileBlock_24(*(context + 0x1c));
                int32_t entity_17 = 0;
                entity_17 = Sys_ReadFileBlock_24(*(context + 0x18)) <= data_76;
                return entity_17;
                break;
            }
            case 0x13:
            {
                int32_t data_80 = Sys_ReadFileBlock_24(*(context + 0x1c));
                int32_t entity_18 = 0;
                entity_18 = Sys_ReadFileBlock_24(*(context + 0x18)) >= data_80;
                return entity_18;
                break;
            }
            case 0x14:
            {
                int32_t data_29 = Sys_ReadFileBlock_24(*(context + 0x1c));
                int32_t data_30 = -(data_29);
                return data_30 - data_30 + 1;
                break;
            }
            case 0x18:
            {
                Sys_ReadFileBlock_24(*(context + 0x18));
                return Sys_ReadFileBlock_24(*(context + 0x1c));
                break;
            }
            case 0x19:
            {
                char* data_98 = *(context + 0x18);

                if (!data_98)
                {
                label_4b95b4:
                    int32_t item_2c_39 = *(context + 0x24);
                    Error_Show("Internal script error. Invalid assignment, line %d");

                    while (true)
                        /* nop */
                }
                else
                {
                    char entity_22 = *data_98;

                    if (entity_22 != 4)
                    {
                        if (entity_22 != 5)
                            goto label_4b95b4;

                        if (entity_22 != 4 && !*(data_98 + 8))
                            *(*(context + 0x18) + 8) = Sys_ExecuteBytecode_25(*(data_98 + 0x10));

                        goto label_4b953a;
                    }

                label_4b953a:
                    void* entity_25 = *(context + 0x18);
                    void* data_101 = *(entity_25 + 8);

                    if (data_101)
                    {
                        int32_t* data_102 = *(data_101 + 8);

                        if (data_102)
                        {
                            int32_t entity_26 = *data_102;

                            if (!entity_26)
                            {
                                long double fpu2;
                                Sys_OpenFileStream_24(fpu2, *(context + 0x1c), data_102);
                                return Sys_ReadFileBlock_24(*(context + 0x1c));
                            }

                            if (entity_26 != 2)
                            {
                                int32_t item_2c_37 = *(context + 0x24);
                                Sys_FreeMemory_22("Syntax error in assignment, line %d");
                                return 0;
                            }

                            int32_t item_2c_36 = *(context + 0x24);
                            Sys_FreeMemory_22("Expression: Cannot assign to constant, line %d");
                            return 0;
                        }
                    }

                    int32_t item_2c_38 = *(context + 0x24);
                    int32_t item_30_20 = *(entity_25 + 0x10);
                }

                Sys_FreeMemory_22("Unknown identifier '%s' in expression, line %d");
                break;
            }
            case 0x1b:
            {
                if (!Sys_ReadFileBlock_24(*(context + 0x18)))
                {
                    int32_t data_94 = Sys_ReadFileBlock_24(*(context + 0x1c));

                    if (!data_94)
                        return data_94;
                }

                return 1;
                break;
            }
            case 0x1c:
            {
                if (Sys_ReadFileBlock_24(*(context + 0x18)) && Sys_ReadFileBlock_24(*(context + 0x1c)))
                    return 1;
                break;
            }
            case 0x1d:
            {
                if (!Sys_ReadFileBlock_24(*(context + 8)))
                    return Sys_ReadFileBlock_24(*(context + 0x1c));

                return Sys_ReadFileBlock_24(*(context + 0x18));
                break;
            }
        }

    return 0;
}
