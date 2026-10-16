#include "004CF790-DynObj_LocalTexturesSTex.h"
/* 0x004cf790 DynObj_LocalTexturesSTex full linked: callers=1 callees=5 */
int32_t* sub_4cf790(void* a1)

{
    void* ebx = a1;
    int32_t ebp = 0;
    int32_t* eax_1 = sub_4ceaa0(*(ebx + 8), 0x54455846, nullptr);
    int32_t* esi = eax_1;
    int32_t __saved_ecx_2 = *esi;
    *(ebx + 0x40) = __saved_ecx_2;

    if (__saved_ecx_2 <= 0)
    {
        *(ebx + 0x34) = 0;
        *(ebx + 0x38) = 0;
    }
    else
    {
        *(ebx + 0x34) = Mem_Alloc(__saved_ecx_2 * 0x24, 4);
        eax_1 = Mem_Alloc(__saved_ecx_2 * 0xc, 4);
        void* esi_1 = &esi[1];
        *(ebx + 0x38) = eax_1;

        if (__saved_ecx_2 > 0)
        {
            a1 = nullptr;
            int32_t __saved_ecx = __saved_ecx_2;
            int32_t __saved_ecx_1;
            bool cond:3_1;

            do
            {
                void* var_18_1 = esi_1;
                *(*(ebx + 0x38) + ebp + 4) = 0;
                Game_DataSymbolLoad(0xa4ec6c, "LOCAL:textures/%s.tex");
                sub_4b24c0(*(ebx + 0x34) + a1, ebp + *(ebx + 0x38), 0xa4ec6c);
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

                ebp += 0xc;
                esi_1 = esi_1 + ~i - 1 + 1;
                __saved_ecx_1 = __saved_ecx - 1;
                cond:3_1 = __saved_ecx != 1;
                a1 += 0x24;
                __saved_ecx = __saved_ecx_1;
            } while (cond:3_1);
            return __saved_ecx_1;
        }
    }

    return eax_1;
}
