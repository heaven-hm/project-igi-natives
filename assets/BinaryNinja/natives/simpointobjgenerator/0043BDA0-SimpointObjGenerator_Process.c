#include "SimpointObjGenerator_Process.h"
int32_t SimpointObjGenerator_Process(void* a1)

{
    void* valA = DynObj_Missing(a1 + 0xf4);

    if (!valA && a1 + 0xf4 && *(a1 + 0xf5) != 0x2a)
    {
        char* v_118_1 = a1 + 0xf4;
        void v_80;
        Game_DataSymbolLoad(&v_80, "Model "%s" not available");
        char* dstD1 = a1 + 0xf4;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 = &dstD1[1];
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC1 = ~i;
        void v_100;
        int32_t srcS2;
        int32_t dstD3;
        dstD3 = memcpy(&v_100, dstD1 - objC1, objC1 & 0xfffffffc);
        memcpy(dstD3, srcS2, objC1 & 3);
        void* v_124_1 = &v_100;
        Game_DataSymbolLoad(a1 + 0xf4, "** %s **");
    }

    int32_t result = DynObj_CreateMagicObject_5(a1, valA);
    *(a1 + 0xf0) = 0;
    return result;
}
