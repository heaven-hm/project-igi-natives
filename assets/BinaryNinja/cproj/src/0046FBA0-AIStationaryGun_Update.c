#include "gi_platform.h"
#include "0046FBA0-AIStationaryGun_Update.h"
int32_t AIStationaryGun_Update(double* a1, int32_t* a2)

{
    float* valA = a2[1];
    double v_94 = valA[2] * a1[0x20] + valA[1] * a1[0x1f] + *valA * a1[0x1e];
    double v_8c = valA[5] * a1[0x20] + valA[4] * a1[0x1f] + valA[3] * a1[0x1e];
    double* valA1 = *a2;
    double v_84 = valA[8] * a1[0x20] + valA[7] * a1[0x1f] + valA[6] * a1[0x1e];
    long double x87_r7_12 = v_94;
    double v_40;
    memcpy(&v_40, &v_94, 0x18);
    v_40 = x87_r7_12 + *valA1;
    double v_38;
    double v_38_1 = v_38 + valA1[1];
    double v_30;
    double v_30_1 = v_30 + valA1[2];
    long double x87_r7_18 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double x87_r6_12 = a1[0x14];
    x87_r6_12 - x87_r7_18;
    long double x87_r7_19;

    if (!(*(&((x87_r6_12 < x87_r7_18 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_18) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_18 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_19 = a1[0x14];
    else
        x87_r7_19 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_13 = a1[0x13];
    x87_r6_13 - x87_r7_19;
    long double x87_r7_21;

    if (*(&((x87_r6_13 < x87_r7_19 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_19) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_14 = a1[0x14];
        x87_r6_14 - x87_r7_22;

        if (!(*(&((x87_r6_14 < x87_r7_22 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_22) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_22 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_21 = a1[0x14];
        else
            x87_r7_21 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_21 = a1[0x13];

    long double x87_r7_24 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_21;
    void* tmpD = a1[0xd];
    float v_a8_1 = x87_r7_24;
    double* i_1 = &v_40;
    WorldObject_CommitTransform(tmpD, a1, i_1, v_a8_1);
    float valA4 = a1[0x38];
    float v_68;
    int32_t* v_bc = &v_68;
    Sys_DispatchOpcode_12(v_bc, valA4);
    float v_5c;
    float v_50;
    v_94 = v_50 * a1[0x22] + v_68 * a1[0x21] + v_5c * (*(int32_t*)(uintptr_t)(a1 + 0x10c));
    float v_64;
    float v_58;
    float v_4c;
    *(&v_94 + 4) = v_4c * a1[0x22] + v_64 * a1[0x21] + v_58 * (*(int32_t*)(uintptr_t)(a1 + 0x10c));
    float v_60;
    float v_54;
    float v_48;
    v_8c = v_48 * a1[0x22] + v_60 * a1[0x21] + v_54 * (*(int32_t*)(uintptr_t)(a1 + 0x10c));
    *(&v_8c + 4) = v_50 * (*(int32_t*)(uintptr_t)(a1 + 0x11c)) + v_68 * (*(int32_t*)(uintptr_t)(a1 + 0x114)) + v_5c * a1[0x23];
    v_84 = v_4c * (*(int32_t*)(uintptr_t)(a1 + 0x11c)) + v_64 * (*(int32_t*)(uintptr_t)(a1 + 0x114)) + v_58 * a1[0x23];
    *(&v_84 + 4) = v_48 * (*(int32_t*)(uintptr_t)(a1 + 0x11c)) + v_60 * (*(int32_t*)(uintptr_t)(a1 + 0x114)) + v_54 * a1[0x23];
    int32_t v_44;
    int32_t tmpD2 = (*(int32_t*)(uintptr_t)(a1 + 0x12c)) + v_44 + 1;
    float* valA6 = a2[1];
    int32_t v_70 = tmpD2;
    float v_7c = v_50 * a1[0x25] + v_68 * a1[0x24] + v_5c * (*(int32_t*)(uintptr_t)(a1 + 0x124));
    float v_78 = v_4c * a1[0x25] + v_64 * a1[0x24] + v_58 * (*(int32_t*)(uintptr_t)(a1 + 0x124));
    float v_74 = v_48 * a1[0x25] + v_60 * a1[0x24] + v_54 * (*(int32_t*)(uintptr_t)(a1 + 0x124));
    memcpy(&v_68, &v_94, 0x28);
    float v_28 = *(&v_8c + 4) * valA6[1] + v_94 * *valA6 + v_7c * valA6[2];
    float v_24 = v_84 * valA6[1] + *(&v_94 + 4) * *valA6 + v_78 * valA6[2];
    float v_20 = *(&v_84 + 4) * valA6[1] + v_8c * *valA6 + v_74 * valA6[2];
    float v_1c = *(&v_8c + 4) * valA6[4] + v_7c * valA6[5] + v_94 * valA6[3];
    int32_t v_4 = valA6[9] + tmpD2 + 1;
    float v_18 = v_84 * valA6[4] + v_78 * valA6[5] + *(&v_94 + 4) * valA6[3];
    float v_14 = *(&v_84 + 4) * valA6[4] + v_74 * valA6[5] + v_8c * valA6[3];
    float v_10 = *(&v_8c + 4) * valA6[7] + v_7c * valA6[8] + v_94 * valA6[6];
    float v_c = v_84 * valA6[7] + v_78 * valA6[8] + *(&v_94 + 4) * valA6[6];
    float v_8 = *(&v_84 + 4) * valA6[7] + v_74 * valA6[8] + v_8c * valA6[6];
    memcpy(&a1[0xe], &v_28, 0x28);
    Weapon_ReloadClip(a1);
    double* i = a1[1];
    int32_t result = *i;

    if (result && i)
    {
        *(&v_94 + 4) = &a1[0xe];
        v_94 = &a1[4];

        if (result && i)
        {
            int32_t objC1 = g_afa7e0;

            do
            {
                int32_t* tmpD4 = *i;
                void* valA10;

                if (!tmpD4)
                    valA10 = nullptr;
                else
                {
                    int32_t valA7 = *tmpD4;
                    int32_t valA8 = -(valA7);
                    valA10 = (valA8 - valA8) & tmpD4;
                }

                *((objC1 << 2) + &g_afa6e0) = valA10;
                g_afa7e0 = objC1 + 1;
                uint32_t valA12 = MagicObj_GetEventId();
                int32_t objC3 = 0;
                objC3 = *(i + 0x1c);
                result = *(((valA12 * 0x180 + objC3) << 2) + &g_a96ae0);

                if (result)
                {
                    double* v_a8_2 = &v_94;
                    i_1 = i;
                    result = result(i_1, v_a8_2);
                }

                objC1 = g_afa7e0 - 1;
                g_afa7e0 = objC1;
                i = *((objC1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
