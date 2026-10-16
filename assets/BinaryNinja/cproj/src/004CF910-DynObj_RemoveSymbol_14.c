#include "gi_platform.h"
#include "004CF910-DynObj_RemoveSymbol_14.h"
void** DynObj_RemoveSymbol_14(void* a1)

{
    void** result = DynObj_CreateMagicObject_13((*(int32_t*)(uintptr_t)(a1 + 8)), 0x42414e4d, nullptr);
    void** result_1 = result;

    if (result_1)
    {
        result = *result_1;
        void* srcS = &result_1[1];
        char v_40;

        if (g_a4edf8)
        {
            if (result > 0)
            {
                void** ctxB2 = result;
                void** i;

                do
                {
                    void* v_50_2 = srcS;
                    char* v_54_2 = &g_a4edf8;
                    Game_DataSymbolLoad(&v_40, "%sanims/%s.iff");
                    Render_FileSIsNotIffFile(&v_40);
                    void* dstD2 = srcS;
                    int32_t j = 0xffffffff;
                    result = nullptr;

                    while (j)
                    {
                        bool cond_0_1 = 0 != *dstD2;
                        dstD2 += 1;
                        j -= 1;

                        if (!cond_0_1)
                            break;
                    }

                    i = ctxB2;
                    ctxB2 -= 1;
                    srcS = srcS + ~j - 1 + 1;
                } while (i != 1);
            }
        }
        else if (result > 0)
        {
            void** ctxB1 = result;
            void** i_1;

            do
            {
                void* v_50_1 = srcS;
                char* v_54_1 = &g_a4ed6c;
                Game_DataSymbolLoad(&v_40, "%sanims/%s.iff");
                Render_FileSIsNotIffFile(&v_40);
                void* dstD1 = srcS;
                int32_t j_1 = 0xffffffff;

                while (j_1)
                {
                    bool cond_2_1 = 0 != *dstD1;
                    dstD1 += 1;
                    j_1 -= 1;

                    if (!cond_2_1)
                        break;
                }

                i_1 = ctxB1;
                ctxB1 -= 1;
                srcS = srcS + ~j_1 - 1 + 1;
            } while (i_1 != 1);
            return 0;
        }
    }

    return result;
}
