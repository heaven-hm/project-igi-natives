// IGI native provenance: Camera_ApplyWideScreen_12 - 0x004A8027 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8027-Camera_ApplyWideScreen_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_12.h"
long double Camera_ApplyWideScreen_12(int32_t context, int32_t param_2, int32_t param_3 )

{
    double arg_c;
    double arg_14;

    if (!Camera_UpdateViewCone_12(context, &arg_14, param_3))
    {
        int32_t item_24;
        int32_t item_24_1 = item_24 & 0xfffffffe;
        void item_5c;
        Camera_ApplyPostProcess_12(&item_5c, &param_3, context, param_2, &arg_c, &arg_14);
        /* no return */
    }

    int32_t data_1 = Camera_ApplyLineFilter_13(context);

    if (g_546af0 || !data_1)
    {
        Camera_UpdateTransform_13(data_1);
        int16_t fpu_control;
        Camera_UpdateTransform_14(fpu_control, param_3, 0xffff);
        return arg_14;
    }

    int32_t item_64_2 = context;
    int32_t item_68_2 = context;
    item_68_2 = arg_14;
    int32_t item_70_1 = context;
    item_70_1 = 0;
    int32_t item_78 = context;
    item_78 = arg_c;
    return Camera_ResetMatrix_12(data_1, param_2, item_78, context, item_70_1, context, item_68_2, param_3);
}
