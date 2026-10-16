#include "gi_platform.h"
#include "004B73C0-Sys_Sortrender.h"
int32_t Sys_Sortrender()

{
    int32_t valA = Display_RestoreDevice_14("SortRender");
    g_943e48 = valA;
    return Display_SetGammaRamp_14(valA, sub_4b7100);
}
