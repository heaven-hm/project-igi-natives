#include "Script_FormatString_22.h"
void* Script_FormatString_22(int32_t a1)

{
    if (a1 != 0xffffffff)
    {
        int32_t* i_1 = g_a77248;

        for (int32_t* i = *i_1; i; i = *i)
        {
            int32_t* valA1 = i_1[2];

            if (valA1)
            {
                void* result = *valA1;

                if (*(result + 0x50) == 0xffffffff)
                    *(result + 0x50) = Script_EvaluateCondition_4(result);

                if (a1 == *(result + 0x50))
                    return result;
            }

            i_1 = i;
        }
    }

    return 0;
}
