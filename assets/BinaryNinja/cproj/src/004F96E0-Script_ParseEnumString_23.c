#include "gi_platform.h"
#include "004F96E0-Script_ParseEnumString_23.h"
int32_t Script_ParseEnumString_23(void* a1, int32_t a2)

{
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x6c));

    if (result)
    {
        result = Script_UndefinedGraphnodeda(a1);
        int32_t i_1 = a2;

        if (i_1 > 0)
        {
            int32_t* objC1 = nullptr;
            int32_t i;

            do
            {
                (*(int32_t*)(uintptr_t)(objC1 + *(a1 + 0x6c))) = 0xffffffff;
                objC1 += result;
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
    }

    return result;
}
