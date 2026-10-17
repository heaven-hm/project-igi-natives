// IGI native provenance: Camera_UpdateViewCone_27 - 0x004AD4D3 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AD4D3-Camera_UpdateViewCone_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateViewCone_27.h"
int32_t Camera_UpdateViewCone_27(uint32_t context, uint32_t param_2, uint8_t* param_3, void* param_4, PSTR param_5, int32_t param_6, uint32_t param_7, int32_t param_8)

{
    int32_t item_8 = 0xffffffff;
    int32_t item_c = 0x534878;
    int32_t item_10 = 0x4a67ec;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;
    int32_t saved_target;
    int32_t* item_1c = &saved_target;

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

        if (param_4 > 0)
            param_4 = Camera_ApplyBandFilter_28(param_3, param_4);

        int32_t data_4 = g_93624c;

        if (data_4 == 2)
            result = LCMapStringA(context, param_2, param_3, param_4, param_5, param_6);
        else if (data_4 != 1)
            result = 0;
        else
        {
            if (!param_7)
                param_7 = g_9361f4;

            int32_t data_7 = -(param_8);
            int32_t data_11 =
                MultiByteToWideChar(param_7, ((data_7 - data_7) & 8) + 1, param_3, param_4, nullptr, 0);

            if (!data_11)
                result = 0;
            else
            {
                int32_t item_8_1 = 0;
                int32_t data_13 = data_11 * 2 + 3;
                data_13 &= 0xfc;
                Camera_UpdateTransform_5(data_13);
                int32_t* item_1c_1 = &saved_target;
                int32_t* item_28_1 = &saved_target;
                int32_t item_8_2 = 0xffffffff;

                if (!item_28_1)
                    result = 0;
                else if (!MultiByteToWideChar(param_7, MB_PRECOMPOSED, param_3, param_4, item_28_1, data_11))
                    result = 0;
                else
                {
                    int32_t result_1 = LCMapStringW(context, param_2, item_28_1, data_11, nullptr, 0);
                    int32_t result_2 = result_1;

                    if (!result_1)
                        result = 0;
                    else if (!(*(&param_2 + 1) & 4))
                    {
                        int32_t item_8_3 = 1;
                        int32_t data_18 = result_1 * 2 + 3;
                        data_18 &= 0xfc;
                        Camera_UpdateTransform_5(data_18);
                        int32_t* item_1c_2 = &saved_target;
                        int32_t* item_24_1 = &saved_target;
                        int32_t item_8_4 = 0xffffffff;

                        if (!&saved_target)
                            result = 0;
                        else if (
                                !LCMapStringW(context, param_2, item_28_1, data_11, &saved_target, result_1))
                            result = 0;
                        else
                        {
                            PSTR lpMultiByteStr;
                            int32_t cbMultiByte;

                            if (param_6)
                            {
                                cbMultiByte = param_6;
                                lpMultiByteStr = param_5;
                            }
                            else
                            {
                                cbMultiByte = 0;
                                lpMultiByteStr = nullptr;
                            }

                            result_1 = WideCharToMultiByte(param_7, 0x220, &saved_target, result_1,
                                lpMultiByteStr, cbMultiByte, nullptr, nullptr);

                            result = !result_1 ? 0 : result_1;
                        }
                    }
                    else if (!param_6)
                        result = result_1;
                    else if (result_1 > param_6)
                        result = 0;
                    else if (LCMapStringW(context, param_2, item_28_1, data_11, param_5, param_6))
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
