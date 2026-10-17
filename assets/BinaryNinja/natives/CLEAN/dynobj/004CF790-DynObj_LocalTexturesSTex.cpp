// IGI native provenance: DynObj_LocalTexturesSTex - 0x004CF790 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CF790-DynObj_LocalTexturesSTex.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_LocalTexturesSTex.h"
int32_t* DynObj_LocalTexturesSTex(void* context)

{
    void* context_val = context;
    int32_t flagP = 0;
    int32_t* data_1 = DynObj_CreateMagicObject_13(*(context_val + 8), 0x54455846, nullptr);
    int32_t* source_val = data_1;
    int32_t __saved_ecx_2 = *source_val;
    *(context_val + 0x40) = __saved_ecx_2;

    if (__saved_ecx_2 <= 0)
    {
        *(context_val + 0x34) = 0;
        *(context_val + 0x38) = 0;
    }
    else
    {
        *(context_val + 0x34) = Mem_Alloc(__saved_ecx_2 * 0x24, 4);
        data_1 = Mem_Alloc(__saved_ecx_2 * 0xc, 4);
        void* source_1 = &source_val[1];
        *(context_val + 0x38) = data_1;

        if (__saved_ecx_2 > 0)
        {
            context = nullptr;
            int32_t saved_ctx = __saved_ecx_2;
            int32_t __saved_ecx_1;
            bool flag_3_1;

            do
            {
                void* item_18_1 = source_1;
                *(*(context_val + 0x38) + flagP + 4) = 0;
                Game_DataSymbolLoad(0xa4ec6c, "LOCAL:textures/%s.tex");
                Sys_SIsNotAValidTextureF(*(context_val + 0x34) + context, flagP + *(context_val + 0x38), 0xa4ec6c);
                void* dest_1 = source_1;
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool flag_2_1 = 0 != *dest_1;
                    dest_1 += 1;
                    i -= 1;

                    if (!flag_2_1)
                        break;
                }

                flagP += 0xc;
                source_1 = source_1 + ~i - 1 + 1;
                __saved_ecx_1 = saved_ctx - 1;
                flag_3_1 = saved_ctx != 1;
                context += 0x24;
                saved_ctx = __saved_ecx_1;
            } while (flag_3_1);
            return __saved_ecx_1;
        }
    }

    return data_1;
}
