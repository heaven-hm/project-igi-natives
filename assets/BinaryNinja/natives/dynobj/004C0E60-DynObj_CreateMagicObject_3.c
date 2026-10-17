// Original IGI.EXE function: DynObj_CreateMagicObject_3 (VA 0x004C0E60; static CFG gate PASS, CFG score 1.000).
#include "DynObj_CreateMagicObject_3.h"
int32_t DynObj_CreateMagicObject_3(int32_t* a1, int32_t* a2, char a3)

{
    void v_2c8;
    int32_t result = Sys_PushStack_26(&v_2c8, a2[6]);

    if (result)
    {
        int32_t result_1;
        result = result_1;

        if (result == 9 || result == 0xc)
        {
            char v_2cd = a3;
            int32_t v_2cc = 0;
            void v_2bf;

            if (result != 9)
                v_2cc = DynObj_FindSymbol_3(&v_2bf) + 0xfffffffb - *a2;
            else
            {
                void v_2c0;
                void** valA1 = Sys_ReadFileBlock_26(a2, &v_2c0);

                if (!valA1)
                    a2[1] = 1;
                else
                {
                    valA1[2] = *a2 + 1;
                    valA1[3] = *a2 + 5;
                }
            }
            *a1 = 5;
            Sys_CloseFileStream_4(a2[4], &v_2cd, 1);
            return Sys_CloseFileStream_4(a2[4], &v_2cc, 4);
        }
    }

    a2[1] = 1;
    return result;
}
