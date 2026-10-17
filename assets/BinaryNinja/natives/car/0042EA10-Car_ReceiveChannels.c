// Original IGI.EXE function: Car_ReceiveChannels (VA 0x0042EA10; static CFG gate PASS, CFG score 0.967).
#include "Car_ReceiveChannels.h"
int32_t* Car_ReceiveChannels(void* a1, float a2)

{
    int32_t* ctxB = a2;
    void* valA = ctxB[1];

    if (*(valA + 4) != 0xbf800000)
        *(a1 + 0x730) = *(valA + 4);

    *(a1 + 0x73c) = *ctxB[1];
    long double x87_r7_3 = *(ctxB[1] + 0xc);
    long double f0 = -1f;
    x87_r7_3 - f0;
    char valA3;

    valA3 = *(&((x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
        | (x87_r7_3 == f0 ? 1 : 0) << 0xe) + 1) & 0x40 ? 0 : 1;

    *(a1 + 0x744) = valA3;

    if (*ctxB)
    {
        VehicleChild_Dispatch(a1);
        *(a1 + 0x2ecc) = 1;
        return Car_Tick(a1);
    }

    long double x87_r7_4 = *(a1 + 0x9c);
    long double x87_r6_1 = *(a1 + 0xa0);
    x87_r6_1 - x87_r7_4;
    long double x87_r7_5;

    if (!(*(&((x87_r6_1 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_5 = *(a1 + 0xa0);
    else
        x87_r7_5 = *(a1 + 0x9c);

    long double x87_r6_2 = *(a1 + 0x98);
    x87_r6_2 - x87_r7_5;
    long double x87_r7_7;

    if (*(&((x87_r6_2 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_5) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_8 = *(a1 + 0x9c);
        long double x87_r6_3 = *(a1 + 0xa0);
        x87_r6_3 - x87_r7_8;

        if (!(*(&((x87_r6_3 < x87_r7_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, x87_r7_8) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_8 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_7 = *(a1 + 0xa0);
        else
            x87_r7_7 = *(a1 + 0x9c);
    }
    else
        x87_r7_7 = *(a1 + 0x98);

    float v_20_1 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_7;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, a1 + 0x168, v_20_1);
    memcpy(a1 + 0x70, a1 + 0x18c, 0x28);
    *(ctxB[1] + 4) = 0xbf800000;
    *(ctxB[1] + 8) = 0xc0000000;
    Script_ParseEnumReal32_28(a1, *(a1 + 0x1b4));
    Script_CallNativeHandler_16(a1);
    Menu_DrawWidget_22(a1);
    int32_t* i_1 = *(a1 + 0xe8);
    *(a1 + 0x720) = *(a1 + 0x740);
    *(a1 + 0x730) = *(a1 + 0x740);
    *(a1 + 0x91c) = 0;
    *(a1 + 0x2ed5) = 0;
    *(a1 + 0x72c) = 0;
    *(a1 + 0x73c) = 0;

    if (i_1)
    {
        void* v_4_1 = a1;
        void* v_c = a1 + 0x20;
        void* v_8_1 = a1 + 0x70;
        i_1 = i_1[2];

        if (*i_1)
        {
            int32_t* i = i_1;

            if (i)
            {
                int32_t objC4 = g_afa7e0;
                int32_t valA16;

                do
                {
                    int32_t* tmpD3 = *i;
                    void* valA12;

                    if (!tmpD3)
                        valA12 = nullptr;
                    else
                    {
                        int32_t valA9 = *tmpD3;
                        int32_t valA10 = -(valA9);
                        valA12 = (valA10 - valA10) & tmpD3;
                    }

                    *((objC4 << 2) + &g_afa6e0) = valA12;
                    g_afa7e0 = objC4 + 1;
                    uint32_t valA14 = MagicObj_GetEventId();
                    int32_t valA15 = 0;
                    valA15 = i[7];
                    valA16 = *(((valA14 * 0x180 + valA15) << 2) + &g_a96ae0);

                    if (valA16)
                        valA16 = valA16(i, &v_c);

                    objC4 = g_afa7e0 - 1;
                    g_afa7e0 = objC4;
                    i = *((objC4 << 2) + &g_afa6e0);
                } while (i);

                return valA16;
            }
        }
    }

    return i_1;
}
