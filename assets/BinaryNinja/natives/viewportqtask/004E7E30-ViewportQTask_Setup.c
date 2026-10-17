// Original IGI.EXE function: ViewportQTask_Setup (VA 0x004E7E30; static CFG gate PASS, CFG score 0.958).
#include "ViewportQTask_Setup.h"
int32_t ViewportQTask_Setup(void* context)

{
    float item_f0 = g_c28b44;
    float data_val = *(context + 0x20);
    float entity_val = *(context + 0x24);
    float temp_val = *(context + 0x28);
    float data_1 = *(context + 0x2c);
    float item_104 = g_c28b48;
    g_a5ec68 = context;
    int32_t entity_1 = *(context + 0xac);
    float item_f8 = temp_val;
    Terrain_RenderQuadtree_8(entity_1);
    void* data_2 = *(context + 0x50);
    long double fpu_val_7_4 = (data_1 + entity_val) * 0.5f;
    float item_fc_1 = data_val * item_f0;
    float item_108_1 = ((entity_val - fpu_val_7_4) * *(data_2 + 0x44) + fpu_val_7_4) * item_104;
    long double fpu_val_7_6 = (fpu_val_7_4 + (data_1 - fpu_val_7_4) * *(data_2 + 0x44)) * item_104;
    item_104 = item_fc_1;
    float item_104_1 = item_104;
    *(context + 0x34) = item_104_1;
    item_104_1 = item_108_1;
    *(context + 0x38) = item_104_1;
    item_f8 = item_f8 * item_f0 - item_fc_1;
    item_f8 = item_f8;
    *(context + 0x3c) = item_f8;
    item_f8 = fpu_val_7_6 - item_108_1;
    item_f8 = item_f8;
    *(context + 0x40) = item_f8;
    Display_CheckCapabilities_13(context + 0x54, context + 0x34);
    Display_ClearSurfaces_13(context + 0x54, 1);
    void* data_4 = *(context + 0x50);
    void item_d0;
    memcpy(&item_d0, data_4, 0x28);
    void item_e8;
    memcpy(&item_e8, data_4 + 0x28, 0x18);
    void item_a8;
    Display_CloseDevice_15(&item_a8, &item_d0, &item_e8, *(data_4 + 0x40) * *(context + 0x30));
    Display_SetDisplayMode_15(&item_a8, 1.0f);
    Transcontext_SetActiveTransContext(&item_a8);
    g_5470b4 = *(context + 0xbc);

    for (int32_t* i = &g_a5ebe0; i < &g_a5ec1c; i = &i[1])
    {
        int32_t data_5 = *i;

        if (data_5)
            data_5(*(context + 0x50));
    }

    Sys_ReadFileBlock_19(*(context + 0xc4));
    int32_t* i_1 = *(context + 8);

    if (*i_1 && i_1)
    {
        int32_t entity_5 = g_afa7e0;

        do
        {
            int32_t* temp_4 = *i_1;
            void* data_10;

            if (!temp_4)
                data_10 = nullptr;
            else
            {
                int32_t data_7 = *temp_4;
                int32_t data_8 = -(data_7);
                data_10 = (data_8 - data_8) & temp_4;
            }

            *((entity_5 << 2) + &g_afa6e0) = data_10;
            g_afa7e0 = entity_5 + 1;
            int32_t data_11 = StatusScreen_GetEvent();
            int32_t temp_5 = 0;
            temp_5 = i_1[7];
            int32_t data_12 = *(((data_11 * 0x180 + temp_5) << 2) + &g_a96ae0);

            if (data_12)
                data_12(i_1);

            entity_5 = g_afa7e0 - 1;
            g_afa7e0 = entity_5;
            i_1 = *((entity_5 << 2) + &g_afa6e0);
        } while (i_1);
    }

    Sys_OpenFileStream_19(*(context + 0xc4));
    Display_ClearSurfaces_15(&item_a8);
    int32_t data_14 = g_a5ec6c;
    g_a5ec68 = 0;
    *((data_14 << 2) + &g_a5ec1c) = context;
    g_a5ec6c = data_14 + 1;
    return Display_SetGammaRamp_13();
}
