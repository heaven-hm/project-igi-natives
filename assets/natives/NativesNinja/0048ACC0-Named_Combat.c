#include "0048ACC0-Named_Combat.h"
/* 0x0048acc0 Named_Combat full linked: callers=0 callees=18 */
int32_t* sub_48acc0(int32_t a1, int32_t* a2)

{
    char* var_10 = "Female Combat - Stand";
    int32_t var_14 = 0xffffffff;
    int32_t var_18 = a1;
    void* ebp_1 = a2[0xa] + 8;
    sub_48a920(a1, ebp_1);

    if (*(a1 + 0x3de4))
    {
        int32_t eax_2 = a2[9];
        int32_t eax_3;

        if (eax_2)
        {
            eax_3 = eax_2(a1, a2);

            if (!eax_3)
                return eax_3;

            a2[9] = 0;
            return eax_3;
        }

        if (!sub_48efe0(a1, 0))
        {
            void* eax_5 = sub_48efe0(a1, 3);

            if (eax_5)
                eax_5 = sub_48ef70(a1, 3, -1f);

            char* var_10_3 = "Waiting for stand state";
            int32_t var_14_5 = 0xffffffff;
            int32_t var_18_2 = a1;
            return eax_5;
        }

        eax_3 = sub_48ae90(a1, ebp_1) + 1;

        if (eax_3 > 8)
            return eax_3;

        switch (eax_3)
        {
            case 0:
            {
                char* var_10_6 = "Waiting for patrol command";
                int32_t var_14_8 = 0xffffffff;
                int32_t var_18_10 = a1;
                return eax_3;
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
