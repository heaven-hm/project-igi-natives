#include "gi_platform.h"
#include "004D4B60-Render_SkinBones_8.h"
float Render_SkinBones_8(int32_t a1, float a2, float a3, float a4) __location("valA")

{
    float srcS = a4;
    void* valA = (*(int32_t*)(uintptr_t)(srcS + 0x30));

    if (valA)
        (*(int32_t*)(uintptr_t)(valA + 4)) = (*(int32_t*)(uintptr_t)(srcS + 0x2c));

    int32_t* dstD = a3;
    (*(int32_t*)(uintptr_t)(srcS + 8)) &= 0xfffffeff;
    dstD[1] &= 0xfffffeff;
    float tmpD2 = (*(int32_t*)(uintptr_t)(srcS + 0x2c));
    a3 = (*(int32_t*)(uintptr_t)(srcS + 0x28)) + (*(int32_t*)(uintptr_t)(srcS + 0x2c));
    (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = a3;
    float valA1;

    if (a1)
        valA1 = (*(int32_t*)(uintptr_t)(*(srcS + 0xc) + 0x10));

    int32_t objC5;
    float result;

    if (!a1 || !valA1 || *valA1 <= 0)
    {
        result = a2;
        objC5 = 0;
    }
    else
    {
        long double x87_r7_2;
        long double f2_1;

        if ((*(int32_t*)(uintptr_t)((srcS + 8) + 1)) & 0x80)
        {
            x87_r7_2 = tmpD2;
            f2_1 = a3;
            x87_r7_2 - f2_1;
        }

        float valA4;

        if (!((*(int32_t*)(uintptr_t)((srcS + 8) + 1)) & 0x80) || *(&((x87_r7_2 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            valA4 = a2;
        else
            valA4 = Render_ComputeNormals_8(a1, a2, dstD, srcS, tmpD2, tmpD2);

        objC5 = 1;
        result = Render_ComputeNormals_8(a1, valA4, dstD, srcS, tmpD2, (*(int32_t*)(uintptr_t)(srcS + 0x2c)));
    }

    long double x87_r7_3 = (*(int32_t*)(uintptr_t)(srcS + 0x2c));
    long double f0 = *(*(int32_t*)(uintptr_t)(srcS + 0xc));
    x87_r7_3 - f0;
    int32_t valA6;

    if (!(*(&((x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
            | (x87_r7_3 == f0 ? 1 : 0) << 0xe) + 1) & 1))
        valA6 = (*(int32_t*)(uintptr_t)(srcS + 8));

    if (!(*(&((x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
        | (x87_r7_3 == f0 ? 1 : 0) << 0xe) + 1) & 1) && !(valA6 & 2))
    {
    label_4d4c4a: ;
        *(&valA6 + 1) |= 1;
        (*(int32_t*)(uintptr_t)(srcS + 8)) = valA6;
        int32_t valA7 = dstD[1];
        *(&valA7 + 1) |= 1;
        dstD[1] = valA7;
        char valA8 = (*(int32_t*)(uintptr_t)(srcS + 8));

        if (!(valA8 & 1))
        {
            if (valA8 & 2)
            {
                int32_t valA23 = (*(int32_t*)(uintptr_t)(srcS + 8));
                (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = 0;
                *(&valA23 + 1) &= 0x7f;
                (*(int32_t*)(uintptr_t)(srcS + 8)) = valA23;
                return result;
            }

            (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = *(*(int32_t*)(uintptr_t)(srcS + 0xc));
        }
        else
        {
            float* valA9 = (*(int32_t*)(uintptr_t)(srcS + 0xc));

            if (!(valA8 & 2))
            {
                a4 = -1.0f;
                (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = (*(int32_t*)(uintptr_t)(srcS + 0x2c)) - *valA9;
            }
            else
            {
                (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = *valA9 + (*(int32_t*)(uintptr_t)(srcS + 0x2c));
                a4 = *valA9 + 1.0f;
            }

            if (objC5)
                result = Render_ComputeNormals_8(a1, result, dstD, srcS, a4, (*(int32_t*)(uintptr_t)(srcS + 0x2c)));

            if (!*dstD)
            {
                int16_t objC8 = (*(int32_t*)(uintptr_t)(srcS + 8));

                if (!(*(&objC8 + 1) & 0x80))
                {
                    int32_t* valA11 = (*(int32_t*)(uintptr_t)(srcS + 0xc));
                    float tmpD6 = (*(int32_t*)(uintptr_t)(srcS + 0x2c));
                    int32_t* dstD1 = valA11[2];

                    if (!(objC8 & 2))
                    {
                        (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = *valA11;
                        Render_DrawLightmapMesh_8(nullptr, nullptr, srcS);
                        (*(int32_t*)(uintptr_t)(srcS + 0x10)) = *dstD1[1] - (*(int32_t*)(uintptr_t)(srcS + 0x1c));
                        (*(int32_t*)(uintptr_t)(srcS + 0x14)) = *(dstD1[1] + 4) - (*(int32_t*)(uintptr_t)(srcS + 0x20));
                        long double x87_r7_22 = *(dstD1[1] + 8) - (*(int32_t*)(uintptr_t)(srcS + 0x24));
                        int32_t valA21 = (*(int32_t*)(uintptr_t)(srcS + 8));
                        (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = tmpD6;
                        *(&valA21 + 1) &= 0x7f;
                        (*(int32_t*)(uintptr_t)(srcS + 8)) = valA21;
                        (*(int32_t*)(uintptr_t)(srcS + 0x18)) = x87_r7_22;
                        return result;
                    }

                    (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = 0;
                    Render_DrawLightmapMesh_8(nullptr, nullptr, srcS);
                    (*(int32_t*)(uintptr_t)(srcS + 0x10)) = *(dstD1[1] + *dstD1 * 0x28 - 0x28) - (*(int32_t*)(uintptr_t)(srcS + 0x1c));
                    (*(int32_t*)(uintptr_t)(srcS + 0x14)) = *(dstD1[1] + *dstD1 * 0x28 - 0x24) - (*(int32_t*)(uintptr_t)(srcS + 0x20));
                    int32_t valA17 = (*(int32_t*)(uintptr_t)(srcS + 8));
                    *(&valA17 + 1) &= 0x7f;
                    long double x87_r7_16 = *(dstD1[1] + *dstD1 * 0x28 - 0x20) - (*(int32_t*)(uintptr_t)(srcS + 0x24));
                    (*(int32_t*)(uintptr_t)(srcS + 8)) = valA17;
                    (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = tmpD6;
                    (*(int32_t*)(uintptr_t)(srcS + 0x18)) = x87_r7_16;
                    return result;
                }
            }
        }
    }
    else
    {
        long double x87_r7_4 = (*(int32_t*)(uintptr_t)(srcS + 0x2c));
        long double f1_1 = 0.0f;
        x87_r7_4 - f1_1;

        if (*(&((x87_r7_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            valA6 = (*(int32_t*)(uintptr_t)(srcS + 8));

            if (valA6 & 2)
                goto label_4d4c4a;
        }
    }

    int32_t valA26 = (*(int32_t*)(uintptr_t)(srcS + 8));
    *(&valA26 + 1) &= 0x7f;
    (*(int32_t*)(uintptr_t)(srcS + 8)) = valA26;
    return result;
}
