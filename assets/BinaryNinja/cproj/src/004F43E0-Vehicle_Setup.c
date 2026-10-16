#include "gi_platform.h"
#include "004F43E0-Vehicle_Setup.h"
int32_t Vehicle_Setup(void* a1, int32_t a2)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x745)) = 1;
    int32_t result = ((int(*)())(uintptr_t)(*(((DynObj_UpdateDynTree_12() * 0x180 + DynObj_LookupHashItem_5()) << 2) + &g_a96ae0)))(a1, a2);
    void* srcS1 = (*(int32_t*)(uintptr_t)(a1 + 0xe8));

    if (srcS1)
    {
        int32_t* i = *(srcS1 + 8);

        if (*i && i)
        {
            int32_t objC1 = g_afa7e0;

            do
            {
                int32_t* tmpD1 = *i;
                void* valA8;

                if (!tmpD1)
                    valA8 = nullptr;
                else
                {
                    int32_t valA5 = *tmpD1;
                    int32_t valA6 = -(valA5);
                    valA8 = (valA6 - valA6) & tmpD1;
                }

                *((objC1 << 2) + &g_afa6e0) = valA8;
                g_afa7e0 = objC1 + 1;
                uint32_t valA10 = DynObj_UpdateDynTree_12();
                int32_t objC3 = 0;
                objC3 = i[7];
                result = *(((valA10 * 0x180 + objC3) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, a2);

                objC1 = g_afa7e0 - 1;
                g_afa7e0 = objC1;
                i = *((objC1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
