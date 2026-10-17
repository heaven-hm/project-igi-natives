// Original IGI.EXE function: DynObj_UpdateDynTree_14 (VA 0x004CF690; static CFG gate PASS, CFG score 1.000).
#include "DynObj_UpdateDynTree_14.h"
int32_t* DynObj_UpdateDynTree_14(void* a1)

{
    int32_t* result = Mem_Alloc(0x14, 4);
    void* v_24 = a1;
    char* v_28 = &g_a4ed6c;
    int32_t ctxB = 0;
    result[1] = 0;
    *result = 0;
    int32_t valA1;
    void* objC;
    int32_t tmpD;
    valA1 = Game_DataSymbolLoad(0xa4ec6c, "%smodels/%s.mef");
    int32_t v_38 = 0xa4ec6c;
    int32_t* valA2 = Resource_Load(valA1, tmpD, objC, nullptr);
    result[4] = valA2;
    int32_t v_8;
    result[3] = DynObj_CreateMagicObject_13(valA2, 0x534d4553, &v_8);
    void* tmpD2 = result[4];
    result[2] = v_8 / 0x1c;
    void* valA5 = DynObj_CreateMagicObject_13(tmpD2, 0x53464143, nullptr);
    void* valA7 = DynObj_CreateMagicObject_13(result[4], 0x53565458, nullptr);
    void* valA8 = DynObj_CreateMagicObject_13(result[4], 0x45444745, nullptr);
    int32_t i = 0;

    if (result[2] > 0)
    {
        do
        {
            void** objC8 = result[3] + ctxB;
            ctxB += 0x1c;
            i += 1;
            *objC8 = valA5 + *objC8 * 0x1c;
            int32_t tmpD7 = objC8[2];
            objC8[1] = valA7 + objC8[1] * 0xc;
            objC8[2] = valA8 + (tmpD7 << 3);
        } while (i < result[2]);
    }

    return result;
}
