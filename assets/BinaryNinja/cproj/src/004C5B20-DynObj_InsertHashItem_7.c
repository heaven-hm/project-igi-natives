#include "gi_platform.h"
#include "004C5B20-DynObj_InsertHashItem_7.h"
void* DynObj_InsertHashItem_7(void* a1)

{
    void* result = Mem_Alloc(0xf00, 4);
    int32_t i_1 = 0;
    *(result + 0xdfc) = 0;
    *(result + 0xc) = 0;
    *(result + 0xe00) = 0;
    __builtin_memset(result + 0xd1c, 0, 0x20);
    *(result + 0xd18) = 0;
    *(result + 0xdec) = 0;
    *(result + 0xdf8) = 0;

    for (int32_t* i = &g_b81b24; i < 0xb97b24; i = &i[0xb])
    {
        i[-1] = 0;
        *i = 0;
    }

    *(result + 0xdc4) = 0;
    *(result + 0xdc0) = 0;
    *(result + 0xde0) = 0;
    *(result + 0xde4) = 0;
    *(result + 0xde8) = 0;
    *(result + 0xdbc) = 0;
    *(result + 0xdf4) = 0;
    *(result + 8) = 0;
    *(result + 4) = 0;
    *(result + 0xdcc) = 0;
    *(result + 0xdd0) = 0;
    Sys_FreeMemory_2(result + 0xd00, 0x40, a1, 4);
    a1 = result + 0x118;
    int32_t* ctxB = result + 0xe8;

    do
    {
        int32_t objC1 = *(result + 0xd08);
        int32_t* valA4 =
            *(*(result + 0xd04) + (objC1 << 2)) * *(result + 0xd10) + *(result + 0xd00);
        *(valA4 + *(result + 0xd14)) = objC1;
        void* result_1 = result;
        *(result + 0xd08) += 1;
        ctxB[-0x36] = valA4;
        DynObj_LookupHashItem_7(valA4, 0, 0x40000000, i_1);
        *ctxB = 0;
        DynObj_LookupHashItem_12(result, i_1);
        __builtin_memset(a1, 0, 0x1fc);
        ctxB[6] = g_536148;
        i_1 += 1;
        ctxB = &ctxB[1];
        a1 += 0x1fc;
    } while (i_1 < 6);

    *(result + 0xdc8) = 0;
    *(result + 0xdf0) = 0;
    g_b97d20 = 0;
    DynObj_ParseConfigFile_6();
    return result;
}
