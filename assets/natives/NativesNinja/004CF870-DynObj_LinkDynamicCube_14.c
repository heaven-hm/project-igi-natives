#include "004CF870-DynObj_LinkDynamicCube_14.h"
/* 0x004cf870 DynObj_LinkDynamicCube_14 full linked: callers=1 callees=4 */
int32_t* sub_4cf870(void* a1)

{
    void* ebp = a1;
    int32_t ebx = 0;
    int32_t* eax_1 = sub_4ceaa0(*(ebp + 8), 0x50414c46, nullptr);
    int32_t* esi = eax_1;
    void* edi = *esi;
    *(ebp + 0x44) = edi;

    if (edi <= 0)
        *(ebp + 0x3c) = 0;
    else
    {
        eax_1 = Mem_Alloc(edi * 0xc, 4);
        void* esi_1 = &esi[1];
        *(ebp + 0x3c) = eax_1;

        if (edi > 0)
        {
            a1 = edi;
            void* eax_3;
            bool cond:3_1;

            do
            {
                void* var_14_1 = esi_1;
                char* var_18_2 = &g_a4ed6c;
                Game_DataSymbolLoad(0xa4ec6c, "%spalettes/%s.pal");
                sub_4b7d50(*(ebp + 0x3c) + ebx, 0xa4ec6c);
                void* edi_1 = esi_1;
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool cond:2_1 = 0 != *edi_1;
                    edi_1 += 1;
                    i -= 1;

                    if (!cond:2_1)
                        break;
                }

                ebx += 0xc;
                eax_3 = a1 - 1;
                cond:3_1 = a1 != 1;
                a1 = eax_3;
                esi_1 = esi_1 + ~i - 1 + 1;
            } while (cond:3_1);
            return eax_3;
        }
    }

    return eax_1;
}
