#include "gi_platform.h"
#include "00504EF0-MenuItemTask_LoadParameters.h"
void* MenuItemTask_LoadParameters(void* a1)

{
    void* ctxB = a1;
    int32_t* i = (*(int32_t*)(uintptr_t)(ctxB + 8));

    if (*i && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
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
            uint32_t valA6 = Physics_EvaluateAreaCriteria_5();
            int32_t objC3 = 0;
            objC3 = i[7];
            int32_t valA10 = *(((valA6 * 0x180 + objC3) << 2) + &g_a96ae0);

            if (valA10)
                valA10(i, 0);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    int32_t* i_1 = (*(int32_t*)(uintptr_t)(ctxB + 8));
    (*(int32_t*)(uintptr_t)(ctxB + 0x28)) = ctxB + 0x20;
    (*(int32_t*)(uintptr_t)(ctxB + 0x24)) = 0;
    (*(int32_t*)(uintptr_t)(ctxB + 0x20)) = ctxB + 0x24;
    int32_t valA13;

    if (!*i_1 || !i_1)
        valA13 = g_afa7e0;
    else
    {
        valA13 = g_afa7e0;

        do
        {
            int32_t* srcS = *i_1;
            void* objC8;

            if (!srcS)
                objC8 = nullptr;
            else
            {
                int32_t objC5 = *srcS;
                int32_t objC6 = -(objC5);
                objC8 = (objC6 - objC6) & srcS;
            }

            *((valA13 << 2) + &g_afa6e0) = objC8;
            int32_t valA14 = valA13 + 1;
            int32_t objC9 = 0;
            g_afa7e0 = valA14;
            objC9 = i_1[7];
            int32_t objC10 = *((objC9 << 2) + &g_a970e0);

            if (objC10)
            {
                objC10(i_1);
                valA14 = g_afa7e0;
            }

            i_1 = *((valA14 << 2) + &g_afa6dc);
            valA13 = valA14 - 1;
            g_afa7e0 = valA13;
        } while (i_1);
    }

    int32_t* i_2 = (*(int32_t*)(uintptr_t)(ctxB + 8));
    void** v_28 = ctxB + 0x20;

    if (*i_2 && i_2)
    {
        do
        {
            int32_t* tmpD2 = *i_2;
            void* objC14;

            if (!tmpD2)
                objC14 = nullptr;
            else
            {
                int32_t objC11 = *tmpD2;
                int32_t objC12 = -(objC11);
                objC14 = (objC12 - objC12) & tmpD2;
            }

            *((valA13 << 2) + &g_afa6e0) = objC14;
            g_afa7e0 = valA13 + 1;
            uint32_t valA17 = EditRigidObjAttachedToBone_Action();
            int32_t valA18 = 0;
            valA18 = i_2[7];
            int32_t valA19 = *(((valA17 * 0x180 + valA18) << 2) + &g_a96ae0);

            if (valA19)
                valA19(i_2, &v_28);

            valA13 = g_afa7e0 - 1;
            g_afa7e0 = valA13;
            i_2 = *((valA13 << 2) + &g_afa6e0);
        } while (i_2);
    }

    int32_t tmpD6 = (*(int32_t*)(uintptr_t)(ctxB + 0x34));
    int32_t objC15 = (*(int32_t*)(uintptr_t)(ctxB + 0x30));
    int32_t objC16 = objC15 - (*(int32_t*)(uintptr_t)(ctxB + 0x3c));
    int32_t v_4 = ~(*(int32_t*)(uintptr_t)(ctxB + 0x40)) & tmpD6;
    int32_t valA24 = (*(int32_t*)(uintptr_t)(ctxB + 0x2c));
    int32_t valA25 = valA24 - (*(int32_t*)(uintptr_t)(ctxB + 0x38));
    void* v_1c = nullptr;
    int32_t v_8 = tmpD6;
    void* valA26;

    if (valA25 || objC16 || tmpD6 & 0x70)
    {
        valA26 = Physics_ApplyImpulse_4(ctxB);

        if (valA25 || objC16 || !valA26)
        {
            int32_t* i_7 = (*(int32_t*)(uintptr_t)(ctxB + 0x20));
            int32_t* i_3 = *i_7;
            int32_t objC29;

            if (!i_3)
                objC29 = g_afa7e0;
            else
            {
                int32_t dstD1 = objC15;
                int32_t ctxB1 = valA24;
                objC29 = g_afa7e0;

                do
                {
                    int32_t v_24_1 = i_7[2];
                    int32_t srcS2;

                    if (v_24_1 <= ctxB1)
                    {
                        int32_t v_24_2 = i_7[4] + i_7[2];
                        srcS2 = v_24_2;

                        if (v_24_2 >= ctxB1)
                            srcS2 = ctxB1;
                    }
                    else
                        srcS2 = v_24_1;

                    int32_t tmpD13 = i_7[3];

                    if (tmpD13 <= dstD1)
                    {
                        tmpD13 = i_7[5] + i_7[3];

                        if (tmpD13 >= dstD1)
                            tmpD13 = dstD1;
                    }

                    if (srcS2 == ctxB1 && tmpD13 == dstD1)
                    {
                        v_1c = *(i_7[8] + 0x38);
                        int32_t* j = *(*(i_7[8] + 0x14) + 8);

                        if (*j && j)
                        {
                            do
                            {
                                int32_t* tmpD17 = *j;
                                void* valA51;

                                if (!tmpD17)
                                    valA51 = nullptr;
                                else
                                {
                                    int32_t valA48 = *tmpD17;
                                    int32_t valA49 = -(valA48);
                                    valA51 = (valA49 - valA49) & tmpD17;
                                }

                                *((objC29 << 2) + &g_afa6e0) = valA51;
                                g_afa7e0 = objC29 + 1;
                                uint32_t valA53 = Physics_InterpolateWaypoint_5();
                                int32_t objC31 = 0;
                                objC31 = j[7];
                                int32_t valA57 = *(((valA53 * 0x180 + objC31) << 2) + &g_a96ae0);

                                if (valA57)
                                    valA57(j, &v_1c);

                                objC29 = g_afa7e0 - 1;
                                g_afa7e0 = objC29;
                                j = *((objC29 << 2) + &g_afa6e0);
                            } while (j);

                            dstD1 = objC15;
                            ctxB1 = valA24;
                        }
                    }

                    i_7 = i_3;
                    i_3 = *i_3;
                } while (i_3);

                ctxB = a1;
            }

            valA26 = v_1c;

            if (!valA26)
            {
                int32_t* i_4 = (*(int32_t*)(uintptr_t)(ctxB + 8));

                if (*i_4 && i_4)
                {
                    do
                    {
                        int32_t* tmpD18 = *i_4;
                        void* valA61;

                        if (!tmpD18)
                            valA61 = nullptr;
                        else
                        {
                            int32_t valA58 = *tmpD18;
                            int32_t valA59 = -(valA58);
                            valA61 = (valA59 - valA59) & tmpD18;
                        }

                        *((objC29 << 2) + &g_afa6e0) = valA61;
                        g_afa7e0 = objC29 + 1;
                        uint32_t valA63 = Physics_InterpolateWaypoint_5();
                        int32_t objC34 = 0;
                        objC34 = i_4[7];
                        valA26 = *(((valA63 * 0x180 + objC34) << 2) + &g_a96ae0);

                        if (valA26)
                            valA26 = valA26(i_4, &v_1c);

                        objC29 = g_afa7e0 - 1;
                        g_afa7e0 = objC29;
                        i_4 = *((objC29 << 2) + &g_afa6e0);
                    } while (i_4);
                }
            }
        }
        else
        {
            v_1c = *(valA26 + 0x38);
            int32_t* i_5 = *(*(valA26 + 0x14) + 8);

            if (*i_5 && i_5)
            {
                int32_t objC25 = g_afa7e0;
                int32_t valA46;

                do
                {
                    int32_t* tmpD10 = *i_5;
                    void* valA40;

                    if (!tmpD10)
                        valA40 = nullptr;
                    else
                    {
                        int32_t valA37 = *tmpD10;
                        int32_t valA38 = -(valA37);
                        valA40 = (valA38 - valA38) & tmpD10;
                    }

                    *((objC25 << 2) + &g_afa6e0) = valA40;
                    g_afa7e0 = objC25 + 1;
                    uint32_t valA42 = Physics_InterpolateWaypoint_5();
                    int32_t objC27 = 0;
                    objC27 = i_5[7];
                    valA46 = *(((valA42 * 0x180 + objC27) << 2) + &g_a96ae0);

                    if (valA46)
                        valA46 = valA46(i_5, &v_1c);

                    objC25 = g_afa7e0 - 1;
                    g_afa7e0 = objC25;
                    i_5 = *((objC25 << 2) + &g_afa6e0);
                } while (i_5);

                return valA46;
            }
        }
    }
    else
    {
        valA26 = Physics_ApplyImpulse_4(ctxB);

        if (valA26)
        {
            v_1c = *(valA26 + 0x38);
            int32_t* i_6 = *(*(valA26 + 0x14) + 8);

            if (*i_6 && i_6)
            {
                int32_t objC18 = g_afa7e0;
                int32_t valA36;

                do
                {
                    int32_t* tmpD8 = *i_6;
                    void* valA30;

                    if (!tmpD8)
                        valA30 = nullptr;
                    else
                    {
                        int32_t valA27 = *tmpD8;
                        int32_t valA28 = -(valA27);
                        valA30 = (valA28 - valA28) & tmpD8;
                    }

                    *((objC18 << 2) + &g_afa6e0) = valA30;
                    g_afa7e0 = objC18 + 1;
                    uint32_t valA32 = Physics_InterpolateWaypoint_5();
                    int32_t objC20 = 0;
                    objC20 = i_6[7];
                    valA36 = *(((valA32 * 0x180 + objC20) << 2) + &g_a96ae0);

                    if (valA36)
                        valA36 = valA36(i_6, &v_1c);

                    objC18 = g_afa7e0 - 1;
                    g_afa7e0 = objC18;
                    i_6 = *((objC18 << 2) + &g_afa6e0);
                } while (i_6);

                return valA36;
            }
        }
    }

    return valA26;
}
