// IGI native provenance: Level_InitSprites_6 - 0x00416D90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00416D90-Level_InitSprites_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Level_InitSprites_6.h"
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

    void* data_3 = Script_ExecuteLevelScript_4(0);
    int32_t* data_5 = *(g_57babc + 0xc0);

    if (data_5)
    {
        Qtask_UpdateList(data_5);
        *(g_57babc + 0xc0) = 0;
    }

    if (data_3)
        *(g_57babc + 0xc0) = QTask_LinkEventHandler_2(data_3);

    void* entity_5 = g_57babc;
    void* data_8 = **(entity_5 + 0x54);
    *(entity_5 + 0x58) = 0;
    *(g_57babc + 0x5c) = FX_SmokeEmit_5(data_8, g_57babc + 0x60);

    if (data_3)
        FX_ErrorInHumancameraHu_4(*(g_57babc + 0x5c), data_3);

    int32_t entity_9;
    long double fp0;
    fp0 = Config_SaveGameOptions_2();
    int32_t item_c_5 = entity_9;
    int32_t entity_10;
    long double fp0_1;
    fp0_1 = Config_SaveGameOptions_2();
    int32_t item_10_3 = entity_10;
    Music_SetVolume(fp0_1, fp0);
    Music_SetSfxVolume(Config_RegisterOptions_2());
    void* result = FX_FragmentSimulate_25();

    if (!result)
        result = Level_CheckQTaskID_6(Script_EvaluateCondition());

    return result;
}
