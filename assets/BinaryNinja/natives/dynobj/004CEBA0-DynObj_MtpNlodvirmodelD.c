// IGI native provenance: DynObj_MtpNlodvirmodelD - 0x004CEBA0 - CFG score 77.8% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004CEBA0-DynObj_MtpNlodvirmodelD.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_MtpNlodvirmodelD.h"
void* DynObj_MtpNlodvirmodelD(int32_t context)

{
    int32_t dest_val = context;

    if (!dest_val)
        return 0;

    int32_t data_1 = g_a4edec;

    if (data_1 < 0x258)
    {
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_val;
            dest_val += 1;
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_val = ~i;
        int32_t source_1;
        int32_t dest_3;
        dest_3 = memcpy(data_1 * 0x48 + &g_a443b4, dest_val - entity_val, entity_val & 0xfffffffc);
        memcpy(dest_3, source_1, entity_val & 3);
        g_a4edec += 1;
        return data_1 * 0x48 + &g_a443a0;
    }

    int32_t saved_obj = 0x258;
    Error_Show("MTP_nLODVirModel >= %d");

    while (true)
        /* nop */
}
