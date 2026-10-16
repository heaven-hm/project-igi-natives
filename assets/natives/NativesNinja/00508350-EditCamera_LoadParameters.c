#include "00508350-EditCamera_LoadParameters.h"
/* 0x00508350 EditCamera_LoadParameters full linked: callers=0 callees=8 */
int32_t* sub_508350(void* a1)

{
    if (sub_4f1050(a1) >= 0)
    {
        int32_t eax_1 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        int32_t eax_5 = *(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_5)
            eax_5(a1);
    }

    int32_t* eax_6 = *(a1 + 0x9c);

    if (eax_6)
    {
        int32_t* eax_7 = *eax_6;

        if (eax_7)
            QTask_FindType(eax_7);

        Qtask_UpdateList(*(a1 + 0x9c));
    }

    int32_t* eax_8 = *(a1 + 0xa0);

    if (eax_8)
    {
        int32_t* eax_9 = *eax_8;

        if (eax_9)
            QTask_FindType(eax_9);

        Qtask_UpdateList(*(a1 + 0xa0));
    }

    int32_t* result = *(a1 + 0xa4);

    if (!result)
        return result;

    int32_t* eax_11 = *result;

    if (eax_11)
        QTask_FindType(eax_11);

    return Qtask_UpdateList(*(a1 + 0xa4));
}
