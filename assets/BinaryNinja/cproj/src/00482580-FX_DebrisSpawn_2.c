#include "gi_platform.h"
#include "00482580-FX_DebrisSpawn_2.h"
int32_t FX_DebrisSpawn_2(void* a1)

{
    int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0x68));

    if (valA)
    {
        void* srcS1 = *valA;
        int16_t valA1 = HumanPlayer_LoadParameters_12();
        int32_t objC;
        objC = *(srcS1 + 0x1c);

        if (TaskType_IsDerivedFrom(objC, valA1))
        {
            int32_t* valA3 = *(srcS1 + 0xde8);

            if (valA3 && *valA3)
                return 1;
        }
    }

    return 0;
}
