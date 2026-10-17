// Original IGI.EXE function: DynObj_LinkDynamicCube_14 (VA 0x004CF870; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LinkDynamicCube_14.h"
int32_t* DynObj_LinkDynamicCube_14(void* context)

{
    void* flagP = context;
    int32_t context_val = 0;
    int32_t* data_1 = DynObj_CreateMagicObject_13(*(flagP + 8), 0x50414c46, nullptr);
    int32_t* source_val = data_1;
    void* dest_val = *source_val;
    *(flagP + 0x44) = dest_val;

    if (dest_val <= 0)
        *(flagP + 0x3c) = 0;
    else
    {
        data_1 = Mem_Alloc(dest_val * 0xc, 4);
        void* source_1 = &source_val[1];
        *(flagP + 0x3c) = data_1;

        if (dest_val > 0)
        {
            context = dest_val;
            void* data_3;
            bool flag_3_1;

            do
            {
                void* item_14_1 = source_1;
                char* item_18_2 = &g_a4ed6c;
                Game_DataSymbolLoad(0xa4ec6c, "%spalettes/%s.pal");
                Sys_SIsNotAValidPaletteF(*(flagP + 0x3c) + context_val, 0xa4ec6c);
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

                context_val += 0xc;
                data_3 = context - 1;
                flag_3_1 = context != 1;
                context = data_3;
                source_1 = source_1 + ~i - 1 + 1;
            } while (flag_3_1);
            return data_3;
        }
    }

    return data_1;
}
