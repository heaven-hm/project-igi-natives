// IGI native provenance: PhysicsRigid_ProcessStep_4D57C0 - 0x004D57C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D57C0-PhysicsRigid_ProcessStep_4D57C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_ProcessStep_4D57C0.h"

int32_t PhysicsRigid_ProcessStep_4D57C0(int32_t arg1)

{
    int32_t* a5461c_1 = g_a5461c;
    int32_t data_val = *(a5461c_1 + arg1);
    int32_t result = g_a54610 - 1;
    g_a54610 = result;

    if (data_val != result)
    {
        int32_t a5460c_1 = g_a5460c;
        result = *(a5460c_1 + (result << 2)) * g_a54618 + g_a54608;
        int32_t edi_2 = *(a5460c_1 + (data_val << 2));
        int32_t source_ptr = *(a5461c_1 + result);
        *(a5460c_1 + (data_val << 2)) = *(a5460c_1 + (source_ptr << 2));
        *(g_a5460c + (source_ptr << 2)) = edi_2;
        *(g_a5461c + result) = data_val;
    }

    return result;
}
