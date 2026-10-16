#include "0048D080-Guard_CombatStand.h"
/* 0x0048d080 Guard_CombatStand full linked: callers=1 callees=22 */
int32_t* sub_48d080(int32_t a1, void* a2)

{
    char* var_34 = "Guard Combat - Stand";
    int32_t edi_1 = *(a2 + 0x28) + 8;
    int32_t var_38 = 0xffffffff;
    int32_t var_3c = a1;
    void* eax = *(edi_1 + 0x18);
    *(edi_1 + 0x18) = 0;
    sub_48a920(a1, *(a2 + 0x28) + 8);
    void* ebx = *(a1 + 0x3de4);

    if (!ebx)
        return sub_450ff0(a1, a2);

    int32_t eax_2 = *(a2 + 0x24);
    int32_t eax_3;

    if (!eax_2)
    {
        eax_3 = sub_48efe0(a1, 0);

        if (eax_3)
        {
            if (!*(ebx + 0x29))
            {
                sub_4511f0(*(a1 + 0x3aa8), a1, 0xffffffff);
                *(edi_1 + 0x18) = eax + 1;

                if (eax + 1 > *(a1 + 0x3d50))
                    return sub_450ff0(a1, a2);

                if (!*(ebx + 0x28))
                {
                    char* var_34_4 = "Turning to target";
                    int32_t var_38_6 = 0xffffffff;
                    int32_t var_3c_2 = a1;
                    void var_18;
                    sub_451380(&var_18, a1);
                    return sub_4525b0(a1, &var_18, 0.0349065848f, 0);
                }
            }

            int32_t eax_10 = sub_48b980(a1);

            if (!eax_10)
            {
                sub_48ae70(a1, a2, eax_10, sub_48db10);
                void* eax_11 = *(a1 + 0x3aa8);
                *(a1 + 0x3dd4) = 0;
                return sub_4511f0(eax_11, a1, 1);
            }

            long double x87_r7_2 = sub_4b4770(Level_SetMission_5()) * *(a1 + 0x3d7c);
            bool cond:0_1 = *(a1 + 0x3ddc) != 5;
            *(a1 + 0x3dd4) = x87_r7_2 + *(a1 + 0x3d78);

            if (!cond:0_1)
            {
                sub_4525b0(a1, *(a1 + 0x3aa8) + 0x110, 0.0349065848f, 1);
                sub_48ef70(a1, 9, 1f);
            }
            else if (*(ebx + 0x29))
            {
                if (sub_451270(*(a1 + 0x3aa8), 0) >= 4)
                    return sub_4511f0(*(a1 + 0x3aa8), a1, 2);

                sub_4511f0(*(a1 + 0x3aa8), a1, 0);
                sub_451380(a1 + 0x3e88, a1);
                uint32_t eax_19 = sub_48b9c0(a2, a1, edi_1, a1, *(*(a2 + 0x28) + 0x28));
                *(*(a2 + 0x28) + 0x28) = 0;
                *(a2 + 0x24) = sub_48d8b0;
                return eax_19;
            }

            return sub_4511f0(*(a1 + 0x3aa8), a1, 0xffffffff);
        }
    }
    else
    {
        eax_3 = eax_2(a1, a2);

        if (eax_3)
            *(a2 + 0x24) = 0;
    }

    return eax_3;
}
