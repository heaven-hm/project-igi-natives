// Original IGI.EXE function: DynObj_LocalModelsSMef (VA 0x004CF390; static CFG gate PASS, CFG score 0.991).
#include "DynObj_LocalModelsSMef.h"
int32_t* DynObj_LocalModelsSMef(int32_t context)

{
    int32_t* result = Mem_Alloc(0x18, 4);
    int32_t item_20 = context;
    int32_t* context_val = nullptr;
    result[1] = 0;
    *result = 0;
    result[4] = 0;
    result[5] = 0;
    int32_t data_val;
    void* entity_val;
    int32_t temp_val;
    data_val = Game_DataSymbolLoad(0xa4ec6c, "LOCAL:models/%s.mef");
    int32_t item_30 = 0xa4ec6c;
    int32_t* data_1 = Resource_Load(data_val, temp_val, entity_val, nullptr);
    result[2] = data_1;
    float* data_4 = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_1), 0x4d455348), data_1);
    result[3] = data_4;

    if (*data_4 == 0x3dcccccd)
    {
        void* data_5 = result[2];
        *(result[3] + 0x8c) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_5), 0x41545441), data_5);
        void* data_9 = result[2];
        *(result[3] + 0x88) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_9), 0x4d565458), data_9);
        void* data_13 = result[2];
        *(result[3] + 0x98) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_13), 0x504f5254), data_13);
        void* data_17 = result[2];
        *(result[3] + 0x90) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_17), 0x50544643), data_17);
        void* data_21 = result[2];
        *(result[3] + 0x94) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(data_21), 0x50545658), data_21);

        if (Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(result[2]), 0x4e415854))
        {
            int32_t* data_29 = Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(result[2]), 0x4e415854);
            int32_t* dest_1 = data_29;
            int32_t i_2 = 1;
            int32_t* data_30;

            for (int32_t* i = Sys_PopStack_19(data_29); i; i = Sys_PopStack_19(data_30))
            {
                data_30 = Sys_ReadFileBlock_20(i, 0x4e415854);

                if (!data_30)
                    break;

                i_2 += 1;
            }

            result[5] = Mem_Alloc(i_2 * 0x14, 4);
            result[4] = i_2;

            if (i_2)
            {
                int32_t i_1;

                do
                {
                    int32_t* data_32 = Sys_CheckHeap_19(dest_1, result[2]);
                    *(context_val + result[5] + 0x10) = &data_32[2];
                    *(context_val + result[5] + 8) = *data_32;
                    *(context_val + result[5]) = data_32[1];
                    *(context_val + result[5] + 4) = 0;
                    dest_1 = Sys_PopStack_19(dest_1);

                    if (dest_1)
                        dest_1 = Sys_ReadFileBlock_20(dest_1, 0x4e415854);

                    context_val = &context_val[5];
                    i_1 = i_2;
                    i_2 -= 1;
                } while (i_1 != 1);
            }
        }

        int32_t item_8 = result[3];
        int32_t item_4 = result[2];

        if (*((DynObj_InsertHashItem_13() << 2) + &g_a94e84))
            (*((DynObj_InsertHashItem_13() << 2) + &g_a94e84))(&item_8);

        return result;
    }

    int32_t saved_ebp_1 = 0x3fb99999;
    int32_t item_1c_1 = 0xa0000000;
    int32_t item_28 = context;
    int32_t item_2c = context;
    Error_Show("Mesh "%s" and source code are incompatible. (Mesh "%s" is version %0.2f, source code "
    "is version %0.2f.)");

    while (true)
        /* nop */
}
