#include "00478970-Gun_Update.h"
/* 0x00478970 Gun_Update full linked: callers=0 callees=1 */
void* sub_478970(void* a1)

{
    if (!*(a1 + 0x144))
    {
        void* result = *(a1 + 0x128);

        if (*(result + 0x618) == 5)
            return result;
    }

    return (*((sub_4c48c0() << 2) + &g_a982e0))(a1, 0);
}
