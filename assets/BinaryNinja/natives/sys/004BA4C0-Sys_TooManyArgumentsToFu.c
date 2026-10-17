// Original IGI.EXE function: Sys_TooManyArgumentsToFu (VA 0x004BA4C0; static CFG gate PASS, CFG score 0.956).
#include "Sys_TooManyArgumentsToFu.h"
int32_t* Sys_TooManyArgumentsToFu(int32_t* context, void* param_2)

{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    char** flagP = Mem_Alloc(g_a969c0 << 2, 4);
    char** item_4 = flagP;
    int32_t data_2;
    int32_t entity_2;

    if (param_2)
    {
        data_2 = *(param_2 + 0xc);
        entity_2 = 0;
        entity_2 = data_2 == 0xffffffff;
    }

    if (param_2 && !entity_2)
    {
        int32_t i_3 = 0;

        if (data_2 > 0)
        {
            while (true)
            {
                if (!Sys_CloseFileStream_31(context, &context[2]))
                {
                    int32_t item_18_17 = DynObj_CreateMagicObject(context);
                    int32_t item_1c_15 = DynObj_LookupHashItem(context);
                    Sys_FreeMemory_22("Parse error (missing " ?) in line %d: '%s'");
                }
                else if (Sys_ResolveSymbol_24(context, flagP, 0, 1))
                {
                    if (context[6] == 0x18 || i_3 >= *(param_2 + 0xc) - 1)
                    {
                        i_3 += 1;
                        flagP = &flagP[1];

                        if (i_3 < *(param_2 + 0xc))
                            continue;

                        flagP = item_4;
                        break;
                    }
                    else
                    {
                        int32_t item_18_15 = DynObj_CreateMagicObject(context);
                        int32_t item_1c_13 = DynObj_LookupHashItem(context);
                    }

                    Sys_FreeMemory_22("Too few arguments to functions in line %d: '%s'");
                }

                if (i_3 > 0)
                {
                    char** source_5 = item_4;
                    int32_t i;

                    do
                    {
                        Sys_PushStack_24(*source_5);
                        source_5 = &source_5[1];
                        i = i_3;
                        i_3 -= 1;
                    } while (i != 1);
                }

                Sys_ExecuteBytecode_2(item_4);
                return 0;
            }
        }

        int32_t data_24 = *(param_2 + 0xc);

        if (data_24)
        {
            int32_t entity_14 = context[6];

            if (entity_14 == 0x18)
            {
                int32_t item_18_13 = DynObj_CreateMagicObject(context);
                int32_t item_1c_11 = DynObj_LookupHashItem(context);
                Sys_FreeMemory_22("Too many arguments to function in line %d: '%s'");
                Sys_ExecuteBytecode_2(flagP);
                return 0;
            }

            if (entity_14 != 0x16)
            {
                int32_t item_18_21 = DynObj_CreateMagicObject(context);
                int32_t item_1c_17 = DynObj_LookupHashItem(context);
                Sys_FreeMemory_22("Syntax error in line %d: '%s'");
                Sys_ExecuteBytecode_2(flagP);
                return 0;
            }

            void* data_37 = Mem_Alloc((data_24 << 2) + 4, 4);
            void* entity_19 = (*(param_2 + 0xc) << 2) + 4;
            memset(memset(data_37, 0, entity_19 & 0xfffffffc), 0, entity_19 & 3);
            int32_t entity_24 = *(param_2 + 0xc) << 2;
            int32_t source_7;
            int32_t dest_8;
            dest_8 = memcpy(data_37, item_4, entity_24 & 0xfffffffc);
            memcpy(dest_8, source_7, entity_24 & 3);
            Sys_ExecuteBytecode_2(item_4);
            int32_t* data_39 = Mem_Alloc(0xc, 4);
            data_39[2] = data_37;
            data_39[1] = 0;
            *data_39 = *(param_2 + 0xc);
            return data_39;
        }

        if (Sys_CloseFileStream_31(context, &context[2]))
        {
            if (context[6] != 0x16)
            {
                int32_t item_18_24 = DynObj_CreateMagicObject(context);
                int32_t item_1c_21 = DynObj_LookupHashItem(context);
                Sys_FreeMemory_22("Too many arguments to function in line %d: '%s'");
                Sys_ExecuteBytecode_2(flagP);
                return 0;
            }

            Sys_ExecuteBytecode_2(flagP);
            int32_t* data_44 = Mem_Alloc(0xc, 4);
            data_44[2] = 0;
            data_44[1] = 0;
            *data_44 = 0;
            return data_44;
        }
    }
    else
    {
        int32_t i_2 = 0;

        if (g_a969c0 <= 0)
        {
        label_4ba564:
            int32_t item_18_3 = DynObj_CreateMagicObject(context);
            int32_t item_1c_3 = DynObj_LookupHashItem(context);
            Sys_FreeMemory_22("Too many arguments to function in line %d: '%s'");
            Sys_ExecuteBytecode_2(flagP);
            return 0;
        }

        char** dest_1 = flagP;

        while (true)
        {
            *dest_1 = nullptr;

            if (!Sys_CloseFileStream_31(context, &context[2]))
            {
                int32_t item_18_5 = DynObj_CreateMagicObject(context);
                int32_t item_1c_5 = DynObj_LookupHashItem(context);
                Sys_FreeMemory_22("Parse error (missing " ?) in line %d: '%s'");

                if (i_2 > 0)
                {
                    char** source_1 = flagP;
                    int32_t i_1;

                    do
                    {
                        Sys_PushStack_24(*source_1);
                        source_1 = &source_1[1];
                        i_1 = i_2;
                        i_2 -= 1;
                    } while (i_1 != 1);
                }

                break;
            }

            if (context[6] != 0x16)
            {
                if (!Sys_ResolveSymbol_24(context, dest_1, 0, 1) || context[6] == 0x18)
                {
                    i_2 += 1;
                    dest_1 = &dest_1[1];

                    if (i_2 >= g_a969c0)
                        goto label_4ba564;

                    continue;
                }
                else
                    i_2 += 1;
            }

            if (i_2 >= g_a969c0)
                goto label_4ba564;

            if (context[6] != 0x16)
            {
                int32_t item_18_9 = DynObj_CreateMagicObject(context);
                int32_t item_1c_7 = DynObj_LookupHashItem(context);
                Sys_FreeMemory_22("Syntax error in line %d: '%s'");
                Sys_ExecuteBytecode_2(flagP);
                return 0;
            }

            void* data_17 = Mem_Alloc((i_2 << 2) + 4, 4);
            memset(memset(data_17, 0, ((i_2 << 2) + 4) & 0xfffffffc), 0,
                ((i_2 << 2) + 4) & 3);

            if (i_2)
                memcpy(data_17, item_4, i_2 << 2);

            Sys_ExecuteBytecode_2(item_4);
            int32_t* data_19 = Mem_Alloc(0xc, 4);
            data_19[2] = data_17;
            *data_19 = i_2;
            data_19[1] = 0;
            return data_19;
        }
    }

    Sys_ExecuteBytecode_2(flagP);
    return 0;
}
