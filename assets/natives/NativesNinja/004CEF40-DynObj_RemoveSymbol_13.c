#include "004CEF40-DynObj_RemoveSymbol_13.h"
/* 0x004cef40 DynObj_RemoveSymbol_13 full linked: callers=1 callees=5 */
int32_t* sub_4cef40()

{
    sub_4b0eb0(g_54820c);
    sub_4b0eb0(g_548208);
    sub_4b0eb0(g_548204);
    sub_4b0eb0(g_548200);
    int32_t* result = g_a4ec68;

    for (int32_t* i = result[1]; i; i = i[1])
    {
        sub_4cf9d0(result);
        result = i;
    }

    return result;
}
