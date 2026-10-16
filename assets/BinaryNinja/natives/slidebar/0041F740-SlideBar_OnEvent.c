#include "SlideBar_OnEvent.h"
int32_t SlideBar_OnEvent(long double a1 @ fp0, void* a2, int32_t a3)

{
    void* ctxB = a2;
    void* flagP = *(ctxB + 0x9c);
    void* dstD = *(ctxB + 0x98);
    Script_Isexists(ctxB + 0xb8, ctxB);
    Script_Isexists(ctxB + 0x108, ctxB);
    Script_Isexists(ctxB + 0x158, ctxB);
    Script_Isexists(ctxB + 0x1a8, ctxB);
    Script_Isexists(ctxB + 0x1f8, ctxB);

    if (!Script_FormatString_6(ctxB + 0x1a8))
        *(ctxB + 0xa8) = 0x3d4ccccd;
    else
    {
        Script_SpawnNewTask_7(ctxB + 0x1a8, ctxB);
        *(ctxB + 0xa8) = a1;
    }

    if (*(ctxB + 0x44))
    {
        void* v_58_2 = ctxB + 0x54;
        char v_40[0x40];
        Game_DataSymbolLoad(&v_40, "%s_1.spr");
        char (* dstD1)[0x40] = &v_40;
        int32_t i = 0xffffffff;
        void* v_64_1 = ctxB + 0x54;

        while (i)
        {
            bool cond_1_1 = 0 != *dstD1;
            dstD1 = &(*dstD1)[1];
            i -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t objC1 = ~i;
        int32_t srcS2;
        int32_t dstD4;
        dstD4 = memcpy(*(ctxB + 0x98) + 0x54, dstD1 - objC1, objC1 & 0xfffffffc);
        memcpy(dstD4, srcS2, objC1 & 3);
        Game_DataSymbolLoad(&v_40, "%s_2.spr");
        char (* dstD5)[0x40] = &v_40;
        int32_t i_1 = 0xffffffff;
        void* v_70_1 = ctxB + 0x54;

        while (i_1)
        {
            bool cond_2_1 = 0 != *dstD5;
            dstD5 = &(*dstD5)[1];
            i_1 -= 1;

            if (!cond_2_1)
                break;
        }

        int32_t objC5 = ~i_1;
        int32_t srcS4;
        int32_t dstD8;
        dstD8 = memcpy(*(ctxB + 0x9c) + 0x54, dstD5 - objC5, objC5 & 0xfffffffc);
        memcpy(dstD8, srcS4, objC5 & 3);
        Game_DataSymbolLoad(&v_40, "%s_3.spr");
        *(ctxB + 0x94) = Menu_DrawWidget_3(*(ctxB + 0x44), &v_40);
    }

    void* srcS5 = *(ctxB + 0x98);
    uint32_t valA9 = Script_ParseEnumReal32_8();
    int32_t tmpD5 = 0;
    tmpD5 = *(srcS5 + 0x1c);
    (*(((valA9 * 0x180 + tmpD5) << 2) + &g_a96ae0))(srcS5, a3);
    void* srcS6 = *(ctxB + 0x9c);
    uint32_t valA12 = Script_ParseEnumReal32_8();
    int32_t valA13 = 0;
    valA13 = *(srcS6 + 0x1c);
    (*(((valA12 * 0x180 + valA13) << 2) + &g_a96ae0))(srcS6, a3);
    int32_t tmpD9 = *(ctxB + 0xac);
    int32_t srcS7 = 4;
    a2 = 4;

    if (!*(ctxB + 0xb4))
    {
        void* tmpD13 = *(ctxB + 0x94);
        a2 = tmpD9 + *(flagP + 0x2c) + *(dstD + 0x2c) + 6;

        if (tmpD13)
        {
            int32_t valA27 = *(dstD + 0x28);
            int32_t objC20 = *(flagP + 0x28);
            int32_t srcS8 = valA27;

            if (valA27 <= objC20)
                srcS8 = objC20;

            int32_t valA29;

            if (srcS8 <= Sys_CloseFileStream_17(tmpD13))
                valA29 = Sys_CloseFileStream_17(*(ctxB + 0x94));
            else
            {
                int32_t dstD10 = *(dstD + 0x28);
                int32_t flagP3 = *(flagP + 0x28);

                valA29 = dstD10 <= flagP3 ? flagP3 : dstD10;
            }

            srcS7 = valA29 + 4;
        }
    }
    else
    {
        srcS7 = tmpD9 + *(flagP + 0x28) + *(dstD + 0x28) + 6;
        void* tmpD11 = *(ctxB + 0x94);

        if (tmpD11)
        {
            void* valA18 = *(dstD + 0x2c);
            void* objC15 = *(flagP + 0x2c);
            a2 = valA18;

            if (valA18 <= objC15)
                a2 = objC15;

            if (a2 <= Sys_ExecuteBytecode_17(tmpD11))
                a2 = Sys_ExecuteBytecode_17(*(ctxB + 0x94)) + 4;
            else
            {
                void* dstD9 = *(dstD + 0x2c);
                void* flagP2 = *(flagP + 0x2c);

                a2 = dstD9 <= flagP2 ? flagP2 + 4 : dstD9 + 4;
            }
        }
    }

    *(ctxB + 0x28) = srcS7;
    *(ctxB + 0x2c) = a2;
    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(ctxB, a3);
}
