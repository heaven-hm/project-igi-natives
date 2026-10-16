#include "Elevator_OnEvent.h"
void* Elevator_OnEvent(float a1)

{
    Vehicle_InitPlane_9(a1);
    void* result = a1 + 0xf0;
    int32_t* i = *(a1 + 8);
    void* result_1 = result;
    void* v_4 = a1 + 0x70;

    if (*i && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA3;

            if (!tmpD1)
                valA3 = nullptr;
            else
            {
                int32_t valA = *tmpD1;
                int32_t valA1 = -(valA);
                valA3 = (valA1 - valA1) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA3;
            g_afa7e0 = objC1 + 1;
            uint32_t valA5 = DynObj_CreateMagicObject_6();
            int32_t valA6 = 0;
            valA6 = i[7];
            result = *(((valA5 * 0x180 + valA6) << 2) + &g_a96ae0);

            if (result)
                result = result(i, &result_1);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
