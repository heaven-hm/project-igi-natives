#include "004606F0-Human_Cleanup_6.h"
/* 0x004606f0 Human_Cleanup_6 full linked: callers=0 callees=11 */
int32_t* sub_4606f0(void* a1, int32_t* a2)

{
    int32_t* result = a2[2];

    if (!result)
    {
    label_46074b:
        void* edx_1 = *a2;
        double var_318[0x3];
        memcpy(&var_318, a1 + 0x20, 0x18);
        double var_300[0x60];
        result = sub_47b290(&var_300, 0x20, edx_1, &var_318);

        if (result > 0)
        {
            double (* esi_3)[0x60] = &var_300;
            int32_t* result_1 = result;
            bool cond:3_1;

            do
            {
                if (!sub_463150(a1))
                {
                    int32_t* eax_6 = a2[2];
                    int32_t ecx_1 = *a2;
                    int32_t var_334 = 0x14;
                    int32_t var_330 = 1;
                    int32_t var_32c_1 = 0x46;
                    int32_t var_328_1 = 0x46000000;
                    double (* var_324_1)[0x60] = esi_3;
                    int32_t var_320_1 = ecx_1;

                    if (!eax_6)
                        int32_t var_31c_2 = 0;
                    else
                    {
                        void* eax_7 = *eax_6;
                        void* var_31c_1 = eax_7;

                        if (eax_7)
                            var_330 = sub_463130(eax_7);
                    }

                    sub_450ce0(&var_334);
                }
                else if (Frames_GetUpdateCounter() > *(a1 + 0x848))
                {
                    struct status_msg* eax_3 = sub_4e6b00(a1, "gunshotmiss");

                    if (eax_3)
                        sub_4e6c30(eax_3, esi_3);

                    *(a1 + 0x848) = Frames_GetUpdateCounter() + 5;
                }

                esi_3 = &(*esi_3)[3];
                result = result_1 - 1;
                cond:3_1 = result_1 != 1;
                result_1 = result;
            } while (cond:3_1);
        }
    }
    else
    {
        void* esi_1 = *result;
        int32_t edi_1 = 1;

        if (esi_1 != a1)
        {
            if (esi_1)
            {
                int32_t eax = sub_460be0();
                int16_t var_34c_1 = eax;
                eax = *(esi_1 + 0x1c);
                result = TaskType_IsDerivedFrom(eax, var_34c_1);

                if (result)
                    edi_1 = *(esi_1 + 0xfc);
            }

            if (*(a1 + 0xfc) != edi_1)
                goto label_46074b;
        }
    }

    return result;
}
