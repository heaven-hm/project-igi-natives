#include "004CF910-DynObj_RemoveSymbol_14.h"
/* 0x004cf910 DynObj_RemoveSymbol_14 full linked: callers=1 callees=5 */
void** sub_4cf910(void* a1)

{
    void** result = sub_4ceaa0(*(a1 + 8), 0x42414e4d, nullptr);
    void** result_1 = result;

    if (result_1)
    {
        result = *result_1;
        void* esi = &result_1[1];
        void var_40;

        if (g_a4edf8)
        {
            if (result > 0)
            {
                void** ebx_2 = result;
                void** i;

                do
                {
                    void* var_50_2 = esi;
                    char* var_54_2 = &g_a4edf8;
                    Game_DataSymbolLoad(&var_40, "%sanims/%s.iff");
                    sub_4d67a0(&var_40);
                    void* edi_2 = esi;
                    int32_t j = 0xffffffff;
                    result = nullptr;

                    while (j)
                    {
                        bool cond:0_1 = 0 != *edi_2;
                        edi_2 += 1;
                        j -= 1;

                        if (!cond:0_1)
                            break;
                    }

                    i = ebx_2;
                    ebx_2 -= 1;
                    esi = esi + ~j - 1 + 1;
                } while (i != 1);
            }
        }
        else if (result > 0)
        {
            void** ebx_1 = result;
            void** i_1;

            do
            {
                void* var_50_1 = esi;
                char* var_54_1 = &g_a4ed6c;
                Game_DataSymbolLoad(&var_40, "%sanims/%s.iff");
                sub_4d67a0(&var_40);
                void* edi_1 = esi;
                int32_t j_1 = 0xffffffff;

                while (j_1)
                {
                    bool cond:2_1 = 0 != *edi_1;
                    edi_1 += 1;
                    j_1 -= 1;

                    if (!cond:2_1)
                        break;
                }

                i_1 = ebx_1;
                ebx_1 -= 1;
                esi = esi + ~j_1 - 1 + 1;
            } while (i_1 != 1);
            return 0;
        }
    }

    return result;
}
