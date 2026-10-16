#include "004F0780-Task_New.h"
/* 0x004f0780 Task_New full linked: callers=0 callees=24 */
int32_t Task_New(int32_t a1, void* a2, float a3)

// Sig: void Task_New(...)
// Note: Instantiates a new game task from a declared type (731-byte factory;
// OpenIGI registers Task_New reading the type name then declared params). Call
// inside task blocks after Task_DeclareParameters; argc unknown (parser
// context).
{
    if (g_54dd16)
    {
        float esi = a3;
        g_a70c74 = sub_4b8ad0(esi, 0);
        int32_t ebp = sub_4b8a20(esi, 0);
        int32_t var_c8 = ebp;
        void var_64;
        sub_4b8a80(esi, 1, &var_64, 0x64);
        int32_t ebx = 3;
        int32_t var_cc = 3;
        void var_a4;
        sub_4b8a80(esi, 2, &var_a4, 0x40);
        int32_t* edi;

        if (!g_a758bc)
            edi = QTask_HandleInput(a2, QTask_QtaskTypeSNotDefined(&var_64), 0);
        else
        {
            edi = QTask_RegisterEventCallback(a2, QTask_QtaskTypeSNotDefined(&var_64), 0);
            g_a758bc = 0;
        }

        if (!g_a758a8)
            g_a758a8 = edi;

        void* var_e0 = &var_a4;
        int32_t* var_e4_5 = edi;

        if (ebp >= 0)
        {
            if (!sub_4f1030(ebp))
                sub_4f1090(ebp, edi);
            else
            {
                var_c8 = 0xffffffff;
                ebp = 0xffffffff;
            }
        }

        uint32_t eax_12 = sub_4f1a60();
        int32_t ecx_3 = 0;
        ecx_3 = edi[7];
        int32_t var_bc;
        int32_t var_b4;

        if (*(((eax_12 * 0x180 + ecx_3) << 2) + &g_a96ae0))
        {
            uint32_t eax_17 = sub_4f1a60();
            int32_t eax_18 = 0;
            eax_18 = edi[7];
            int32_t* var_c0;
            (*(((eax_17 * 0x180 + eax_18) << 2) + &g_a96ae0))(edi, &var_c0);
            int32_t* eax_20 = var_c0;

            if (eax_20)
            {
                int32_t edx_5 = g_a70c98;
                int32_t var_b0_1 = g_a70c74;
                g_54dd16 = 0;
                var_b4 = edx_5;
                bool cond:3_1 = *eax_20 <= 0;
                var_bc = 3;
                float var_b8_1 = esi;
                int32_t i_2 = 0;

                if (!cond:3_1)
                {
                    int32_t ebp_1 = 0;
                    int32_t i;

                    do
                    {
                        void* edx_6 = eax_20[2];

                        if (*(edx_6 + ebp_1 + 0xc) & 1)
                        {
                            void* esi_2 = edi + *(edx_6 + ebp_1);
                            char eax_22 = sub_4f1b60();
                            sub_4f1af0(esi_2, *(eax_20[2] + ebp_1 + 4), eax_22, &var_bc);
                            esi = a3;
                        }

                        i = i_2 + 1;
                        ebp_1 += 0x10;
                        i_2 = i;
                    } while (i < *eax_20);
                    ebp = var_c8;
                }

                ebx = var_bc;
                var_cc = ebx;
            }
        }

        g_54dd16 = 1;

        if (ebp >= 0)
        {
            int32_t eax_24 = sub_4f1210();
            int32_t eax_25 = 0;
            eax_25 = edi[7];
            int32_t eax_26 = *(((eax_24 * 0x180 + eax_25) << 2) + &g_a96ae0);

            if (eax_26)
                eax_26(edi);
        }

        int32_t eax_27 = sub_4f1230();
        int32_t edx_12 = 0;
        edx_12 = edi[7];
        int32_t eax_28 = *(((eax_27 * 0x180 + edx_12) << 2) + &g_a96ae0);

        if (eax_28)
            eax_28(edi);

        Script_SetSymbolContext("Task_New", edi);

        if (sub_4b8b00(esi, ebx))
        {
            int32_t i_1;

            do
            {
                int32_t eax_30 = ebx;
                ebx += 1;
                sub_4b8a20(esi, eax_30);
                i_1 = sub_4b8b00(esi, ebx);
            } while (i_1);
            var_cc = ebx;
        }

        Script_SetSymbolContext("Task_New", a2);
        var_b4 = var_cc;
        var_bc = ebx;
        char* var_ac = &g_567c74;
        memcpy(a1, &var_bc, 0x18);
        return a1;
    }

    int32_t __saved_ebx = g_a70c98;
    int32_t __saved_ebp_1 = g_a70c74;
    Error_Show("Too few parameters in line %d of file '%s'");

    while (true)
        /* nop */
}
