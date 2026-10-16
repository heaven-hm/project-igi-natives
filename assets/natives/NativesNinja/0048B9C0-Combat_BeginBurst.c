#include "0048B9C0-Combat_BeginBurst.h"
/* 0x0048b9c0 Combat_BeginBurst full linked: callers=10 callees=11 */
uint32_t sub_48b9c0(void* a1 @ ebp, int32_t a2 @ esi, int32_t a3 @ edi, int32_t a4, char a5)

{
    void* ebx = *(a4 + 0x14);
    float var_10 = sub_4b4770(Level_SetMission_5()) * *(a4 + 0x3d74) + *(a4 + 0x3d70);
    void* a;

    if (!sub_48efe0(a4, 4))
        a = Table_GetAt(ebx + 0x4c4, 0);
    else
    {
        int32_t esi = **(ebx + 0x7b4);
        sub_475310(esi, a4 + 0x38, a4 + 0x78);
        a = Table_GetAt(esi + 0x20c, 0);
    }

    struct collision_set* eax_4 = HumanPlayer_LoadParameters_13(a, a3, a2, a1);
    int32_t var_8;
    sub_4f23d0(a, &var_8);
    int32_t eax_5 = *(eax_4 + 0x610);

    if (eax_5 >= 0)
    {
        if (eax_5 <= 2)
        {
            int32_t eax_6 = *(eax_4 + 0x64c);
            int32_t ebp_1 = *(eax_4 + 0x648);

            if (eax_6 == ebp_1 || eax_6 <= 1)
            {
                var_10 = ebp_1 * var_10;
                *(a4 + 0x3e54) = var_10;

                if (var_10 >= 1)
                {
                    int32_t ecx_2 = *(a4 + 0x3d4c);

                    if (var_10 > ecx_2)
                        *(a4 + 0x3e54) = ecx_2;
                }
                else
                    *(a4 + 0x3e54) = 1;
            }
            else
                *(a4 + 0x3e54) = eax_6;

            if (!*(a4 + 0x3e54))
                *(a4 + 0x3e54) = 1;

            long double x87_r7_5 = sub_4b32b0(a4 + 0x20, a4 + 0x3e88);
            long double temp1_1 = 0.0;
            x87_r7_5 - temp1_1;
            int16_t eax_11 = (x87_r7_5 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe | 0x3800;

            if (*(&eax_11 + 1) & 1)
                *(ebx + 0x4d4) = *(a4 + 0x3d68);
            else
            {
                long double x87_r6_1 = *(a4 + 0xb0);
                x87_r7_5 - x87_r6_1;

                if (!(*(&((x87_r7_5 < x87_r6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, x87_r6_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    x87_r7_5 = *(a4 + 0xb0);

                long double temp2_1 = 0.01;
                x87_r7_5 - temp2_1;
                eax_11 = (x87_r7_5 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_5, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == temp2_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&eax_11 + 1) & 1))
                    *(ebx + 0x4d4) =
                        (*(a4 + 0x3d6c) - *(a4 + 0x3d68)) * x87_r7_5 / *(a4 + 0xb0)
                        + *(a4 + 0x3d68);
                else
                    *(ebx + 0x4d4) = *(a4 + 0x3d68);
            }

            eax_11 = a5;

            if (eax_11)
                *(ebx + 0x4d4) = *(ebx + 0x4d4) * 0.5f;
        }
        else if (eax_5 == 4)
        {
            *(a4 + 0x3e54) = 1;
            *(ebx + 0x4d4) = 0x3f800000;
        }
    }

    *(a4 + 0x3e58) = var_8;
    uint32_t result = Frames_GetUpdateCounter();
    *(a4 + 0x3e5c) = result;
    *(a4 + 0x3e60) = 0;
    *(a4 + 0x3e6a) = 0;
    *(a4 + 0x3e69) = 1;
    memcpy(a4 + 0x3e70, a4 + 0x3e88, 0x18);
    return result;
}
