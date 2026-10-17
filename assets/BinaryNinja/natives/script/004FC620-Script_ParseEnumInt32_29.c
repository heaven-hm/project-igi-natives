// Original IGI.EXE function: Script_ParseEnumInt32_29 (VA 0x004FC620; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_29.h"
int32_t Script_ParseEnumInt32_29(void* a1, int32_t a2, char a3, double* a4)

{
    int32_t i = 0;
    int32_t* v_cd4 = nullptr;
    int32_t i_1 = 0;
    double v_c68[0x16];
    double (* tmpD)[0x16] = &v_c68;
    int32_t v_cc0[0x16];
    int32_t (* dstD)[0x16] = &v_cc0;
    void v_bb0;
    void* objC = &v_bb0;
    float* valA = a1 + 0x1d0;

    do
    {
        if (*(valA + 5) && valA[1])
        {
            long double x87_r7_2 = *(a1 + 0x78) * *valA;
            long double x87_r6_2 = *(a1 + 0x74) * valA[-1];
            *dstD = i;
            *tmpD = 0;
            long double x87_r6_4 = *(a1 + 0x70) * valA[-2];
            *(tmpD + 4) = 0x40d40000;
            v_cd4 += 1;
            i = i_1;
            objC += 0x18;
            dstD = &(*dstD)[1];
            tmpD = &(*tmpD)[1];
            long double x87_r6_8 =
                *(a1 + 0x84) * *valA + *(a1 + 0x80) * valA[-1] + *(a1 + 0x7c) * valA[-2];
            long double x87_r6_12 =
                *(a1 + 0x90) * *valA + *(a1 + 0x8c) * valA[-1] + *(a1 + 0x88) * valA[-2];
            *(objC - 0x20) = x87_r7_2 + x87_r6_2 + x87_r6_4;
            *(objC - 0x18) = x87_r6_8;
            *(objC - 0x10) = x87_r6_12;
            *(objC - 0x20) = *(a1 + 0x20) + *(objC - 0x20);
            *(objC - 0x18) = *(a1 + 0x28) + *(objC - 0x18);
            *(objC - 0x10) = *(a1 + 0x30) + *(objC - 0x10);
        }

        i += 1;
        valA = &valA[0xe];
        i_1 = i;
    } while (i < 0x16);

    if (v_cd4)
    {
        double v_bb8;
        void v_9a8;
        DynObj_UpdateDynTree_10(a2, &v_9a8, &v_bb8, v_cd4, &v_c68, a3, a4, 0xffffffff);
        int32_t valA2 = 0;

        if (v_cd4 > 0)
        {
            void v_958;
            int32_t* objC2 = &v_958;

            do
            {
                if (objC2[2] && *objC2)
                {
                    *(a1 + v_cc0[valA2] * 0x38 + 0x1d6) = 1;
                    *(a1 + 0x1b8) += 1;
                    return 0;
                }

                valA2 += 1;
                objC2 = &objC2[0x1c];
            } while (valA2 < v_cd4);
        }
    }

    return 1;
}
