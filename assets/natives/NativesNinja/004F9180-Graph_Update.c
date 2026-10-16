#include "004F9180-Graph_Update.h"
/* 0x004f9180 Graph_Update full linked: callers=1 callees=6 */
int32_t sub_4f9180(void* a1)

{
    int32_t edi;
    edi = *(*(a1 + 0x14) + 0x1c);
    bool cond:0 = !TaskType_IsDerivedFrom(edi, sub_4c48c0());
    char eax_3 = *(a1 + 0x64);
    double var_18[0x3];

    if (cond:0)
    {
        if (eax_3)
        {
            sub_4f92e0(&var_18, a1);
            *(a1 + 0x64) = 0;
            sub_4f93b0(a1, &var_18);
        }
    }
    else if (!eax_3)
    {
        sub_4f92e0(&var_18, a1);
        *(a1 + 0x64) = 1;
        sub_4f93b0(a1, &var_18);
    }
    int32_t result = sub_4f1050(a1);
    *(a1 + 0x50) = result;
    return result;
}
