// IGI native provenance: Display_CreateSurface_2 - 0x00491280 - CFG score 93.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491280-Display_CreateSurface_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CreateSurface_2.h"
char* Display_CreateSurface_2(char* context, int32_t* param_2)

{
    char* flagP = context;
    int32_t data_val = *(flagP + 0x1148);
    *(flagP + 0x1148) = data_val + 1;
    *(flagP + data_val * 0x7c + 0x1dc) = param_2[9] * 0x3e8;
    *(flagP + data_val * 0x7c + 0x1e0) = param_2[0xa] * 0x3e8;
    *(flagP + data_val * 0x7c + 0x1d4) = param_2[4];
    *(flagP + data_val * 0x7c + 0x1e4) = param_2[0xb] * 0x3e8;
    *(flagP + data_val * 0x7c + 0x1d8) = param_2[5];
    *(flagP + data_val * 0x7c + 0x1e8) = param_2[0xc] * 0x3e8;
    *(flagP + data_val * 0x7c + 0x1f0) = param_2[6];
    *(flagP + data_val * 0x7c + 0x1f4) = param_2[7];
    *(flagP + data_val * 0x7c + 0x1f8) = param_2[8];
    *(flagP + data_val * 0x7c + 0x1cc) = param_2[2];
    *(flagP + data_val * 0x7c + 0x1d0) = param_2[3];
    *(flagP + data_val * 0x7c + 0x1c8) = param_2[1];
    flagP[data_val * 0x7c + 0x240] = param_2[0xd];
    void* temp_7 = *param_2;
    void* dest_val = temp_7;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t data_19;
    int32_t temp_8;

    if (~i - 1 < 0x80)
        data_19 = Sys_CheckHeap_16(temp_7);

    if (~i - 1 >= 0x80 || !data_19)
    {
        int32_t dest_5 = *param_2;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_1_1 = 0 != *dest_5;
            dest_5 += 1;
            i_1 -= 1;

            if (!flag_1_1)
                break;
        }

        char* data_25 = Mem_Alloc(~i_1 + 4, 4);
        *(flagP + data_val * 0x7c + 0x1fc) = data_25;
        int32_t item_24_2 = *param_2;
        Game_DataSymbolLoad(data_25, "RM: %s");
    }
    else
    {
        void* entity_10 = *param_2;
        void* item_20 = entity_10;
        context = nullptr;
        int32_t* dest_1 = Resource_Load(&context, temp_8, entity_10, &context);
        param_2 = dest_1;

        if (dest_1)
        {
            void* data_22 = Mem_Alloc(context, 4);
            int32_t i_2 = 0xffffffff;
            *(flagP + data_val * 0x7c + 0x1fc) = data_22;

            while (i_2)
            {
                bool flag_3_1 = 0 != *dest_1;
                dest_1 += 1;
                i_2 -= 1;

                if (!flag_3_1)
                    break;
            }

            int32_t entity_11 = ~i_2;
            int32_t source_2;
            int32_t dest_4;
            dest_4 = memcpy(data_22, dest_1 - entity_11, entity_11 & 0xfffffffc);
            memcpy(dest_4, source_2, entity_11 & 3);
            Resource_Flush(param_2);
        }
    }

    return Display_OpenDevice_3(flagP, &flagP[data_val * 0x7c + 0x1c8]);
}
