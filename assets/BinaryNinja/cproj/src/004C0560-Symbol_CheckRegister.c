#include "gi_platform.h"
#include "004C0560-Symbol_CheckRegister.h"
int32_t Symbol_CheckRegister(int32_t* a1, int32_t* a2, int32_t a3)

// Sig: void* Symbol_CheckRegister(int* symTable, char* symName, int extra)
// Note: Checks a symbol and registers it if new - ERRORS via ErrorShow("Symbol
// \"%s\" already registered in hash table") if the name ALREADY exists, so it
// doubles as duplicate protection. Params: symTable, symName, extra =
// registration payload/flags. RETURNS symbol entry or triggers the error
// dialog.
{
    int32_t* __saved_esi_2 = a2;

    if (!DynObj_InsertHashItem_2(a1, &a2, __saved_esi_2))
    {
        int32_t* __saved_esi_3 = __saved_esi_2;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *__saved_esi_3;
            __saved_esi_3 += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t* valA1 = Mem_Alloc(~i + 0x10, 4);
        a2 = valA1;
        valA1[2] = &valA1[4];
        int32_t* __saved_esi_4 = __saved_esi_2;
        a2[3] = a3;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_1_1 = 0 != *__saved_esi_4;
            __saved_esi_4 += 1;
            i_1 -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t objC3 = ~i_1;
        int32_t srcS1;
        int32_t dstD2;
        dstD2 = memcpy(a2[2], __saved_esi_4 - objC3, objC3 & 0xfffffffc);
        memcpy(dstD2, srcS1, objC3 & 3);
        a2[1] = 0;
        *a2 = 0;
        uint32_t valA5 = DynObj_LookupHashItem_2(__saved_esi_2, a1[1]);
        Camera_ApplyLineFilter_33(*a1 + valA5 * 0xc, a2);
        return a2[2];
    }

    int32_t* __saved_esi_1 = __saved_esi_2;
    Error_Show("Symbol "%s" already registered in hash table");

    while (true)
        /* nop */
}
