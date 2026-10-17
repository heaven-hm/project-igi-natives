// Original IGI.EXE function: ViewportQTask_Setup (VA 0x004E7E30; static CFG gate PASS, CFG score 0.958).
#include "ViewportQTask_Setup.h"
int32_t ViewportQTask_Setup(void* a1)

{
    float v_f0 = g_c28b44;
    float valA = *(a1 + 0x20);
    float objC = *(a1 + 0x24);
    float tmpD = *(a1 + 0x28);
    float valA1 = *(a1 + 0x2c);
    float v_104 = g_c28b48;
    g_a5ec68 = a1;
    int32_t objC1 = *(a1 + 0xac);
    float v_f8 = tmpD;
    Terrain_RenderQuadtree_8(objC1);
    void* valA2 = *(a1 + 0x50);
    long double x87_r7_4 = (valA1 + objC) * 0.5f;
    float v_fc_1 = valA * v_f0;
    float v_108_1 = ((objC - x87_r7_4) * *(valA2 + 0x44) + x87_r7_4) * v_104;
    long double x87_r7_6 = (x87_r7_4 + (valA1 - x87_r7_4) * *(valA2 + 0x44)) * v_104;
    v_104 = v_fc_1;
    float v_104_1 = v_104;
    *(a1 + 0x34) = v_104_1;
    v_104_1 = v_108_1;
    *(a1 + 0x38) = v_104_1;
    v_f8 = v_f8 * v_f0 - v_fc_1;
    v_f8 = v_f8;
    *(a1 + 0x3c) = v_f8;
    v_f8 = x87_r7_6 - v_108_1;
    v_f8 = v_f8;
    *(a1 + 0x40) = v_f8;
    Display_CheckCapabilities_13(a1 + 0x54, a1 + 0x34);
    Display_ClearSurfaces_13(a1 + 0x54, 1);
    void* valA4 = *(a1 + 0x50);
    void v_d0;
    memcpy(&v_d0, valA4, 0x28);
    void v_e8;
    memcpy(&v_e8, valA4 + 0x28, 0x18);
    void v_a8;
    Display_CloseDevice_15(&v_a8, &v_d0, &v_e8, *(valA4 + 0x40) * *(a1 + 0x30));
    Display_SetDisplayMode_15(&v_a8, 1f);
    Transcontext_SetActiveTransContext(&v_a8);
    g_5470b4 = *(a1 + 0xbc);

    for (int32_t* i = &g_a5ebe0; i < &g_a5ec1c; i = &i[1])
    {
        int32_t valA5 = *i;

        if (valA5)
            valA5(*(a1 + 0x50));
    }

    Sys_ReadFileBlock_19(*(a1 + 0xc4));
    int32_t* i_1 = *(a1 + 8);

    if (*i_1 && i_1)
    {
        int32_t objC5 = g_afa7e0;

        do
        {
            int32_t* tmpD4 = *i_1;
            void* valA10;

            if (!tmpD4)
                valA10 = nullptr;
            else
            {
                int32_t valA7 = *tmpD4;
                int32_t valA8 = -(valA7);
                valA10 = (valA8 - valA8) & tmpD4;
            }

            *((objC5 << 2) + &g_afa6e0) = valA10;
            g_afa7e0 = objC5 + 1;
            int32_t valA11 = StatusScreen_GetEvent();
            int32_t tmpD5 = 0;
            tmpD5 = i_1[7];
            int32_t valA12 = *(((valA11 * 0x180 + tmpD5) << 2) + &g_a96ae0);

            if (valA12)
                valA12(i_1);

            objC5 = g_afa7e0 - 1;
            g_afa7e0 = objC5;
            i_1 = *((objC5 << 2) + &g_afa6e0);
        } while (i_1);
    }

    Sys_OpenFileStream_19(*(a1 + 0xc4));
    Display_ClearSurfaces_15(&v_a8);
    int32_t valA14 = g_a5ec6c;
    g_a5ec68 = 0;
    *((valA14 << 2) + &g_a5ec1c) = a1;
    g_a5ec6c = valA14 + 1;
    return Display_SetGammaRamp_13();
}
