#include "Display_CheckCapabilities_10.h"
int32_t* Display_CheckCapabilities_10(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t* result = *(a1 + a2 * 0xc);

    for (int32_t* i = *result; i; i = *i)
    {
        if (result[3] == a3)
            return result;

        result = i;
    }

    return nullptr;
}
