// Original IGI.EXE function: EditRigidObj_Setup (VA 0x004F2AC0; static CFG gate FAIL, CFG score 0.667).
#include "EditRigidObj_Setup.h"
void* EditRigidObj_Setup(void* a1)

{
    void* result = *(a1 + 0xe8);

    if (result)
    {
        int32_t objC1 = 0;
        objC1 = *(result + 0x1c);
        result = (*((objC1 << 2) + &g_a970e0))(result);
    }

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA3;

            if (!srcS1)
                valA3 = nullptr;
            else
            {
                int32_t valA = *srcS1;
                int32_t valA1 = -(valA);
                valA3 = (valA1 - valA1) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA3;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA4 = 0;
            g_afa7e0 = tmpD2;
            valA4 = i[7];
            result = *((valA4 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    return result;
}
