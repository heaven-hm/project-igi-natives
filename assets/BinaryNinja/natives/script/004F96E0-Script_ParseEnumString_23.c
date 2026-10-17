// Original IGI.EXE function: Script_ParseEnumString_23 (VA 0x004F96E0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumString_23.h"
int32_t Script_ParseEnumString_23(void* context, int32_t param_2)

{
    int32_t result = *(context + 0x6c);

    if (result)
    {
        result = Script_UndefinedGraphnodeda(context);
        int32_t i_1 = param_2;

        if (i_1 > 0)
        {
            int32_t* entity_1 = nullptr;
            int32_t i;

            do
            {
                *(entity_1 + *(context + 0x6c)) = 0xffffffff;
                entity_1 += result;
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
    }

    return result;
}
