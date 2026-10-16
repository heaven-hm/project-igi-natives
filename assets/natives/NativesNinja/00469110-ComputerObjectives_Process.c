#include "00469110-ComputerObjectives_Process.h"
/* 0x00469110 ComputerObjectives_Process full linked: callers=0 callees=26 */
void* sub_469110(void* a1)

{
    int32_t eax = g_c28b44;
    int32_t ecx = g_c28b48;
    int32_t var_170 = ecx;
    int32_t var_174 = ecx;
    sub_4b4910(0f, 0f, eax, ecx, 0f, 0f, 0f, 0x40040000, 0xffffffff, 0x44079eb8);
    Qhash_Init(1);
    long double x87_r7_2 = eax;
    int32_t var_154_1;

    if (!sub_46c0b0())
        var_154_1 = x87_r7_2 * 0.10000000000000001;
    else
        var_154_1 = x87_r7_2 * 0.14999999999999999;

    int32_t i = 0;
    int32_t i_2 = 0;
    int32_t ebx = ecx * 0.10000000000000001;
    int32_t* var_150_1 = a1 + 0x20;

    do
    {
        void* eax_3;
        int32_t edx_2;
        eax_3 = sub_467590(i);

        if (eax_3)
        {
            void* edi_1 = eax_3;
            int32_t j = 0xffffffff;

            while (j)
            {
                bool cond:1_1 = 0 != *edi_1;
                edi_1 += 1;
                j -= 1;

                if (!cond:1_1)
                    break;
            }

            int32_t ecx_3 = ~j;
            void* ecx_4 = ecx_3 - 1;

            if (ecx_3 != 1)
            {
                void* eax_4 = sub_46c0b0();

                if (eax_4)
                {
                    void* var_168_2 = ecx_4;
                    void* var_16c_1 = ecx_4;
                    eax_4 = sub_46b7d0(*var_150_1, var_154_1 - 0x22, ebx + 2);
                }

                int32_t var_168_4 = i + 1;
                char* var_170_3 = "OBJECTIVE";
                int32_t* var_16c_3 = Resource_Load(eax_4, edx_2, ecx_4, nullptr);
                void var_100;
                void* ecx_6;
                int32_t edx_5;
                ecx_6 = Game_DataSymbolLoad(&var_100, "%s %d: ");
                int32_t eax_8 = *(eax_3 + 0xc8);
                char* var_178_1;
                void var_140;

                if (!eax_8)
                {
                    int32_t eax_10 = *(eax_3 + 0xc4);

                    if (!eax_10)
                    {
                        char* var_16c_6 = "INCOMPLETE";
                        int32_t* var_170_6 = Resource_Load(eax_10, edx_5, ecx_6, nullptr);
                        void* var_174_5 = &g_53f730;
                        var_178_1 = &var_140;
                    }
                    else
                    {
                        char* var_16c_5 = "COMPLETE";
                        int32_t* var_170_5 = Resource_Load(eax_10, edx_5, ecx_6, nullptr);
                        void* var_174_4 = &g_53f730;
                        var_178_1 = &var_140;
                    }
                }
                else
                {
                    char* var_16c_4 = "FAILED";
                    int32_t* var_170_4 = Resource_Load(eax_8, edx_5, ecx_6, nullptr);
                    void* var_174_3 = &g_53f730;
                    var_178_1 = &var_140;
                }

                Game_DataSymbolLoad(var_178_1, "%s");
                void* edi_2 = &var_140;
                int32_t j_1 = 0xffffffff;

                while (j_1)
                {
                    bool cond:2_1 = 0 != *edi_2;
                    edi_2 += 1;
                    j_1 -= 1;

                    if (!cond:2_1)
                        break;
                }

                int32_t ecx_7 = ~j_1;
                void* edi_4 = &var_100;
                int32_t j_2 = 0xffffffff;

                while (j_2)
                {
                    bool cond:3_1 = 0 != *edi_4;
                    edi_4 += 1;
                    j_2 -= 1;

                    if (!cond:3_1)
                        break;
                }

                int32_t esi_2;
                int32_t edi_6;
                edi_6 = memcpy(edi_4 - 1, edi_2 - ecx_7, ecx_7 & 0xfffffffc);
                void* eax_13 = g_bc2360;
                memcpy(edi_6, esi_2, ecx_7 & 3);
                int32_t var_174_6 = 0x78;
                int32_t eax_15 = sub_469450(var_154_1, ebx, 0x44029eb8, 0x190, &var_100,
                    Menu_HandleInput_3(*(eax_13 + 0x120), "font3.fnt"), 2);
                int32_t eax_16;
                void* ecx_13;
                int32_t edx_7;
                eax_16 = sub_4b64e0(eax_3);
                char* ebx_1;

                if (!eax_16)
                {
                    void* var_168_5 = eax_3;
                    Game_DataSymbolLoad(&var_100, "RM: %s");
                    ebx_1 = &var_100;
                }
                else
                {
                    void* var_16c_8 = eax_3;
                    ebx_1 = Resource_Load(eax_16, edx_7, ecx_13, nullptr);
                }

                int32_t var_174_7 = 0x78;
                i = i_2;
                ebx = sub_469450(var_154_1, eax_15, 0x44029eb8, 0x190, ebx_1,
                    Menu_HandleInput_3(*(g_bc2360 + 0x120), "font4.fnt"), 1) + 8;
            }
        }

        i += 1;
        i_2 = i;
        var_150_1 = &var_150_1[1];
    } while (i < 6);

    Qhash_Reset();
    void* result = a1;
    int32_t* i_1 = *(result + 8);

    if (*i_1 && i_1)
    {
        int32_t ecx_17 = g_afa7e0;

        do
        {
            int32_t* edx_9 = *i_1;
            void* eax_23;

            if (!edx_9)
                eax_23 = nullptr;
            else
            {
                int32_t eax_20 = *edx_9;
                int32_t eax_21 = -(eax_20);
                eax_23 = (eax_21 - eax_21) & edx_9;
            }

            *((ecx_17 << 2) + &g_afa6e0) = eax_23;
            g_afa7e0 = ecx_17 + 1;
            int32_t eax_24 = sub_4e7530();
            int32_t edx_10 = 0;
            edx_10 = i_1[7];
            result = *(((eax_24 * 0x180 + edx_10) << 2) + &g_a96ae0);

            if (result)
                result = result(i_1);

            ecx_17 = g_afa7e0 - 1;
            g_afa7e0 = ecx_17;
            i_1 = *((ecx_17 << 2) + &g_afa6e0);
        } while (i_1);
    }

    return result;
}
