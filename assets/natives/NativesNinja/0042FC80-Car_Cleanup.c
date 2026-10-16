#include "0042FC80-Car_Cleanup.h"
/* 0x0042fc80 Car_Cleanup full linked: callers=1 callees=3 */
int32_t* Car_Cleanup(void* a1, int32_t a2)

{
    int32_t* result;
    result = *(a1 + 0x2ed5);

    if (!result)
    {
        (*(((sub_4cea20() * 0x180 + sub_4f45f0()) << 2) + &g_a96ae0))(a1, a2);
        result = *(a1 + 0x748);

        if (result)
        {
            result = QTask_FindType(result);
            *(a1 + 0x748) = 0;
        }
    }

    return result;
}
