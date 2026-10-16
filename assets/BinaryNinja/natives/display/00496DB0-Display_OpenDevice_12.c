#include "Display_OpenDevice_12.h"
long double Display_OpenDevice_12(int32_t a1, int32_t a2)

{
    if (!g_6840e9)
        return 0f;

    int32_t* valA1 = Display_RestoreDevice_10(a1, a2);

    if (!valA1)
        return 0f;

    int32_t v_4 = 0;
    return valA1[8] / valA1[7];
}
