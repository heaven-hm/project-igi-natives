// Original IGI.EXE function: Symbol_CheckRegister (VA 0x004C0560; static CFG gate PASS, CFG score 0.905).
#include "Symbol_CheckRegister.h"
int32_t Symbol_CheckRegister(int32_t* context, int32_t* param_2, int32_t param_3)

// Sig: void* Symbol_CheckRegister(int* symTable, char* symName, int extra)
// Note: Checks a symbol and registers it if new - ERRORS via ErrorShow("Symbol
// \"%s\" already registered in hash table") if the name ALREADY exists, so it
// doubles as duplicate protection. Params: symTable, symName, extra =
// registration payload/flags. RETURNS symbol entry or triggers the error
// dialog.
{
    int32_t* saved_esi_2 = param_2;

    if (!DynObj_InsertHashItem_2(context, &param_2, saved_esi_2))
    {
        int32_t* saved_esi_3 = saved_esi_2;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *saved_esi_3;
            saved_esi_3 += 1;
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t* data_1 = Mem_Alloc(~i + 0x10, 4);
        param_2 = data_1;
        data_1[2] = &data_1[4];
        int32_t* saved_esi_4 = saved_esi_2;
        param_2[3] = param_3;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_1_1 = 0 != *saved_esi_4;
            saved_esi_4 += 1;
            i_1 -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t entity_3 = ~i_1;
        int32_t source_1;
        int32_t dest_2;
        dest_2 = memcpy(param_2[2], saved_esi_4 - entity_3, entity_3 & 0xfffffffc);
        memcpy(dest_2, source_1, entity_3 & 3);
        param_2[1] = 0;
        *param_2 = 0;
        uint32_t data_5 = DynObj_LookupHashItem_2(saved_esi_2, context[1]);
        Camera_ApplyLineFilter_33(*context + data_5 * 0xc, param_2);
        return param_2[2];
    }

    int32_t* saved_esi_1 = saved_esi_2;
    Error_Show("Symbol "%s" already registered in hash table");

    while (true)
        /* nop */
}
