// IGI native provenance: DynObj_RemoveSymbol_14 - 0x004CF910 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CF910-DynObj_RemoveSymbol_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RemoveSymbol_14.h"
void** DynObj_RemoveSymbol_14(void* context)

{
    void** result = DynObj_CreateMagicObject_13(*(context + 8), 0x42414e4d, nullptr);
    void** result_1 = result;

    if (result_1)
    {
        result = *result_1;
        void* source_val = &result_1[1];
        void item_40;

        if (g_a4edf8)
        {
            if (result > 0)
            {
                void** context_2 = result;
                void** i;

                do
                {
                    void* item_50_2 = source_val;
                    char* item_54_2 = &g_a4edf8;
                    Game_DataSymbolLoad(&item_40, "%sanims/%s.iff");
                    Render_FileSIsNotIffFile(&item_40);
                    void* dest_2 = source_val;
                    int32_t j = 0xffffffff;
                    result = nullptr;

                    while (j)
                    {
                        bool flag_0_1 = 0 != *dest_2;
                        dest_2 += 1;
                        j -= 1;

                        if (!flag_0_1)
                            break;
                    }

                    i = context_2;
                    context_2 -= 1;
                    source_val = source_val + ~j - 1 + 1;
                } while (i != 1);
            }
        }
        else if (result > 0)
        {
            void** context_1 = result;
            void** i_1;

            do
            {
                void* item_50_1 = source_val;
                char* item_54_1 = &g_a4ed6c;
                Game_DataSymbolLoad(&item_40, "%sanims/%s.iff");
                Render_FileSIsNotIffFile(&item_40);
                void* dest_1 = source_val;
                int32_t j_1 = 0xffffffff;

                while (j_1)
                {
                    bool flag_2_1 = 0 != *dest_1;
                    dest_1 += 1;
                    j_1 -= 1;

                    if (!flag_2_1)
                        break;
                }

                i_1 = context_1;
                context_1 -= 1;
                source_val = source_val + ~j_1 - 1 + 1;
            } while (i_1 != 1);
            return 0;
        }
    }

    return result;
}
