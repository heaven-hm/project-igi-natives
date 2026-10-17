// IGI native provenance: Camera_SubmitFrame - 0x004D9870 - CFG score 90.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D9870-Camera_SubmitFrame.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SubmitFrame.h"
int32_t* Camera_SubmitFrame(void* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t* param_6 , int32_t param_7, int32_t param_8, float param_9)

// Sig: void Camera_SubmitFrame(CameraContext* camCtx)
// Note: Submits/presents the camera frame: increments frame counters at
// camCtx+0x50 against limit at +0x4C. IGI-MP hooks this as Camera_Submit for
// the lobby camera.
{
    int32_t* result = param_6;
    bool flag_0 = result <= *(context + 0x4c);
    *(context + 0x50) += 1;

    if (!flag_0)
    {
        *(context + 0x4c) = result;
        *(context + 0x48) = 0xbf800000;
    }

    float arg_18;
    long double fpu7 = arg_18;
    long double f0 = *(context + 0x48);
    fpu7 - f0;
    result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        memcpy(context + 0x28, param_2, 0x18);
        memcpy(context, param_3, 0x28);
        *(context + 0x40) = param_4;
        *(context + 0x44) = param_5;
        *(context + 0x54) = param_7;
        *(context + 0x58) = param_8;
        float entity_3 = arg_18;
        *(context + 0x5c) = param_9;
        *(context + 0x48) = entity_3;
        arg_18 = param_9;
        int32_t i = 0;
        result = Qtask_GetList();

        if (*result > 0)
        {
            int32_t source_4 = 8;

            do
            {
                int32_t data_4 = 0;
                data_4 = *(*(Qtask_GetList() + source_4) + 0x1c);
                uint32_t data_6 = Qtask_GetEventId();
                (*(((data_4 + data_6 * 0x180) << 2) + &g_a96ae0))(*(Qtask_GetList() + source_4),
                    &arg_18);
                i += 1;
                source_4 += 4;
                result = Qtask_GetList();
            } while (i < *result);
        }
    }

    return result;
}
