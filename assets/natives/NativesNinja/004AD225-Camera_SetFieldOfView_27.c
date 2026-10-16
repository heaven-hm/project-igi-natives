#include "004AD225-Camera_SetFieldOfView_27.h"
/* 0x004ad225 Camera_SetFieldOfView_27 full linked: callers=2 callees=8 */
BOOL sub_4ad225(uint32_t a1, uint8_t* a2, int32_t a3, uint16_t* a4, uint32_t a5, uint32_t a6, int32_t a7)

{
    int32_t var_8 = 0xffffffff;
    int32_t var_c = 0x534868;
    int32_t var_10 = 0x4a67ec;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;
    int32_t __saved_edi;
    int32_t* var_1c = &__saved_edi;
    int32_t eax_1 = g_936248;

    if (eax_1)
        goto label_4ad294;

    uint16_t charType;
    BOOL result;

    if (!GetStringTypeW(1, &g_534864, 1, &charType))
    {
        if (GetStringTypeA(0, 1, &g_534860, 1, &charType))
        {
            eax_1 = 2;
            goto label_4ad28f;
        }

        result = 0;
    }
    else
    {
        eax_1 = 1;
    label_4ad28f:
        g_936248 = eax_1;
    label_4ad294:

        if (eax_1 == 2)
        {
            uint32_t Locale = a6;

            if (!Locale)
                Locale = g_9361e4;

            result = GetStringTypeA(Locale, a1, a2, a3, a4);
        }
        else if (eax_1 != 1)
            result = 0;
        else
        {
            if (!a5)
                a5 = g_9361f4;

            int32_t eax_6 = -(a7);
            int32_t cchWideChar =
                MultiByteToWideChar(a5, ((eax_6 - eax_6) & 8) + 1, a2, a3, nullptr, 0);

            if (!cchWideChar)
                result = 0;
            else
            {
                int32_t var_8_1 = 0;
                int32_t edi_1 = cchWideChar * 2;
                int32_t eax_11 = edi_1 + 3;
                eax_11 &= 0xfc;
                sub_4a54a0(eax_11);
                int32_t* var_1c_1 = &__saved_edi;
                int32_t* var_28_1 = &__saved_edi;
                sub_4acd10(&__saved_edi, 0, edi_1);
                int32_t var_8_2 = 0xffffffff;

                if (!&__saved_edi)
                    result = 0;
                else
                {
                    int32_t cchSrc = MultiByteToWideChar(a5, MB_PRECOMPOSED, a2, a3,
                        &__saved_edi, cchWideChar);

                    if (!cchSrc)
                        result = 0;
                    else
                        result = GetStringTypeW(a1, &__saved_edi, cchSrc, a4);
                }
            }
        }
    }

    fsbase->NtTib.ExceptionList = ExceptionList;
    return result;
}
