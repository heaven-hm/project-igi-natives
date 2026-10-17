// Original IGI.EXE function: Camera_UpdateViewCone_27 (VA 0x004AD4D3; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_27.h"
int32_t Camera_UpdateViewCone_27(uint32_t a1, uint32_t a2, uint8_t* a3, void* a4, PSTR a5, int32_t a6, uint32_t a7, int32_t a8)

{
    int32_t v_8 = 0xffffffff;
    int32_t v_c = 0x534878;
    int32_t v_10 = 0x4a67ec;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;
    int32_t saved_dst;
    int32_t* v_1c = &saved_dst;

    if (g_93624c)
        goto label_4ad54c;

    int32_t result;

    if (!LCMapStringW(0, 0x100, &g_534864, 1, nullptr, 0))
    {
        if (LCMapStringA(0, 0x100, &g_534860, 1, nullptr, 0))
        {
            g_93624c = 2;
            goto label_4ad54c;
        }

        result = 0;
    }
    else
    {
        g_93624c = 1;
    label_4ad54c:

        if (a4 > 0)
            a4 = Camera_ApplyBandFilter_28(a3, a4);

        int32_t valA4 = g_93624c;

        if (valA4 == 2)
            result = LCMapStringA(a1, a2, a3, a4, a5, a6);
        else if (valA4 != 1)
            result = 0;
        else
        {
            if (!a7)
                a7 = g_9361f4;

            int32_t valA7 = -(a8);
            int32_t valA11 =
                MultiByteToWideChar(a7, ((valA7 - valA7) & 8) + 1, a3, a4, nullptr, 0);

            if (!valA11)
                result = 0;
            else
            {
                int32_t v_8_1 = 0;
                int32_t valA13 = valA11 * 2 + 3;
                valA13 &= 0xfc;
                Camera_UpdateTransform_5(valA13);
                int32_t* v_1c_1 = &saved_dst;
                int32_t* v_28_1 = &saved_dst;
                int32_t v_8_2 = 0xffffffff;

                if (!v_28_1)
                    result = 0;
                else if (!MultiByteToWideChar(a7, MB_PRECOMPOSED, a3, a4, v_28_1, valA11))
                    result = 0;
                else
                {
                    int32_t result_1 = LCMapStringW(a1, a2, v_28_1, valA11, nullptr, 0);
                    int32_t result_2 = result_1;

                    if (!result_1)
                        result = 0;
                    else if (!(*(&a2 + 1) & 4))
                    {
                        int32_t v_8_3 = 1;
                        int32_t valA18 = result_1 * 2 + 3;
                        valA18 &= 0xfc;
                        Camera_UpdateTransform_5(valA18);
                        int32_t* v_1c_2 = &saved_dst;
                        int32_t* v_24_1 = &saved_dst;
                        int32_t v_8_4 = 0xffffffff;

                        if (!&saved_dst)
                            result = 0;
                        else if (
                                !LCMapStringW(a1, a2, v_28_1, valA11, &saved_dst, result_1))
                            result = 0;
                        else
                        {
                            PSTR lpMultiByteStr;
                            int32_t cbMultiByte;

                            if (a6)
                            {
                                cbMultiByte = a6;
                                lpMultiByteStr = a5;
                            }
                            else
                            {
                                cbMultiByte = 0;
                                lpMultiByteStr = nullptr;
                            }

                            result_1 = WideCharToMultiByte(a7, 0x220, &saved_dst, result_1,
                                lpMultiByteStr, cbMultiByte, nullptr, nullptr);

                            result = !result_1 ? 0 : result_1;
                        }
                    }
                    else if (!a6)
                        result = result_1;
                    else if (result_1 > a6)
                        result = 0;
                    else if (LCMapStringW(a1, a2, v_28_1, valA11, a5, a6))
                        result = result_1;
                    else
                        result = 0;
                }
            }
        }
    }

    fsbase->NtTib.ExceptionList = ExceptionList;
    return result;
}
