#include "SoundManager_LoadParameters.h"
int32_t* SoundManager_LoadParameters(char* a1, char* a2)

{
    char* flagP = a1;
    int32_t* valA;
    valA = flagP[0x20];
    int32_t* dstD = *(flagP + 0x40);

    if (valA)
    {
        if (!a2 || !*a2)
        {
            int32_t* i = *(flagP + 8);

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
                    uint32_t valA8 = Script_ParseEnumReal32_8();
                    int32_t objC3 = 0;
                    objC3 = i[7];
                    int32_t valA12 = *(((valA8 * 0x180 + objC3) << 2) + &g_a96ae0);

                    if (valA12)
                        valA12(i, 0);

                    objC1 = g_afa7e0 - 1;
                    g_afa7e0 = objC1;
                    i = *((objC1 << 2) + &g_afa6e0);
                } while (i);
            }
        }

        if (!dstD)
        {
        label_51c25c:
            valA = SoundSys_SetMasterVolume_7(flagP, &flagP[0x20]);

            if (valA)
            {
                valA = QTask_LinkEventHandler_2(valA);
                *(flagP + 0x40) = valA;
            }
        }
        else
        {
            void* srcS1 = *dstD;

            if (!srcS1)
            {
            label_51c23b:
                void* valA19 = *dstD;

                if (valA19)
                {
                    SoundSys_SetFrequency_7(valA19);
                    Qtask_UpdateList(dstD);
                    *(flagP + 0x40) = 0;
                }

                goto label_51c25c;
            }

            a1 = nullptr;
            uint32_t valA14 = SoundSys_LoadSoundDef_5();
            int32_t valA15 = 0;
            valA15 = *(srcS1 + 0x1c);
            int32_t valA16 = *(((valA14 * 0x180 + valA15) << 2) + &g_a96ae0);

            if (valA16)
                valA16(srcS1, &a1);

            char* srcS2 = a1;

            if (!srcS2)
                goto label_51c23b;

            char* valA17 = &flagP[0x20];

            while (true)
            {
                char tmpD5 = *valA17;
                char f1_1 = *srcS2;
                bool c_2 = tmpD5 < f1_1;

                if (tmpD5 == f1_1)
                {
                    if (!tmpD5)
                    {
                        valA = nullptr;
                        break;
                    }

                    tmpD5 = valA17[1];
                    char f4_1 = srcS2[1];
                    c_2 = tmpD5 < f4_1;

                    if (tmpD5 == f4_1)
                    {
                        valA17 = &valA17[2];
                        srcS2 = &srcS2[2];

                        if (tmpD5)
                            continue;

                        valA = nullptr;
                        break;
                    }
                }

                valA = valA17 - valA17 + 1;
                break;
            }

            if (valA)
                goto label_51c23b;
        }
    }
    else if (dstD)
    {
        valA = *dstD;

        if (valA)
        {
            SoundSys_SetFrequency_7(valA);
            int32_t valA1 = Qtask_UpdateList(dstD);
            *(flagP + 0x40) = 0;
            return valA1;
        }
    }

    return valA;
}
