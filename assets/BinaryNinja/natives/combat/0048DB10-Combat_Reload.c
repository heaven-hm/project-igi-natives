#include "Combat_Reload.h"
int32_t Combat_Reload(void* a1)

{
    void* valA2 = Table_GetAt(*(a1 + 0x14) + 0x4c4, 0);
    char* v_1c = "Stand - Reload";
    int32_t v_20 = 0xffffffff;
    void* v_24 = a1;
    int32_t v_8;
    Script_ParseEnumReal32_13(valA2, &v_8);
    int32_t valA3 = v_8;

    if (valA3)
    {
        valA3 = Locomotion_GetState(a1, 0);

        if (valA3)
        {
            valA3 = 1;
            *(a1 + 0x3df1) ^= 1;
            return valA3;
        }
    }

    valA3 = *(a1 + 0x3df1);
    *(a1 + 0x3c8c) = 0;

    if (!valA3)
    {
        int32_t valA4 = Script_SpawnNewTask_13(valA2, 1);
        valA4 = 0;
        return valA4;
    }

    *(a1 + 0x3c94) = 0x3f800000;
    valA3 = 0;
    return valA3;
}
