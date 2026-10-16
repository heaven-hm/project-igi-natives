#include "CombatPlayAnimation.h"
int32_t CombatPlayAnimation(void* a1, int32_t* a2)

{
    int32_t v_c = *(a2[0xa] + 8);
    char* v_10 = "Playing animation - %d";
    int32_t v_14 = 0xffffffff;
    void* v_18 = a1;
    char valA1 = Locomotion_GetState(a1, 3);

    if (valA1)
    {
        char* v_c_1 = "In progress";
        int32_t v_10_1 = 0xffffffff;
        void* v_14_1 = a1;
        return valA1;
    }

    if (*(a2[0xa] + 0xc))
        return AI_CombatTarget_2(a1, a2);

    char valA3 = Locomotion_GetState(a1, 0);

    if (!valA3)
    {
        char* v_c_2 = "Waiting for standstate";
        int32_t v_10_3 = 0xffffffff;
        void* v_14_2 = a1;
        return valA3;
    }

    char* v_c_3 = "Requesting action";
    int32_t v_10_4 = 0xffffffff;
    void* v_14_3 = a1;
    void* valA5 = AI_WriteChannel(a1, 3, *(a2[0xa] + 8));
    *(a2[0xa] + 0xc) = 1;
    return valA5;
}
