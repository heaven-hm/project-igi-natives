#include "ConditionalContainer_OnEvent.h"
int32_t ConditionalContainer_OnEvent(void* a1)

{
    int32_t result;
    result = *(a1 + 0x112);

    if (!result)
    {
        int32_t v_c = 0;
        result = Level_StartMission_4();
        int32_t* i = *(a1 + 8);
        int32_t result_1 = result;
        int32_t v_4_1 = 2;

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
                uint32_t valA5 = DynObj_UpdateDynTree_12();
                int32_t objC3 = 0;
                objC3 = i[7];
                result = *(((valA5 * 0x180 + objC3) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &v_c);

                objC1 = g_afa7e0 - 1;
                g_afa7e0 = objC1;
                i = *((objC1 << 2) + &g_afa6e0);
            } while (i);
        }

        *(a1 + 0x112) = 1;
    }

    return result;
}
