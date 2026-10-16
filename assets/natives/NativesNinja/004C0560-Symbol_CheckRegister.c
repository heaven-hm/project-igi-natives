#include "004C0560-Symbol_CheckRegister.h"
/* 0x004c0560 Symbol_CheckRegister full linked: callers=2 callees=7 */
int32_t Symbol_CheckRegister(int32_t* a1, int32_t* a2, int32_t a3)

// Sig: void* Symbol_CheckRegister(int* symTable, char* symName, int extra)
// Note: Checks a symbol and registers it if new - ERRORS via ErrorShow("Symbol
// \"%s\" already registered in hash table") if the name ALREADY exists, so it
// doubles as duplicate protection. Params: symTable, symName, extra =
// registration payload/flags. RETURNS symbol entry or triggers the error
// dialog.
{
    int32_t* __saved_esi_2 = a2;

    if (!sub_4c04b0(a1, &a2, __saved_esi_2))
    {
        int32_t* __saved_esi_3 = __saved_esi_2;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *__saved_esi_3;
            __saved_esi_3 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t* eax_1 = Mem_Alloc(~i + 0x10, 4);
        a2 = eax_1;
        eax_1[2] = &eax_1[4];
        int32_t* __saved_esi_4 = __saved_esi_2;
        a2[3] = a3;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:1_1 = 0 != *__saved_esi_4;
            __saved_esi_4 += 1;
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t ecx_3 = ~i_1;
        int32_t esi_1;
        int32_t edi_2;
        edi_2 = memcpy(a2[2], __saved_esi_4 - ecx_3, ecx_3 & 0xfffffffc);
        memcpy(edi_2, esi_1, ecx_3 & 3);
        a2[1] = 0;
        *a2 = 0;
        uint32_t eax_5 = sub_4c0530(__saved_esi_2, a1[1]);
        sub_4af910(*a1 + eax_5 * 0xc, a2);
        return a2[2];
    }

    int32_t* __saved_esi_1 = __saved_esi_2;
    Error_Show("Symbol "%s" already registered in hash table");

    while (true)
        /* nop */
}
