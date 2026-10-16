#include "004AE0CA-Camera_1Snan.h"
/* 0x004ae0ca Camera_1Snan full linked: callers=1 callees=10 */
int32_t sub_4ae0ca(int16_t a1 @ 0xc, char* a2, char a3, char* a4)

{
    int16_t* ebx = a4;
    int16_t ecx_1 = a1 & 0x8000;
    int16_t eax_1 = a1 & 0x7fff;
    char var_20 = 0xcc;
    char var_1f = 0xcc;
    char var_1e = 0xcc;
    char var_1d = 0xcc;
    char var_1c = 0xcc;
    char var_1b = 0xcc;
    char var_1a = 0xcc;
    char var_19 = 0xcc;
    char var_18 = 0xcc;
    char var_17 = 0xcc;
    char var_16 = 0xfb;
    char var_15 = 0x3f;
    int32_t result = 1;

    if (!ecx_1)
        ebx[1] = 0x20;
    else
        ebx[1] = 0x2d;

    int32_t arg_8;
    int32_t edi = arg_8;
    int32_t arg_4;

    if (eax_1 || edi || arg_4 != edi)
    {
        if (eax_1 == 0x7fff)
        {
            *ebx = 1;

            if ((edi != 0x80000000 || arg_4) && !(edi & 0x40000000))
            {
                sub_4aa580(&ebx[2], "1#SNAN");
                *(ebx + 3) = 6;
            }
            else if (ecx_1 && edi == 0xc0000000)
            {
                if (arg_4)
                    goto label_4ae1bf;

                sub_4aa580(&ebx[2], "1#IND");
                *(ebx + 3) = 5;
            }
            else if (edi != 0x80000000 || arg_4)
            {
            label_4ae1bf:
                sub_4aa580(&ebx[2], "1#QNAN");
                *(ebx + 3) = 6;
            }
            else
            {
                sub_4aa580(&ebx[2], "1#INF");
                *(ebx + 3) = 5;
            }

            return 0;
        }

        uint32_t eax_4 = eax_1;
        int16_t var_14 = 0;
        int32_t var_e_1 = edi;
        int32_t esi_4 =
            (((eax_4 >> 8) + (edi >> 0x18 << 1)) * 0x4d + eax_4 * 0x4d10 - 0x134312f4) >> 0x10;
        int32_t var_12 = arg_4;
        sub_4ae5f3(&var_14, -(esi_4), 1);

        if (eax_1 >= 0x3fff)
        {
            esi_4 += 1;
            sub_4ae3d3(&var_14, &var_20);
        }

        *ebx = esi_4;
        char* edi_2;

        if (!(a3 & 1))
            edi_2 = a2;
        else
        {
            edi_2 = &a2[esi_4];

            if (edi_2 <= 0)
                goto label_4ae141;
        }

        if (edi_2 > 0x15)
            edi_2 = 0x15;

        int16_t var_a_2 = 0;
        a4 = 8;
        char* i;

        do
        {
            sub_4adad7(&var_14);
            i = a4;
            a4 -= 1;
        } while (i != 1);

        if (eax_1 - 0x3ffe < 0)
        {
            uint32_t i_3 = -((eax_1 - 0x3ffe));

            if (i_3 > 0)
            {
                uint32_t i_1;

                do
                {
                    sub_4adb05(&var_14);
                    i_1 = i_3;
                    i_3 -= 1;
                } while (i_1 != 1);
            }
        }

        char* eax_10 = &ebx[2];
        a4 = eax_10;

        if (&edi_2[1] > 0)
        {
            a2 = &edi_2[1];
            char* i_2;

            do
            {
                arg_4 = var_14;
                int32_t* edi_3 = &arg_8;
                int32_t* esi_8 = (&var_12 + 2);
                *edi_3 = *esi_8;
                edi_3[1] = esi_8[1];
                sub_4adad7(&var_14);
                sub_4adad7(&var_14);
                sub_4ada79(&var_14, &arg_4);
                sub_4adad7(&var_14);
                char eax_12 = *(&var_a_2 + 1);
                char* ecx_11 = a4;
                *(&var_a_2 + 1) = 0;
                a4 = &a4[1];
                i_2 = a2;
                a2 -= 1;
                *ecx_11 = eax_12 + 0x30;
            } while (i_2 != 1);
            eax_10 = a4;
        }

        char* eax_14 = eax_10 - 2;

        if (eax_10[0xffffffff] >= 0x35)
        {
            while (true)
            {
                if (eax_14 >= &ebx[2])
                {
                    if (*eax_14 == 0x39)
                    {
                        *eax_14 = 0x30;
                        eax_14 -= 1;
                        continue;
                    }
                    else if (eax_14 >= &ebx[2])
                        break;
                }

                eax_14 = &eax_14[1];
                *ebx += 1;
                break;
            }

            *eax_14 += 1;
            goto label_4ae322;
        }

        while (true)
        {
            if (eax_14 < &ebx[2])
                goto label_4ae345;

            if (*eax_14 != 0x30)
                break;

            eax_14 -= 1;
        }

        if (eax_14 >= &ebx[2])
        {
        label_4ae322:
            *(ebx + 3) = eax_14 - ebx - 3;
            *(eax_14 - ebx - 3 + ebx + 4) = 0;
            return result;
        }

    label_4ae345:
        *ebx = 0;
        ebx[1] = 0x20;
        *(ebx + 3) = 1;
        ebx[2] = 0x30;
    }
    else
    {
    label_4ae141:
        *ebx = 0;
        ebx[1] = 0x20;
        *(ebx + 3) = 1;
        ebx[2] = 0x30;
    }

    *(ebx + 5) = 0;
    return 1;
}
