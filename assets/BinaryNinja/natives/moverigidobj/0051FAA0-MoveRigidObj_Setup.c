#include "MoveRigidObj_Setup.h"
int32_t MoveRigidObj_Setup(int80_t a1 @ fp0, float a2)

{
    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA4;

            if (!srcS1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *srcS1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA4;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA5 = 0;
            g_afa7e0 = tmpD2;
            valA5 = i[7];
            int32_t valA6 = *((valA5 << 2) + &g_a970e0);

            if (valA6)
            {
                valA6(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    int16_t idx;

    if (Script_FormatString_6(a2 + 0x1b4))
    {
        Script_SpawnNewTask_7(a2 + 0x1b4, a2);
        *(a2 + 0x1a0) = a1;
        idx = 1;
    }

🚫🚫    /* unimplemented  {fld fp0, qword [dstD+0x1a0]} */
⋯    long double f0 = 0.0;
    /* unimplemented  {fcomp fp0, qword [&g_5333b0]} f- f0 */ - f0;
    bool c0 = /* bool c0 = unimplemented  {fcomp fp0, qword [&g_5333b0]} f< f0 */ < f0;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp fp0, qword [&g_5333b0]}, f0) */, f0);
    bool c3 = /* bool c3 = unimplemented  {fcomp fp0, qword [&g_5333b0]} f== f0 */ == f0;
    /* unimplemented  {fcomp fp0, qword [&g_5333b0]} */

    if (*(&((c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (idx & 7) << 0xb) + 1)
        & 1)
    {
        bool c0_1;
        bool c2_1;
        bool c3_1;

        do
        {
🚫🚫            /* unimplemented  {fld fp0, qword [dstD+0x1a0]} */
🚫🚫            /* unimplemented  {fadd qword [&g_533924[4]]} */
🚫🚫            *(a2 + 0x1a0) =
⋯            long double f2_1 = 0.0;
            /* unimplemented  {fcomp fp0, qword [&g_5333b0]} f- f2_1 */ - f2_1;
            c0_1 = /* c0_1 =
                unimplemented  {fcomp fp0, qword [&g_5333b0]} f< f2_1 */ < f2_1;
            c2_1 = FCMP_UO(/* c2_1 =
                is_unordered.t(unimplemented  {fcomp fp0, qword [&g_5333b0]}, f2_1) */,
                f2_1);
            c3_1 = /* c3_1 =
                unimplemented  {fcomp fp0, qword [&g_5333b0]} f== f2_1 */ == f2_1;
            /* unimplemented  {fcomp fp0, qword [&g_5333b0]} */
        } while (*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb) + 1) & 1);
    }

🚫🚫    /* unimplemented  {fld fp0, qword [dstD+0x1a0]} */
⋯    long double f1 = 1.0;
    /* unimplemented  {fcomp fp0, qword [&g_5333f8]} f- f1 */ - f1;
    bool c0_2 = /* bool c0_2 = unimplemented  {fcomp fp0, qword [&g_5333f8]} f< f1 */ < f1;
    bool c2_2 = FCMP_UO(/* bool c2_2 =
        is_unordered.t(unimplemented  {fcomp fp0, qword [&g_5333f8]}, f1) */, f1);
    bool c3_2 = /* bool c3_2 =
        unimplemented  {fcomp fp0, qword [&g_5333f8]} f== f1 */ == f1;
    /* unimplemented  {fcomp fp0, qword [&g_5333f8]} */

    if (!(*(
        &((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | (idx & 7) << 0xb)
        + 1) & 0x41))
    {
        bool c0_3;
        bool c2_3;
        bool c3_3;

        do
        {
🚫🚫            /* unimplemented  {fld fp0, qword [dstD+0x1a0]} */
🚫🚫            /* unimplemented  {fsub fp0, qword [&g_5333f8]} */
🚫🚫            *(a2 + 0x1a0) =
⋯            long double f3_1 = 1.0;
            /* unimplemented  {fcomp fp0, qword [&g_5333f8]} f- f3_1 */ - f3_1;
            c0_3 = /* c0_3 =
                unimplemented  {fcomp fp0, qword [&g_5333f8]} f< f3_1 */ < f3_1;
            c2_3 = FCMP_UO(/* c2_3 =
                is_unordered.t(unimplemented  {fcomp fp0, qword [&g_5333f8]}, f3_1) */,
                f3_1);
            c3_3 = /* c3_3 =
                unimplemented  {fcomp fp0, qword [&g_5333f8]} f== f3_1 */ == f3_1;
            /* unimplemented  {fcomp fp0, qword [&g_5333f8]} */
        } while (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb) + 1) & 0x41));
    }

    return Terrain_BuildMipMaps_11(a2, a2, 0);
}
