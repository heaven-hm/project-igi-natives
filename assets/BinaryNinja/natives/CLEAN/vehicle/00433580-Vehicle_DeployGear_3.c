// IGI native provenance: Vehicle_DeployGear_3 - 0x00433580 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00433580-Vehicle_DeployGear_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_DeployGear_3.h"
float Vehicle_DeployGear_3(float context) {
    float result = context;
    context = 0.0f;
    void* temp_val = *(*(result + 0x1b4) + 0x2d4);

    if (*(temp_val + 0x28) > 0)
    {
        void* flagP1 = result + 0x748;
        void* context_1 = temp_val + 0x2c;
        bool flag_0_1;

        do
        {
            void* source_1 = context_1;
            context_1 += 0x1c;
            memcpy(flagP1, source_1, 0x1c);
            flagP1 += 0x1c;
            flag_0_1 = context + 1 < *(temp_val + 0x28);
            context += 1;
        } while (flag_0_1);
    }

    long double fpu7 = *(result + 0x780);
    int32_t flagP2 = *(result + 0x784);
    *(result + 0x7ac) = 0x46800000;
    long double fpu_val_7_1 = fpu7 * 0.5f;
    *(result + 0x7a0) = flagP2;
    int32_t flagP3 = *(result + 0x788);
    *(result + 0x7c8) = 0xc6800000;
    int32_t context_3 = *(result + 0x78c);
    *(result + 0x7a4) = flagP3;
    int32_t flagP4 = *(result + 0x784);
    *(result + 0x79c) = fpu_val_7_1;
    *(result + 0x7a8) = context_3;
    long double fpu6 = *(result + 0x794);
    *(result + 0x7b4) = *(result + 0x798);
    long double fpu_val_6_1 = -(fpu6);
    *(result + 0x7bc) = flagP4;
    int32_t flagP5 = *(result + 0x788);
    int32_t entity_5 = *(result + 0x78c);
    *(result + 0x7b0) = fpu_val_6_1;
    *(result + 0x7c0) = flagP5;
    *(result + 0x7b8) = fpu_val_7_1;
    *(result + 0x7c4) = entity_5;
    *(result + 0x7cc) = fpu_val_6_1;
    *(result + 0x7d0) = *(result + 0x798);
    memcpy(temp_val + 0x80, result + 0x79c, 0x1c);
    memcpy(temp_val + 0x9c, result + 0x7b8, 0x1c);
    return result;
}
