// IGI native provenance: DoorCabinet_Invoke333333333 - 0x00449B00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449B00-DoorCabinet_Invoke333333333.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke333333333.h"

int32_t DoorCabinet_Invoke333333333(void* arg1, int32_t* arg2)

{
    long double x87_r7_1 = arg2[1] + *(arg1 + 0x13c);
    *(arg1 + 0x13c) = x87_r7_1;
    long double temp0 = *(arg1 + 0x140);
    x87_r7_1 - temp0;
    int16_t result = (x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        result = *(arg1 + 0x144);

        if (!result)
        {
            *(arg1 + 0x144) = 1;
            void* data_val = *arg2;
            float var_c = arg2[2];
            float esi_2 = arg2[3];
            float eax_1 = arg2[4];
            var_c = var_c * 0.00700000022f;
            float var_8_2 = esi_2 * 0.00700000022f;
            float var_4_2 = eax_1 * 0.00700000022f;
            return Env_333333333(*(arg1 + 0x6c), &var_c, arg1 + 0x20, arg1 + 0x70, data_val);
        }
    }

    return result;
}
