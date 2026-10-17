// IGI native provenance: Qvm_Invoke18 - 0x004B7100 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7100-Qvm_Invoke18.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_Invoke18.h"

int32_t Qvm_Invoke18(void* arg1)

{
    int32_t* dest_ptr = *(arg1 + 0xc);
    int32_t result_val = *dest_ptr;

    if (!result_val)
    {
        g_a43e54 = 0;
        return result_val;
    }

    void* source_ptr = &dest_ptr[2];
    int32_t var_10 = result_val;
    void* var_14 = source_ptr;
    Sys_CheckHeap_18();
    int32_t eax_1 = *dest_ptr;
    int32_t base_val = 0;

    if (eax_1 > 0)
    {
        do
        {
            (*source_ptr)(*(source_ptr + 4));
            eax_1 = *dest_ptr;
            base_val += 1;
            source_ptr += 0xc;
        } while (base_val < eax_1);
    }

    *dest_ptr = 0;
    g_a43e54 = 0;
    return eax_1;
}
