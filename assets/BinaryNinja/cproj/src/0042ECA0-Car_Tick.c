#include "gi_platform.h"
#include "0042ECA0-Car_Tick.h"
void* Car_Tick(int32_t a1)

{
    float srcS = a1;
    void* valA = (*(int32_t*)(uintptr_t)(srcS + 0x1b4));
    void* objC = (*(int32_t*)(uintptr_t)(valA + 0x2d4));
    (*(int32_t*)(uintptr_t)(srcS + 0x720)) = (1.0f - *(objC + 0x20)) * (*(int32_t*)(uintptr_t)(srcS + 0x730)) + *(objC + 0x20) * (*(int32_t*)(uintptr_t)(srcS + 0x720));
    void* valA1 = (*(int32_t*)(uintptr_t)(valA + 0x2d4));
    (*(int32_t*)(uintptr_t)(srcS + 0x72c)) = (1.0f - *(valA1 + 0x18)) * (*(int32_t*)(uintptr_t)(srcS + 0x73c)) + (*(int32_t*)(uintptr_t)(srcS + 0x72c)) * *(valA1 + 0x18);
    long double x87_r7_8 = (*(int32_t*)(uintptr_t)(srcS + 0x730));
    long double f0 = 0.0f;
    x87_r7_8 - f0;

    if (*(&((x87_r7_8 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f0) ? 1 : 0) << 0xa
        | (x87_r7_8 == f0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_9 = (*(int32_t*)(uintptr_t)(srcS + 0x720));
        long double f1_1 = 0.0f;
        x87_r7_9 - f1_1;
        long double x87_r7_10 = (*(int32_t*)(uintptr_t)(srcS + 0x720));

        if (*(&((x87_r7_9 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_10 = -(x87_r7_10);

        long double f2_1 = 0.00999999978.0f;
        x87_r7_10 - f2_1;

        if (*(&((x87_r7_10 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
            (*(int32_t*)(uintptr_t)(srcS + 0x720)) = 0;
    }

    Car_WheelSweep(srcS);
    float v_c;

    if (!Script_ParseEnumReal32_29(srcS))
    {
        void* valA4 = (*(int32_t*)(uintptr_t)(srcS + 0x1b4));
        float v_10_1 = srcS;

        if (*(*(valA4 + 0x2d4) + 0x28))
        {
            v_c = (*(int32_t*)(uintptr_t)(srcS + 0x108));
            float ctxB3 = (*(int32_t*)(uintptr_t)(srcS + 0x10c));
            v_c = -(v_c);
            float v_8_2 = -(ctxB3);
            float v_4_2 = -((*(int32_t*)(uintptr_t)(srcS + 0x110)));
            void* valA6 = *(valA4 + 0x2d4) + 0x2c;
            SoundSys_SetMasterVolume_16(valA6, *(valA6 - 4), 0.000326999987.0f, srcS + 0xf0, srcS + 0x70, &v_c);
        }

        char v_14;
        Script_FormatString_28(srcS, 44.6008873.0f, 0.970000029.0f, 0.899999976.0f, Level_StartMission_4(), 0xc,
            &v_14);
    }

    void* valA8 = (*(int32_t*)(uintptr_t)(srcS + 0x74c));

    if (valA8)
    {
        a1 = 1;
        *(valA8 + 4) = (*(int32_t*)(uintptr_t)(srcS + 0x720));
        long double x87_r7_17 = (*(int32_t*)(uintptr_t)(srcS + 0x720));
        long double f3_1 = 0.00999999978.0f;
        x87_r7_17 - f3_1;

        if (*(&((x87_r7_17 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            a1 = 0;

        (*(int32_t*)(uintptr_t)(*(srcS + 0x74c) + 8)) = a1;
        long double x87_r7_20 = (*(int32_t*)(uintptr_t)(srcS + 0xf8)) * 0.00100000005.0f;
        long double f4_1 = 1.0f;
        x87_r7_20 - f4_1;

        if (!(*(&((x87_r7_20 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_20 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            x87_r7_20 = 1.0f;

        (*(int32_t*)(uintptr_t)(*(srcS + 0x74c) + 0xc)) = x87_r7_20;
    }

    void* result = (*(int32_t*)(uintptr_t)(srcS + 0xe8));

    if (result)
    {
        v_c = srcS + 0x20;
        int32_t v_8_3 = srcS + 0x70;
        float v_4_3 = srcS;
        int32_t* i = *(result + 8);

        if (*i && i)
        {
            int32_t objC5 = g_afa7e0;

            do
            {
                int32_t* tmpD7 = *i;
                void* valA14;

                if (!tmpD7)
                    valA14 = nullptr;
                else
                {
                    int32_t valA11 = *tmpD7;
                    int32_t valA12 = -(valA11);
                    valA14 = (valA12 - valA12) & tmpD7;
                }

                *((objC5 << 2) + &g_afa6e0) = valA14;
                g_afa7e0 = objC5 + 1;
                uint32_t valA16 = MagicObj_GetEventId();
                int32_t objC7 = 0;
                objC7 = i[7];
                result = *(((valA16 * 0x180 + objC7) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &v_c);

                objC5 = g_afa7e0 - 1;
                g_afa7e0 = objC5;
                i = *((objC5 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
