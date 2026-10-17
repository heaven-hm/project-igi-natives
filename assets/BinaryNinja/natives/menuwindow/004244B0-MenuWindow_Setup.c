// Original IGI.EXE function: MenuWindow_Setup (VA 0x004244B0; static CFG gate PASS, CFG score 1.000).
#include "MenuWindow_Setup.h"
int32_t MenuWindow_Setup(void* a1)

{
    void* dstD = a1;
    char v_18 = 0;
    char v_17 = 0;
    void* v_4 = dstD;
    int32_t result = *(dstD + 0x38);

    if (result)
    {
        int32_t* valA = *(dstD + 8);
        int32_t srcS1 = *valA;
        int32_t srcS2 = -(srcS1);
        int32_t ctxB1 = 0;
        int32_t* i = (srcS2 - srcS2) & valA;
        void* objC1 = nullptr;
        int32_t flagP1 = 0;
        a1 = nullptr;

        if (i)
        {
            do
            {
                int32_t valA1 = 0;
                int32_t objC2 = 0;
                valA1 = g_53b921;
                char v_24 = 0;
                objC2 = i[7];
                int32_t valA5 = *(((valA1 * 0x180 + objC2) << 2) + &g_a96ae0);

                if (valA5)
                {
                    valA5(i, &v_24);

                    if (v_24)
                    {
                        int32_t v_20;
                        ctxB1 += v_20;
                        int32_t v_1c;
                        a1 += v_1c;
                        flagP1 += 1;
                    }
                }

                i = *i;

                if (!i)
                    break;

                if (!*i)
                    break;
            } while (i);

            objC1 = a1;
        }

        result = *(dstD + 0x38) - 1;

        switch (result)
        {
            case 0:
            {
                result = *(dstD + 0x34);
                int32_t result_4 = result;
                int32_t v_10_1 = *(dstD + 0x24) + result;
                char v_17_1 = 1;
                break;
            }
            case 1:
            {
                char v_17_2 = 1;
                result = (*(dstD + 0x2c) - objC1) / (flagP1 + 1);
                int32_t result_5 = result;
                int32_t v_10_2 = *(dstD + 0x24) + result;
                break;
            }
            case 2:
            {
                int32_t valA13 = *(dstD + 0x34);
                int32_t v_8_1 = valA13;
                result = valA13 * flagP1;
                char v_17_3 = 1;
                void* v_10_3 = *(dstD + 0x2c) - result + *(dstD + 0x24) - objC1;
                break;
            }
            case 3:
            {
                result = *(dstD + 0x30);
                int32_t result_1 = result;
                int32_t v_14_1 = *(dstD + 0x20) + result;
                v_18 = 1;
                break;
            }
            case 4:
            {
                result = (*(dstD + 0x28) - ctxB1) / (flagP1 + 1);
                int32_t result_2 = result;
                int32_t v_14_2 = *(dstD + 0x20) + result;
                v_18 = 1;
                break;
            }
            case 5:
            {
                int32_t valA22 = *(dstD + 0x30);
                int32_t v_c_1 = valA22;
                result = valA22 * flagP1;
                int32_t v_14_3 = *(dstD + 0x28) - result + *(dstD + 0x20) - ctxB1;
                v_18 = 1;
                break;
            }
            case 6:
            {
                int32_t valA14 = *(dstD + 0x34);
                int32_t v_10_4 = *(dstD + 0x24) + valA14;
                int32_t objC9 = flagP1 - 1;

                if (objC9 < 1)
                    objC9 = 1;

                char v_17_4 = 1;
                result = (*(dstD + 0x2c) - valA14 * 2 - a1) / objC9;
                int32_t result_6 = result;
                break;
            }
            case 7:
            {
                int32_t valA23 = *(dstD + 0x30);
                int32_t objC16 = flagP1 - 1;
                int32_t v_14_4 = *(dstD + 0x20) + valA23;

                if (objC16 < 1)
                    objC16 = 1;

                result = (*(dstD + 0x28) - valA23 * 2 - ctxB1) / objC16;
                int32_t result_3 = result;
                v_18 = 1;
                break;
            }
        }
    }

    int32_t* i_1 = *(dstD + 8);
    int32_t objC17;

    if (!*i_1 || !i_1)
        objC17 = g_afa7e0;
    else
    {
        objC17 = g_afa7e0;

        do
        {
            int32_t* srcS5 = *i_1;
            void* valA32;

            if (!srcS5)
                valA32 = nullptr;
            else
            {
                int32_t valA29 = *srcS5;
                int32_t valA30 = -(valA29);
                valA32 = (valA30 - valA30) & srcS5;
            }

            *((objC17 << 2) + &g_afa6e0) = valA32;
            uint32_t valA34 = *g_53b920;
            int32_t objC18 = objC17 + 1;
            int32_t srcS6 = 0;
            g_afa7e0 = objC18;
            srcS6 = i_1[7];
            result = *(((valA34 * 0x180 + srcS6) << 2) + &g_a96ae0);

            if (result)
            {
                result = result(i_1, &v_18);
                objC18 = g_afa7e0;
            }

            i_1 = *((objC18 << 2) + &g_afa6dc);
            objC17 = objC18 - 1;
            g_afa7e0 = objC17;
        } while (i_1);
    }

    int32_t* i_3 = *(dstD + 8);

    if (*i_3)
    {
        int32_t* i_2 = i_3;

        if (i_2)
        {
            int32_t dstD1 = g_53b910;

            do
            {
                int32_t* srcS7 = *i_2;
                void* valA41;

                if (!srcS7)
                    valA41 = nullptr;
                else
                {
                    int32_t valA38 = *srcS7;
                    int32_t valA39 = -(valA38);
                    valA41 = (valA39 - valA39) & srcS7;
                }

                *((objC17 << 2) + &g_afa6e0) = valA41;
                int32_t objC19 = objC17 + 1;
                int32_t valA42 = 0;
                g_afa7e0 = objC19;
                valA42 = i_2[7];
                result = *(((valA42 + dstD1 * 0x180) << 2) + &g_a96ae0);

                if (result)
                {
                    result = result(i_2);
                    objC19 = g_afa7e0;
                    dstD1 = g_53b910;
                }

                i_2 = *((objC19 << 2) + &g_afa6dc);
                objC17 = objC19 - 1;
                g_afa7e0 = objC17;
            } while (i_2);
        }
    }

    return result;
}
