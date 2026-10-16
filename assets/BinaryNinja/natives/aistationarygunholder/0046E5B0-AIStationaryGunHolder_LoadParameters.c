#include "AIStationaryGunHolder_LoadParameters.h"
void* AIStationaryGunHolder_LoadParameters(float a1)

{
    char ctxB = *(a1 + 0x2698);
    int64_t v_c;

    if (Script_FormatString_6(a1 + 0x2644))
    {
        Script_SpawnNewTask_7(a1 + 0x2644, a1);
        long double fpu0;
        v_c = fpu0;
        *(a1 + 0x2694) = v_c;
    }

    if (Script_FormatString_6(a1 + 0x25f4))
    {
        Script_SpawnNewTask_7(a1 + 0x25f4, a1);
🚫🚫🚫        v_c = /* v_c = unimplemented  {fistp qword [esp+0x14], fp0} */;
        /* unimplemented  {fistp qword [esp+0x14], fp0} */
        *(a1 + 0x2698) = v_c;
    }

    if (*(a1 + 0x2698))
    {
        memcpy(a1 + 0xf0, a1 + 0x20, 0x18);
        memcpy(a1 + 0x108, a1 + 0x70, 0x28);
        *(a1 + 0x160) = 0;
        Car_DetectionSweep(a1 + 0x168, a1 + 0xf0, a1, *(a1 + 0x2694));
    }
    else if (ctxB)
    {
        FX_TrailUpdate_13(a1 + 0x168);
        FX_DebrisSpawn_13(a1 + 0x168, 1, 4, AI_CombatTarget_22(), 4, 8);
    }

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t tmpD2 = g_afa7e0;

        do
        {
            int32_t* srcS5 = *i;
            void* valA10;

            if (!srcS5)
                valA10 = nullptr;
            else
            {
                int32_t valA7 = *srcS5;
                int32_t valA8 = -(valA7);
                valA10 = (valA8 - valA8) & srcS5;
            }

            *((tmpD2 << 2) + &g_afa6e0) = valA10;
            int32_t tmpD3 = tmpD2 + 1;
            int32_t valA11 = 0;
            g_afa7e0 = tmpD3;
            valA11 = i[7];
            int32_t valA12 = *((valA11 << 2) + &g_a970e0);

            if (valA12)
            {
                valA12(i);
                tmpD3 = g_afa7e0;
            }

            i = *((tmpD3 << 2) + &g_afa6dc);
            tmpD2 = tmpD3 - 1;
            g_afa7e0 = tmpD2;
        } while (i);
    }

    void* result = *(a1 + 0xe8);

    if (result)
    {
        int32_t objC2 = 0;
        objC2 = *(result + 0x1c);
        (*((objC2 << 2) + &g_a970e0))(result);
        void* objC3 = *(a1 + 0xe8);
        result = a1 + 0x70;
        v_c = a1 + 0x20;
        *(&v_c + 4) = result;
        float v_4_1 = a1;
        int32_t* i_1 = *(objC3 + 8);

        if (*i_1 && i_1)
        {
            int32_t objC4 = g_afa7e0;

            do
            {
                int32_t* tmpD5 = *i_1;
                void* valA16;

                if (!tmpD5)
                    valA16 = nullptr;
                else
                {
                    int32_t valA13 = *tmpD5;
                    int32_t valA14 = -(valA13);
                    valA16 = (valA14 - valA14) & tmpD5;
                }

                *((objC4 << 2) + &g_afa6e0) = valA16;
                g_afa7e0 = objC4 + 1;
                uint32_t valA18 = MagicObj_GetEventId();
                int32_t valA19 = 0;
                valA19 = i_1[7];
                result = *(((valA18 * 0x180 + valA19) << 2) + &g_a96ae0);

                if (result)
                    result = result(i_1, &v_c);

                objC4 = g_afa7e0 - 1;
                g_afa7e0 = objC4;
                i_1 = *((objC4 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
