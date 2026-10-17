// IGI native provenance: CarAI_UpdateCar - 0x00426510 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00426510-CarAI_UpdateCar.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CarAI_UpdateCar.h"
int32_t CarAI_UpdateCar(void* context, int32_t param_2, int32_t param_3, int32_t param_4, float param_5)

{
    long double fpu7 = param_5;
    long double f0 = 0.0f;
    fpu7 - f0;
    int32_t item_14;
    int32_t* item_18 = &item_14;
    int32_t item_1c = param_2;
    item_14 = param_4;
    int32_t item_10 = param_3;
    long double fpu_val_7_1;

    fpu_val_7_1 = !(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40) ? param_5 : -1.0f;

    float item_8 = fpu_val_7_1;
    void* source_val = *(context + 0x4c);
    uint32_t data_3 = Script_ParseEnumReal32_15();
    int32_t data_4 = 0;
    data_4 = *(source_val + 0x1c);
    return (*(((data_3 * 0x180 + data_4) << 2) + &g_a96ae0))(source_val, &item_1c);
}
