#include "004265A0-CarAI_Process.h"
/* 0x004265a0 CarAI_Process full linked: callers=0 callees=5 */
int32_t CarAI_Process(void* a1)

{
    int32_t eax_1 = sub_4f1030(*(a1 + 0x28));
    *(a1 + 0x4c) = eax_1;

    if (eax_1)
    {
        int16_t eax_2 = Menu_LeaveMenus_23();

        if (*(*(a1 + 0x4c) + 0x1c) != eax_2)
            *(a1 + 0x4c) = 0;
    }

    int32_t eax_3 = sub_4f1030(*(a1 + 0x20));
    *(a1 + 0x2c) = eax_3;

    if (eax_3)
    {
        int16_t eax_4 = sub_5098a0();

        if (*(*(a1 + 0x2c) + 0x1c) != eax_4)
            *(a1 + 0x2c) = 0;
    }

    int32_t result = *(a1 + 0x4c);

    if (!result)
        return result;

    return CarAI_UpdateCar(a1, 0, 0, 0, 0f);
}
