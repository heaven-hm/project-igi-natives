#include "004AE3D3-Camera_ApplyPostProcess_29.h"
/* 0x004ae3d3 Camera_ApplyPostProcess_29 full linked: callers=2 callees=3 */
int16_t* sub_4ae3d3(int16_t* a1, int32_t* a2)

{
    int32_t* ebx = a2;
    int16_t* esi = a1;
    int32_t ecx;
    ecx = *(ebx + 0xa);
    int32_t eax = 0;
    int32_t var_18 = 0;
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    eax = esi[5];
    int16_t* result = eax & 0x7fff;
    int32_t* ecx_1 = ecx & 0x7fff;
    int32_t edi_2 = (ecx ^ eax) & 0x8000;
    int16_t* edx = ecx_1 + result;
    a1 = edx;

    if (result >= 0x7fff || ecx_1 >= 0x7fff || edx > 0xbffd)
    {
    label_4ae5d3:
        int16_t temp0_1 = edi_2;
        edi_2 = -(edi_2);
        *(esi + 4) = 0;
        *esi = 0;
        *(esi + 8) = ((edi_2 - edi_2) & 0x80000000) + 0x7fff8000;
    }
    else if (edx > 0x3fbf)
    {
        if (!result)
            a1 += 1;

        if (result || *(esi + 8) & 0x7fffffff)
        {
            result = nullptr;
        label_4ae463:

            if (!ecx_1)
                a1 += 1;

            if (!ecx_1 && !(ebx[2] & 0x7fffffff) && !ebx[1] && !*ebx)
                goto label_4ae476;

            void* var_14_1 = nullptr;
            int32_t* var_8_1 = &var_24;

            for (a2 = 5; a2 > 0; a2 -= 1)
            {
                if (a2 > 0)
                {
                    int16_t* var_c_1 = var_14_1 * 2 + esi;
                    int16_t* var_10_1 = &ebx[2];
                    int32_t* j_1 = a2;
                    int32_t* j;

                    do
                    {
                        if (sub_4ada58(var_8_1[-1], *var_c_1 * *var_10_1, &var_8_1[-1]))
                            *var_8_1 += 1;

                        var_c_1 = &var_c_1[1];
                        var_10_1 -= 2;
                        j = j_1;
                        j_1 -= 1;
                    } while (j != 1);
                }

                var_8_1 += 2;
                var_14_1 += 1;
            }

            a1 = &a1[0x6001];

            if (a1 <= 0)
            {
            label_4ae52a:
                a1 += 0xffff;

                if (a1 < 0)
                {
                    int32_t i_2 = -(a1);
                    a1 += i_2;
                    int32_t i_1 = i_2;
                    int32_t i;

                    do
                    {
                        if (var_28 & 1)
                            var_18 += 1;

                        sub_4adb05(&var_28);
                        i = i_1;
                        i_1 -= 1;
                    } while (i != 1);

                    if (var_18)
                        var_28 |= 1;
                }
            }
            else
            {
                while (!(*(&var_20 + 3) & 0x80))
                {
                    sub_4adad7(&var_28);
                    a1 += 0xffff;

                    if (a1 <= 0)
                        break;
                }

                if (a1 <= 0)
                    goto label_4ae52a;
            }

            if (var_28 > 0x8000 || (var_28 & 0x1ffff) == 0x18000)
            {
                if (*(&var_28 + 2) != 0xffffffff)
                    *(&var_28 + 2) += 1;
                else
                {
                    *(&var_28 + 2) = 0;

                    if (*(&var_24 + 2) != 0xffffffff)
                        *(&var_24 + 2) += 1;
                    else
                    {
                        *(&var_24 + 2) = 0;

                        if (*(&var_20 + 2) != 0xffff)
                            *(&var_20 + 2) += 1;
                        else
                        {
                            a1 += 1;
                            *(&var_20 + 2) = 0x8000;
                        }
                    }
                }
            }

            result = a1;

            if (result >= 0x7fff)
                goto label_4ae5d3;

            result |= edi_2;
            *esi = *(&var_28 + 2);
            *(esi + 2) = var_24;
            *(esi + 6) = var_20;
            esi[5] = result;
        }
        else
        {
            result = nullptr;

            if (*(esi + 4) || *esi)
                goto label_4ae463;

            esi[5] = result;
        }
    }
    else
    {
        result = nullptr;
    label_4ae476:
        *(esi + 8) = 0;
        *(esi + 4) = 0;
        *esi = 0;
    }

    return result;
}
