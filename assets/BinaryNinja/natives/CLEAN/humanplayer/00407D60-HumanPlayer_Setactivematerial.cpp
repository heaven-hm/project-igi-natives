// IGI native provenance: HumanPlayer_Setactivematerial - 0x00407D60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00407D60-HumanPlayer_Setactivematerial.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Setactivematerial.h"
void* HumanPlayer_Setactivematerial()

{
    for (char* i = &g_569474; i < 0x56e174; i = &i[0x268])
        *i = 0;

    g_538518 = QTask_UnableToAllocateEvent(0);
    g_538519 = QTask_UnableToAllocateEvent(0);
    g_53851a = QTask_UnableToAllocateEvent(0);
    Game_DefineOptions("SetActiveMaterial", SetActiveMaterial, 0, 0xffffffff);
    Game_DefineOptions("DefineQMaterial", DefineQ_Material, 0, 0xffffffff);
    return Game_DefineOptions("DefineGameMaterial", Define_GameMaterial, 0, 0xffffffff);
}
