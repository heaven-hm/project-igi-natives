#include "00416D90-Level_InitSprites_6.h"
/* 0x00416d90 Level_InitSprites_6 full linked: callers=1 callees=17 */
void* Level_InitSprites_6()

{
    sub_4b4720(g_57babc + 0x2c);
    sub_4b4720(g_57babc + 0x38);
    sub_4b47e0(g_57babc + 0x2c, 0x19111911);
    sub_4b47e0(g_57babc + 0x38, 0x19111911);
    int32_t i = 0xc0;
    *(g_57babc + 0xe0) = 0;
    *(g_57babc + 0xe1) = 0;

    do
    {
        i += 4;
        *(i + g_57babc - 4) = 0;
    } while (i < 0xd0);

    for (int32_t i_1 = 0xd0; i_1 < 0xe0; )
    {
        i_1 += 4;
        *(i_1 + g_57babc - 4) = 0;
    }

    void* eax_3 = sub_4f1030(0);
    int32_t* eax_5 = *(g_57babc + 0xc0);

    if (eax_5)
    {
        Qtask_UpdateList(eax_5);
        *(g_57babc + 0xc0) = 0;
    }

    if (eax_3)
        *(g_57babc + 0xc0) = QTask_LinkEventHandler_2(eax_3);

    void* ecx_5 = g_57babc;
    void* eax_8 = **(ecx_5 + 0x54);
    *(ecx_5 + 0x58) = 0;
    *(g_57babc + 0x5c) = sub_484d40(eax_8, g_57babc + 0x60);

    if (eax_3)
        sub_484d60(*(g_57babc + 0x5c), eax_3);

    int32_t ecx_9;
    long double st0;
    st0 = Config_SaveGameOptions_2();
    int32_t var_c_5 = ecx_9;
    int32_t ecx_10;
    long double st0_1;
    st0_1 = Config_SaveGameOptions_2();
    int32_t var_10_3 = ecx_10;
    Music_SetVolume(st0_1, st0);
    Music_SetSfxVolume(Config_RegisterOptions_2());
    void* result = sub_48f250();

    if (!result)
        result = Level_CheckQTaskID_6(sub_4f0ed0());

    return result;
}
