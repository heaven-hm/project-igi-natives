#include "Menu_UpdateLanguage_21.h"
int32_t* Menu_UpdateLanguage_21(void* a1, double* a2, int32_t a3)

{
    int32_t* result = QTask_DeleteTask_2(a1, g_57bcb8);
    int32_t* i = result;

    if (i)
    {
        double* v_84_1 = &a2[3];

        do
        {
            long double x87_r7_2 = i[0x1dc] * 4096f;
            memcpy(&i[0x1b0], &i[8], 0x18);
            float v_68_1 = x87_r7_2;
            float v_64_1 = i[0x1dd] * 4096f;
            memcpy(&i[0x1a5], &i[0x1c], 0x28);
            double v_48;
            double v_40;
            double v_38;
            double* dstD4;

            if (Sys_ResolveSymbol_11(a2, v_84_1))
            {
                i[0x1c] = 0x3f800000;
                i[0x20] = 0x3f800000;
                i[0x24] = 0x3f800000;
                i[0x1d] = 0;
                i[0x1e] = 0;
                i[0x1f] = 0;
                i[0x21] = 0;
                i[0x22] = 0;
                i[0x23] = 0;
                i[0x25] = 0;
                memcpy(&v_48, a2, 0x18);
                dstD4 = v_84_1;
            }
            else
            {
                float v_78 = *v_84_1 - *a2;
                float v_74_1 = v_84_1[1] - v_84_1[-2];
                float v_70_1 = v_84_1[2] - v_84_1[-1];
                Sys_ResolveSymbol_12(&i[0x1c], &v_78);
                v_78 = i[0x22];
                float tmpD5 = i[0x23];
                float objC3 = i[0x24];
                v_78 = -(v_78);
                float v_74_3 = -(tmpD5);
                float v_70_3 = -(objC3);
                i[0x22] = i[0x1c];
                int32_t tmpD7 = i[0x1e];
                i[0x23] = i[0x1d];
                i[0x24] = tmpD7;
                int32_t v_28_1 = i[0x22];
                int32_t valA6 = i[0x23];
                i[0x1c] = v_78;
                int32_t v_1c_1 = valA6;
                int32_t valA7 = i[0x24];
                i[0x1d] = v_74_3;
                int32_t v_10_1 = valA7;
                i[0x1e] = v_70_3;
                int32_t tmpD11 = i[0x1f];
                float v_30 = i[0x1c];
                int32_t v_2c_1 = tmpD11;
                int32_t v_24_1 = i[0x1d];
                int32_t v_20_1 = i[0x20];
                int32_t v_18_1 = i[0x1e];
                int32_t v_14_1 = i[0x21];
                int32_t v_c_1 = i[0x25];
                memcpy(&i[0x1c], &v_30, 0x28);
                dstD4 = v_84_1;
                v_48 = (*dstD4 - *a2) * i[0x1d2] + *a2;
                v_40 = (dstD4[1] - dstD4[-2]) * i[0x1d2] + dstD4[-2];
                v_38 = (dstD4[2] - dstD4[-1]) * i[0x1d2] + dstD4[-1];
            }

            long double x87_r7_31 = v_64_1 * i[0x1e] + v_68_1 * i[0x1d];
            float v_5c_1 = v_68_1 * i[0x20] + v_64_1 * i[0x21];
            float v_58 = v_64_1 * i[0x24] + v_68_1 * i[0x23];
            v_48 = x87_r7_31 + v_48;
            v_40 = v_5c_1 + v_40;
            v_38 = v_58 + v_38;
            long double x87_r7_37 = i[0x27];
            long double x87_r6_9 = i[0x28];
            x87_r6_9 - x87_r7_37;
            long double x87_r7_38;

            if (!(*(&((x87_r6_9 < x87_r7_37 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_9, x87_r7_37) ? 1 : 0) << 0xa
                    | (x87_r6_9 == x87_r7_37 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_38 = i[0x28];
            else
                x87_r7_38 = i[0x27];

            long double x87_r6_10 = i[0x26];
            x87_r6_10 - x87_r7_38;
            long double x87_r7_40;

            if (*(&((x87_r6_10 < x87_r7_38 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_10, x87_r7_38) ? 1 : 0) << 0xa
                | (x87_r6_10 == x87_r7_38 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r7_41 = i[0x27];
                long double x87_r6_11 = i[0x28];
                x87_r6_11 - x87_r7_41;

                if (!(*(&((x87_r6_11 < x87_r7_41 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_11, x87_r7_41) ? 1 : 0) << 0xa
                        | (x87_r6_11 == x87_r7_41 ? 1 : 0) << 0xe) + 1) & 1))
                    x87_r7_40 = i[0x28];
                else
                    x87_r7_40 = i[0x27];
            }
            else
                x87_r7_40 = i[0x26];

            float v_94_4 = Render_ComputeNormals(i[0x1b]) * x87_r7_40;
            void* tmpD15 = WorldObject_CommitTransform(Level_StartMission_4(), i, &v_48, v_94_4);
            void* v_80;
            int32_t* j;

            if (!a3)
            {
                j = i[2];
                v_80 = &i[8];
                void* v_7c_1 = &i[0x1c];
            }

            int32_t valA15;

            if (a3 || !*j || !j)
                valA15 = g_afa7e0;
            else
            {
                valA15 = g_afa7e0;

                do
                {
                    int32_t* tmpD16 = *j;
                    void* objC13;

                    if (!tmpD16)
                        objC13 = nullptr;
                    else
                    {
                        int32_t objC10 = *tmpD16;
                        int32_t objC11 = -(objC10);
                        objC13 = (objC11 - objC11) & tmpD16;
                    }

                    *((valA15 << 2) + &g_afa6e0) = objC13;
                    g_afa7e0 = valA15 + 1;
                    uint32_t valA18 = DynObj_CreateMagicObject_6();
                    tmpD15 = nullptr;
                    tmpD15 = j[7];
                    int32_t valA19 = *(((valA18 * 0x180 + tmpD15) << 2) + &g_a96ae0);

                    if (valA19)
                        tmpD15 = valA19(j, &v_80);

                    valA15 = g_afa7e0 - 1;
                    g_afa7e0 = valA15;
                    j = *((valA15 << 2) + &g_afa6e0);
                } while (j);
            }

            void* objC17 = i[0x3a];

            if (objC17)
            {
                int32_t* i_1 = i;
                void* v_54 = &i[8];
                tmpD15 = &i[0x1c];
                void* v_50_1 = tmpD15;
                int32_t* j_1 = *(objC17 + 8);

                if (*j_1 && j_1)
                {
                    do
                    {
                        int32_t* tmpD18 = *j_1;
                        void* objC21;

                        if (!tmpD18)
                            objC21 = nullptr;
                        else
                        {
                            int32_t objC18 = *tmpD18;
                            int32_t objC19 = -(objC18);
                            objC21 = (objC19 - objC19) & tmpD18;
                        }

                        *((valA15 << 2) + &g_afa6e0) = objC21;
                        g_afa7e0 = valA15 + 1;
                        uint32_t valA23 = MagicObj_GetEventId();
                        int32_t valA24 = 0;
                        valA24 = j_1[7];
                        tmpD15 = valA23 * 0x180 + valA24;
                        int32_t valA25 = *((tmpD15 << 2) + &g_a96ae0);

                        if (valA25)
                            tmpD15 = valA25(j_1, &v_54);

                        valA15 = g_afa7e0 - 1;
                        g_afa7e0 = valA15;
                        j_1 = *((valA15 << 2) + &g_afa6e0);
                    } while (j_1);
                }
            }

            tmpD15 = g_57bcb8;
            result = QTask_TriggerEvent_2(i, tmpD15);
            i = result;
            a2 = &a2[3];
            v_84_1 = &dstD4[3];
        } while (i);
    }

    return result;
}
