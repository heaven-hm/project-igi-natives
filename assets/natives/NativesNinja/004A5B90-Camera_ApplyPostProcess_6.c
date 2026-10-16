#include "004A5B90-Camera_ApplyPostProcess_6.h"
/* 0x004a5b90 Camera_ApplyPostProcess_6 full linked: callers=4 callees=0 */
void sub_4a5b90(int32_t* a1, int32_t a2)

{
    for (int32_t* i = a1; i < a2; i = &i[1])
    {
        int32_t eax = *i;

        if (eax)
            eax();
    }
}
