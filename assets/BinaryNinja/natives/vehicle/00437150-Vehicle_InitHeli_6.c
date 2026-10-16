#include "Vehicle_InitHeli_6.h"
int32_t Vehicle_InitHeli_6(void* a1)

{
    int32_t result_1;
    int32_t v_448[0x8];
    int32_t v_428[0x8];
    Script_ParseEnumInt32_21(&v_428, &v_448, &result_1);
    int32_t* i = QTask_DeleteTask_2(a1, SoundSys_SetMasterVolume_13());
    int32_t ctxB = 0;

    for (; i; i = QTask_TriggerEvent_2(i, SoundSys_SetMasterVolume_13()))
    {
        if (i != *(a1 + 0x38))
        {
            long double x87_r7_2 = i[0x32] - 0.0199999996f;
            long double f0_1 = 0f;
            x87_r7_2 - f0_1;

            if (*(&((x87_r7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                x87_r7_2 = 0f;

            i[0x32] = x87_r7_2;
        }
    }

    int32_t result = result_1;
    int32_t tmpD = 0;
    int32_t v_450 = 0;

    if (result > 0)
    {
        while (true)
        {
            int32_t srcS1 = v_448[tmpD];

            if (srcS1)
            {
                int32_t v_45c_1 = 0;
                void v_388;
                __builtin_memset(&v_388, 0, 0x80);
                void v_408;
                __builtin_memset(&v_408, 0, 0x80);
                void v_300;
                int32_t* valA4 = &v_300;
                int32_t i_3 = 0x20;
                int32_t i_1;

                do
                {
                    valA4[-2] = 0;
                    valA4[-1] = 0;
                    *valA4 = 0;
                    valA4[1] = 0;
                    valA4[2] = 0;
                    valA4[3] = 0;
                    valA4 = &valA4[6];
                    i_1 = i_3;
                    i_3 -= 1;
                } while (i_1 != 1);

                if (srcS1 > 0)
                {
                    void v_308;
                    void* v_458_1 = &v_308;
                    int32_t* tmpD2 = v_428[tmpD] + 0x4c;
                    int32_t v_454_1 = srcS1;
                    bool cond_2_1;

                    do
                    {
                        if (tmpD2[3])
                        {
                            int32_t i_2 = *tmpD2;

                            if (i_2)
                            {
                                int32_t valA6 = 0;

                                if (ctxB > 0)
                                {
                                    int32_t* objC1 = &v_388;

                                    while (*objC1 != i_2)
                                    {
                                        valA6 += 1;
                                        objC1 = &objC1[1];

                                        if (valA6 >= v_45c_1)
                                            break;
                                    }
                                }

                                if (valA6 != v_45c_1)
                                {
                                    int32_t valA8 = valA6 * 0x18;
                                    int32_t saved_dst;
                                    *(&saved_dst + valA8 + 0x160) =
                                        *(tmpD2 - 0x44) + *(&v_308 + valA8);
                                    *(&saved_dst + valA8 + 0x168) =
                                        *(tmpD2 - 0x3c) + *(&saved_dst + valA8 + 0x168);
                                    *(&saved_dst + valA8 + 0x170) =
                                        *(tmpD2 - 0x34) + *(&saved_dst + valA8 + 0x170);
                                    *(&saved_dst + valA8 + 0x160) =
                                        *(&saved_dst + valA8 + 0x160) * 0.5;
                                    *(&saved_dst + valA8 + 0x168) =
                                        *(&saved_dst + valA8 + 0x168) * 0.5;
                                    *(&saved_dst + valA8 + 0x170) =
                                        *(&saved_dst + valA8 + 0x170) * 0.5;
                                    *(&v_408 + ctxB) += 1;
                                }
                                else
                                {
                                    *(&v_388 + ctxB) = i_2;
                                    memcpy(v_458_1, &tmpD2[-0x11], 0x18);
                                    *(&v_408 + ctxB) += 1;
                                    v_45c_1 += 1;
                                    v_458_1 += 0x18;
                                    ctxB += 4;
                                }
                            }
                        }

                        tmpD2 = &tmpD2[0x1c];
                        cond_2_1 = v_454_1 != 1;
                        v_454_1 -= 1;
                    } while (cond_2_1);

                    if (v_45c_1 > 0)
                    {
                        void* v_458_2 = &v_308;
                        int32_t* v_45c_2 = &v_388;
                        int32_t v_454_2 = v_45c_1;

                        while (true)
                        {
                            void* ctxB1 = *v_45c_2;
                            struct status_msg* dstD3 = QTask_DeleteTask_2(a1, SoundSys_SetMasterVolume_13());
                            long double x87_r7_17;

                            if (!dstD3)
                            {
                            label_4373cd:
                                dstD3 = SoundSys_SetMasterVolume_7(a1, *v_45c_2 + 0x134);

                                if (dstD3)
                                {
                                    SoundSys_StopSoundSample_7(dstD3, v_458_2);
                                    x87_r7_17 = dstD3->sprite[0x14] + 0.120000005f;
                                    dstD3->sprite[0x14] = x87_r7_17;
                                    long double x87_r6_1 = 0f;
                                    x87_r6_1 - x87_r7_17;

                                    if (*(&((x87_r6_1 < x87_r7_17 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_1, x87_r7_17) ? 1 : 0) << 0xa
                                        | (x87_r6_1 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                                    {
                                        long double x87_r6_4 = 1f;
                                        x87_r6_4 - x87_r7_17;

                                        if (!(*(&((x87_r6_4 < x87_r7_17 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r6_4, x87_r7_17) ? 1 : 0) << 0xa
                                                | (x87_r6_4 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1))
                                            dstD3->sprite[0x14] = x87_r7_17;
                                        else
                                            dstD3->sprite[0x14] = 1f;
                                    }
                                    else
                                        dstD3->sprite[0x14] = 0f;
                                }
                            }
                            else
                            {
                                while (true)
                                {
                                    char* srcS7 = &dstD3->sprite[0x4b];
                                    char* valA16 = ctxB1 + 0x134;
                                    int32_t valA18;

                                    while (true)
                                    {
                                        char tmpD3 = *valA16;
                                        char f4_1 = ADJ(srcS7)->sprite[0x4b];
                                        bool c_1 = tmpD3 < f4_1;

                                        if (tmpD3 == f4_1)
                                        {
                                            if (!tmpD3)
                                            {
                                                valA18 = 0;
                                                break;
                                            }

                                            tmpD3 = valA16[1];
                                            char f7_1 = ADJ(srcS7)->sprite[0x4c];
                                            c_1 = tmpD3 < f7_1;

                                            if (tmpD3 == f7_1)
                                            {
                                                valA16 = &valA16[2];
                                                srcS7 = &srcS7[2];

                                                if (tmpD3)
                                                    continue;

                                                valA18 = 0;
                                                break;
                                            }
                                        }

                                        valA18 = valA16 - valA16 + 1;
                                        break;
                                    }

                                    if (!valA18)
                                        break;

                                    dstD3 = QTask_TriggerEvent_2(dstD3, SoundSys_SetMasterVolume_13());

                                    if (!dstD3)
                                        goto label_4373cd;
                                }

                                SoundSys_StopSoundSample_7(dstD3, v_458_2);
                                x87_r7_17 = dstD3->sprite[0x14] + 0.120000005f;
                                dstD3->sprite[0x14] = x87_r7_17;
                                long double x87_r6_2 = 0f;
                                x87_r6_2 - x87_r7_17;

                                if (*(&((x87_r6_2 < x87_r7_17 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_2, x87_r7_17) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                                {
                                    long double x87_r6_3 = 1f;
                                    x87_r6_3 - x87_r7_17;

                                    if (!(*(&((x87_r6_3 < x87_r7_17 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_3, x87_r7_17) ? 1 : 0) << 0xa
                                            | (x87_r6_3 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                        dstD3->sprite[0x14] = x87_r7_17;
                                    else
                                        dstD3->sprite[0x14] = 1f;
                                }
                                else
                                    dstD3->sprite[0x14] = 0f;
                            }
                            bool cond_3_1 = v_454_2 != 1;
                            v_45c_2 = &v_45c_2[1];
                            v_458_2 += 0x18;
                            v_454_2 -= 1;

                            if (!cond_3_1)
                                break;
                        }
                    }

                    tmpD = v_450;
                    ctxB = 0;
                }
            }

            result = result_1;
            tmpD += 1;
            v_450 = tmpD;

            if (tmpD >= result)
                break;
        }
    }

    return result;
}
