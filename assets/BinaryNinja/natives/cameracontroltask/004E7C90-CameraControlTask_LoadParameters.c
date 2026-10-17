// Original IGI.EXE function: CameraControlTask_LoadParameters (VA 0x004E7C90; static CFG gate PASS, CFG score 1.000).
#include "CameraControlTask_LoadParameters.h"
void CameraControlTask_LoadParameters(void* a1)

{
    g_a5ebdc = a1;
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA4;

            if (!srcS1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *srcS1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA4;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA5 = 0;
            g_afa7e0 = tmpD2;
            valA5 = i[7];
            int32_t valA = *((valA5 << 2) + &g_a970e0);

            if (valA)
            {
                valA(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    g_a5ebdc = 0;
    int32_t objC = *(a1 + 0x28);

    if (objC)
    {
        int32_t valA6 = *(a1 + 0x20);
        SoundSys_Update3DPosition_15(objC, valA6, valA6 + 0x28);
    }
}
