// Original IGI.EXE function: FX_1009011 (VA 0x00481A60; static CFG gate PASS, CFG score 0.944).
#include "FX_1009011.h"
struct status_msg* FX_1009011(double* a1)

{
    void* valA1 = DynObj_Missing(&a1[0x30]);
    double v_18;
    memcpy(&v_18, &a1[4], 0x18);
    double* v_30;

    if (valA1)
    {
        v_30 = a1;
        DynObj_CreateMagicObject_5(v_30, valA1);
        int32_t* i = a1[1];
        *(a1 + 0xdc) = 0;

        if (*i && i)
        {
            int32_t objC1 = g_afa7e0;

            do
            {
                int32_t* tmpD1 = *i;
                void* valA5;

                if (!tmpD1)
                    valA5 = nullptr;
                else
                {
                    int32_t valA2 = *tmpD1;
                    int32_t valA3 = -(valA2);
                    valA5 = (valA3 - valA3) & tmpD1;
                }

                *((objC1 << 2) + &g_afa6e0) = valA5;
                g_afa7e0 = objC1 + 1;
                int32_t valA6 = Render_TransformVertices_2();
                int32_t tmpD2 = 0;
                tmpD2 = i[7];
                int32_t valA7 = *(((valA6 * 0x180 + tmpD2) << 2) + &g_a96ae0);

                if (valA7)
                    valA7(i);

                objC1 = g_afa7e0 - 1;
                g_afa7e0 = objC1;
                i = *((objC1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    int32_t v_2c_3 = 0;
    v_30 = a1;
    WeaponType_UpdateAnim(&v_18, v_30, v_2c_3);
    long double x87_r7_1 = v_18 + a1[4];
    uint32_t tmpD3 = a1[0x42];
    uint32_t valA8 = *(a1 + 0x20c);
    uint32_t v_2c_4 = 0;
    v_30 = 0x47c80000;
    v_18 = x87_r7_1;
    double v_10;
    double v_10_1 = v_10 + a1[5];
    void* v_54 = a1 + 0x214;
    double v_8;
    double v_8_1 = v_8 + a1[6];
    void* v_58 = a1 + 0x214;
    struct status_msg* result = FX_SmokeEmit(&v_18, 1, 0, a1[0x40], a1[0x3f] * 4096f,
        *(a1 + 0x1fc) * 4096f, 0x45c00000, valA8, tmpD3, nullptr, "1009_01_1", a1 + 0x214,
        0x15, 2, v_30, v_2c_4);
    a1[0x32] = 1;
    return result;
}
