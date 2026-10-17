// IGI native provenance: Binocular_Process - 0x00470800 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00470800-Binocular_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Binocular_Process.h"
int32_t* Binocular_Process(void* context)

{
    int32_t* result = *(context + 0x1c4);

    if (result)
    {
        void* data_val = *result;

        if (data_val)
            SoundSys_SetFrequency_7(data_val);

        result = Qtask_UpdateList(*(context + 0x1c4));
        *(context + 0x1c4) = 0;
    }

    return result;
}
