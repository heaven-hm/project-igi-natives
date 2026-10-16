#include "004883C0-FX_DebrisSpawn_10.h"
/* 0x004883c0 FX_DebrisSpawn_10 full linked: callers=1 callees=3 */
void** sub_4883c0(void* a1, void* a2)

{
    void** result = Mem_Alloc(0x2c, 4);
    result[0xa] = 0;
    result[9] = 0;
    result[8] = sub_4f1050(a2);
    result[7] = *(a2 + 0x1c);
    result[5] = a1;
    result[1] = 0;
    *result = nullptr;
    result[2] = &result[3];
    result[4] = &result[2];
    result[3] = 0;

    if (a1)
        sub_4af8f0(a1 + 8, result);

    return result;
}
