// IGI native provenance: HumanPlayer_UpdateMotion_11 - 0x00413CC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00413CC0-HumanPlayer_UpdateMotion_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateMotion_11.h"
int32_t* HumanPlayer_UpdateMotion_11(int32_t* context, int32_t param_2)

{
    int32_t* data_val = context;
    int32_t* i = data_val[2];

    if (*i && i)
    {
        do
        {
            int32_t entity_val;
            int32_t temp_val;
            data_val = HumanPlayer_LoadParameters_13(data_val, temp_val, entity_val, i);

            if (data_val && *data_val == param_2)
                return i;

            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return 0;
}
