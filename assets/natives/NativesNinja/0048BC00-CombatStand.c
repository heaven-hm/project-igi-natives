#include "0048BC00-CombatStand.h"
/* 0x0048bc00 CombatStand full linked: callers=0 callees=22 */
int32_t* sub_48bc00(int32_t a1, int32_t* a2)

{
    char* var_10 = "Combat - Stand";
    int32_t var_14 = 0xffffffff;
    int32_t var_18 = a1;
    void* ebp_1 = a2[0xa] + 8;
    sub_48a920(a1, ebp_1);

    if (*(a1 + 0x3de4))
    {
        int32_t eax_2 = sub_48be30(a1, ebp_1);

        if (!eax_2)
            return sub_48ae70(a1, a2, 0x48c510, 0);

        if (eax_2 == 1)
        {
            void* eax_20 = sub_48ae70(a1, a2, 0, sub_48d830);
            *(a1 + 0x3c7c) = 0x3f800000;
            *(a1 + 0x3df4) = 1;
            return eax_20;
        }

        if (eax_2 == 2)
        {
            void* eax_19 = sub_48ae70(a1, a2, 0, sub_48d870);
            *(a1 + 0x3c80) = 0x3f800000;
            *(a1 + 0x3df4) = 0xffffffff;
            return eax_19;
        }

        int32_t eax_6 = a2[9];
        void* eax_7;

        if (eax_6)
        {
            eax_7 = eax_6(a1, a2);

            if (!eax_7)
                return eax_7;

            a2[9] = 0;
            return eax_7;
        }

        if (!sub_48efe0(a1, 0))
        {
            void* eax_9 = sub_48efe0(a1, 3);

            if (eax_9)
                eax_9 = sub_48ef70(a1, 3, -1f);

            char* var_10_4 = "Waiting for stand state";
            int32_t var_14_6 = 0xffffffff;
            int32_t var_18_2 = a1;
            return eax_9;
        }

        eax_7 = sub_48bfd0(a1, ebp_1) + 1;

        if (eax_7 > 8)
            return eax_7;

        switch (eax_7)
        {
            case nullptr:
            {
                char* var_10_7 = "Waiting for patrol command";
                int32_t var_14_9 = 0xffffffff;
                int32_t var_18_10 = a1;
                return eax_7;
                break;
            }
            case 1:
            {
                return sub_48ae70(a1, a2, 0, sub_48db10);
                break;
            }
            case 2:
            {
                return sub_48ae70(a1, a2, 0, sub_48dbf0);
                break;
            }
            case 3:
            {
                sub_451380(a1 + 0x3e88, a1);
                sub_48b9c0(ebp_1, a1, a2, a1, *(ebp_1 + 0x20));
                *(ebp_1 + 0x20) = 0;
                return sub_48ae70(a1, a2, 0, sub_48d8b0);
                break;
            }
            case 4:
            {
                return sub_48ae70(a1, a2, 0, sub_48dbb0);
                break;
            }
            case 5:
            {
                return sub_48ae70(a1, a2, sub_48c750, 0);
                break;
            }
            case 6:
            {
                return sub_48ae70(a1, a2, sub_48c850, 0);
                break;
            }
            case 7:
            {
                return sub_48ae70(a1, a2, sub_48caa0, 0);
                break;
            }
        }
    }

    return sub_450ff0(a1, a2);
}
