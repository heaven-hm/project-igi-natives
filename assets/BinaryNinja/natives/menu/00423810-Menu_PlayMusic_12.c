// Original IGI.EXE function: Menu_PlayMusic_12 (VA 0x00423810; static CFG gate PASS, CFG score 1.000).
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
