// IGI native provenance: AnimSpline_Invoke13 - 0x0050E0D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050E0D0-AnimSpline_Invoke13.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_Invoke13.h"

int32_t** AnimSpline_Invoke13(int32_t* arg1)

{
    int32_t* ecx_1 = arg1;
    int32_t base_val = 0;
    int32_t i_1 = ecx_1[3];

    if (i_1 > 0)
    {
        long double x87_r7_2 = g_bcabd8 + 1f;
        long double x87_r6_2 = g_bcabdc + 1f;
        float* esi_1 = ecx_1[4];
        int32_t i;

        do
        {
            long double x87_r5_1 = *esi_1;
            long double temp0_1 = g_bcabd0;
            x87_r5_1 - temp0_1;
            int32_t edi_1;

            edi_1 = !(*(&((x87_r5_1 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_1, temp0_1) ? 1 : 0) << 0xa
                | (x87_r5_1 == temp0_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

            long double x87_r5_2 = esi_1[1];
            long double temp1_1 = g_bcabd4;
            x87_r5_2 - temp1_1;
            int32_t edx_1;

            edx_1 = !(*(&((x87_r5_2 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r5_2 == temp1_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

            long double x87_r5_3 = *esi_1;
            x87_r5_3 - x87_r7_2;
            int32_t context_val;

            context_val = *(&((x87_r5_3 < x87_r7_2 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_3, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r5_3 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 ? 0 : 1;

            long double temp2_1 = esi_1[1];
            x87_r6_2 - temp2_1;
            int32_t eax_2;

            eax_2 = !(*(&((x87_r6_2 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_2, temp2_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == temp2_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

            esi_1 = &esi_1[9];
            base_val |= (((eax_2 * 2) | context_val) << 1 | edx_1) << 1 | edi_1;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        ecx_1 = arg1;
    }

    if (!*ecx_1)
    {
        if (ecx_1[3] <= 2)
        {
            if (base_val)
            {
                if (!(ecx_1[1] & 0x60000))
                {
                    *(ecx_1[4] + 8) = 0x3f800000;
                    *(ecx_1[4] + 0x2c) = 0x3f800000;
                }

                return Physics_SolveConstraints_13(ecx_1);
            }
        }
        else if (base_val)
            return Physics_UpdateForces_13(ecx_1);
    }
    else if (base_val)
        return Physics_ApplyImpulse_13(ecx_1);

    return Physics_InterpolateWaypoint_13(ecx_1);
}
