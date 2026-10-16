#include "MenuText_Update.h"
void* MenuText_Update(void* a1)

{
    void* result = *(a1 + 0x44);
    *(a1 + 0x28) = 0;
    *(a1 + 0x2c) = 0;

    if (result && *(a1 + 0x114))
    {
        int32_t* valA = Menu_LocalSS(result, a1 + 0x54);
        Sys_FreeMemory_18(*(a1 + 0x114), valA);
        int32_t valA2 = Sys_CheckHeap_21(*(a1 + 0x114));
        int32_t* objC3 = *(a1 + 0x114);
        *(a1 + 0x28) = valA2;
        result = Sys_AllocateMemory_22(objC3);
        *(a1 + 0x2c) = result;
    }

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t objC4 = g_afa7e0;

        do
        {
            int32_t* tmpD2 = *i;
            void* valA6;

            if (!tmpD2)
                valA6 = nullptr;
            else
            {
                int32_t valA3 = *tmpD2;
                int32_t valA4 = -(valA3);
                valA6 = (valA4 - valA4) & tmpD2;
            }

            *((objC4 << 2) + &g_afa6e0) = valA6;
            g_afa7e0 = objC4 + 1;
            int32_t valA7 = Menu_LeaveMenus_14();
            int32_t valA8 = 0;
            valA8 = i[7];
            result = *(((valA7 * 0x180 + valA8) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            objC4 = g_afa7e0 - 1;
            g_afa7e0 = objC4;
            i = *((objC4 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
