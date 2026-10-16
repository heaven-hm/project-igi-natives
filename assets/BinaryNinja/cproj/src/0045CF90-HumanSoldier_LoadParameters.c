#include "gi_platform.h"
#include "0045CF90-HumanSoldier_LoadParameters.h"
int32_t HumanSoldier_LoadParameters(void* a1)

{
    int32_t valA2 = (*(int32_t*)(uintptr_t)(*(a1 + 0x800) + 0x3d38)) - 5;

    if (valA2 > 0x17)
        (*(int32_t*)(uintptr_t)(a1 + 0x338)) = 0x53ed10;
    else
    {
        int32_t objC1 = 0;
        objC1 = lookup_table_45d010[valA2];

        switch (objC1)
        {
            case 0:
            {
                (*(int32_t*)(uintptr_t)(a1 + 0x338)) = &g_53ef70;
                break;
            }
            case 1:
            {
                (*(int32_t*)(uintptr_t)(a1 + 0x338)) = &g_53f0a0;
                break;
            }
            case 2:
            {
                (*(int32_t*)(uintptr_t)(a1 + 0x338)) = &g_53ee40;
                break;
            }
            case 3:
            {
                (*(int32_t*)(uintptr_t)(a1 + 0x338)) = 0x53ed10;
                break;
            }
        }
    }

    return ((int(*)())(uintptr_t)(*((AI_UpdateOrders_17() << 2) + &g_a970e0)))(a1);
}
