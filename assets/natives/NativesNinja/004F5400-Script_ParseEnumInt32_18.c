#include "004F5400-Script_ParseEnumInt32_18.h"
/* 0x004f5400 Script_ParseEnumInt32_18 full linked: callers=2 callees=11 */
int32_t* sub_4f5400(void* a1)

{
    char i = 0;
    int32_t* result_1 = nullptr;
    long double x87_r7 = *(a1 + 0x64);
    int32_t esi = 0xffffffff;
    char var_33c = 0;
    float var_344 = 0f;
    float var_340 = x87_r7 / g_a76c54;
    int32_t* result = QTask_DeleteTask_2(a1, sub_508610());

    if (result)
    {
        void var_320;
        sub_4f4880(&var_320, &result_1, QTask_DeleteTask_2(a1, sub_508610()), &var_344,
            *(a1 + 0x6c));
        result = result_1;

        if (result)
        {
            sub_4f4940(&var_320, result);
            int32_t* result_3 = result_1;
            int32_t ecx_1 = 0;

            if (result_3 > 0)
            {
                void var_31c;
                float* ebp_1 = &var_31c;

                while (!i)
                {
                    long double x87_r7_2 = *ebp_1;
                    long double temp1_1 = var_340;
                    x87_r7_2 - temp1_1;

                    if (!(*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                            | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        i = 1;
                    else
                        esi = ecx_1;

                    ecx_1 += 1;
                    ebp_1 = &ebp_1[2];

                    if (ecx_1 >= result_3)
                        break;
                }
            }

            long double x87_r7_3 = var_340;
            long double temp0_1 = var_344;
            x87_r7_3 - temp0_1;

            if (!(*(&((x87_r7_3 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_3, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                *(a1 + 0x61) = 1;
                long double x87_r7_4 = g_a76c54;
                *(a1 + 0x20c) = 0xffffffff;
                *(a1 + 0x64) = x87_r7_4 * var_344;
            }

            if (*(a1 + 0x20c) != esi)
            {
                *(a1 + 0x20c) = esi;
                var_33c = 1;
            }

            void* var_360_3 = &var_320;
            int32_t* var_338 = sub_4f4910(var_360_3, result_3, esi - 1);
            int32_t* result_2 = result_1;
            int32_t* eax_9 = sub_4f4910(&var_320, result_2, esi);
            int32_t* eax_11 = sub_4f4910(&var_320, result_1, esi + 1);
            int32_t var_32c_1 = sub_4f4910(&var_320, result_1, esi + 2);
            int32_t* eax_14 = eax_9;

            if (!*(*var_338 + 0x94))
                var_338 = eax_14;

            if (*(*eax_14 + 0x94))
                eax_14 = eax_11;
            else
                int32_t* var_330_2 = eax_14;

            if (!*(*eax_14 + 0x94))
                int32_t* var_32c_2 = eax_14;

            int32_t __saved_ebp_4 = var_33c;
            var_360_3 = var_344;
            result_2 = var_340;
            return sub_4f55d0(a1, &var_338, result_2);
        }
    }

    return result;
}
