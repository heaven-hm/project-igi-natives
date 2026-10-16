#include "PhysicsObj_LoadLodQsc.h"

void* PhysicsObj_LoadLodQsc(void* pThis)

{
    g_a4ee88 = *(pThis + 0x20) * 0.0199999996f;
    g_a4ee80 = *(pThis + 0x24) * 0.0199999996f;
    g_a4ee84 = *(pThis + 0x28) * 0.0199999996f;
    g_a4ee94 = *(pThis + 0x2c) * 0.0199999996f;
    g_a4ee8c = *(pThis + 0x30) * 0.0199999996f;
    g_a4ee90 = *(pThis + 0x34) * 0.0199999996f;
    g_54835c = *(pThis + 0x38);
    g_a4ee98 = *(pThis + 0x3c) * 4096f;
    return pThis;
}
