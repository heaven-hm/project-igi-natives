// Original IGI.EXE function: Train_Cleanup (VA 0x0042AC20; static CFG gate PASS, CFG score 1.000).
#include "Train_Cleanup.h"
int32_t* Train_Cleanup(void* a1)

{
    int32_t* result = *(a1 + 8);
    void* v_8 = a1 + 0x20;
    void* v_4 = a1 + 0x70;

    if (*result)
    {
        int32_t* i = result;

        if (i)
        {
            int32_t objC1 = g_afa7e0;

            do
            {
                int32_t* tmpD1 = *i;
                void* valA4;

                if (!tmpD1)
                    valA4 = nullptr;
                else
                {
                    int32_t valA1 = *tmpD1;
                    int32_t valA2 = -(valA1);
                    valA4 = (valA2 - valA2) & tmpD1;
                }

                *((objC1 << 2) + &g_afa6e0) = valA4;
                g_afa7e0 = objC1 + 1;
                uint32_t valA6 = DynObj_CreateMagicObject_6();
                int32_t objC3 = 0;
                objC3 = i[7];
                result = *(((valA6 * 0x180 + objC3) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &v_8);

                objC1 = g_afa7e0 - 1;
                g_afa7e0 = objC1;
                i = *((objC1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
