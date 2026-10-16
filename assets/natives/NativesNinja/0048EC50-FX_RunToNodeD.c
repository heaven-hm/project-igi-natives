#include "0048EC50-FX_RunToNodeD.h"
/* 0x0048ec50 FX_RunToNodeD full linked: callers=0 callees=4 */
int32_t sub_48ec50(int32_t a1, int32_t* a2)

{
    void* edi = a2[0xa];
    int32_t var_10 = *(edi + 8);
    char* var_14 = "Run To Node - %d";
    int32_t var_18 = 0xffffffff;
    int32_t var_1c = a1;
    sub_452660(a1);
    int32_t edi_1 = *(edi + 8);
    *(a1 + 0x3e30) = edi_1;
    char result = sub_4522a0(a1, edi_1, nullptr, 1);

    if (!result)
        return result;

    return sub_450ff0(a1, a2);
}
