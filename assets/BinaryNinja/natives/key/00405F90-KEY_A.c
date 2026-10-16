#include "KEY_A.h"
int32_t KEY_A(int32_t* a1, int32_t a2)

{
    int32_t saved_obj = (&g_bc28c0)[a2 * 0x159];
    char const* const __saved_edi_1 = "GOInMouInv";
    char* j_2 = "%s(%d);\n";
    void v_100;
    Sys_CloseFileStream_4(a1, &v_100, Game_DataSymbolLoad(&v_100, j_2));
    __saved_edi_1 = (&g_bc28c4)[a2 * 0x159];
    j_2 = "GOInMouSens";
    Sys_CloseFileStream_4(a1, &v_100, Game_DataSymbolLoad(&v_100, "%s(%f);\n"));
    int32_t i = (&g_bc28bc)[a2 * 0x159];
    int32_t i_1 = 0;

    if (i > 0)
    {
        int32_t* ctxB1 = a2 * 0x564 + &g_bc25bc;

        do
        {
            j_2 = "GOInRemap";
            int32_t valA7 = Game_DataSymbolLoad(&v_100, "%s(");
            char* j = *ctxB1;
            int32_t objC1 = 0;
            int32_t* valA8 = &g_536578;

            while (*valA8 != j)
            {
                valA8 = &valA8[9];
                objC1 += 1;

                if (valA8 >= 0x536944)
                    break;
            }

            char* v_120_3;
            char* v_11c_1;
            int32_t saved_dst;

            if (objC1 == 0x1b)
            {
                j_2 = j;
                v_11c_1 = &g_5383cc;
                v_120_3 = &j_2 + valA7 + 0x18;
            }
            else
            {
                j_2 = &"MoveLeft"[objC1 * 4];
                v_11c_1 = &g_5383d0;
                v_120_3 = &saved_dst + valA7 + 0x14;
            }

            int32_t valA11 = Game_DataSymbolLoad(v_120_3, v_11c_1);
            char* j_1 = ctxB1[1];
            int32_t srcS2 = valA7 + valA11;
            int32_t objC3 = 0;
            int32_t* valA12 = &g_536948;

            while (*valA12 != j_1)
            {
                valA12 = &valA12[9];
                objC3 += 1;

                if (valA12 >= 0x5369b4)
                    break;
            }

            char* v_120_4;
            char* v_11c_2;

            if (objC3 == 3)
            {
                j_2 = j_1;
                v_11c_2 = &g_5383cc;
                v_120_4 = &j_2 + srcS2 + 0x18;
            }
            else
            {
                j_2 = &g_536928[objC3 * 0x24];
                v_11c_2 = &g_5383d0;
                v_120_4 = &saved_dst + srcS2 + 0x14;
            }

            int32_t valA14 = Game_DataSymbolLoad(v_120_4, v_11c_2);
            char* j_3 = ctxB1[2];
            int32_t srcS3 = srcS2 + valA14;
            int32_t tmpD3 = 0;
            int32_t* objC6 = &g_5369b8;

            while (*objC6 != (ctxB1[1] << 0x1e | j_3))
            {
                objC6 = &objC6[9];
                tmpD3 += 1;

                if (objC6 >= "DefineGameOptions")
                    break;
            }

            char* v_120_5;
            char* v_11c_3;

            if (tmpD3 == 0x7f)
            {
                j_2 = j_3;
                v_11c_3 = "%d);\n";
                v_120_5 = &j_2 + srcS3 + 0x18;
            }
            else
            {
                j_2 = &g_536998[tmpD3 * 0x24];
                v_11c_3 = "%s);\n";
                v_120_5 = &saved_dst + srcS3 + 0x14;
            }

            j_2 = srcS3 + Game_DataSymbolLoad(v_120_5, v_11c_3);
            Sys_CloseFileStream_4(a1, &v_100, j_2);
            i = i_1 + 1;
            ctxB1 = &ctxB1[3];
            i_1 = i;
        } while (i < (&g_bc28bc)[a2 * 0x159]);
    }

    return i;
}
