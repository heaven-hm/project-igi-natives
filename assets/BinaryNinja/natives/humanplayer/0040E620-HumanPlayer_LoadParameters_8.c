#include "HumanPlayer_LoadParameters_8.h"
char HumanPlayer_LoadParameters_8(void* a1, float a2)

{
    FallLanding(a2);
    char result = *(a1 + 8);

    if (result & 4)
    {
        __builtin_memset(a2 + 0x664, 0, 0x18);

        if (result & 1)
        {
            void* valA = Table_GetAt(a2 + 0x4c4, 0);

            if (valA)
            {
                Script_ParseEnumInt32_13(valA);
                Script_ExecuteLevelScript_12(a2 + 0x4c4, nullptr, nullptr);
                void* objC1 = *(a2 + 0xcfc);
                *(a2 + 0xd04) = *(a2 + 0xd08);
                *(a2 + 0xd08) = 1;
                int32_t valA2 = *(objC1 + 4);
                *(a2 + 0xd0c) = valA2;
                valA2(a2 + 0xcf8, a2);
            }

            result = Script_EvaluateCondition_12(a2);
            *(a1 + 0x14) = sub_45c740;
        }
    }

    return result;
}
