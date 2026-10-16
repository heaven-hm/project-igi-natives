#include "AlarmLight_LoadParameters.h"
struct status_msg* AlarmLight_LoadParameters(int80_t a1 @ fp0, void* a2)

{
    char ctxB = *(a2 + 0x1a0);
    struct status_msg* result;

    if (!ctxB || *(a2 + 0x1a1))
    {
        result = *(a2 + 0x1f4);

        if (result)
        {
            result = QTask_FindType(result);
            *(a2 + 0x1f4) = 0;
        }
    }
    else
    {
        result = *(a2 + 0x1f4);

        if (!result)
        {
            result = SoundSys_SetMasterVolume_7(a2, a2 + 0x160);
            *(a2 + 0x1f4) = result;
        }
    }

    result = *(a2 + 0x1a1);

    if (!result)
    {
        result = Script_FormatString_6(a2 + 0x1a4);

        if (result)
        {
            result = Script_SpawnNewTask_7(a2 + 0x1a4, a2);
            *(a2 + 0x1a0) = a1;
        }

        result = *(a2 + 0x1a0);

        if (!ctxB)
        {
            if (result)
                result = DynObj_CreateMagicObject_5(a2, DynObj_Missing(a2 + 0x140));
        }
        else if (!result)
            result = DynObj_CreateMagicObject_5(a2, DynObj_Missing(a2 + 0x130));

        int32_t* i = *(a2 + 8);

        if (*i && i)
        {
            int32_t tmpD2 = g_afa7e0;

            do
            {
                int32_t* dstD2 = *i;
                void* valA8;

                if (!dstD2)
                    valA8 = nullptr;
                else
                {
                    int32_t valA5 = *dstD2;
                    int32_t valA6 = -(valA5);
                    valA8 = (valA6 - valA6) & dstD2;
                }

                *((tmpD2 << 2) + &g_afa6e0) = valA8;
                int32_t tmpD3 = tmpD2 + 1;
                int32_t valA9 = 0;
                g_afa7e0 = tmpD3;
                valA9 = i[7];
                result = *((valA9 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    tmpD3 = g_afa7e0;
                }

                i = *((tmpD3 << 2) + &g_afa6dc);
                tmpD2 = tmpD3 - 1;
                g_afa7e0 = tmpD2;
            } while (i);
        }

        void* srcS1 = *(a2 + 0xe8);

        if (srcS1)
        {
            int32_t objC2 = 0;
            objC2 = *(srcS1 + 0x1c);
            return (*((objC2 << 2) + &g_a970e0))(srcS1);
        }
    }

    return result;
}
