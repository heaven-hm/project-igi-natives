// IGI native provenance: PickupTrigger_Invoke27 - 0x00467C60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00467C60-PickupTrigger_Invoke27.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_Invoke27.h"

int32_t PickupTrigger_Invoke27(float arg1, float arg2)

{
    int16_t result = AI_SelectTarget_27();

    if (result)
    {
        result = AI_SelectTarget_27();

        if (result != 3)
        {
            result = *(arg1 + 0x745);

            if (result)
            {
                *(arg2 + 0xc) = arg1 + 0x20;
                *(arg2 + 0x10) = arg1 + 0x70;
                long double x87_r7_1 = *(arg1 + 0x9c);
                long double x87_r6_1 = *(arg1 + 0xa0);
                x87_r6_1 - x87_r7_1;
                long double x87_r7_2;

                if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
                    x87_r7_2 = *(arg1 + 0xa0);
                else
                    x87_r7_2 = *(arg1 + 0x9c);

                long double x87_r6_2 = *(arg1 + 0x98);
                x87_r6_2 - x87_r7_2;
                long double x87_r7_4;

                if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r7_5 = *(arg1 + 0x9c);
                    long double x87_r6_3 = *(arg1 + 0xa0);
                    x87_r6_3 - x87_r7_5;

                    if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                            | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
                        x87_r7_4 = *(arg1 + 0xa0);
                    else
                        x87_r7_4 = *(arg1 + 0x9c);
                }
                else
                    x87_r7_4 = *(arg1 + 0x98);

                long double x87_r7_7 = Render_ComputeNormals(*(arg1 + 0x6c)) * x87_r7_4;
                *(arg2 + 0x1c) = 0;
                *(arg2 + 0x20) = 1;
                *(arg2 + 0x14) = x87_r7_7;
                return AI_UpdateOrders_25(arg2);
            }
        }
    }

    return result;
}
