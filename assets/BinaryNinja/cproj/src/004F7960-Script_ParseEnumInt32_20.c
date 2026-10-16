#include "gi_platform.h"
#include "004F7960-Script_ParseEnumInt32_20.h"
int32_t** Script_ParseEnumInt32_20(int32_t a1)

{
    int32_t* valA = Display_CloseDevice_14(0x10);
    valA[1] = g_a76c8c;
    valA[3] = a1;
    return Display_ClearSurfaces_14(0, valA);
}
