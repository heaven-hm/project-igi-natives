#include "gi_platform.h"
#include "004D9870-Camera_SubmitFrame.h"
int32_t* Camera_SubmitFrame(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t* a6 , int32_t a7, int32_t a8, float a9)

// Sig: void Camera_SubmitFrame(CameraContext* camCtx)
// Note: Submits/presents the camera frame: increments frame counters at
// camCtx+0x50 against limit at +0x4C. IGI-MP hooks this as Camera_Submit for
// the lobby camera.
{
    int32_t* result = a6;
    bool cond_0 = result <= (*(int32_t*)(uintptr_t)(a1 + 0x4c));
    (*(int32_t*)(uintptr_t)(a1 + 0x50)) += 1;

    if (!cond_0)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x4c)) = result;
        (*(int32_t*)(uintptr_t)(a1 + 0x48)) = 0xbf800000;
    }

    float arg_18;
    long double fpu7 = arg_18;
    long double f0 = (*(int32_t*)(uintptr_t)(a1 + 0x48));
    fpu7 - f0;
    result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        memcpy(a1 + 0x28, a2, 0x18);
        memcpy(a1, a3, 0x28);
        (*(int32_t*)(uintptr_t)(a1 + 0x40)) = a4;
        (*(int32_t*)(uintptr_t)(a1 + 0x44)) = a5;
        (*(int32_t*)(uintptr_t)(a1 + 0x54)) = a7;
        (*(int32_t*)(uintptr_t)(a1 + 0x58)) = a8;
        float objC3 = arg_18;
        (*(int32_t*)(uintptr_t)(a1 + 0x5c)) = a9;
        (*(int32_t*)(uintptr_t)(a1 + 0x48)) = objC3;
        arg_18 = a9;
        int32_t i = 0;
        result = Qtask_GetList();

        if (*result > 0)
        {
            int32_t srcS4 = 8;

            do
            {
                int32_t valA4 = 0;
                valA4 = *(*(Qtask_GetList() + srcS4) + 0x1c);
                uint32_t valA6 = Qtask_GetEventId();
                ((int(*)())(uintptr_t)(*(((valA4 + valA6 * 0x180) << 2) + &g_a96ae0)))(*(Qtask_GetList() + srcS4),
                    &arg_18);
                i += 1;
                srcS4 += 4;
                result = Qtask_GetList();
            } while (i < *result);
        }
    }

    return result;
}
