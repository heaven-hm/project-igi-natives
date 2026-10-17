// IGI native provenance: Vehicle_InitPlane_2 - 0x00431A80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00431A80-Vehicle_InitPlane_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_InitPlane_2.h"
int32_t* Vehicle_InitPlane_2(void* context)

{
    int32_t* result = *(context + 0x74c);

    if (result)
    {
        void* data_val = *result;

        if (data_val)
            SoundSys_SetFrequency_7(data_val);

        result = Qtask_UpdateList(*(context + 0x74c));
        *(context + 0x74c) = 0;
    }

    return result;
}
