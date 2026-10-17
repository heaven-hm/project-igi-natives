// Original IGI.EXE function: HumanPlayer_Setactivematerial (VA 0x00407D60; static CFG gate PASS, CFG score 1.000).
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
