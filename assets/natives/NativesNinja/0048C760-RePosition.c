#include "0048C760-RePosition.h"
/* 0x0048c760 RePosition full linked: callers=0 callees=10 */
int32_t* sub_48c760(void* a1, int32_t* a2)

{
    char* var_10 = "Combat - RePosition";
    int32_t var_14 = 0xffffffff;
    void* var_18 = a1;
    void* edi_1 = a2[0xa] + 8;
    *(a1 + 0x3cdc) = 0x3f800000;
    sub_48a920(a1, edi_1);

    if (!*(a1 + 0x3de4))
        return sub_450ff0(a1, a2);

    void* eax_2 = *(a1 + 0x3ea0);

    if (!eax_2)
    {
        int32_t var_14_6 = sub_4f1050(a1);
        return Warning_Show("HumanAI #%d has no nodeoccupationiten");
    }

    int32_t var_1c_1 = 0x3fd33333;

    if (!
        sub_4f9a40(a1 + 0x3eb0, sub_4f9720(*(a1 + 0x3b6c), *(eax_2 + 0xc)), 4.17232506e-08f, 0))
    {
        int32_t var_10_3 = *(*(a1 + 0x3ea0) + 0xc);
        char* var_14_3 = "Position not on node #%d";
        int32_t var_18_1 = 0xffffffff;
        void* var_1c_2 = a1;
    }

    int32_t* result = sub_4522a0(a1, *(*(a1 + 0x3ea0) + 0xc), a1 + 0x3eb0, 0);

    if (!result)
        return result;

    return sub_48ae70(a1, a2, a2[7], 0);
}
