#include "0048C540-CombatLieDown_Dispatch.h"
/* 0x0048c540 CombatLieDown_Dispatch full linked: callers=0 callees=25 */
int32_t* sub_48c540(int32_t a1, int32_t* a2)

{
    char* var_10 = "Combat - Liedown";
    int32_t var_14 = 0xffffffff;
    int32_t var_18 = a1;
    void* ebp_1 = a2[0xa] + 8;
    sub_48a920(a1, ebp_1);

    if (*(a1 + 0x3de4))
    {
        sub_48ef70(a1, 2, 1f);
        int32_t eax_2 = a2[9];
        int32_t result;

        if (eax_2)
        {
            result = eax_2(a1, a2);

            if (!result)
                return result;

            a2[9] = 0;
            return result;
        }

        if (!sub_48efe0(a1, 2))
        {
            char* var_18_2 = "Waiting for liedown state";
            int32_t var_1c_1 = 0xffffffff;
            int32_t var_20_1 = a1;
            return sub_48efe0(a1, 3);
        }

        long double x87_r7_1 = 0.0;
        long double temp0_1 = *(a1 + 0x3db8);
        x87_r7_1 - temp0_1;

        if (!(*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            sub_48ef70(a1, 2, 0f);
            return sub_48ae70(a1, a2, sub_48bbd0, 0);
        }

        result = sub_48bfd0(a1, ebp_1) + 1;

        if (result > 8)
            return result;

        switch (result)
        {
            case 0:
            {
                char* var_10_6 = "Waiting for patrol command";
                int32_t var_14_8 = 0xffffffff;
                int32_t var_18_10 = a1;
                return result;
                break;
            }
            case 1:
            {
                return sub_48ae70(a1, a2, 0, sub_48de00);
                break;
            }
            case 2:
            {
                char* var_10_5 = "liedown throw grenade";
                int32_t var_14_7 = 0xffffffff;
                int32_t var_18_6 = a1;
                return result;
                break;
            }
            case 3:
            {
                sub_451380(a1 + 0x3e88, a1);
                sub_48b9c0(ebp_1, a1, a2, a1, *(ebp_1 + 0x20));
                *(ebp_1 + 0x20) = 0;
                return sub_48ae70(a1, a2, 0, sub_48ddc0);
                break;
            }
            case 4:
            {
                sub_48ef70(a1, 2, 0f);
                return sub_48ae70(a1, a2, sub_48bbd0, 0);
                break;
            }
            case 5:
            {
                sub_48ef70(a1, 2, 0f);
                sub_48ae70(a1, a2, sub_48bbd0, 0);
                return sub_48ae70(a1, a2, sub_48c750, 0);
                break;
            }
            case 6:
            {
                sub_48ef70(a1, 2, 0f);
                sub_48ae70(a1, a2, sub_48bbd0, 0);
                return sub_48ae70(a1, a2, sub_48c850, 0);
                break;
            }
            case 7:
            {
                sub_48ef70(a1, 2, 0f);
                sub_48ae70(a1, a2, sub_48bbd0, 0);
                return sub_48ae70(a1, a2, sub_48caa0, 0);
                break;
            }
        }
    }

    return sub_450ff0(a1, a2);
}
