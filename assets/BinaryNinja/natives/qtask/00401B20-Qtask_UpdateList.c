// Original IGI.EXE function: Qtask_UpdateList (VA 0x00401B20; static CFG gate PASS, CFG score 1.000).
#include "Qtask_UpdateList.h"
int32_t Qtask_UpdateList(int32_t* a1)

// Sig: void Qtask_UpdateList(int* p1)
// Note: Update all QTask list, Params: p1 ??
{
    void* valA = *a1;

    if (valA)
        *(valA + 0x18) -= 1;

    int32_t* srcS = g_567c4c;
    int32_t result = g_567c40 - 1;
    int32_t objC = *(srcS + a1);
    g_567c40 = result;

    if (objC != result)
    {
        int32_t tmpD1 = g_567c3c;
        result = *(tmpD1 + (result << 2)) * g_567c48 + g_567c38;
        int32_t dstD2 = *(tmpD1 + (objC << 2));
        int32_t srcS1 = *(srcS + result);
        *(tmpD1 + (objC << 2)) = *(tmpD1 + (srcS1 << 2));
        *(g_567c3c + (srcS1 << 2)) = dstD2;
        *(g_567c4c + result) = objC;
    }

    return result;
}
