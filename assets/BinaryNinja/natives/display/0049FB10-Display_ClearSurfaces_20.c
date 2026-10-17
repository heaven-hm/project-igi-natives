// IGI native provenance: Display_ClearSurfaces_20 - 0x0049FB10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049FB10-Display_ClearSurfaces_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_ClearSurfaces_20.h"
int32_t* Display_ClearSurfaces_20(int32_t* context)

{
    int32_t* source_val = context;
    int32_t data_1 = *(*source_val + 0x20);

    if (!data_1)
    {
        void* data_35 = source_val[1];
        *(*source_val + 0x24) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_35), 0x52443344), data_35);
        void* data_39 = source_val[1];
        void* dest_2 = *(*source_val + 0x24);
        *(dest_2 + 0x10) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_39), 0x56525458), data_39);
        void* data_43 = source_val[1];
        *(dest_2 + 0x14) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_43), 0x52454e44), data_43);
        Display_OpenDevice_19(nullptr, *source_val, *(dest_2 + 0xc));
    }
    else if (data_1 == 1)
    {
        void* data_22 = source_val[1];
        *(*source_val + 0x24) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_22), 0x52443344), data_22);
        void* dest_1 = *(*source_val + 0x24);
        void* data_27 = source_val[1];
        *(dest_1 + 0x18) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_27), 0x56525458), data_27);
        void* data_31 = source_val[1];
        *(dest_1 + 0x1c) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_31), 0x52454e44), data_31);
    }
    else
    {
        void* dest_val;

        if (data_1 == 3)
        {
            void* data_5 = source_val[1];
            *(*source_val + 0x24) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_5), 0x52443344), data_5);
            void* data_9 = source_val[1];
            dest_val = *(*source_val + 0x24);
            *(dest_val + 0x14) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_9), 0x56525458), data_9);
            void* data_13 = source_val[1];
            *(dest_val + 0x1c) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_13), 0x52454e44), data_13);
            void* data_17 = source_val[1];
            *(dest_val + 0x18) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_17), 0x4c544d50), data_17);
        }
        else
        {
            Error_Show("Mesh format not supported");

            while (true)
                /* nop */
        }

        Display_OpenDevice_19(1, *source_val, *(dest_val + 0x10));
    }

    if (!*(*source_val + 0x28))
    {
        int32_t* context_val = Sys_ResolveSymbol_19(source_val[1]);
        int32_t* flagP = Sys_ResolveSymbol_19(source_val[1]);
        context = Sys_ResolveSymbol_19(source_val[1]);
        int32_t* item_8 = Sys_ResolveSymbol_19(source_val[1]);
        int32_t* result = Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(source_val[1]), 0x434d5348);
        *(*source_val + 0x2c) = 0;

        if (result)
        {
            int32_t* result_1 = 2;
            *(*source_val + 0x2c) = Sys_CheckHeap_19(result, source_val[1]);
            void** dest_3 = *(*source_val + 0x2c) + 0x10;
            bool flag_1_1;

            do
            {
                context_val = Sys_ReadFileBlock_20(Sys_PopStack_19(context_val), 0x43565458);
                flagP = Sys_ReadFileBlock_20(Sys_PopStack_19(flagP), 0x43464345);
                context = Sys_ReadFileBlock_20(Sys_PopStack_19(context), 0x434d4154);
                item_8 = Sys_ReadFileBlock_20(Sys_PopStack_19(item_8), 0x43535048);
                dest_3[1] = Sys_CheckHeap_19(context_val, source_val[1]);
                *dest_3 = Sys_CheckHeap_19(flagP, source_val[1]);
                dest_3[2] = Sys_CheckHeap_19(context, source_val[1]);
                dest_3[3] = Sys_CheckHeap_19(item_8, source_val[1]);
                dest_3 = &dest_3[8];
                result = result_1 - 1;
                flag_1_1 = result_1 != 1;
                result_1 = result;
            } while (flag_1_1);
        }

        return result;
    }

    Error_Show("Mesh format not supported");

    while (true)
        /* nop */
}
