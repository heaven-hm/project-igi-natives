#include "Muzzle_Eye.h"
void* Muzzle_Eye(void* a1)

{
    void* dstD = *(a1 + 0x4ec);
    *(a1 + 0x4d3) = 0;
    void* result;
    int32_t objC;
    result = Table_GetAt(a1 + 0x4c4, 0);

    if (result)
    {
        int32_t tmpD;
        void* valA1 = HumanPlayer_LoadParameters_13(result, tmpD, objC, result);
        double v_40;
        AI_FireWeapon_23(&v_40, *(a1 + 0x4ec));
        void v_28;
        AI_TakeCover_23(&v_28, *(a1 + 0x4ec));
        float v_48_1 = 0f;
        float v_44_1 = 0f;
        float valA3 = *(a1 + 0x688);
        v_40 = 0f + v_40;
        int32_t objC2 = *(a1 + 0x68c);
        float v_88 = valA3;
        int32_t v_84_1 = objC2;
        double v_38;
        double v_38_1 = v_48_1 + v_38;
        int32_t v_80_1 = *(a1 + 0x690);
        double v_30;
        double v_30_1 = v_44_1 + v_30;

        if (*(valA1 + 0x610) == 4)
        {
            long double x87_r7_7 = *(a1 + 0x4e0);
            long double x87_r6_1 = 3.0;
            x87_r6_1 - x87_r7_7;

            if (*(&((x87_r6_1 < x87_r7_7 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_1, x87_r7_7) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_2 = 60.0;
                x87_r6_2 - x87_r7_7;

                if (*(&((x87_r6_2 < x87_r7_7 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_2, x87_r7_7) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    x87_r7_7 = 60.0;
            }
            else
                x87_r7_7 = 3.0;

            long double x87_r7_13 = (Camera_ApplyPostProcess_5(0.69999999999999996, x87_r7_7 * 50.0)
                + x87_r7_7 * 0.100000001f) * *(valA1 + 0x660);
            float v_24;
            v_88 = x87_r7_13 * v_24;
            float v_18;
            float v_84_2 = x87_r7_13 * v_18;
            float v_c;
            float v_80_2 = x87_r7_13 * v_c;
        }

        double* v_78_1 = &v_40;
        int32_t valA6 = *(a1 + 0x4d0);
        char v_7c = *(a1 + 0x4d1);
        void* v_74_1 = &v_28;
        int32_t v_68_1 = valA6;
        float* v_70_1 = &v_88;
        char v_7b_1 = 0;
        int32_t v_6c_1 = 0;
        int32_t v_64_1 = *(a1 + 0x4d2);
        int32_t v_60_1 = *(dstD + 0x1ec);
        float v_5c_1 = 0f;
        float v_58_1 = 0f;
        void* v_50_1 = a1;
        int32_t v_54_1 = *(a1 + 0x4d4);
        uint32_t valA9 = AI_AlertAllies_17();
        int32_t tmpD5 = 0;
        tmpD5 = *(result + 0x1c);
        result = (*(((valA9 * 0x180 + tmpD5) << 2) + &g_a96ae0))(result, &v_7c);
        *(a1 + 0x4d1) = 0;
        *(a1 + 0x4d2) = 0;
        *(a1 + 0x4d3) = v_7b_1;
        *(dstD + 0x128) = (v_5c_1 + *(dstD + 0x128)) * 0.899999976f;
        *(dstD + 0x134) = (v_58_1 + *(dstD + 0x134)) * 0.899999976f;
    }

    return result;
}
