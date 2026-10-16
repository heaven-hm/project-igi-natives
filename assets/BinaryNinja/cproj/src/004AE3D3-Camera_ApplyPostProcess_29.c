#include "gi_platform.h"
#include "004AE3D3-Camera_ApplyPostProcess_29.h"
int16_t* Camera_ApplyPostProcess_29(int16_t* a1, int32_t* a2)

{
    int32_t* ctxB = a2;
    int16_t* srcS = a1;
    int32_t objC;
    objC = (*(int32_t*)(uintptr_t)(ctxB + 0xa));
    int32_t valA = 0;
    int32_t v_18 = 0;
    int32_t v_28 = 0;
    int32_t v_24 = 0;
    int32_t v_20 = 0;
    valA = srcS[5];
    int16_t* result = valA & 0x7fff;
    int32_t* objC1 = objC & 0x7fff;
    int32_t dstD2 = (objC ^ valA) & 0x8000;
    int16_t* tmpD = objC1 + result;
    a1 = tmpD;

    if (result >= 0x7fff || objC1 >= 0x7fff || tmpD > 0xbffd)
    {
    label_4ae5d3: ;
        int16_t f0_1 = dstD2;
        dstD2 = -(dstD2);
        (*(int32_t*)(uintptr_t)(srcS + 4)) = 0;
        *srcS = 0;
        (*(int32_t*)(uintptr_t)(srcS + 8)) = ((dstD2 - dstD2) & 0x80000000) + 0x7fff8000;
    }
    else if (tmpD > 0x3fbf)
    {
        if (!result)
            a1 += 1;

        if (result || (*(int32_t*)(uintptr_t)(srcS + 8)) & 0x7fffffff)
        {
            result = nullptr;
    label_4ae463: ;
            if (!objC1)
                a1 += 1;

            if (!objC1 && !(ctxB[2] & 0x7fffffff) && !ctxB[1] && !*ctxB)
                goto label_4ae476;

            void* v_14_1 = nullptr;
            int32_t* v_8_1 = &v_24;

            for (a2 = 5; a2 > 0; a2 -= 1)
            {
                if (a2 > 0)
                {
                    int16_t* v_c_1 = v_14_1 * 2 + srcS;
                    int16_t* v_10_1 = &ctxB[2];
                    int32_t* j_1 = a2;
                    int32_t* j;

                    do
                    {
                        if (Camera_ResetMatrix_28(v_8_1[-1], *v_c_1 * *v_10_1, &v_8_1[-1]))
                            *v_8_1 += 1;

                        v_c_1 = &v_c_1[1];
                        v_10_1 -= 2;
                        j = j_1;
                        j_1 -= 1;
                    } while (j != 1);
                }

                v_8_1 += 2;
                v_14_1 += 1;
            }

            a1 = &a1[0x6001];

            if (a1 <= 0)
            {
    label_4ae52a: ;
                a1 += 0xffff;

                if (a1 < 0)
                {
                    int32_t i_2 = -(a1);
                    a1 += i_2;
                    int32_t i_1 = i_2;
                    int32_t i;

                    do
                    {
                        if (v_28 & 1)
                            v_18 += 1;

                        Camera_ApplyLineFilter_29(&v_28);
                        i = i_1;
                        i_1 -= 1;
                    } while (i != 1);

                    if (v_18)
                        v_28 |= 1;
                }
            }
            else
            {
                while (!(*(&v_20 + 3) & 0x80))
                {
                    Camera_SetFieldOfView_29(&v_28);
                    a1 += 0xffff;

                    if (a1 <= 0)
                        break;
                }

                if (a1 <= 0)
                    goto label_4ae52a;
            }

            if (v_28 > 0x8000 || (v_28 & 0x1ffff) == 0x18000)
            {
                if (*(&v_28 + 2) != 0xffffffff)
                    *(&v_28 + 2) += 1;
                else
                {
                    *(&v_28 + 2) = 0;

                    if (*(&v_24 + 2) != 0xffffffff)
                        *(&v_24 + 2) += 1;
                    else
                    {
                        *(&v_24 + 2) = 0;

                        if (*(&v_20 + 2) != 0xffff)
                            *(&v_20 + 2) += 1;
                        else
                        {
                            a1 += 1;
                            *(&v_20 + 2) = 0x8000;
                        }
                    }
                }
            }

            result = a1;

            if (result >= 0x7fff)
                goto label_4ae5d3;

            result |= dstD2;
            *srcS = *(&v_28 + 2);
            (*(int32_t*)(uintptr_t)(srcS + 2)) = v_24;
            (*(int32_t*)(uintptr_t)(srcS + 6)) = v_20;
            srcS[5] = result;
        }
        else
        {
            result = nullptr;

            if ((*(int32_t*)(uintptr_t)(srcS + 4)) || *srcS)
                goto label_4ae463;

            srcS[5] = result;
        }
    }
    else
    {
        result = nullptr;
    label_4ae476: ;
        (*(int32_t*)(uintptr_t)(srcS + 8)) = 0;
        (*(int32_t*)(uintptr_t)(srcS + 4)) = 0;
        *srcS = 0;
    }

    return result;
}
