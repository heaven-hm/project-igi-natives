#include "Glass_Update.h"
int32_t Glass_Update(float a1, float a2)

{
    float srcS = a1;
    void* objC = **(srcS + 0x6c);
    int32_t v_38 = 0;
    void* valA1 = *(*(objC + 0xc) + 0xc);
    long double x87_r7_3 = *(srcS + 0x78) * *(valA1 + 0x38) + *(srcS + 0x74) * *(valA1 + 0x34)
        + *(valA1 + 0x30) * *(srcS + 0x70);
    long double x87_r6_7 = *(srcS + 0x84) * *(valA1 + 0x38) + *(srcS + 0x80) * *(valA1 + 0x34)
        + *(srcS + 0x7c) * *(valA1 + 0x30);
    long double x87_r6_11 = *(srcS + 0x90) * *(valA1 + 0x38) + *(srcS + 0x8c) * *(valA1 + 0x34)
        + *(srcS + 0x88) * *(valA1 + 0x30);
    double v_18 = x87_r7_3 + *(srcS + 0x20);
    double v_10 = x87_r6_7 + *(srcS + 0x28);
    double v_8 = x87_r6_11 + *(srcS + 0x30);
    float tmpD1 = *(*(*(objC + 0xc) + 0xc) + 0x3c);
    a1 = tmpD1;
    float v_44 = srcS;
    long double fp0 = Level_CheckQTaskID_5(a2, &v_18, tmpD1);
    *(srcS + 0x13c) = fp0 + *(srcS + 0x13c);
    long double f0 = 0f;
    fp0 - f0;
    int16_t result = (fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        result = *(srcS + 0x144);

        if (!result)
        {
            uint32_t objC2 = *(srcS + 0x6c);
            *(srcS + 0x144) = 1;
            int32_t v_3c_1 = *(a2 + 0x10);
            return Env_333333333Glassshatte(objC2, srcS + 0x70, srcS + 0x20, *(a2 + 4), 409.600006f);
        }
    }

    return result;
}
