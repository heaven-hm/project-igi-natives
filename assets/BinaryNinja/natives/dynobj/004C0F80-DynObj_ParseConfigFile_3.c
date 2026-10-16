#include "DynObj_ParseConfigFile_3.h"
void** DynObj_ParseConfigFile_3(void** a1, int32_t* a2)

{
    void v_2c8;
    void** valA1 = Sys_PushStack_26(&v_2c8, a2[6]);

    if (valA1)
    {
        void** v_4;
        valA1 = v_4;
        int32_t dstD1 = *a2;
        int32_t ctxB1 = 0;
        int32_t v_2cc = 0;

        if (valA1 == 7)
        {
            int32_t* valA2 = a2[4];
            char v_2cd = 0x18;
            Sys_CloseFileStream_4(valA2, &v_2cd, 1);
            Sys_CloseFileStream_4(a2[4], &v_2cc, 4);
            valA1 = Sys_PushStack_26(&v_2c8, a2[6]);

            if (valA1)
            {
                int32_t dstD2 = dstD1 + 5;

                while (true)
                {
                    valA1 = v_4;

                    if (valA1 == 9)
                    {
                        void v_2c0;
                        valA1 = Sys_ReadFileBlock_26(a2, &v_2c0);

                        if (!valA1)
                            break;

                        valA1[2] = dstD2;
                        valA1[3] = 0;
                        goto label_4c1055;
                    }

                    if (valA1 == 0xc)
                    {
                        void v_2bf;
                        v_2cc = DynObj_FindSymbol_3(&v_2bf);
                    label_4c1055:
                        Sys_CloseFileStream_4(a2[4], &v_2cc, 4);
                        ctxB1 += 1;
                        dstD2 += 4;
                        valA1 = Sys_PushStack_26(&v_2c8, a2[6]);

                        if (!valA1)
                            break;

                        valA1 = v_4;

                        if (valA1 == 6)
                        {
                            valA1 = Sys_PushStack_26(&v_2c8, a2[6]);

                            if (!valA1)
                                break;

                            continue;
                        }
                        else if (valA1 != 8)
                            break;
                    }
                    else if (valA1 != 8)
                        break;

                    *a1 = (ctxB1 << 2) + 5;
                    int32_t* valA8 = Sys_AllocateMemory_26(a2, *a2 + 1);
                    valA8[3] = ctxB1;
                    return valA8;
                }
            }
        }
    }

    a2[1] = 1;
    return valA1;
}
