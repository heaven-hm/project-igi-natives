#include "Script_VisibleCubesD.h"
int32_t Script_VisibleCubesD(void* a1)

{
    void* dstD = a1;
    int32_t v_7bc = 7;
    long double x87_r7_1 = *(dstD + 0x2c7c) * 7f;
    g_a76c88 = 0;
    void* srcS = dstD + 0x68;
    float v_7b4 = x87_r7_1;
    int16_t idx = 0;
    bool cond_1_1;

    do
    {
        int32_t v_7c0_1 = 7;
        bool cond_0_1;

        do
        {
            int32_t i_4 = 7;
            int32_t i;

            do
            {
🚫🚫                Script_ParseEnumString_20(dstD, srcS, v_7b4);
                idx -= 3;
                /* unimplemented  {call Script_ParseEnumString_20} */
                Script_ExecuteLevelScript_20(dstD, srcS);
                srcS += 0x20;
                i = i_4;
                i_4 -= 1;
            } while (i != 1);
            cond_0_1 = v_7c0_1 != 1;
            v_7c0_1 -= 1;
        } while (cond_0_1);
        cond_1_1 = v_7bc != 1;
        v_7bc -= 1;
    } while (cond_1_1);

    if (!*(dstD + 0x2cb4))
    {
        int32_t* i_5 = nullptr;
        void* objC1 = dstD + 0x128;
        int32_t v_7c0_2 = 0;
        bool cond_3_1;

        do
        {
            v_7b4 = 0f;
            int32_t saved_dst;
            int32_t* tmpD1 = &(&saved_dst)[i_5 * 2 + 0x6a];
            double* valA8 = &(&saved_dst)[i_5 * 6 + 0xd0];
            int32_t* v_7bc_1 = objC1 - 0xa4;
            void* v_7b8_1 = objC1;
            bool cond_2_1;

            do
            {
                int32_t* srcS2 = v_7bc_1;
                int32_t objC2 = 0;

                while (!*srcS2)
                {
                    objC2 += 1;
                    srcS2 = &srcS2[8];

                    if (objC2 >= 7)
                        break;
                }

                if (objC2 != 7)
                {
                    i_5 += 1;
                    memcpy(&valA8[-2], v_7b8_1, 0x18);
🚫🚫                    /* unimplemented  {fld fp0, qword [valA]} */
🚫🚫                    /* unimplemented  {fadd qword [&g_534b88]} */
🚫🚫🚫                    *valA8 =
                    /* unimplemented  {fstp qword [valA], fp0} */
                    dstD = a1;
                    (&v_7b4)[i_5] = v_7c0_2;
                    void v_6f0;
                    *(&v_6f0 + (i_5 << 2)) = v_7b4;
                    *tmpD1 = 0;
                    tmpD1[1] = 0xc1190000;
                    valA8 = &valA8[3];
                    tmpD1 = &tmpD1[2];
                }

                v_7b8_1 += 0xe0;
                cond_2_1 = v_7b4 + 1 < 7;
                v_7b4 += 1;
                v_7bc_1 = &v_7bc_1[0x38];
            } while (cond_2_1);
            objC1 = v_7b8_1;
            cond_3_1 = v_7c0_2 + 1 < 7;
            v_7c0_2 += 1;
        } while (cond_3_1);
        int32_t* i_1 = i_5;

        if (i_5 > 0)
        {
            void v_4a0;
            double* v_7c0_3 = &v_4a0;
            void v_628;
            double* dstD2 = &v_628;
            int32_t* v_7bc_2 = a1 + 0x2d18;

            do
            {
                int32_t* i_3 = 0x13;

                if (i_1 <= 0x13)
                    i_3 = i_1;

                DynObj_UpdateDynTree_10(g_a44344, v_7bc_2, v_7c0_3, i_3, dstD2, 0xff, nullptr,
                    0xffffffff);
                i_1 -= 0x13;
                dstD2 = &dstD2[0x13];
                v_7c0_3 = &v_7c0_3[0x39];
                v_7bc_2 = &v_7bc_2[0x214];
            } while (i_1 > 0);

            dstD = a1;
        }

        int32_t tmpD5 = 0;

        if (i_5 > 0)
        {
            double* v_7b8_2 = dstD + 0x2d30;

            do
            {
                if (v_7b8_2[8])
                {
                    int32_t i_6 = 7;
                    int32_t v_7b0[0x30];
                    int32_t v_6ec[0x31];
                    int32_t* objC17 = (v_7b0[tmpD5] * 7 + v_6ec[tmpD5]) * 0xe0 + dstD + 0x84;
                    int32_t i_2;

                    do
                    {
🚫🚫                        /* unimplemented  {fld fp0, dword [dstD+0x2c7c]} */
🚫🚫                        /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫                        /* unimplemented  {fsubr fp0, qword [objC-0xc]} */
⋯                        long double f3_1 = *v_7b8_2;
                        /* unimplemented  {fcomp fp0, qword [valA]} f- f3_1 */ - f3_1;
                        bool c0_1 = /* bool c0_1 =
                            unimplemented  {fcomp fp0, qword [valA]} f< f3_1 */ < f3_1;
                        bool c2_1 = FCMP_UO(/* bool c2_1 =
                            is_unordered.t(unimplemented  {fcomp fp0, qword [valA]}, f3_1) */,
                            f3_1);
                        bool c3_1 = /* bool c3_1 =
                            unimplemented  {fcomp fp0, qword [valA]} f== f3_1 */ == f3_1;
                        /* unimplemented  {fcomp fp0, qword [valA]} */

                        if (*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                                | (idx & 7) << 0xb) + 1) & 1)
                            *objC17 = 0;

                        objC17 = &objC17[8];
                        i_2 = i_6;
                        i_6 -= 1;
                    } while (i_2 != 1);
                }

                tmpD5 += 1;
                v_7b8_2 = &v_7b8_2[0xe];
            } while (tmpD5 < i_5);
        }

        *(dstD + 0x2d10) = Script_ParseEnumReal32_20(dstD);
        *(dstD + 0x4288) = i_5;
    }

    int32_t v_7d4_3 = g_a76c88;
    return SoundSys_Update3DPosition_11("Visible Cubes: %d\n");
}
