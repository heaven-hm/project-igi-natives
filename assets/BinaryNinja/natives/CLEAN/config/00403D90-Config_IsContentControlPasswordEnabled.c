// IGI native provenance: Config_IsContentControlPasswordEnabled - 0x00403D90 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00403D90-Config_IsContentControlPasswordEnabled.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_IsContentControlPasswordEnabled.h"
int32_t Config_IsContentControlPasswordEnabled(int32_t context)

// Sig: int Config_IsContentControlPasswordEnabled()
// Note: RETURNS 1 if a content-control password is SET (parental lock active),
// else 0. Takes no args. Use to decide whether to ask for the password.
{
    char* dest_val = &g_bc79c8;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val = &dest_val[1];
        i -= 1;

        if (!flag_0_1)
            break;
    }

    char* dest_1 = &g_bc79c8;
    int32_t item_18 = ~i - 1;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool flag_1_1 = 0 != *dest_1;
        dest_1 = &dest_1[1];
        i_1 -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t item_1c = 0;
    char* item_8 = &g_567c74;
    double item_10 = (~i_1 - 1);
    memcpy(context, &item_18, 0x18);
    return context;
}
