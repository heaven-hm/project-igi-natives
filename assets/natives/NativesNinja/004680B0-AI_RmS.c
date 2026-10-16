#include "004680B0-AI_RmS.h"
/* 0x004680b0 AI_RmS full linked: callers=1 callees=14 */
int32_t sub_4680b0(int32_t* a1)

{
    double* eax = a1[3];
    double* ecx = *a1;
    float var_120 = *eax - *ecx;
    float var_11c = eax[1] - ecx[1];
    float var_118 = eax[2] - ecx[2];
    float* eax_1 = a1[1];
    float var_114 = var_118 * eax_1[6] + var_11c * eax_1[3] + var_120 * *eax_1;
    long double x87_r7_16 = var_118 * eax_1[8] + var_11c * eax_1[5];
    long double x87_r6_11 = var_120 * eax_1[2];
    float var_11c_1 = var_118 * eax_1[7] + var_11c * eax_1[4] + var_120 * eax_1[1];
    var_120 = var_114;
    float var_118_1 = x87_r7_16 + x87_r6_11;
    float var_108;
    sub_4675b0(&var_108, &var_120, a1);
    int16_t result;
    float var_104;
    void var_100;

    if (sub_46ab30() != 1)
    {
        result = sub_46ab30();

        if (result > 1)
        {
            void* edx_5 = a1[0xa];
            int32_t i = 0xffffffff;
            void* edi_2 = edx_5;
            result = 0;

            while (i)
            {
                bool cond:1_1 = 0 != *edi_2;
                edi_2 += 1;
                i -= 1;

                if (!cond:1_1)
                    break;
            }

            if (~i != 1)
            {
                int32_t eax_10;
                void* ecx_8;
                int32_t edx_6;
                eax_10 = sub_4b64e0(edx_5);
                char* esi_2;

                if (!eax_10)
                {
                    int32_t var_12c_4 = a1[0xa];
                    Game_DataSymbolLoad(&var_100, "RM: %s");
                    esi_2 = &var_100;
                }
                else
                {
                    int32_t eax_11 = a1[0xa];
                    int32_t var_130_3 = eax_11;
                    esi_2 = Resource_Load(eax_11, edx_6, ecx_8, nullptr);
                }

                void* eax_14 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font4.fnt");
                var_114 = var_104;
                int32_t edx_7 = var_114;
                int32_t var_138_2 = 0x80;
                var_114 = var_108;
                return sub_469450(var_114, edx_7, 0x44051eb8, 0x80, esi_2, eax_14, 0);
            }
        }
    }
    else
    {
        void* edx_1 = a1[9];
        int32_t i_1 = 0xffffffff;
        void* edi_1 = edx_1;
        result = 0;

        while (i_1)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 += 1;
            i_1 -= 1;

            if (!cond:0_1)
                break;
        }

        if (~i_1 != 1)
        {
            int32_t eax_4;
            void* ecx_4;
            eax_4 = sub_4b64e0(edx_1);
            int32_t* esi_1;

            if (!eax_4)
            {
                int32_t var_12c_2 = a1[9];
                Game_DataSymbolLoad(&var_100, "RM: %s");
                esi_1 = &var_100;
            }
            else
            {
                int32_t edx_2 = a1[9];
                int32_t var_130_1 = edx_2;
                esi_1 = Resource_Load(eax_4, edx_2, ecx_4, nullptr);
            }

            void* eax_8 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font4.fnt");
            var_114 = var_104;
            int32_t var_138_1 = 0x80;
            int32_t var_144_1 = var_114;
            var_114 = var_108;
            return sub_469450(var_114, var_144_1, 0x44051eb8, 0x80, esi_1, eax_8, 0);
        }
    }
    return result;
}
