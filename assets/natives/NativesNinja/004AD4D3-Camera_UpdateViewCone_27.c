#include "004AD4D3-Camera_UpdateViewCone_27.h"
/* 0x004ad4d3 Camera_UpdateViewCone_27 full linked: callers=6 callees=12 */
int32_t sub_4ad4d3(uint32_t a1, uint32_t a2, uint8_t* a3, void* a4, PSTR a5, int32_t a6, uint32_t a7, int32_t a8)

{
    int32_t var_8 = 0xffffffff;
    int32_t var_c = 0x534878;
    int32_t var_10 = 0x4a67ec;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;
    int32_t __saved_edi;
    int32_t* var_1c = &__saved_edi;

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
            a4 = sub_4ad6f7(a3, a4);

        int32_t eax_4 = g_93624c;

        if (eax_4 == 2)
            result = LCMapStringA(a1, a2, a3, a4, a5, a6);
        else if (eax_4 != 1)
            result = 0;
        else
        {
            if (!a7)
                a7 = g_9361f4;

            int32_t eax_7 = -(a8);
            int32_t eax_11 =
                MultiByteToWideChar(a7, ((eax_7 - eax_7) & 8) + 1, a3, a4, nullptr, 0);

            if (!eax_11)
                result = 0;
            else
            {
                int32_t var_8_1 = 0;
                int32_t eax_13 = eax_11 * 2 + 3;
                eax_13 &= 0xfc;
                sub_4a54a0(eax_13);
                int32_t* var_1c_1 = &__saved_edi;
                int32_t* var_28_1 = &__saved_edi;
                int32_t var_8_2 = 0xffffffff;

                if (!var_28_1)
                    result = 0;
                else if (!MultiByteToWideChar(a7, MB_PRECOMPOSED, a3, a4, var_28_1, eax_11))
                    result = 0;
                else
                {
                    int32_t result_1 = LCMapStringW(a1, a2, var_28_1, eax_11, nullptr, 0);
                    int32_t result_2 = result_1;

                    if (!result_1)
                        result = 0;
                    else if (!(*(&a2 + 1) & 4))
                    {
                        int32_t var_8_3 = 1;
                        int32_t eax_18 = result_1 * 2 + 3;
                        eax_18 &= 0xfc;
                        sub_4a54a0(eax_18);
                        int32_t* var_1c_2 = &__saved_edi;
                        int32_t* var_24_1 = &__saved_edi;
                        int32_t var_8_4 = 0xffffffff;

                        if (!&__saved_edi)
                            result = 0;
                        else if (
                                !LCMapStringW(a1, a2, var_28_1, eax_11, &__saved_edi, result_1))
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

                            result_1 = WideCharToMultiByte(a7, 0x220, &__saved_edi, result_1,
                                lpMultiByteStr, cbMultiByte, nullptr, nullptr);

                            result = !result_1 ? 0 : result_1;
                        }
                    }
                    else if (!a6)
                        result = result_1;
                    else if (result_1 > a6)
                        result = 0;
                    else if (LCMapStringW(a1, a2, var_28_1, eax_11, a5, a6))
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
