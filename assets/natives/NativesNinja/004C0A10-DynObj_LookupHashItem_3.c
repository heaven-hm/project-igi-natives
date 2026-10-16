#include "004C0A10-DynObj_LookupHashItem_3.h"
/* 0x004c0a10 DynObj_LookupHashItem_3 full linked: callers=0 callees=29 */
int32_t sub_4c0a10(int32_t* a1, int32_t* a2)

{
    void var_2c8;
    int32_t result = sub_4bb240(&var_2c8, a2[6]);

    if (result)
    {
        int32_t result_1;
        result = result_1;
        char var_2cd;
        int32_t var_2cc;
        void var_2c0;

        if (result == 4)
        {
            int32_t eax_1 = sub_4a5490(&var_2c0);
            var_2cc = eax_1;

            if (eax_1 < 0xffffff80 || eax_1 > 0x7f)
            {
                if (eax_1 >= 0xffff8000 && eax_1 <= 0x7fff)
                {
                    *a1 = 3;
                    int32_t* ecx_1 = a2[4];
                    var_2cd = 4;
                    sub_4b1700(ecx_1, &var_2cd, 1);
                    return sub_4b1700(a2[4], &var_2cc, 2);
                }

                *a1 = 5;
                int32_t* eax_11 = a2[4];
                var_2cd = 2;
                sub_4b1700(eax_11, &var_2cd, 1);
                return sub_4b1700(a2[4], &var_2cc, 4);
            }

            if (!eax_1)
            {
                *a1 = 1;
                int32_t* edx = a2[4];
                var_2cd = 0xf;
                return sub_4b1700(edx, &var_2cd, 1);
            }

            if (eax_1 == 1)
            {
                *a1 = 1;
                int32_t* edx_1 = a2[4];
                var_2cd = 0x10;
                return sub_4b1700(edx_1, &var_2cd, 1);
            }

            if (eax_1 == 0xffffffff)
            {
                *a1 = 1;
                int32_t* edx_2 = a2[4];
                var_2cd = 0x11;
                return sub_4b1700(edx_2, &var_2cd, 1);
            }

            *a1 = 2;
            int32_t* edx_3 = a2[4];
            var_2cd = 3;
            sub_4b1700(edx_3, &var_2cd, 1);
            return sub_4b1700(a2[4], &var_2cc, 1);
        }

        if (result == 5)
        {
            long double st0 = sub_516ad3(&var_2c0);
            var_2cc = st0;
            long double temp0 = 0f;
            st0 - temp0;

            if (!(*(&((st0 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0, temp0) ? 1 : 0) << 0xa
                | (st0 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                long double x87_r7_1 = var_2cc;
                long double temp1_1 = 1f;
                x87_r7_1 - temp1_1;

                if (!(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                    long double x87_r7_2 = var_2cc;
                    long double temp2_1 = -1f;
                    x87_r7_2 - temp2_1;

                    if (!(*(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        *a1 = 5;
                        int32_t* eax_17 = a2[4];
                        var_2cd = 5;
                        sub_4b1700(eax_17, &var_2cd, 1);
                        return sub_4b1700(a2[4], &var_2cc, 4);
                    }

                    *a1 = 1;
                    var_2cd = 0x11;
                }
                else
                {
                    var_2cd = 0x10;
                    *a1 = 1;
                }
            }
            else
            {
                var_2cd = 0xf;
                *a1 = 1;
            }

            return sub_4b1700(a2[4], &var_2cd, 1);
        }

        if (result == 2)
        {
            int32_t eax_19 = sub_4bb030(a2, &var_2c0);
            var_2cc = eax_19;

            if (eax_19 < 0x100)
            {
                *a1 = 2;
                int32_t* eax_20 = a2[4];
                var_2cd = 9;
                sub_4b1700(eax_20, &var_2cd, 1);
                return sub_4b1700(a2[4], &var_2cc, 1);
            }

            if (eax_19 >= 0x10000)
            {
                *a1 = 5;
                int32_t* ecx_8 = a2[4];
                var_2cd = 8;
                sub_4b1700(ecx_8, &var_2cd, 1);
                return sub_4b1700(a2[4], &var_2cc, 4);
            }

            *a1 = 3;
            int32_t* edx_8 = a2[4];
            var_2cd = 0xa;
            sub_4b1700(edx_8, &var_2cd, 1);
            return sub_4b1700(a2[4], &var_2cc, 2);
        }

        if (result == 9)
        {
            int32_t eax_26 = sub_4bb180(a2, &var_2c0);
            var_2cc = eax_26;

            if (eax_26 < 0x100)
            {
                *a1 = 2;
                int32_t* ecx_9 = a2[4];
                var_2cd = 0xd;
                sub_4b1700(ecx_9, &var_2cd, 1);
                return sub_4b1700(a2[4], &var_2cc, 1);
            }

            if (eax_26 >= 0x10000)
            {
                *a1 = 5;
                int32_t* edx_12 = a2[4];
                var_2cd = 0xc;
                sub_4b1700(edx_12, &var_2cd, 1);
                return sub_4b1700(a2[4], &var_2cc, 4);
            }

            *a1 = 3;
            int32_t* eax_29 = a2[4];
            var_2cd = 0xe;
            sub_4b1700(eax_29, &var_2cd, 1);
            return sub_4b1700(a2[4], &var_2cc, 2);
        }
    }

    a2[1] = 1;
    return result;
}
