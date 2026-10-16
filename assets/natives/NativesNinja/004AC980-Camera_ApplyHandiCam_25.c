#include "004AC980-Camera_ApplyHandiCam_25.h"
/* 0x004ac980 Camera_ApplyHandiCam_25 full linked: callers=2 callees=12 */
int32_t sub_4ac980(int16_t* a1, int32_t* a2, int32_t* a3)

{
    uint32_t ecx = a1[5];
    int16_t* ecx_1 = ecx & 0x8000;
    int32_t var_10 = *(a1 + 6);
    int32_t ecx_3 = *(a1 + 2);
    int32_t ebx_2 = (ecx & 0x7fff) - 0x3fff;
    uint32_t var_8 = *a1 << 0x10;
    int32_t result;
    int32_t esi_1;

    if (ebx_2 != 0xffffc001)
    {
        void var_1c;
        sub_4ac8b1(&var_1c, &var_10);

        if (sub_4ac825(&var_10, a3[2]))
            ebx_2 += 1;

        int32_t eax_5 = a3[1];

        if (ebx_2 >= eax_5 - a3[2])
        {
            if (ebx_2 <= eax_5)
            {
                sub_4ac8b1(&var_10, &var_1c);
                sub_4ac8f3(&var_10, eax_5 - ebx_2);
                sub_4ac825(&var_10, a3[2]);
                sub_4ac8f3(&var_10, a3[3] + 1);
                goto label_4aca62;
            }

            if (ebx_2 < *a3)
            {
                int32_t var_2c_7 = a3[3];
                int32_t esi_4 = a3[5];
                *(&var_10 + 3) &= 0x7f;
                esi_1 = esi_4 + ebx_2;
                sub_4ac8f3(&var_10, var_2c_7);
                result = 0;
            }
            else
            {
                sub_4ac8cc(&var_10);
                int32_t var_30_3 = a3[3];
                *(&var_10 + 3) |= 0x80;
                sub_4ac8f3(&var_10, var_30_3);
                esi_1 = a3[5] + *a3;
                result = 1;
            }
        }
        else
        {
            sub_4ac8cc(&var_10);
        label_4aca62:
            esi_1 = 0;
            result = 2;
        }
    }
    else
    {
        esi_1 = 0;

        if (sub_4ac8d8(&var_10))
            result = 0;
        else
        {
            sub_4ac8cc(&var_10);
            result = 2;
        }
    }

    int32_t edi_1 = a3[4];
    int32_t ecx_12 = -(ecx_1);
    int32_t esi_7 = esi_1 << ((0x1f - a3[3]) & 0x1f) | ((ecx_12 - ecx_12) & 0x80000000) | var_10;

    if (edi_1 == 0x40)
    {
        a2[1] = esi_7;
        *a2 = ecx_3;
    }
    else if (edi_1 == 0x20)
        *a2 = esi_7;

    return result;
}
