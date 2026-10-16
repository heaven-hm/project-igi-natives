#include "Plane_ReceiveChannels.h"
void* Plane_ReceiveChannels(float a1, int32_t* a2)

{
    int32_t* objC11 = a2;
    void* valA = objC11[1];

    if (*(valA + 0xc) != 0xbf800000)
        *(a1 + 0x730) = *(valA + 0xc);

    *(a1 + 0x734) = *objC11[1];
    *(a1 + 0x738) = *(objC11[1] + 4);
    *(a1 + 0x73c) = *(objC11[1] + 8);
    void* valA3 = objC11[1];
    int64_t v_c;

    if (*(valA3 + 0x14) != 0xbf800000)
    {
        char valA4 = *(a1 + 0x82c);
        v_c = *(valA3 + 0x14);
        *(a1 + 0x82c) = valA4 ^ v_c;
    }

    void* valA5 = objC11[1];

    if (*(valA5 + 0x18) != 0xbf800000)
    {
        char tmpD2 = *(a1 + 0x82d);
        v_c = *(valA5 + 0x18);
        *(a1 + 0x82d) = tmpD2 ^ v_c;
    }

    long double x87_r7_7 = *(objC11[1] + 0x1c);
    long double f0 = -1f;
    x87_r7_7 - f0;
    char valA8;

    valA8 = *(&((x87_r7_7 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f0) ? 1 : 0) << 0xa
        | (x87_r7_7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40 ? 0 : 1;

    *(a1 + 0x744) = valA8;
    long double x87_r7_8 = *(objC11[1] + 0x20);
    long double f1 = -1f;
    x87_r7_8 - f1;
    char valA11;

    valA11 = *(&((x87_r7_8 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f1) ? 1 : 0) << 0xa
        | (x87_r7_8 == f1 ? 1 : 0) << 0xe) + 1) & 0x40 ? 0 : 1;

    *(a1 + 0x82e) = valA11;
    void* valA12 = objC11[1];

    if (*(valA12 + 0x24) != 0xbf800000)
    {
        char valA13 = *(a1 + 0x82f);
        v_c = *(valA12 + 0x24);
        *(a1 + 0x82f) = valA13 ^ v_c;
    }

    if (!*objC11)
    {
        long double x87_r7_10 = *(a1 + 0x9c);
        long double x87_r6_1 = *(a1 + 0xa0);
        x87_r6_1 - x87_r7_10;
        long double x87_r7_11;

        if (!(*(&((x87_r6_1 < x87_r7_10 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_1, x87_r7_10) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_11 = *(a1 + 0xa0);
        else
            x87_r7_11 = *(a1 + 0x9c);

        long double x87_r6_2 = *(a1 + 0x98);
        x87_r6_2 - x87_r7_11;
        long double x87_r7_13;

        if (*(&((x87_r6_2 < x87_r7_11 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_11) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_14 = *(a1 + 0x9c);
            long double x87_r6_3 = *(a1 + 0xa0);
            x87_r6_3 - x87_r7_14;

            if (!(*(&((x87_r6_3 < x87_r7_14 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_14) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_14 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_13 = *(a1 + 0xa0);
            else
                x87_r7_13 = *(a1 + 0x9c);
        }
        else
            x87_r7_13 = *(a1 + 0x98);

        float v_20_2 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_13;
        WorldObject_CommitTransform(Level_StartMission_4(), a1, a1 + 0x168, v_20_2);
        char* tmpD5 = *(a1 + 0x1b4);
        memcpy(a1 + 0x70, a1 + 0x18c, 0x28);
        Script_ParseEnumReal32_28(a1, tmpD5);
        *(a1 + 0x720) = *(a1 + 0x740);
        long double x87_r7_18 = *(a1 + 0x740);
        *(a1 + 0x734) = 0;
        *(a1 + 0x738) = 0;
        *(a1 + 0x730) = x87_r7_18;
        *(a1 + 0x724) = 0;
        *(a1 + 0x728) = 0;
        *(a1 + 0x72c) = 0;
        *(a1 + 0x73c) = 0;
        Script_ParseEnumInt32_17(a1);
        CarGun_ConstructPath(a1);
        Vehicle_UpdateRudder_3(a1);
        long double x87_r7_19 = *(a1 + 0x180);
        long double f2_1 = 0f;
        x87_r7_19 - f2_1;
        void* valA21;
        float objC4;
        int32_t* tmpD6;

        if (!(*(&((x87_r7_19 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_19 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_433a68:
            valA21 = a1 + 0xf0;
            tmpD6 = valA21 + 0x18;
            *(valA21 + 0x18) = *(a1 + 0x180);
            tmpD6[1] = *(a1 + 0x184);
            objC4 = *(a1 + 0x188);
        }
        else
        {
            long double x87_r7_20 = *(a1 + 0x184);
            long double f3_1 = 0f;
            x87_r7_20 - f3_1;

            if (!(*(&((x87_r7_20 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_20, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_20 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_433a68;

            long double x87_r7_21 = *(a1 + 0x188);
            long double f4_1 = 0f;
            x87_r7_21 - f4_1;

            if (!(*(&((x87_r7_21 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_21, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_21 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_433a68;

            valA21 = a1 + 0xf0;
            tmpD6 = valA21 + 0x18;
            long double x87_r7_24 = **(*(a1 + 0x1b4) + 0x2d4) * *(a1 + 0x720) * 30.3407402f;
            v_c = x87_r7_24 * *(a1 + 0x74);
            int32_t objC2 = v_c;
            *(&v_c + 4) = x87_r7_24 * *(a1 + 0x80);
            long double x87_r7_25 = x87_r7_24 * *(a1 + 0x8c);
            *tmpD6 = objC2;
            tmpD6[1] = *(&v_c + 4);
            objC4 = x87_r7_25;
        }

        tmpD6[2] = objC4;
        SoundSys_InitSoundSys_17(valA21);
        void* valA22 = *(a1 + 0xe8);

        if (valA22)
        {
            *(&v_c + 4) = a1 + 0x70;
            v_c = a1 + 0x20;
            float v_4_2 = a1;
            int32_t* i = *(valA22 + 8);

            if (*i && i)
            {
                int32_t objC7 = g_afa7e0;

                do
                {
                    int32_t* tmpD8 = *i;
                    void* valA26;

                    if (!tmpD8)
                        valA26 = nullptr;
                    else
                    {
                        int32_t valA23 = *tmpD8;
                        int32_t valA24 = -(valA23);
                        valA26 = (valA24 - valA24) & tmpD8;
                    }

                    *((objC7 << 2) + &g_afa6e0) = valA26;
                    g_afa7e0 = objC7 + 1;
                    uint32_t valA28 = MagicObj_GetEventId();
                    int32_t objC9 = 0;
                    objC9 = i[7];
                    int32_t valA32 = *(((valA28 * 0x180 + objC9) << 2) + &g_a96ae0);

                    if (valA32)
                        valA32(i, &v_c);

                    objC7 = g_afa7e0 - 1;
                    g_afa7e0 = objC7;
                    i = *((objC7 << 2) + &g_afa6e0);
                } while (i);
            }
        }

        objC11 = a2;
    }

    void* result = *objC11;

    if (result <= 0)
        return result;

    FUN_00433B50(a1);
    return VehicleChild_Dispatch(a1);
}
