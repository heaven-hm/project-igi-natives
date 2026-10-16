#include "gi_platform.h"
#include "00416D90-Level_InitSprites_6.h"
void* Level_InitSprites_6()

{
    Sys_ResolveSymbol_13(g_57babc + 0x2c);
    Sys_ResolveSymbol_13(g_57babc + 0x38);
    Sys_OpenFileStream_14(g_57babc + 0x2c, 0x19111911);
    Sys_OpenFileStream_14(g_57babc + 0x38, 0x19111911);
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

    void* valA3 = Script_ExecuteLevelScript_4(0);
    int32_t* valA5 = *(g_57babc + 0xc0);

    if (valA5)
    {
        Qtask_UpdateList(valA5);
        *(g_57babc + 0xc0) = 0;
    }

    if (valA3)
        *(g_57babc + 0xc0) = QTask_LinkEventHandler_2(valA3);

    void* objC5 = g_57babc;
    void* valA8 = **(objC5 + 0x54);
    *(objC5 + 0x58) = 0;
    *(g_57babc + 0x5c) = FX_SmokeEmit_5(valA8, g_57babc + 0x60);

    if (valA3)
        FX_ErrorInHumancameraHu_4(*(g_57babc + 0x5c), valA3);

    int32_t objC9;
    long double fp0;
    fp0 = Config_SaveGameOptions_2();
    int32_t v_c_5 = objC9;
    int32_t objC10;
    long double fp0_1;
    fp0_1 = Config_SaveGameOptions_2();
    int32_t v_10_3 = objC10;
    Music_SetVolume(fp0_1, fp0);
    Music_SetSfxVolume(Config_RegisterOptions_2());
    void* result = FX_FragmentSimulate_25();

    if (!result)
        result = Level_CheckQTaskID_6(Script_EvaluateCondition());

    return result;
}
