#include "004D9870-Camera_SubmitFrame.h"
/* 0x004d9870 Camera_SubmitFrame full linked: callers=8 callees=7 */
int32_t* Camera_SubmitFrame(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t* a6 @ 0x1c, int32_t a7, int32_t a8, float a9)

// Sig: void Camera_SubmitFrame(CameraContext* camCtx)
// Note: Submits/presents the camera frame: increments frame counters at
// camCtx+0x50 against limit at +0x4C. IGI-MP hooks this as Camera_Submit for
// the lobby camera.
{
    int32_t* result = a6;
    bool cond:0 = result <= *(a1 + 0x4c);
    *(a1 + 0x50) += 1;

    if (!cond:0)
    {
        *(a1 + 0x4c) = result;
        *(a1 + 0x48) = 0xbf800000;
    }

    float arg_18;
    long double x87_r7 = arg_18;
    long double temp0 = *(a1 + 0x48);
    x87_r7 - temp0;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        memcpy(a1 + 0x28, a2, 0x18);
        memcpy(a1, a3, 0x28);
        *(a1 + 0x40) = a4;
        *(a1 + 0x44) = a5;
        *(a1 + 0x54) = a7;
        *(a1 + 0x58) = a8;
        float ecx_3 = arg_18;
        *(a1 + 0x5c) = a9;
        *(a1 + 0x48) = ecx_3;
        arg_18 = a9;
        int32_t i = 0;
        result = Qtask_GetList();

        if (*result > 0)
        {
            int32_t esi_4 = 8;

            do
            {
                int32_t eax_4 = 0;
                eax_4 = *(*(Qtask_GetList() + esi_4) + 0x1c);
                uint32_t eax_6 = Qtask_GetEventId();
                (*(((eax_4 + eax_6 * 0x180) << 2) + &g_a96ae0))(*(Qtask_GetList() + esi_4),
                    &arg_18);
                i += 1;
                esi_4 += 4;
                result = Qtask_GetList();
            } while (i < *result);
        }
    }

    return result;
}
