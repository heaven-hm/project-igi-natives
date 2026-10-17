// IGI native provenance: DynObj_CreateMagicObject_3 - 0x004C0E60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0E60-DynObj_CreateMagicObject_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_CreateMagicObject_3.h"
int32_t DynObj_CreateMagicObject_3(int32_t* context, int32_t* param_2, char param_3)

{
    void item_2c8;
    int32_t result = Sys_PushStack_26(&item_2c8, param_2[6]);

    if (result)
    {
        int32_t result_1;
        result = result_1;

        if (result == 9 || result == 0xc)
        {
            char item_2cd = param_3;
            int32_t item_2cc = 0;
            void item_2bf;

            if (result != 9)
                item_2cc = DynObj_FindSymbol_3(&item_2bf) + 0xfffffffb - *param_2;
            else
            {
                void item_2c0;
                void** data_1 = Sys_ReadFileBlock_26(param_2, &item_2c0);

                if (!data_1)
                    param_2[1] = 1;
                else
                {
                    data_1[2] = *param_2 + 1;
                    data_1[3] = *param_2 + 5;
                }
            }
            *context = 5;
            Sys_CloseFileStream_4(param_2[4], &item_2cd, 1);
            return Sys_CloseFileStream_4(param_2[4], &item_2cc, 4);
        }
    }

    param_2[1] = 1;
    return result;
}
