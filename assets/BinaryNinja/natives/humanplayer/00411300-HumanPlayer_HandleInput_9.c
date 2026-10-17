// Original IGI.EXE function: HumanPlayer_HandleInput_9 (VA 0x00411300; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_HandleInput_9.h"
void* HumanPlayer_HandleInput_9(void* context)

{
    void* result = context;
    int32_t i_1 = 4;
    float* entity_val = result + 0xdcc;
    int32_t i;

    do
    {
        long double fpu_val_7_1 = *entity_val;
        long double f0_1 = 0.0f;
        fpu_val_7_1 - f0_1;
        result = (fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            long double fpu_val_7_3 = *entity_val - 0.0222222228f;
            *entity_val = fpu_val_7_3;
            long double f2_1 = 0.0f;
            fpu_val_7_3 - f2_1;
            result = (fpu_val_7_3 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_3 == f2_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
                *entity_val = 0.0f;
        }

        entity_val = &entity_val[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
