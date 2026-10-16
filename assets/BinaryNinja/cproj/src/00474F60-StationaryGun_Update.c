#include "gi_platform.h"
#include "00474F60-StationaryGun_Update.h"
void* StationaryGun_Update(double* a1, int32_t* a2)

{
    float* valA = a2[1];
    double v_30 = valA[2] * a1[0x28] + valA[1] * a1[0x27] + *valA * a1[0x26];
    double v_28 = valA[5] * a1[0x28] + valA[4] * a1[0x27] + valA[3] * a1[0x26];
    double v_20 = valA[8] * a1[0x28] + valA[7] * a1[0x27] + valA[6] * a1[0x26];
    memcpy(&a1[0x1e], &v_30, 0x18);
    a1[0x1e] = **a2 + a1[0x1e];
    a1[0x1f] = (*(int32_t*)(uintptr_t)(*a2 + 8)) + a1[0x1f];
    a1[0x20] = (*(int32_t*)(uintptr_t)(*a2 + 0x10)) + a1[0x20];
    float* valA3 = a2[1];
    v_30 = *valA3 * a1[0x29] + valA3[2] * a1[0x2c] + valA3[1] * (*(int32_t*)(uintptr_t)(a1 + 0x154));
    *(&v_30 + 4) = *valA3 * (*(int32_t*)(uintptr_t)(a1 + 0x14c)) + valA3[2] * (*(int32_t*)(uintptr_t)(a1 + 0x164)) + valA3[1] * a1[0x2b];
    v_28 = *valA3 * a1[0x2a] + valA3[2] * a1[0x2d] + valA3[1] * (*(int32_t*)(uintptr_t)(a1 + 0x15c));
    *(&v_28 + 4) = valA3[5] * a1[0x2c] + valA3[3] * a1[0x29] + valA3[4] * (*(int32_t*)(uintptr_t)(a1 + 0x154));
    v_20 = valA3[5] * (*(int32_t*)(uintptr_t)(a1 + 0x164)) + valA3[3] * (*(int32_t*)(uintptr_t)(a1 + 0x14c)) + valA3[4] * a1[0x2b];
    *(&v_20 + 4) = valA3[5] * a1[0x2d] + valA3[3] * a1[0x2a] + valA3[4] * (*(int32_t*)(uintptr_t)(a1 + 0x15c));
    float v_18 = valA3[8] * a1[0x2c] + valA3[6] * a1[0x29] + valA3[7] * (*(int32_t*)(uintptr_t)(a1 + 0x154));
    float v_14 = valA3[8] * (*(int32_t*)(uintptr_t)(a1 + 0x164)) + valA3[6] * (*(int32_t*)(uintptr_t)(a1 + 0x14c)) + valA3[7] * a1[0x2b];
    int32_t v_c = valA3[9] + (*(int32_t*)(uintptr_t)(a1 + 0x16c)) + 1;
    float v_10 = valA3[8] * a1[0x2d] + valA3[6] * a1[0x2a] + valA3[7] * (*(int32_t*)(uintptr_t)(a1 + 0x15c));
    long double x87_r7_54 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double x87_r6_48 = a1[0x14];
    x87_r6_48 - x87_r7_54;
    memcpy(&a1[0x21], &v_30, 0x28);
    long double x87_r7_55;

    if (!(*(&((x87_r6_48 < x87_r7_54 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_48, x87_r7_54) ? 1 : 0) << 0xa
            | (x87_r6_48 == x87_r7_54 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_55 = a1[0x14];
    else
        x87_r7_55 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_49 = a1[0x13];
    x87_r6_49 - x87_r7_55;
    long double x87_r7_57;

    if (*(&((x87_r6_49 < x87_r7_55 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_49, x87_r7_55) ? 1 : 0) << 0xa
        | (x87_r6_49 == x87_r7_55 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_58 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_50 = a1[0x14];
        x87_r6_50 - x87_r7_58;

        if (!(*(&((x87_r6_50 < x87_r7_58 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_50, x87_r7_58) ? 1 : 0) << 0xa
                | (x87_r6_50 == x87_r7_58 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_57 = a1[0x14];
        else
            x87_r7_57 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_57 = a1[0x13];

    float v_4c_1 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_57;
    void* v_58 = a1[0xd];
    WorldObject_CommitTransform(v_58, a1, &a1[0x1e], v_4c_1);
    void* v_5c = &a1[0xe];
    memcpy(&a1[0xe], &a1[0x21], 0x28);
    Weapon_ComputeAccuracy_3(a1);
    void* v_38 = &a1[0x1e];
    void* result = &a1[0x21];
    int32_t* i_1 = a1[1];
    void* result_1 = result;

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t objC3 = g_afa7e0;

            do
            {
                int32_t* tmpD3 = *i;
                void* valA13;

                if (!tmpD3)
                    valA13 = nullptr;
                else
                {
                    int32_t valA10 = *tmpD3;
                    int32_t valA11 = -(valA10);
                    valA13 = (valA11 - valA11) & tmpD3;
                }

                *((objC3 << 2) + &g_afa6e0) = valA13;
                g_afa7e0 = objC3 + 1;
                uint32_t valA15 = DynObj_CreateMagicObject_6();
                int32_t tmpD4 = 0;
                tmpD4 = i[7];
                result = *(((valA15 * 0x180 + tmpD4) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &v_38);

                objC3 = g_afa7e0 - 1;
                g_afa7e0 = objC3;
                i = *((objC3 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
