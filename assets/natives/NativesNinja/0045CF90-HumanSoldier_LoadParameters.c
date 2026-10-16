#include "0045CF90-HumanSoldier_LoadParameters.h"
/* 0x0045cf90 HumanSoldier_LoadParameters full linked: callers=0 callees=1 */
int32_t sub_45cf90(void* a1)

{
    int32_t eax_2 = *(*(a1 + 0x800) + 0x3d38) - 5;

    if (eax_2 > 0x17)
        *(a1 + 0x338) = 0x53ed10;
    else
    {
        int32_t ecx_1 = 0;
        ecx_1 = lookup_table_45d010[eax_2];

        switch (ecx_1)
        {
            case 0:
            {
                *(a1 + 0x338) = &g_53ef70;
                break;
            }
            case 1:
            {
                *(a1 + 0x338) = &g_53f0a0;
                break;
            }
            case 2:
            {
                *(a1 + 0x338) = &g_53ee40;
                break;
            }
            case 3:
            {
                *(a1 + 0x338) = 0x53ed10;
                break;
            }
        }
    }

    return (*((sub_460be0() << 2) + &g_a970e0))(a1);
}
