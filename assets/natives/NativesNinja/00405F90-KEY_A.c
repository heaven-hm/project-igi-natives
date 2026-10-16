#include "00405F90-KEY_A.h"
/* 0x00405f90 KEY_A full linked: callers=1 callees=9 */
int32_t KEY_A(int32_t* a1, int32_t a2)

{
    int32_t __saved_ebx = (&g_bc28c0)[a2 * 0x159];
    char const* const __saved_edi_1 = "GOInMouInv";
    char* j_2 = "%s(%d);\n";
    void var_100;
    sub_4b1700(a1, &var_100, Game_DataSymbolLoad(&var_100, j_2));
    __saved_edi_1 = (&g_bc28c4)[a2 * 0x159];
    j_2 = "GOInMouSens";
    sub_4b1700(a1, &var_100, Game_DataSymbolLoad(&var_100, "%s(%f);\n"));
    int32_t i = (&g_bc28bc)[a2 * 0x159];
    int32_t i_1 = 0;

    if (i > 0)
    {
        int32_t* ebx_1 = a2 * 0x564 + &g_bc25bc;

        do
        {
            j_2 = "GOInRemap";
            int32_t eax_7 = Game_DataSymbolLoad(&var_100, "%s(");
            char* j = *ebx_1;
            int32_t ecx_1 = 0;
            int32_t* eax_8 = &g_536578;

            while (*eax_8 != j)
            {
                eax_8 = &eax_8[9];
                ecx_1 += 1;

                if (eax_8 >= 0x536944)
                    break;
            }

            char* var_120_3;
            char* var_11c_1;
            int32_t __saved_edi;

            if (ecx_1 == 0x1b)
            {
                j_2 = j;
                var_11c_1 = &g_5383cc;
                var_120_3 = &j_2 + eax_7 + 0x18;
            }
            else
            {
                j_2 = &"MoveLeft"[ecx_1 * 4];
                var_11c_1 = &g_5383d0;
                var_120_3 = &__saved_edi + eax_7 + 0x14;
            }

            int32_t eax_11 = Game_DataSymbolLoad(var_120_3, var_11c_1);
            char* j_1 = ebx_1[1];
            int32_t esi_2 = eax_7 + eax_11;
            int32_t ecx_3 = 0;
            int32_t* eax_12 = &g_536948;

            while (*eax_12 != j_1)
            {
                eax_12 = &eax_12[9];
                ecx_3 += 1;

                if (eax_12 >= 0x5369b4)
                    break;
            }

            char* var_120_4;
            char* var_11c_2;

            if (ecx_3 == 3)
            {
                j_2 = j_1;
                var_11c_2 = &g_5383cc;
                var_120_4 = &j_2 + esi_2 + 0x18;
            }
            else
            {
                j_2 = &g_536928[ecx_3 * 0x24];
                var_11c_2 = &g_5383d0;
                var_120_4 = &__saved_edi + esi_2 + 0x14;
            }

            int32_t eax_14 = Game_DataSymbolLoad(var_120_4, var_11c_2);
            char* j_3 = ebx_1[2];
            int32_t esi_3 = esi_2 + eax_14;
            int32_t edx_3 = 0;
            int32_t* ecx_6 = &g_5369b8;

            while (*ecx_6 != (ebx_1[1] << 0x1e | j_3))
            {
                ecx_6 = &ecx_6[9];
                edx_3 += 1;

                if (ecx_6 >= "DefineGameOptions")
                    break;
            }

            char* var_120_5;
            char* var_11c_3;

            if (edx_3 == 0x7f)
            {
                j_2 = j_3;
                var_11c_3 = "%d);\n";
                var_120_5 = &j_2 + esi_3 + 0x18;
            }
            else
            {
                j_2 = &g_536998[edx_3 * 0x24];
                var_11c_3 = "%s);\n";
                var_120_5 = &__saved_edi + esi_3 + 0x14;
            }

            j_2 = esi_3 + Game_DataSymbolLoad(var_120_5, var_11c_3);
            sub_4b1700(a1, &var_100, j_2);
            i = i_1 + 1;
            ebx_1 = &ebx_1[3];
            i_1 = i;
        } while (i < (&g_bc28bc)[a2 * 0x159]);
    }

    return i;
}
