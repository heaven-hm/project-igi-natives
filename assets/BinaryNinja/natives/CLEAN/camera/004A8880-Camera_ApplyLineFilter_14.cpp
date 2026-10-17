// IGI native provenance: Camera_ApplyLineFilter_14 - 0x004A8880 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8880-Camera_ApplyLineFilter_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_14.h"
int32_t Camera_ApplyLineFilter_14(int16_t context , long double param_2 , long double param_3 ) {
    int32_t saved_frame;
    int32_t* flagP = &saved_frame;
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(context);
    int16_t item_a8 = f0;

    if (!g_546af0)
    {
        double item_8a_1 = param_3;
        double item_82_1 = param_2;
    }

    int32_t entity_val;
    void* temp_val;
    __trandisp2(entity_val, temp_val, flagP, param_2, param_3);
    g_9361d8 = 1;
    return Camera_ApplyPostProcess_14(flagP, param_2);
}
