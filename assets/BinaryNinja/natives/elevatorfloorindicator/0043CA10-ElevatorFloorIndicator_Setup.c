#include "ElevatorFloorIndicator_Setup.h"
struct status_msg* ElevatorFloorIndicator_Setup(int80_t a1 @ fp0, int32_t a2)

{
    int32_t* i = *(a2 + 8);

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
            int32_t valA6 = *((valA5 << 2) + &g_a970e0);

            if (valA6)
            {
                valA6(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    int32_t ctxB;

    if (!Script_FormatString_6(a2 + 0x1a4))
        ctxB = a2;
    else
    {
        Script_SpawnNewTask_7(a2 + 0x1a4, a2);
        ctxB = a1;
    }

    int32_t srcS4;

    if (!Script_FormatString_6(a2 + 0x1f4))
        srcS4 = a2;
    else
    {
        Script_SpawnNewTask_7(a2 + 0x1f4, a2);
🚫🚫🚫        int32_t v_8_2 = /* int32_t v_8_2 = (unimplemented  {fistp qword [esp+0x14], fp0}).d */;
        /* unimplemented  {fistp qword [esp+0x14], fp0} */
        srcS4 = v_8_2;
    }

    char* valA9 = a2 + 0x170;

    if (!ctxB)
        valA9 = a2 + 0x180;

    struct status_msg* result = DynObj_CreateMagicObject_5(a2, DynObj_Missing(valA9));

    if (srcS4)
    {
        result = SoundSys_SetMasterVolume_7(Script_FormatString(), a2 + 0x190);

        if (result)
            return SoundSys_StopSoundSample_7(result, a2 + 0x20);
    }

    return result;
}
