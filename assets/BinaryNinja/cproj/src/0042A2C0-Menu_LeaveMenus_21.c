#include "gi_platform.h"
#include "0042A2C0-Menu_LeaveMenus_21.h"
char* Menu_LeaveMenus_21(void* a1, int32_t a2)

{
    int32_t* i = QTask_DeleteTask_2(a1, g_57bcb8);
    bool cond_0 = !(*(int32_t*)(uintptr_t)(a1 + 0x880));
    float v_2b8 = (*(int32_t*)(uintptr_t)(a1 + 0x770)) * 4096.0f;
    float v_2b4 = (*(int32_t*)(uintptr_t)(a1 + 0x774)) * 4096.0f;
    float v_264;

    if (cond_0)
        v_264 = -((*(int32_t*)(uintptr_t)(a1 + 0x74c)));
    else
        v_264 = (*(int32_t*)(uintptr_t)(a1 + 0x74c));

    if (i)
    {
        int32_t* srcS1 = &v_264;

        do
        {
            srcS1 = &srcS1[1];
            long double x87_r7_6 = i[0x1d3];

            if (!(*(int32_t*)(uintptr_t)(a1 + 0x880)))
                x87_r7_6 = -(x87_r7_6);

            int16_t tmpD1 = g_57bcb8;
            *srcS1 = x87_r7_6;
            i = QTask_TriggerEvent_2(i, tmpD1);
        } while (i);
    }

    int32_t* v_2e0_2 = &v_264;
    char v_2c9;
    double v_210;
    char* result = Script_ParseEnumReal32_32((*(int32_t*)(uintptr_t)(a1 + 0x77c)), nullptr, &v_210, &v_2c9, (*(int32_t*)(uintptr_t)(a1 + 0x768)),
        (*(int32_t*)(uintptr_t)(a1 + 0x778)) + 1, nullptr);
    result = v_2c9;

    if (result)
    {
        memcpy(a1 + 0x6c0, a1 + 0x20, 0x18);
        memcpy(a1 + 0x694, a1 + 0x70, 0x28);
        double v_2a4;
        double v_29c;
        double v_1f8;
        long double x87_r7_30;

        if (Sys_ResolveSymbol_11(&v_210, &v_1f8))
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x70)) = 1.0f;
            (*(int32_t*)(uintptr_t)(a1 + 0x80)) = 0x3f800000;
            (*(int32_t*)(uintptr_t)(a1 + 0x90)) = 0x3f800000;
            memcpy(&v_2a4, &v_210, 0x18);
            double v_294;
            x87_r7_30 = v_294;
            (*(int32_t*)(uintptr_t)(a1 + 0x74)) = 0;
            (*(int32_t*)(uintptr_t)(a1 + 0x78)) = 0;
            (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = 0;
            (*(int32_t*)(uintptr_t)(a1 + 0x84)) = 0;
            (*(int32_t*)(uintptr_t)(a1 + 0x88)) = 0;
            (*(int32_t*)(uintptr_t)(a1 + 0x8c)) = 0;
            (*(int32_t*)(uintptr_t)(a1 + 0x94)) = 0;
        }
        else
        {
            float v_2c8 = v_1f8 - v_210;
            double v_208;
            double v_1f0;
            float v_2c4_1 = v_1f0 - v_208;
            double v_200;
            double v_1e8;
            float v_2c0_1 = v_1e8 - v_200;
            Sys_ResolveSymbol_12(a1 + 0x70, &v_2c8);
            v_2c8 = (*(int32_t*)(uintptr_t)(a1 + 0x88));
            float tmpD5 = (*(int32_t*)(uintptr_t)(a1 + 0x8c));
            float objC6 = (*(int32_t*)(uintptr_t)(a1 + 0x90));
            float srcS4 = (*(int32_t*)(uintptr_t)(a1 + 0x70));
            v_2c8 = -(v_2c8);
            (*(int32_t*)(uintptr_t)(a1 + 0x88)) = srcS4;
            int32_t tmpD7 = (*(int32_t*)(uintptr_t)(a1 + 0x78));
            (*(int32_t*)(uintptr_t)(a1 + 0x8c)) = (*(int32_t*)(uintptr_t)(a1 + 0x74));
            float v_2c4_3 = -(tmpD5);
            (*(int32_t*)(uintptr_t)(a1 + 0x90)) = tmpD7;
            int32_t valA3 = (*(int32_t*)(uintptr_t)(a1 + 0x88));
            float v_2c0_3 = -(objC6);
            long double x87_r7_20 = v_1f8 - v_210;
            (*(int32_t*)(uintptr_t)(a1 + 0x70)) = v_2c8;
            int32_t v_284_1 = valA3;
            int32_t valA4 = (*(int32_t*)(uintptr_t)(a1 + 0x8c));
            (*(int32_t*)(uintptr_t)(a1 + 0x74)) = v_2c4_3;
            long double x87_r7_21 = x87_r7_20 * (*(int32_t*)(uintptr_t)(a1 + 0x748));
            (*(int32_t*)(uintptr_t)(a1 + 0x78)) = v_2c0_3;
            int32_t tmpD11 = (*(int32_t*)(uintptr_t)(a1 + 0x7c));
            float v_28c = (*(int32_t*)(uintptr_t)(a1 + 0x70));
            int32_t v_288_1 = tmpD11;
            int32_t v_280_1 = (*(int32_t*)(uintptr_t)(a1 + 0x74));
            int32_t v_27c_1 = (*(int32_t*)(uintptr_t)(a1 + 0x80));
            int32_t tmpD13 = (*(int32_t*)(uintptr_t)(a1 + 0x84));
            int32_t v_274_1 = (*(int32_t*)(uintptr_t)(a1 + 0x78));
            int32_t v_278_1 = valA4;
            int32_t valA5 = (*(int32_t*)(uintptr_t)(a1 + 0x90));
            int32_t v_268_1 = (*(int32_t*)(uintptr_t)(a1 + 0x94));
            v_2a4 = x87_r7_21 + v_210;
            int32_t v_270_1 = tmpD13;
            int32_t v_26c_1 = valA5;
            memcpy(a1 + 0x70, &v_28c, 0x28);
            v_29c = (v_1f0 - v_208) * (*(int32_t*)(uintptr_t)(a1 + 0x748)) + v_208;
            x87_r7_30 = (v_1e8 - v_200) * (*(int32_t*)(uintptr_t)(a1 + 0x748)) + v_200;
        }

        float v_2ac_1 = v_2b4 * (*(int32_t*)(uintptr_t)(a1 + 0x84)) + v_2b8 * (*(int32_t*)(uintptr_t)(a1 + 0x80));
        float v_2a8_1 = v_2b8 * (*(int32_t*)(uintptr_t)(a1 + 0x8c)) + v_2b4 * (*(int32_t*)(uintptr_t)(a1 + 0x90));
        v_2a4 = v_2b8 * (*(int32_t*)(uintptr_t)(a1 + 0x74)) + v_2b4 * (*(int32_t*)(uintptr_t)(a1 + 0x78)) + v_2a4;
        double v_29c_1 = v_2ac_1 + v_29c;
        double v_294_1 = v_2a8_1 + x87_r7_30;
        long double x87_r7_32 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_9 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_9 - x87_r7_32;
        long double x87_r7_33;

        if (!(*(&((x87_r6_9 < x87_r7_32 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_9, x87_r7_32) ? 1 : 0) << 0xa
                | (x87_r6_9 == x87_r7_32 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_33 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_33 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

        long double x87_r6_10 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
        x87_r6_10 - x87_r7_33;
        long double x87_r7_35;

        if (*(&((x87_r6_10 < x87_r7_33 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_10, x87_r7_33) ? 1 : 0) << 0xa
            | (x87_r6_10 == x87_r7_33 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_36 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
            long double x87_r6_11 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
            x87_r6_11 - x87_r7_36;

            if (!(*(&((x87_r6_11 < x87_r7_36 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_11, x87_r7_36) ? 1 : 0) << 0xa
                    | (x87_r6_11 == x87_r7_36 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_35 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
            else
                x87_r7_35 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        }
        else
            x87_r7_35 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

        int32_t* tmpD14 = (*(int32_t*)(uintptr_t)(a1 + 0x6c));
        float v_2bc = x87_r7_35;
        float v_2e0_6 = Render_ComputeNormals(tmpD14) * v_2bc;
        WorldObject_CommitTransform(Level_StartMission_4(), a1, &v_2a4, v_2e0_6);
        int32_t* i_1;

        if (!a2)
        {
            i_1 = (*(int32_t*)(uintptr_t)(a1 + 8));
            v_2bc = a1 + 0x20;
            float* v_2b8_1 = a1 + 0x70;
        }

        if (a2 || !*i_1 || !i_1)
            result = g_afa7e0;
        else
        {
            result = g_afa7e0;

            do
            {
                int32_t* tmpD15 = *i_1;
                void* objC16;

                if (!tmpD15)
                    objC16 = nullptr;
                else
                {
                    int32_t objC13 = *tmpD15;
                    int32_t objC14 = -(objC13);
                    objC16 = (objC14 - objC14) & tmpD15;
                }

                *((result << 2) + &g_afa6e0) = objC16;
                g_afa7e0 = &result[1];
                uint32_t valA11 = DynObj_CreateMagicObject_6();
                int32_t tmpD16 = 0;
                tmpD16 = i_1[7];
                int32_t valA12 = *(((valA11 * 0x180 + tmpD16) << 2) + &g_a96ae0);

                if (valA12)
                    valA12(i_1, &v_2bc);

                result = g_afa7e0 - 1;
                g_afa7e0 = result;
                i_1 = *((result << 2) + &g_afa6e0);
            } while (i_1);
        }

        void* objC20 = (*(int32_t*)(uintptr_t)(a1 + 0xe8));

        if (objC20)
        {
            float* v_2ac_2 = a1 + 0x70;
            void* v_2b0 = a1 + 0x20;
            void* v_2a8_2 = a1;
            int32_t* i_2 = *(objC20 + 8);

            if (*i_2 && i_2)
            {
                do
                {
                    int32_t* tmpD18 = *i_2;
                    void* objC24;

                    if (!tmpD18)
                        objC24 = nullptr;
                    else
                    {
                        int32_t objC21 = *tmpD18;
                        int32_t objC22 = -(objC21);
                        objC24 = (objC22 - objC22) & tmpD18;
                    }

                    *((result << 2) + &g_afa6e0) = objC24;
                    g_afa7e0 = &result[1];
                    uint32_t valA16 = MagicObj_GetEventId();
                    int32_t valA17 = 0;
                    valA17 = i_2[7];
                    int32_t valA18 = *(((valA16 * 0x180 + valA17) << 2) + &g_a96ae0);

                    if (valA18)
                        valA18(i_2, &v_2b0);

                    result = g_afa7e0 - 1;
                    g_afa7e0 = result;
                    i_2 = *((result << 2) + &g_afa6e0);
                } while (i_2);
            }
        }

        result = v_2c9;

        if (result)
            return Menu_UpdateLanguage_21(a1, &v_1f8, a2);
    }

    return result;
}
