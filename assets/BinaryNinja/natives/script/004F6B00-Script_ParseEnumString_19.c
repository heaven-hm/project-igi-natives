#include "Script_ParseEnumString_19.h"
void* Script_ParseEnumString_19(void* a1)

{
    float valA = *(a1 + 0x2c7c);
    long double x87_r7_1 = *(a1 + 0x2c7c) * 3f;
    double v_20;
    memcpy(&v_20, a1 + 0x2c08, 0x18);
    float v_28_1 = valA * 3f;
    int32_t v_38 = 0;
    void* result = a1 + 0x78;
    long double x87_r7_2 = v_20 - x87_r7_1;
    bool cond_2_1;

    do
    {
        long double x87_r4_1 = v_38;
        int32_t i = 0;
        int32_t i_1 = 0;

        do
        {
            int32_t j = 0;
            int32_t j_1 = 0;

            do
            {
                j += 1;
                result += 0x20;
                *(result - 0x30) = x87_r4_1 * *(a1 + 0x2c7c) + x87_r7_2;
                double v_18;
                *(result - 0x28) = i_1 * *(a1 + 0x2c7c) + v_18 - v_28_1;
                long double x87_r2_7 = j_1;
                j_1 = j;
                long double x87_r2_8 = x87_r2_7 * *(a1 + 0x2c7c);
                *(result - 0x14) = 1;
                *(result - 0x18) = 0;
                double v_10;
                *(result - 0x20) = x87_r2_8 + v_10 - valA * 3f;
            } while (j < 7);

            i += 1;
            i_1 = i;
        } while (i < 7);

        cond_2_1 = v_38 + 1 < 7;
        v_38 += 1;
    } while (cond_2_1);
    return result;
}
