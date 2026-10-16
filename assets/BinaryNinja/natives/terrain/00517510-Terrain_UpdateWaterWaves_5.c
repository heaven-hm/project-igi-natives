#include "Terrain_UpdateWaterWaves_5.h"
int32_t Terrain_UpdateWaterWaves_5(char* a1)

{
    char* tmpD = a1;
    char valA = *tmpD;
    int32_t objC;

    if (valA != 0x24)
    {
        if (valA != 0x30)
            return Camera_ResetMatrix_4(tmpD);

        objC = tmpD[1];

        if (objC != 0x78 && objC != 0x58)
            return Camera_ResetMatrix_4(tmpD);

        if (valA != 0x24)
            tmpD = &tmpD[1];
    }

    objC = tmpD[1];
    void* tmpD1 = &tmpD[1];
    int32_t result = 0;

    while (objC)
    {
        int32_t valA2 = result << 4;

        if (objC <= 0x39)
        {
            objC &= 0xf;
            result = valA2 + objC;
        }
        else
        {
            objC &= 0xf;
            result = valA2 + objC + 9;
        }

        objC = *(tmpD1 + 1);
        tmpD1 += 1;
    }

    return result;
}
