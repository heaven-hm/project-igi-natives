// Original IGI.EXE function: Script_EvaluateCondition_28 (VA 0x004FBF90; static CFG gate PASS, CFG score 1.000).
#include "Script_EvaluateCondition_28.h"
int32_t Script_EvaluateCondition_28(void* context, float param_2, float param_3, float param_4)

{
    int32_t item_c = 0;
    void* entity_val = *(context + 0x1b4);
    int32_t item_8 = 0;
    int32_t item_4 = 0;
    float item_18 = 0.0f;
    int32_t item_14 = 0;
    long double fpu_val_7_2 = -((param_2 * *(entity_val + 8)));
    long double fpu_val_6_3 = fpu_val_7_2 * *(context + 0x8c);
    item_18 = fpu_val_7_2 * *(context + 0x88);
    float item_14_1 = fpu_val_6_3;
    float item_10 = fpu_val_7_2 * *(context + 0x90);
    ForceAccumulator_Add(context + 0xf0, &item_18);
    int32_t result = ForceAccumulator_Integrate(context + 0xf0, context + 0x70);
    float entity_3 = *(context + 0x128);
    long double fpu_val_7_7 = *(context + 0x124) * param_4;
    *(context + 0x120) = *(context + 0x120) * param_4;
    *(context + 0x124) = fpu_val_7_7;
    *(context + 0x128) = entity_3 * param_4;
    float entity_6 = *(context + 0x110);
    long double fpu_val_7_13 = *(context + 0x10c) * param_3;
    *(context + 0x108) = *(context + 0x108) * param_3;
    *(context + 0x10c) = fpu_val_7_13;
    *(context + 0x110) = entity_6 * param_3;
    SoundSys_InitSoundSys_17(context + 0xf0);
    return result;
}
