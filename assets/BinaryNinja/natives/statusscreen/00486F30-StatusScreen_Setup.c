#include "StatusScreen_Setup.h"
int32_t* StatusScreen_OnEvent3()

{
    void* flagP = *(Level_LoadLevel_6() + 0x5c);
    void* ctxB1 = Level_LoadLevel_6() + 0x60;
    int32_t valA2 = g_c28b44;
    void* arg_4;
    void* dstD = arg_4;
    int32_t objC = g_c28b48;
    int32_t* result = Display_ClearSurfaces_13(dstD + 0x20, 1);
    int32_t* i = *(dstD + 8);

    if (*i && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA6;

            if (!tmpD1)
                valA6 = nullptr;
            else
            {
                int32_t valA3 = *tmpD1;
                int32_t valA4 = -(valA3);
                valA6 = (valA4 - valA4) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA6;
            g_afa7e0 = objC1 + 1;
            int32_t valA7 = StatusScreen_GetEvent();
            int32_t objC3 = 0;
            objC3 = i[7];
            result = *(((valA7 * 0x180 + objC3) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    if (*(ctxB1 + 0x54) == flagP)
    {
        result = AI_CombatTarget_29();

        if (!result)
        {
            uint32_t valA12 = *g_540b5c;
            void* objC5 = **(flagP + 0x68);
            int32_t tmpD3 = 0;
            arg_4 = dstD;
            tmpD3 = *(objC5 + 0x1c);
            int32_t valA16 = *(((valA12 * 0x180 + tmpD3) << 2) + &g_a96ae0);

            if (valA16)
                valA16(objC5, &arg_4);

            result = g_bc2360;

            if (result[0x1c])
            {
                int32_t tmpD11 = FX_ExplosionSpawn_12() / 0x1e / 0x3c;
                int32_t f1_1 = FX_ExplosionSpawn_12() / 0x1e % 0x3c;
                char* objC14 = &g_541078;

                if (f1_1 == 1)
                    objC14 = &g_567c74;

                char* valA30 = &g_541078;

                if (tmpD11 == 1)
                    valA30 = &g_567c74;

                char* v_5c_3 = objC14;
                int32_t v_60_2 = f1_1;
                char* v_64_1 = valA30;
                int32_t v_68_1 = tmpD11;
                void v_40;
                Game_DataSymbolLoad(&v_40, "Time Left: %d minute%s, %d second%s");
                Sys_FreeMemory_18(*(dstD + 0x4dc), &v_40);
                *(*(dstD + 0x4dc) + 4) = valA2 * 0.8125f;
                *(*(dstD + 0x4dc) + 8) = objC * 0.0416666679f;
                return Sys_CloseFileStream_18(*(dstD + 0x4dc));
            }
        }
    }

    return result;
}
