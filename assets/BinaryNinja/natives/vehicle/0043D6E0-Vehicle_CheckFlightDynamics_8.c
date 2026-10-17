// IGI native provenance: Vehicle_CheckFlightDynamics_8 - 0x0043D6E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043D6E0-Vehicle_CheckFlightDynamics_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_CheckFlightDynamics_8.h"
float Vehicle_CheckFlightDynamics_8(float context) {
    float source_val = context;
    float result = *(source_val + 0x180);

    if (result != 0xffffffff)
    {
        Physics_SimulateRigidBody(result);
        result = Physics_CheckHullCollision(*(source_val + 0x180));

        if (result)
        {
            long double fp0_2 = Physics_ApplyImpulse(*(source_val + 0x180), *(source_val + 0x19c));
            long double fpu_val_6_2 = fp0_2 - *(source_val + 0x184);
            long double f0_1 = 0.0f;
            fpu_val_6_2 - f0_1;
            long double fpu_val_5_1 = fpu_val_6_2;

            if (*(&((fpu_val_6_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == f0_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                fpu_val_5_1 = -(fpu_val_5_1);

            long double f1_1 = 16384.0f;
            fpu_val_5_1 - f1_1;

            if (!(*(&((fpu_val_5_1 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_1, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_5_1 == f1_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                long double fpu_val_5_6 = *(source_val + 0x190);
                long double f2_1 = *(source_val + 0x194);
                fpu_val_5_6 - f2_1;

                if (!(*(&((fpu_val_5_6 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_5_6, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_5_6 == f2_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                {
                    long double fpu_val_5_9 = *(source_val + 0x190);
                    long double f4_1 = *(source_val + 0x194);
                    fpu_val_5_9 - f4_1;

                    if (!(*(&((fpu_val_5_9 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_5_9, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_5_9 == f4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                    {
                        long double fpu_val_5_11 = *(source_val + 0x190) - *(source_val + 0x198);
                        *(source_val + 0x190) = fpu_val_5_11;
                        long double f8_1 = *(source_val + 0x194);
                        fpu_val_5_11 - f8_1;

                        if (*(&((fpu_val_5_11 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_5_11, f8_1) ? 1 : 0) << 0xa
                                | (fpu_val_5_11 == f8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                            *(source_val + 0x190) = *(source_val + 0x194);
                    }
                }
                else
                {
                    long double fpu_val_5_8 = *(source_val + 0x198) + *(source_val + 0x190);
                    *(source_val + 0x190) = fpu_val_5_8;
                    long double f5_1 = *(source_val + 0x194);
                    fpu_val_5_8 - f5_1;

                    if (!(*(&((fpu_val_5_8 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_5_8, f5_1) ? 1 : 0) << 0xa
                            | (fpu_val_5_8 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                        *(source_val + 0x190) = *(source_val + 0x194);
                }
            }
            else
            {
                long double f3_1 = 0.0f;
                fpu_val_6_2 - f3_1;
                long double fpu_val_5_2 = fpu_val_6_2;

                if (*(&((fpu_val_6_2 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_2, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_2 == f3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                    fpu_val_5_2 = -(fpu_val_5_2);

                long double fpu_val_5_4 = fpu_val_5_2 * *(source_val + 0x194) * 6.10351562e-05.0f;
                long double f6_1 = 0.100000001f;
                fpu_val_5_4 - f6_1;
                *(source_val + 0x190) = fpu_val_5_4;
                bool c1_1 = /* bool c1_1 = unknown  {fst dword [source_val+0x190], fp0} */;

                if (*(&((fpu_val_5_4 < f6_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                        | (FCMP_UO(fpu_val_5_4, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_5_4 == f6_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                    fpu_val_5_4 = 0.100000001f;

                *(source_val + 0x190) = fpu_val_5_4;
            }

            context = *(source_val + 0x190) * 136.53334f;
            long double f7_1 = 0.00100000005f;
            fpu_val_6_2 - f7_1;

            if (*(&((fpu_val_6_2 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
            {
                long double f9_1 = -0.00100000005f;
                fpu_val_6_2 - f9_1;

                if (*(&((fpu_val_6_2 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, f9_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    long double fpu_val_6_7 = *(source_val + 0x184) - context;
                    fpu_val_6_7 - fp0_2;

                    if (!(*(&((fpu_val_6_7 < fp0_2 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_7, fp0_2) ? 1 : 0) << 0xa
                        | (fpu_val_6_7 == fp0_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        *(source_val + 0x184) = fpu_val_6_7;
                        Vehicle_InitPlane_9(source_val);
                        return Vehicle_InitHeli_9(source_val);
                    }
                }
            }
            else
            {
                long double fpu_val_6_5 = context + *(source_val + 0x184);
                fpu_val_6_5 - fp0_2;

                if (*(&((fpu_val_6_5 < fp0_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_5, fp0_2) ? 1 : 0) << 0xa
                    | (fpu_val_6_5 == fp0_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    *(source_val + 0x184) = fpu_val_6_5;
                    Vehicle_InitPlane_9(source_val);
                    return Vehicle_InitHeli_9(source_val);
                }
            }

            *(source_val + 0x184) = fp0_2;
            Vehicle_InitPlane_9(source_val);
            return Vehicle_InitHeli_9(source_val);
        }
    }

    return result;
}
