#include "gi_platform.h"
#include "00431B70-Heli_ReceiveChannels.h"
int32_t Heli_ReceiveChannels(float a1, int32_t* a2)

{
    int32_t* srcS = a2;
    uint32_t ctxB = a1;
    void* valA = srcS[1];

    if ((*(int32_t*)(uintptr_t)(valA + 0xc)) != 0xbf800000)
        (*(int32_t*)(uintptr_t)(ctxB + 0x730)) = (*(int32_t*)(uintptr_t)(valA + 0xc));

    (*(int32_t*)(uintptr_t)(ctxB + 0x734)) = *srcS[1];
    (*(int32_t*)(uintptr_t)(ctxB + 0x738)) = (*(int32_t*)(uintptr_t)(srcS[1] + 4));
    (*(int32_t*)(uintptr_t)(ctxB + 0x73c)) = (*(int32_t*)(uintptr_t)(srcS[1] + 8));

    if (!*srcS)
    {
        long double x87_r7_5 = (*(int32_t*)(uintptr_t)(ctxB + 0x9c));
        long double x87_r6_1 = (*(int32_t*)(uintptr_t)(ctxB + 0xa0));
        x87_r6_1 - x87_r7_5;
        long double x87_r7_6;

        if (!(*(&((x87_r6_1 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_6 = (*(int32_t*)(uintptr_t)(ctxB + 0xa0));
        else
            x87_r7_6 = (*(int32_t*)(uintptr_t)(ctxB + 0x9c));

        long double x87_r6_2 = (*(int32_t*)(uintptr_t)(ctxB + 0x98));
        x87_r6_2 - x87_r7_6;
        long double x87_r7_8;

        if (*(&((x87_r6_2 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_6) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_9 = (*(int32_t*)(uintptr_t)(ctxB + 0x9c));
            long double x87_r6_3 = (*(int32_t*)(uintptr_t)(ctxB + 0xa0));
            x87_r6_3 - x87_r7_9;

            if (!(*(&((x87_r6_3 < x87_r7_9 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_9) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_9 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_8 = (*(int32_t*)(uintptr_t)(ctxB + 0xa0));
            else
                x87_r7_8 = (*(int32_t*)(uintptr_t)(ctxB + 0x9c));
        }
        else
            x87_r7_8 = (*(int32_t*)(uintptr_t)(ctxB + 0x98));

        float v_20_2 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(ctxB + 0x6c))) * x87_r7_8;
        WorldObject_CommitTransform(Level_StartMission_4(), ctxB, ctxB + 0x168, v_20_2);
        (*(int32_t*)(uintptr_t)(srcS[1] + 0xc)) = 0xbf800000;
        (*(int32_t*)(uintptr_t)(srcS[1] + 0x10)) = 0xc0000000;
        *srcS[1] = 0;
        (*(int32_t*)(uintptr_t)(srcS[1] + 4)) = 0;
        (*(int32_t*)(uintptr_t)(srcS[1] + 8)) = 0;
        memcpy(ctxB + 0x70, ctxB + 0x18c, 0x28);
        Script_ParseEnumReal32_28(ctxB, (*(int32_t*)(uintptr_t)(ctxB + 0x1b4)));
        Script_CallNativeHandler_16(ctxB);
        (*(int32_t*)(uintptr_t)(ctxB + 0x720)) = (*(int32_t*)(uintptr_t)(ctxB + 0x740));
        (*(int32_t*)(uintptr_t)(ctxB + 0x730)) = (*(int32_t*)(uintptr_t)(ctxB + 0x740));
        (*(int32_t*)(uintptr_t)(ctxB + 0x724)) = 0;
        (*(int32_t*)(uintptr_t)(ctxB + 0x728)) = 0;
        (*(int32_t*)(uintptr_t)(ctxB + 0x72c)) = 0;
        (*(int32_t*)(uintptr_t)(ctxB + 0x734)) = 0;
        (*(int32_t*)(uintptr_t)(ctxB + 0x738)) = 0;
        (*(int32_t*)(uintptr_t)(ctxB + 0x73c)) = 0;
        Script_ParseEnumInt32_17(ctxB);
        CarGun_ConstructPath(ctxB);
        long double x87_r7_17 = (*(int32_t*)(uintptr_t)(ctxB + 0x78)) * (*(int32_t*)(uintptr_t)(ctxB + 0x188)) + (*(int32_t*)(uintptr_t)(ctxB + 0x74)) * (*(int32_t*)(uintptr_t)(ctxB + 0x184))
            + (*(int32_t*)(uintptr_t)(ctxB + 0x180)) * (*(int32_t*)(uintptr_t)(ctxB + 0x70));
        void* v_c = x87_r7_17;
        long double x87_r7_21 = (*(int32_t*)(uintptr_t)(ctxB + 0x84)) * (*(int32_t*)(uintptr_t)(ctxB + 0x188)) + (*(int32_t*)(uintptr_t)(ctxB + 0x80)) * (*(int32_t*)(uintptr_t)(ctxB + 0x184))
            + (*(int32_t*)(uintptr_t)(ctxB + 0x7c)) * (*(int32_t*)(uintptr_t)(ctxB + 0x180));
        float v_8_1 = x87_r7_21;
        long double x87_r7_25 = (*(int32_t*)(uintptr_t)(ctxB + 0x90)) * (*(int32_t*)(uintptr_t)(ctxB + 0x188)) + (*(int32_t*)(uintptr_t)(ctxB + 0x8c)) * (*(int32_t*)(uintptr_t)(ctxB + 0x184))
            + (*(int32_t*)(uintptr_t)(ctxB + 0x88)) * (*(int32_t*)(uintptr_t)(ctxB + 0x180));
        float v_4_1 = x87_r7_25;
        (*(int32_t*)(uintptr_t)(ctxB + 0x108)) = v_c;
        (*(int32_t*)(uintptr_t)(ctxB + 0x10c)) = v_8_1;
        (*(int32_t*)(uintptr_t)(ctxB + 0x110)) = v_4_1;
        SoundSys_InitSoundSys_17(ctxB + 0xf0);
        void* valA8 = (*(int32_t*)(uintptr_t)(ctxB + 0xe8));

        if (valA8)
        {
            float* v_8_2 = ctxB + 0x70;
            v_c = ctxB + 0x20;
            uint32_t v_4_2 = ctxB;
            int32_t* i_1 = *(valA8 + 8);

            if (*i_1)
            {
                int32_t* i = i_1;

                if (i)
                {
                    int32_t objC7 = g_afa7e0;

                    do
                    {
                        int32_t* tmpD5 = *i;
                        void* valA12;

                        if (!tmpD5)
                            valA12 = nullptr;
                        else
                        {
                            int32_t valA9 = *tmpD5;
                            int32_t valA10 = -(valA9);
                            valA12 = (valA10 - valA10) & tmpD5;
                        }

                        *((objC7 << 2) + &g_afa6e0) = valA12;
                        g_afa7e0 = objC7 + 1;
                        uint32_t valA14 = MagicObj_GetEventId();
                        int32_t objC9 = 0;
                        objC9 = i[7];
                        int32_t valA18 = *(((valA14 * 0x180 + objC9) << 2) + &g_a96ae0);

                        if (valA18)
                            valA18(i, &v_c);

                        objC7 = g_afa7e0 - 1;
                        g_afa7e0 = objC7;
                        i = *((objC7 << 2) + &g_afa6e0);
                    } while (i);
                }
            }
        }

        srcS = a2;
    }

    int32_t result = *srcS;

    if (result <= 0)
        return result;

    VehicleChild_Dispatch(ctxB);
    return Vehicle_DeployGear_2(ctxB);
}
