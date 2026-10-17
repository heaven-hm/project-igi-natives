// IGI native provenance: HumanAI_InvokeQtasklistIsFull - 0x0045EB30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045EB30-HumanAI_InvokeQtasklistIsFull.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_InvokeQtasklistIsFull.h"

int32_t* HumanAI_InvokeQtasklistIsFull(void* arg1)

{
    DynObj_QtasklistIsFull(g_5bdc24, arg1);
    FX_FragmentSimulate_13(arg1);
    DynObj_QtasklistIsFull(Level_InitTextures_4(), arg1);
    FX_DebrisSpawn_5(arg1);
    AI_CombatTarget_17(arg1);
    __builtin_memset(arg1 + 0xe0, 0, 0x1c);
    *(arg1 + 0x100) = 0;
    *(arg1 + 0xfc) = 0xffffffff;
    Script_ParseEnumReal32_12(arg1 + 0x4c4);
    *(arg1 + 0x4d1) = 0;
    *(arg1 + 0x4d2) = 0;
    *(arg1 + 0x4d3) = 0;
    *(arg1 + 0x4d0) = 1;
    *(arg1 + 0x4d4) = 0x3f800000;
    *(arg1 + 0x4ec) = AI_CheckHearing_22(arg1);
    struct status_msg* eax_4 = SoundSys_SetFrequency(arg1, arg1 + 0x7d0, arg1 + 0x7e8,
        arg1 + 0x7ec, arg1 + 0x7f0, arg1 + 0x7f4, 0x4a7a0000, 0x44e66666, g_5bdb0c + 0x18);
    *(arg1 + 0x808) = 0;
    *(arg1 + 0x810) = 0;
    *(arg1 + 0x818) = 0;
    *(arg1 + 0x820) = 0;
    *(arg1 + 0x828) = 0;
    *(arg1 + 0x830) = 0;
    *(arg1 + 0x7cc) = eax_4;
    *(arg1 + 0x7e8) = 1;
    *(arg1 + 0x7ec) = 0;
    *(arg1 + 0x800) = 0;
    *(arg1 + 0x80c) = 0;
    *(arg1 + 0x814) = 0;
    *(arg1 + 0x81c) = 0;
    *(arg1 + 0x824) = 0;
    *(arg1 + 0x82c) = 0;
    *(arg1 + 0x834) = 0;
    *(arg1 + 0x7c0) = Level_LoadObjects_8();
    *(arg1 + 0x7c4) = 0xffffffff;
    *(arg1 + 0x7c8) = 0;
    *(arg1 + 0xcf4) = 0;
    *(arg1 + 0x850) = 0;
    int32_t* result = arg1 + 0x854;
    char* ecx_2 = arg1 + 0x8d4;
    int32_t i_1 = 0x20;
    int32_t i;

    do
    {
        *ecx_2 = 0;
        *result = 0;
        result = &result[1];
        ecx_2 = &ecx_2[0x21];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
