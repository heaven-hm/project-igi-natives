#include "0048DEC0-CombatPlayAnimation.h"
/* 0x0048dec0 CombatPlayAnimation full linked: callers=0 callees=8 */
int32_t sub_48dec0(void* a1, int32_t* a2)

{
    int32_t var_c = *(a2[0xa] + 8);
    char* var_10 = "Playing animation - %d";
    int32_t var_14 = 0xffffffff;
    void* var_18 = a1;
    char eax_1 = sub_48efe0(a1, 3);

    if (eax_1)
    {
        char* var_c_1 = "In progress";
        int32_t var_10_1 = 0xffffffff;
        void* var_14_1 = a1;
        return eax_1;
    }

    if (*(a2[0xa] + 0xc))
        return sub_450ff0(a1, a2);

    char eax_3 = sub_48efe0(a1, 0);

    if (!eax_3)
    {
        char* var_c_2 = "Waiting for standstate";
        int32_t var_10_3 = 0xffffffff;
        void* var_14_2 = a1;
        return eax_3;
    }

    char* var_c_3 = "Requesting action";
    int32_t var_10_4 = 0xffffffff;
    void* var_14_3 = a1;
    void* eax_5 = sub_48ef70(a1, 3, *(a2[0xa] + 8));
    *(a2[0xa] + 0xc) = 1;
    return eax_5;
}
