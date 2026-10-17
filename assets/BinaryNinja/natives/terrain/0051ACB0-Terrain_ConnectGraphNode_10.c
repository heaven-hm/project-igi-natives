// Original IGI.EXE function: Terrain_ConnectGraphNode_10 (VA 0x0051ACB0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_ConnectGraphNode_10.h"
int32_t Terrain_ConnectGraphNode_10(void* a1)

{
    void* dstD = a1;
    int32_t i_1 = 0;
    int32_t i = *(dstD + 0x1f8);

    if (i > 0)
    {
        int32_t* srcS1 = dstD + 0x68;
        int32_t* v_10_1 = srcS1;

        do
        {
            Terrain_CalculateNormals_9(*srcS1);
            void* objC1 = *srcS1;
🚫🚫            /* unimplemented  {fld fp0, dword [objC+0x58]} */
🚫🚫            /* unimplemented  {fadd dword [objC+0x48]} */
🚫🚫            /* unimplemented  {fadd dword [objC+0x38]} */
🚫🚫🚫🚫🚫            long double f0_1 = 0f;
            /* unimplemented  {fcom fp0, dword [&g_5333ec]} f- f0_1 */ - f0_1;
            bool c0_1 = /* bool c0_1 =
                unimplemented  {fcom fp0, dword [&g_5333ec]} f< f0_1 */ < f0_1;
            bool c2_1 = FCMP_UO(/* bool c2_1 =
                is_unordered.t(unimplemented  {fcom fp0, dword [&g_5333ec]}, f0_1) */,
                f0_1);
            bool c3_1 = /* bool c3_1 =
                unimplemented  {fcom fp0, dword [&g_5333ec]} f== f0_1 */ == f0_1;
            int16_t idx;

            if (*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                | ((idx - 2) & 7) << 0xb) + 1) & 0x41)
            {
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [objC+0x48]} */
⋯                long double f1_1 = *(objC1 + 0x38);
                /* unimplemented  {fcomp fp0, dword [objC+0x38]} f- f1_1 */ - f1_1;
                bool c0_2 = /* bool c0_2 =
                    unimplemented  {fcomp fp0, dword [objC+0x38]} f< f1_1 */ < f1_1;
                bool c2_2 = FCMP_UO(/* bool c2_2 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [objC+0x38]}, f1_1) */,
                    f1_1);
                bool c3_2 = /* bool c3_2 =
                    unimplemented  {fcomp fp0, dword [objC+0x38]} f== f1_1 */ == f1_1;
                /* unimplemented  {fcomp fp0, dword [objC+0x38]} */
                int32_t tmpD1 = 0;
                int32_t v_c = 1;
                int32_t v_8_1 = 2;
                int32_t v_4_1 = 0;

                if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                        | ((idx - 1) & 7) << 0xb) + 1) & 0x41))
                    tmpD1 = 1;

🚫🚫                /* unimplemented  {fld fp0, dword [objC+0x58]} */
⋯                long double f2_1 = *((tmpD1 << 4) + objC1 + 0x38);
                /* unimplemented  {fcomp fp0, dword [valA+objC+0x38]} f- f2_1 */ - f2_1;
                bool c0_3 = /* bool c0_3 =
                    unimplemented  {fcomp fp0, dword [valA+objC+0x38]} f< f2_1 */ < f2_1;
                bool c2_3 = FCMP_UO(/* bool c2_3 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [valA+objC+0x38]}, f2_1) */,
                    f2_1);
                bool c3_3 = /* bool c3_3 =
                    unimplemented  {fcomp fp0, dword [valA+objC+0x38]} f== f2_1 */ == f2_1;
                /* unimplemented  {fcomp fp0, dword [valA+objC+0x38]} */

                if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                        | ((idx - 1) & 7) << 0xb) + 1) & 0x41))
                    tmpD1 = 2;

                int32_t dstD1 = (&v_c)[tmpD1];
                int32_t srcS2 = (&v_c)[dstD1];
🚫🚫                /* unimplemented  {fld fp0, dword [valA+objC+0x38]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [ctxB+objC+0x38]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [valA+objC+0x38]} */
🚫🚫                /* unimplemented  {fadd dword [&g_5333e0]} */
🚫🚫                /* unimplemented  {fsqrt } */
🚫🚫                /* unimplemented  {fld fp0, fp0} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫🚫                *(objC1 + (tmpD1 << 2) + 0x60) = /* *(objC1 + (tmpD1 << 2) + 0x60) =
                    unimplemented  {fstp dword [objC+tmpD*4+0x60], fp0} */;
                /* unimplemented  {fstp dword [objC+tmpD*4+0x60], fp0} */
🚫🚫🚫🚫🚫                long double f3_1 = 0f;
                /* unimplemented  {fcom fp0, dword [&g_5333ec]} f- f3_1 */ - f3_1;
                bool c0_4 = /* bool c0_4 =
                    unimplemented  {fcom fp0, dword [&g_5333ec]} f< f3_1 */ < f3_1;
                bool c2_4 = FCMP_UO(/* bool c2_4 =
                    is_unordered.t(unimplemented  {fcom fp0, dword [&g_5333ec]}, f3_1) */,
                    f3_1);
                bool c3_4 = /* bool c3_4 =
                    unimplemented  {fcom fp0, dword [&g_5333ec]} f== f3_1 */ == f3_1;

                if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                        | ((idx - 2) & 7) << 0xb) + 1) & 0x40))
🚫🚫                    /* unimplemented  {fdivr fp0, dword [&g_533504]} */

🚫🚫                /* unimplemented  {fld fp0, dword [objC+ctxB*4+0x38]} */
🚫🚫                /* unimplemented  {fadd dword [objC+flagP*4+0x38]} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫                *(objC1 + (dstD1 << 2) + 0x60) = /* *(objC1 + (dstD1 << 2) + 0x60) =
                    unimplemented  {fstp dword [objC+dstD*4+0x60], fp0} */;
                /* unimplemented  {fstp dword [objC+dstD*4+0x60], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [objC+tmpD*4+0x38]} */
🚫🚫                /* unimplemented  {fadd dword [objC+valA*4+0x38]} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
                dstD = a1;
🚫🚫🚫                *(objC1 + (srcS2 << 2) + 0x60) = /* *(objC1 + (srcS2 << 2) + 0x60) =
                    unimplemented  {fstp dword [objC+srcS*4+0x60], fp0} */;
                /* unimplemented  {fstp dword [objC+srcS*4+0x60], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [objC+valA*4+0x38]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [objC+ctxB*4+0x38]} */
                srcS1 = v_10_1;
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫                /* unimplemented  {fchs } */
🚫🚫🚫                *(objC1 + 0x6c) = /* *(objC1 + 0x6c) =
                    unimplemented  {fstp dword [objC+0x6c], fp0} */;
                /* unimplemented  {fstp dword [objC+0x6c], fp0} */
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
                idx -= 1;
            }
            else
            {
🚫🚫                /* unimplemented  {fadd dword [&g_5333e0]} */
🚫🚫                /* unimplemented  {fsqrt } */
🚫🚫                /* unimplemented  {fld fp0, fp0} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533504]} */
🚫🚫🚫                *(objC1 + 0x6c) = /* *(objC1 + 0x6c) =
                    unimplemented  {fstp dword [objC+0x6c], fp0} */;
                /* unimplemented  {fstp dword [objC+0x6c], fp0} */
🚫🚫                /* unimplemented  {fdivr fp0, dword [&g_533504]} */
🚫🚫                /* unimplemented  {fld fp0, dword [valA+0x4c]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [valA+0x54]} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫                /* unimplemented  {fchs } */
🚫🚫🚫                *(*srcS1 + 0x60) = /* *(*srcS1 + 0x60) =
                    unimplemented  {fstp dword [valA+0x60], fp0} */;
                /* unimplemented  {fstp dword [valA+0x60], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [valA+0x50]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [valA+0x40]} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫                /* unimplemented  {fchs } */
🚫🚫🚫                *(*srcS1 + 0x64) = /* *(*srcS1 + 0x64) =
                    unimplemented  {fstp dword [valA+0x64], fp0} */;
                /* unimplemented  {fstp dword [valA+0x64], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [valA+0x3c]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [valA+0x44]} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫                /* unimplemented  {fchs } */
🚫🚫🚫                *(*srcS1 + 0x68) = /* *(*srcS1 + 0x68) =
                    unimplemented  {fstp dword [valA+0x68], fp0} */;
                /* unimplemented  {fstp dword [valA+0x68], fp0} */
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
                idx -= 1;
            }

            void* valA11 = *srcS1;
            srcS1 = &srcS1[1];
            v_10_1 = srcS1;
            *(valA11 + 0x70) = *(valA11 + 0x5c);
            i = i_1 + 1;
            i_1 = i;
        } while (i < *(dstD + 0x1f8));
    }

    return i;
}
