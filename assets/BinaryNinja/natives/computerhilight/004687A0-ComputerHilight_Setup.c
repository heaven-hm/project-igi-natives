#include "ComputerHilight_Setup.h"
int32_t ComputerHilight_Setup(int80_t a1 @ fp0, int32_t* a2, void* a3)

{
    int32_t* dstD = a2;
    Script_SpawnNewTask_7(&dstD[0xe], dstD);
    int32_t result = a1;

    if (result)
    {
        int32_t flagP1 = 0;
        *(a3 + 0x18) = dstD[0xa4];
        *(a3 + 0x1c) = dstD[0xad];
        *(a3 + 0x20) = dstD[0xb6];
        *(a3 + 0x24) = &dstD[0xb7];
        *(a3 + 0x28) = &dstD[0xf7];
        result = dstD[0x63];

        if (result > 0)
        {
            a2 = &dstD[0x64];

            do
            {
                void* valA3 = Script_ExecuteLevelScript_4(*a2);

                if (valA3)
                {
                    uint32_t valA5 = AI_CheckHearing_25();
                    int32_t objC4 = 0;
                    objC4 = *(valA3 + 0x1c);
                    int32_t valA9 = *(((valA5 * 0x180 + objC4) << 2) + &g_a96ae0);

                    if (valA9)
                        valA9(valA3, a3);
                }

                result = dstD[0x63];
                flagP1 += 1;
                a2 = &a2[1];
            } while (flagP1 < result);
        }
    }

    return result;
}
