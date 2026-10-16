#include "ConditionalContainer_Tick.h"
int32_t* ConditionalContainer_Tick(int32_t* a1)

{
    int32_t* dstD = a1;
    int32_t flagP = dstD[0x44];
    int32_t* valA = Script_FormatString_6(&dstD[8]);
    int64_t v_c;

    if (valA)
    {
        valA = Script_SpawnNewTask_7(&dstD[8], dstD);
        long double fpu0;
        v_c = fpu0;
        valA = v_c;
        dstD[0x44] = valA;
    }

    valA = dstD[0x44];

    if (valA || flagP)
    {
        valA = *(dstD + 0x112);

        if (!valA)
        {
            v_c = 0;
            valA = Level_StartMission_4();
            int32_t* i = dstD[2];
            *(&v_c + 4) = valA;
            int32_t v_4_1 = 2;

            if (*i && i)
            {
                int32_t objC7 = g_afa7e0;

                do
                {
                    int32_t* tmpD3 = *i;
                    void* valA10;

                    if (!tmpD3)
                        valA10 = nullptr;
                    else
                    {
                        int32_t valA7 = *tmpD3;
                        int32_t valA8 = -(valA7);
                        valA10 = (valA8 - valA8) & tmpD3;
                    }

                    *((objC7 << 2) + &g_afa6e0) = valA10;
                    g_afa7e0 = objC7 + 1;
                    uint32_t valA12 = DynObj_UpdateDynTree_12();
                    int32_t valA13 = 0;
                    valA13 = i[7];
                    valA = *(((valA12 * 0x180 + valA13) << 2) + &g_a96ae0);

                    if (valA)
                        valA = valA(i, &v_c);

                    objC7 = g_afa7e0 - 1;
                    g_afa7e0 = objC7;
                    i = *((objC7 << 2) + &g_afa6e0);
                } while (i);
            }

            *(dstD + 0x112) = 1;
        }

        int32_t* i_1 = dstD[2];

        if (*i_1 && i_1)
        {
            int32_t tmpD7 = g_afa7e0;

            do
            {
                int32_t* srcS1 = *i_1;
                void* valA17;

                if (!srcS1)
                    valA17 = nullptr;
                else
                {
                    int32_t valA14 = *srcS1;
                    int32_t valA15 = -(valA14);
                    valA17 = (valA15 - valA15) & srcS1;
                }

                *((tmpD7 << 2) + &g_afa6e0) = valA17;
                int32_t tmpD8 = tmpD7 + 1;
                int32_t valA18 = 0;
                g_afa7e0 = tmpD8;
                valA18 = i_1[7];
                valA = *((valA18 << 2) + &g_a970e0);

                if (valA)
                {
                    valA = valA(i_1);
                    tmpD8 = g_afa7e0;
                }

                i_1 = *((tmpD8 << 2) + &g_afa6dc);
                tmpD7 = tmpD8 - 1;
                g_afa7e0 = tmpD7;
            } while (i_1);
        }
    }
    else
    {
        valA = *(dstD + 0x112);

        if (valA)
        {
            valA = Level_StartMission_4();
            int32_t* i_2 = dstD[2];
            a1 = valA;

            if (*i_2 && i_2)
            {
                int32_t objC1 = g_afa7e0;

                do
                {
                    int32_t* tmpD1 = *i_2;
                    void* valA4;

                    if (!tmpD1)
                        valA4 = nullptr;
                    else
                    {
                        int32_t valA1 = *tmpD1;
                        int32_t valA2 = -(valA1);
                        valA4 = (valA2 - valA2) & tmpD1;
                    }

                    *((objC1 << 2) + &g_afa6e0) = valA4;
                    g_afa7e0 = objC1 + 1;
                    uint32_t valA6 = DynObj_LinkDynamicCube_12();
                    int32_t tmpD2 = 0;
                    tmpD2 = i_2[7];
                    valA = *(((valA6 * 0x180 + tmpD2) << 2) + &g_a96ae0);

                    if (valA)
                        valA = valA(i_2, &a1);

                    objC1 = g_afa7e0 - 1;
                    g_afa7e0 = objC1;
                    i_2 = *((objC1 << 2) + &g_afa6e0);
                } while (i_2);
            }

            *(dstD + 0x112) = 0;
        }
    }

    valA = dstD[0x44];

    if (!valA)
    {
    label_487706:

        if (flagP)
        {
            valA = Script_FormatString_6(&dstD[0x30]);

            if (valA)
            {
                valA = Script_SpawnNewTask_7(&dstD[0x30], dstD);
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
            }
        }
    }
    else if (!flagP)
    {
        valA = Script_FormatString_6(&dstD[0x1c]);

        if (valA)
        {
            int32_t valA19 = Script_SpawnNewTask_7(&dstD[0x1c], dstD);
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
            return valA19;
        }
    }
    else if (!valA)
        goto label_487706;

    return valA;
}
