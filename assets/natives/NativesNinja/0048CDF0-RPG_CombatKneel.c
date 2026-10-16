#include "0048CDF0-RPG_CombatKneel.h"
/* 0x0048cdf0 RPG_CombatKneel full linked: callers=0 callees=15 */
int32_t* sub_48cdf0(int32_t a1, void* a2)

{
    void* ebp = a2;
    int32_t esi = a1;
    char* var_30 = "RPG Combat - Kneel";
    int32_t edi_1 = *(ebp + 0x28) + 8;
    int32_t var_34 = 0xffffffff;
    int32_t var_38 = esi;
    int32_t eax = *(edi_1 + 0x18);
    *(edi_1 + 0x18) = 0;
    sub_48a920(esi, *(ebp + 0x28) + 8);
    void* ebx = *(esi + 0x3de4);

    if (!ebx)
        return sub_450ff0(esi, ebp);

    int32_t eax_2 = *(ebp + 0x24);
    uint32_t eax_3;

    if (!eax_2)
    {
        a1 = *(ebx + 0x29);
        a2 = sub_48b980(esi);
        sub_48ef70(esi, 1, 1f);
        eax_3 = sub_48efe0(esi, 1);

        if (eax_3)
        {
            if (!*(ebx + 0x29))
            {
                *(edi_1 + 0x18) = eax + 1;

                if (eax + 1 > *(esi + 0x3d50))
                    return sub_450ff0(esi, ebp);

                if (!*(ebx + 0x28))
                {
                    char* var_30_5 = "Turning to target";
                    int32_t var_34_4 = 0xffffffff;
                    int32_t var_38_1 = esi;
                    void var_18;
                    sub_451380(&var_18, esi);
                    return sub_4525b0(esi, &var_18, 0.0349065848f, 0);
                }
            }

            *(esi + 0x3dd4) = *(esi + 0x3d48);
            int32_t eax_12 = *(esi + 0x3ddc);

            if (eax_12 == 5)
            {
                *(ebp + 0x18) = sub_48cbd0;
                return eax_12;
            }

            if (!a2)
            {
                edi_1 = 1;

                if (*(esi + 0x3dd0) != 1)
                {
                    void* eax_15 = sub_48ae70(esi, ebp, 0, sub_48dd10);
                    *(esi + 0x3dd0) = 1;
                    *(esi + 0x3dd4) = 0;
                    return eax_15;
                }
            }

            eax_3 = *(esi + 0x3dd0);

            if (!eax_3)
            {
                long double st0_1;
                st0_1 = sub_4b4770(Level_SetMission_5());
                long double temp0_1 = 0.400000006f;
                st0_1 - temp0_1;
                eax_3 = (st0_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp0_1) ? 1 : 0) << 0xa
                    | (st0_1 == temp0_1 ? 1 : 0) << 0xe;

                if (*(&eax_3 + 1) & 1)
                {
                    *(ebp + 0x18) = sub_48cbd0;
                    *(esi + 0x3dd0) = 2;
                    return eax_3;
                }
            }

            eax_3 = a1;

            if (eax_3)
            {
                sub_451380(esi + 0x3e88, esi);
                eax_3 = sub_48b9c0(ebp, esi, edi_1, esi, *(*(ebp + 0x28) + 0x28));
                *(*(ebp + 0x28) + 0x28) = 0;
                *(ebp + 0x24) = sub_48dcd0;
                *(esi + 0x3dd0) = 0;
            }
        }
    }
    else
    {
        eax_3 = eax_2(esi, ebp);

        if (eax_3)
            *(ebp + 0x24) = 0;
    }

    return eax_3;
}
