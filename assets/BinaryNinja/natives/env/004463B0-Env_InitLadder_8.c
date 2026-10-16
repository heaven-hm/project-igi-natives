#include "Env_InitLadder_8.h"
int32_t Env_InitLadder_8(void* a1)

{
    void v_8;
    int32_t result = Env_TriggerAlarm_8(&v_8, a1);
    int32_t* i = *(a1 + 8);

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
            int32_t tmpD2 = 0;
            tmpD2 = i[7];
            result = *(((valA5 * 0x180 + tmpD2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, &v_8);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
