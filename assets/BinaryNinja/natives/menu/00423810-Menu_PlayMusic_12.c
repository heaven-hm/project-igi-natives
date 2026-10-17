// IGI native provenance: Menu_PlayMusic_12 - 0x00423810 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00423810-Menu_PlayMusic_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_PlayMusic_12.h"
int32_t Menu_PlayMusic_12(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    int32_t item_4 = param_3;
    int32_t data_val = Config_SetResolution();
    int32_t* source_val = Config_SetGamma();
    Config_Moveleft(param_4, &item_4, nullptr);
    int32_t result = 0;

    if (data_val > 0)
    {
        do
        {
            if (*source_val == item_4)
                return result;

            source_val = &source_val[3];
            result += 1;
        } while (result < data_val);
    }

    return 0xffffffff;
}
