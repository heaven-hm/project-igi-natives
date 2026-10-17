// Original IGI.EXE function: DynObj_UpdateDynTree_7 (VA 0x004C6160; static CFG gate PASS, CFG score 1.000).
#include "DynObj_UpdateDynTree_7.h"
int32_t DynObj_UpdateDynTree_7(void* a1)

{
    int32_t* srcS = a1 + 0xe00;
    int32_t i = 0xffffffff;
    int32_t* dstD = srcS;
    int32_t result = 0;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    if (~i != 1)
    {
        void* objC2;
        int32_t tmpD1;
        result = Sys_AllocateMemory_16(srcS);

        if (result)
        {
            int32_t* v_20_1 = srcS;
            int32_t v_8;
            int32_t* valA1;
            int32_t objC3;
            valA1 = Resource_Load(&v_8, tmpD1, objC2, &v_8);
            int32_t* dstD1 = valA1;
            *(a1 + 0xdf8) = dstD1;

            if (dstD1)
            {
                int32_t flagP1 = 0;

                if (v_8 > 0)
                {
                    int32_t* ctxB1 = &g_b81b20;

                    do
                    {
                        int32_t srcS1 = *dstD1;

                        if (srcS1)
                        {
                            if (Sys_PushStack_8(objC3) > 1)
                                Sys_ExecuteBytecode_8(1);

                            int32_t valA5;
                            valA5 = Sys_PushStack_8(Sys_OpenFileStream_8(&ctxB1[2], *(a1 + 0xdf4), srcS1, srcS1,
                                srcS1, 1, &dstD1[1]));

                            if (valA5 > 1)
                                objC3 = Sys_ExecuteBytecode_8(0xffffffff);

                            *ctxB1 = srcS1;
                            ctxB1[1] = &dstD1[1];
                        }

                        ctxB1 = &ctxB1[0xb];
                        int32_t valA7 = srcS1 * srcS1;
                        dstD1 = &dstD1[1] + valA7;
                        flagP1 = flagP1 + 4 + valA7;
                    } while (flagP1 < v_8);
                }
            }

            return Resource_Unload(srcS);
        }
    }

    return result;
}
