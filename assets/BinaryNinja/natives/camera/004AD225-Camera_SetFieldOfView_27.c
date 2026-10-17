// Original IGI.EXE function: Camera_SetFieldOfView_27 (VA 0x004AD225; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_27.h"
BOOL Camera_SetFieldOfView_27(uint32_t context, uint8_t* param_2, int32_t param_3, uint16_t* param_4, uint32_t param_5, uint32_t param_6, int32_t param_7)

{
    int32_t item_8 = 0xffffffff;
    int32_t item_c = 0x534868;
    int32_t item_10 = 0x4a67ec;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;
    int32_t saved_target;
    int32_t* item_1c = &saved_target;
    int32_t data_1 = g_936248;

    if (data_1)
        goto label_4ad294;

    uint16_t charType;
    BOOL result;

    if (!GetStringTypeW(1, &g_534864, 1, &charType))
    {
        if (GetStringTypeA(0, 1, &g_534860, 1, &charType))
        {
            data_1 = 2;
            goto label_4ad28f;
        }

        result = 0;
    }
    else
    {
        data_1 = 1;
    label_4ad28f:
        g_936248 = data_1;
    label_4ad294:

        if (data_1 == 2)
        {
            uint32_t Locale = param_6;

            if (!Locale)
                Locale = g_9361e4;

            result = GetStringTypeA(Locale, context, param_2, param_3, param_4);
        }
        else if (data_1 != 1)
            result = 0;
        else
        {
            if (!param_5)
                param_5 = g_9361f4;

            int32_t data_6 = -(param_7);
            int32_t cchWideChar =
                MultiByteToWideChar(param_5, ((data_6 - data_6) & 8) + 1, param_2, param_3, nullptr, 0);

            if (!cchWideChar)
                result = 0;
            else
            {
                int32_t item_8_1 = 0;
                int32_t dest_1 = cchWideChar * 2;
                int32_t data_11 = dest_1 + 3;
                data_11 &= 0xfc;
                Camera_UpdateTransform_5(data_11);
                int32_t* item_1c_1 = &saved_target;
                int32_t* item_28_1 = &saved_target;
                Camera_ApplyBandFilter_26(&saved_target, 0, dest_1);
                int32_t item_8_2 = 0xffffffff;

                if (!&saved_target)
                    result = 0;
                else
                {
                    int32_t cchSrc = MultiByteToWideChar(param_5, MB_PRECOMPOSED, param_2, param_3,
                        &saved_target, cchWideChar);

                    if (!cchSrc)
                        result = 0;
                    else
                        result = GetStringTypeW(context, &saved_target, cchSrc, param_4);
                }
            }
        }
    }

    fsbase->NtTib.ExceptionList = ExceptionList;
    return result;
}
