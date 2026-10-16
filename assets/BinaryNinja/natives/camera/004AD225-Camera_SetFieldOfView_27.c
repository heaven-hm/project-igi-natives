#include "Camera_SetFieldOfView_27.h"
BOOL Camera_SetFieldOfView_27(uint32_t a1, uint8_t* a2, int32_t a3, uint16_t* a4, uint32_t a5, uint32_t a6, int32_t a7)

{
    int32_t v_8 = 0xffffffff;
    int32_t v_c = 0x534868;
    int32_t v_10 = 0x4a67ec;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;
    int32_t saved_dst;
    int32_t* v_1c = &saved_dst;
    int32_t valA1 = g_936248;

    if (valA1)
        goto label_4ad294;

    uint16_t charType;
    BOOL result;

    if (!GetStringTypeW(1, &g_534864, 1, &charType))
    {
        if (GetStringTypeA(0, 1, &g_534860, 1, &charType))
        {
            valA1 = 2;
            goto label_4ad28f;
        }

        result = 0;
    }
    else
    {
        valA1 = 1;
    label_4ad28f:
        g_936248 = valA1;
    label_4ad294:

        if (valA1 == 2)
        {
            uint32_t Locale = a6;

            if (!Locale)
                Locale = g_9361e4;

            result = GetStringTypeA(Locale, a1, a2, a3, a4);
        }
        else if (valA1 != 1)
            result = 0;
        else
        {
            if (!a5)
                a5 = g_9361f4;

            int32_t valA6 = -(a7);
            int32_t cchWideChar =
                MultiByteToWideChar(a5, ((valA6 - valA6) & 8) + 1, a2, a3, nullptr, 0);

            if (!cchWideChar)
                result = 0;
            else
            {
                int32_t v_8_1 = 0;
                int32_t dstD1 = cchWideChar * 2;
                int32_t valA11 = dstD1 + 3;
                valA11 &= 0xfc;
                Camera_UpdateTransform_5(valA11);
                int32_t* v_1c_1 = &saved_dst;
                int32_t* v_28_1 = &saved_dst;
                Camera_ApplyBandFilter_26(&saved_dst, 0, dstD1);
                int32_t v_8_2 = 0xffffffff;

                if (!&saved_dst)
                    result = 0;
                else
                {
                    int32_t cchSrc = MultiByteToWideChar(a5, MB_PRECOMPOSED, a2, a3,
                        &saved_dst, cchWideChar);

                    if (!cchSrc)
                        result = 0;
                    else
                        result = GetStringTypeW(a1, &saved_dst, cchSrc, a4);
                }
            }
        }
    }

    fsbase->NtTib.ExceptionList = ExceptionList;
    return result;
}
