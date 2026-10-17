// Original IGI.EXE function: Sys_IlfFileCorruptS (VA 0x004B6720; static CFG gate PASS, CFG score 1.000).
#include "Sys_IlfFileCorruptS.h"
int32_t* Sys_IlfFileCorruptS(int32_t* context, int32_t* param_2)

{
    int32_t* flagP = nullptr;
    int32_t* item_28 = param_2;
    int32_t* context_val = nullptr;
    int32_t data_val;
    void* entity_val;
    int32_t temp_val;
    int32_t* data_1 = Resource_Load(data_val, temp_val, entity_val, nullptr);

    if (data_1)
    {
        if (Sys_OpenFileStream_20(data_1) == 0x46464c49 && Sys_FreeMemory_20(data_1) == 0x544e4f46)
        {
            int32_t* data_4 = Sys_ResolveSymbol_19(data_1);

            if (data_4)
            {
                int32_t* data_5 = Sys_ReadFileBlock_20(data_4, 0x48544e46);
                int32_t* data_6 = Sys_ReadFileBlock_20(data_4, 0x4e415254);
                int32_t* data_7 = Sys_ReadFileBlock_20(data_4, 0x464d4e41);

                if (data_5 && data_6 && data_7)
                {
                    int32_t* data_8 = Sys_CheckHeap_19(data_5, data_1);
                    char* data_9 = Sys_CheckHeap_19(data_6, data_1);
                    void* data_10 = Sys_CheckHeap_19(data_7, data_1);
                    void item_8;
                    Sys_AllocateMemory_20(&item_8, nullptr, data_6);
                    void item_4;
                    Sys_AllocateMemory_20(&item_4, nullptr, data_7);

                    if (data_8)
                    {
                        char* context_2 = data_9;

                        if (context_2 && data_10)
                        {
                            int32_t data_11 = Sys_PushStack_7(data_1);
                            int32_t data_12 = *data_8;
                            int32_t data_13 = -(data_12);
                            Sys_OpenFileStream_17(context, 0, 0, 0, data_8[4], data_8[5], data_8[3],
                                ((data_13 - data_13) & 0xffff0000) + 0x10000, 0, data_8[1], data_11);
                            int32_t data_18 = context[4];

                            if (data_18 > 0)
                            {
                                Sys_PopStack_7(data_1, context[1], data_18, 0);
                                int32_t* data_19 = Sys_DispatchOpcode_20(0x100, 1, context);
                                context[3] = data_19;

                                for (int32_t i = 0; i < 0x100; )
                                {
                                    data_19 = *context_2;
                                    data_19 = Sys_PopStack_20(context[3], i, 0, data_19);
                                    i += 1;
                                    context_2 = &context_2[2];
                                }

                                int32_t context_3 = 0;

                                if (context[5] > 0)
                                {
                                    int32_t* source_1 = data_10 + 0xc;
                                    int32_t entity_8;

                                    do
                                    {
                                        Sys_FreeMemory_17(context, context_3, source_1[2], *(source_1 + 0xa), source_1[3],
                                            *(source_1 + 0x16), source_1[6], *(source_1 + 0xe), source_1[-3],
                                            source_1[-2], source_1[-1], *source_1, source_1[1]);
                                        entity_8 = 0;
                                        entity_8 = context[5];
                                        context_3 += 1;
                                        source_1 = &source_1[0xa];
                                    } while (context_3 < entity_8);
                                }

                                return context;
                            }

                            int32_t* item_24_7 = param_2;
                            Error_Show("ILF file corrupt: %s");

                            while (true)
                                /* nop */
                        }
                    }

                    int32_t* item_24_10 = param_2;
                    Error_Show("ILF file corrupt: %s");

                    while (true)
                        /* nop */
                }

                int32_t* item_24_11 = param_2;
                Error_Show("ILF file corrupt: %s");

                while (true)
                    /* nop */
            }
            else
            {
                int32_t* item_24_4 = param_2;
                Error_Show("ILF file corrupt: %s");

                while (true)
                    /* nop */
            }
        }

        char entity_9 = *data_1;

        if (entity_9 != 0x4c)
        {
        label_4b6cd0:
            int32_t* item_24_19 = param_2;
            Error_Show("Invalid sprite file: %s");

            while (true)
                /* nop */
        }
        else if (*(data_1 + 1) != 0x4f || *(data_1 + 2) != 0x4f || *(data_1 + 3) != 0x50
            || data_1[1] != 1)
        {
            if (entity_9 != 0x4c)
                goto label_4b6cd0;

            if (*(data_1 + 1) != 0x4f || *(data_1 + 2) != 0x4f || *(data_1 + 3) != 0x50
                || data_1[1] != 7)
            {
                if (entity_9 != 0x4c)
                    goto label_4b6cd0;

                if (*(data_1 + 1) != 0x4f || *(data_1 + 2) != 0x4f || *(data_1 + 3) != 0x50
                    || data_1[1] != 9)
                {
                    if (entity_9 != 0x4c)
                        goto label_4b6cd0;

                    if (*(data_1 + 1) == 0x4f && *(data_1 + 2) == 0x4f && *(data_1 + 3) == 0x50
                        && data_1[1] == 5)
                    {
                        int32_t* item_24_17 = param_2;
                        Error_Show("The font '%s' must be packed. Ask Stein.");

                        while (true)
                            /* nop */
                    }

                    if (entity_9 == 0x4c && *(data_1 + 1) == 0x4f && *(data_1 + 2) == 0x4f
                        && *(data_1 + 3) == 0x50 && data_1[1] == 0xa)
                    {
                        int32_t* item_24_18 = param_2;
                        Error_Show("The font '%s' must be packed. Ask Stein.");

                        while (true)
                            /* nop */
                    }

                    goto label_4b6cd0;
                }

                int32_t flagP6 = data_1[6];
                int32_t dest_8;

                if (!flagP6)
                    dest_8 = data_1[0xc];
                else
                {
                    int32_t* data_47 = Mem_Alloc(0xc, 4);
                    dest_8 = *(data_1 + flagP6 + 0xc);
                    context_val = data_47;
                    Sys_PushStack_21(context_val, data_1 + flagP6 + 0x10, dest_8);
                }

                int32_t data_48 = data_1[8];
                flagP = context;
                int32_t data_50 = -((data_48 - 1));
                Sys_OpenFileStream_17(flagP, dest_8, 0, 0, data_1[0xa], data_1[0xb], 0,
                    ((data_50 - data_50) & 0xffff0000) + 0x10000, context_val, data_48, data_48);
                int32_t i_1 = 0;

                if (data_1[8] > 0)
                {
                    int32_t* dest_9 = &data_1[0x14];

                    do
                    {
                        int32_t entity_21 = 0;
                        entity_21 = dest_9[-4];
                        int32_t temp_21 = 0;
                        temp_21 = *(dest_9 - 0x12);
                        int32_t data_57 = 0;
                        data_57 = dest_9[-5];
                        Sys_AllocateMemory_17(flagP, i_1, dest_9[-7] + data_1, data_57, temp_21, entity_21, dest_9[-6],
                            *(data_1 + 0x12), *dest_9);
                        Sys_FreeMemory_17(flagP, i_1, i_1, *(dest_9 - 0x12), dest_9[-4], *(dest_9 - 6),
                            dest_9[-1], *(dest_9 - 0xe), *dest_9, 0.0f, 0.0f, 1.0f, 1.0f);
                        i_1 += 1;
                        dest_9 = &dest_9[8];
                    } while (i_1 < data_1[8]);
                }

                int32_t data_61 = data_1[7];

                if (!data_61)
                    Resource_Unload(param_2);
                else
                {
                    flagP[3] = Sys_CloseFileStream_20(data_1 + data_61, flagP);
                    Resource_Unload(param_2);
                }
            }
            else
            {
                int32_t flagP5 = data_1[6];
                int32_t item_10_2;
                int32_t dest_6;

                if (!flagP5)
                {
                    int32_t temp_14 = data_1[0xc];
                    item_10_2 = temp_14;
                    dest_6 = temp_14;
                }
                else
                {
                    int32_t* data_31 = Mem_Alloc(0xc, 4);
                    dest_6 = *(data_1 + flagP5 + 0xc);
                    context_val = data_31;
                    item_10_2 = dest_6;
                    Sys_PushStack_21(context_val, data_1 + flagP5 + 0x10, dest_6);
                }

                int32_t data_32 = data_1[8];
                flagP = context;
                int32_t data_34 = -((data_32 - 1));
                Sys_OpenFileStream_17(flagP, dest_6, 0, 0, data_1[0xa], data_1[0xb], 0,
                    ((data_34 - data_34) & 0xffff0000) + 0x10000, context_val, data_32, data_32);
                int32_t i_2 = 0;

                if (data_1[8] > 0)
                {
                    int32_t* dest_7 = &data_1[0x11];

                    do
                    {
                        Sys_AllocateMemory_17(flagP, i_2, dest_7[-4] + data_1, dest_7[-3], dest_7[-2], dest_7[-1],
                            item_10_2, *(data_1 + 0x12), 0);
                        Sys_FreeMemory_17(flagP, i_2, i_2, dest_7[-2], dest_7[-1], dest_7[4], dest_7[5], *dest_7,
                            0, 0.0f, 0.0f, 1.0f, 1.0f);
                        i_2 += 1;
                        dest_7 = &dest_7[0xa];
                    } while (i_2 < data_1[8]);
                }

                void* data_45 = data_1[7];

                if (!data_45)
                    Resource_Unload(param_2);
                else
                {
                    flagP[3] = Sys_CloseFileStream_20(data_45 + data_1, flagP);
                    Resource_Unload(param_2);
                }
            }
        }
        else
        {
            int32_t dest_4 = data_1[3];
            int32_t flagP4;

            if (!dest_4)
                flagP4 = 2;
            else
            {
                int32_t* data_27 = Mem_Alloc(0xc, 4);
                flagP4 = *(dest_4 + data_1 + 0xc);
                context_val = data_27;
                Sys_PushStack_21(context_val, dest_4 + data_1 + 0x10, flagP4);
            }

            Sys_OpenFileStream_17(context, flagP4, 0, 0, data_1[6], *(data_1 + 0x1a), 0, 0x10000, context_val, 1, 1);
            int32_t entity_11 = 0;
            entity_11 = *(data_1 + 0x1a);
            int32_t temp_12 = 0;
            temp_12 = data_1[6];
            int32_t data_29 = 0;
            data_29 = *(data_1 + 0x16);
            Sys_AllocateMemory_17(context, 0, &data_1[7], data_29, temp_12, entity_11, flagP4, 0, 0);
            Sys_FreeMemory_17(context, 0, 0, data_1[6], *(data_1 + 0x1a), 0, 0, 0, 0, 0.0f, 0.0f, 1.0f, 1.0f);
            flagP = context;
            Resource_Unload(param_2);
        }
    }

    return flagP;
}
