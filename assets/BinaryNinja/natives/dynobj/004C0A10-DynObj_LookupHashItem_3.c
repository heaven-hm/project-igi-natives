// Original IGI.EXE function: DynObj_LookupHashItem_3 (VA 0x004C0A10; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LookupHashItem_3.h"
int32_t DynObj_LookupHashItem_3(int32_t* a1, int32_t* a2)

{
    void v_2c8;
    int32_t result = Sys_PushStack_26(&v_2c8, a2[6]);

    if (result)
    {
        int32_t result_1;
        result = result_1;
        char v_2cd;
        int32_t v_2cc;
        void v_2c0;

        if (result == 4)
        {
            int32_t valA1 = Camera_ResetMatrix_4(&v_2c0);
            v_2cc = valA1;

            if (valA1 < 0xffffff80 || valA1 > 0x7f)
            {
                if (valA1 >= 0xffff8000 && valA1 <= 0x7fff)
                {
                    *a1 = 3;
                    int32_t* objC1 = a2[4];
                    v_2cd = 4;
                    Sys_CloseFileStream_4(objC1, &v_2cd, 1);
                    return Sys_CloseFileStream_4(a2[4], &v_2cc, 2);
                }

                *a1 = 5;
                int32_t* valA11 = a2[4];
                v_2cd = 2;
                Sys_CloseFileStream_4(valA11, &v_2cd, 1);
                return Sys_CloseFileStream_4(a2[4], &v_2cc, 4);
            }

            if (!valA1)
            {
                *a1 = 1;
                int32_t* tmpD = a2[4];
                v_2cd = 0xf;
                return Sys_CloseFileStream_4(tmpD, &v_2cd, 1);
            }

            if (valA1 == 1)
            {
                *a1 = 1;
                int32_t* tmpD1 = a2[4];
                v_2cd = 0x10;
                return Sys_CloseFileStream_4(tmpD1, &v_2cd, 1);
            }

            if (valA1 == 0xffffffff)
            {
                *a1 = 1;
                int32_t* tmpD2 = a2[4];
                v_2cd = 0x11;
                return Sys_CloseFileStream_4(tmpD2, &v_2cd, 1);
            }

            *a1 = 2;
            int32_t* tmpD3 = a2[4];
            v_2cd = 3;
            Sys_CloseFileStream_4(tmpD3, &v_2cd, 1);
            return Sys_CloseFileStream_4(a2[4], &v_2cc, 1);
        }

        if (result == 5)
        {
            long double fp0 = Terrain_SelectTerrainLOD_4(&v_2c0);
            v_2cc = fp0;
            long double f0 = 0f;
            fp0 - f0;

            if (!(*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
                | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                long double x87_r7_1 = v_2cc;
                long double f1_1 = 1f;
                x87_r7_1 - f1_1;

                if (!(*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                    long double x87_r7_2 = v_2cc;
                    long double f2_1 = -1f;
                    x87_r7_2 - f2_1;

                    if (!(*(&((x87_r7_2 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_2, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        *a1 = 5;
                        int32_t* valA17 = a2[4];
                        v_2cd = 5;
                        Sys_CloseFileStream_4(valA17, &v_2cd, 1);
                        return Sys_CloseFileStream_4(a2[4], &v_2cc, 4);
                    }

                    *a1 = 1;
                    v_2cd = 0x11;
                }
                else
                {
                    v_2cd = 0x10;
                    *a1 = 1;
                }
            }
            else
            {
                v_2cd = 0xf;
                *a1 = 1;
            }

            return Sys_CloseFileStream_4(a2[4], &v_2cd, 1);
        }

        if (result == 2)
        {
            int32_t valA19 = Sys_CloseFileStream_26(a2, &v_2c0);
            v_2cc = valA19;

            if (valA19 < 0x100)
            {
                *a1 = 2;
                int32_t* valA20 = a2[4];
                v_2cd = 9;
                Sys_CloseFileStream_4(valA20, &v_2cd, 1);
                return Sys_CloseFileStream_4(a2[4], &v_2cc, 1);
            }

            if (valA19 >= 0x10000)
            {
                *a1 = 5;
                int32_t* objC8 = a2[4];
                v_2cd = 8;
                Sys_CloseFileStream_4(objC8, &v_2cd, 1);
                return Sys_CloseFileStream_4(a2[4], &v_2cc, 4);
            }

            *a1 = 3;
            int32_t* tmpD8 = a2[4];
            v_2cd = 0xa;
            Sys_CloseFileStream_4(tmpD8, &v_2cd, 1);
            return Sys_CloseFileStream_4(a2[4], &v_2cc, 2);
        }

        if (result == 9)
        {
            int32_t valA26 = Sys_DispatchOpcode_26(a2, &v_2c0);
            v_2cc = valA26;

            if (valA26 < 0x100)
            {
                *a1 = 2;
                int32_t* objC9 = a2[4];
                v_2cd = 0xd;
                Sys_CloseFileStream_4(objC9, &v_2cd, 1);
                return Sys_CloseFileStream_4(a2[4], &v_2cc, 1);
            }

            if (valA26 >= 0x10000)
            {
                *a1 = 5;
                int32_t* tmpD12 = a2[4];
                v_2cd = 0xc;
                Sys_CloseFileStream_4(tmpD12, &v_2cd, 1);
                return Sys_CloseFileStream_4(a2[4], &v_2cc, 4);
            }

            *a1 = 3;
            int32_t* valA29 = a2[4];
            v_2cd = 0xe;
            Sys_CloseFileStream_4(valA29, &v_2cd, 1);
            return Sys_CloseFileStream_4(a2[4], &v_2cc, 2);
        }
    }

    a2[1] = 1;
    return result;
}
