#include "Light_ComputeDirectionalLight_11.h"
int32_t Light_ComputeDirectionalLight_11(void* a1, char* a2)

{
    int32_t v_4 = *(a1 + 0x14);
    int32_t v_8 = *(a1 + 0x10);
    int32_t v_c = *(a1 + 0xc);
    return Game_DataSymbolLoad(a2, "%02d-%02d-%02d");
}
