#include "Physics_SimulateRigidBody_4.h"
void* const __convention("regparm") Physics_SimulateRigidBody_4(int32_t a1, int32_t a2, void* a3, void* a4, int32_t a5, int32_t a6)

{
    void* const result_1 = a3;
    void* const result = a4;
    result_1 = nullptr;
    int32_t* i_1 = *(result + 8);

    if (*i_1 && i_1)
    {
        int32_t* i;

        do
        {
            int32_t* valA = *i_1;

            if (!valA)
                i = nullptr;
            else
            {
                int32_t dstD1 = *valA;
                int32_t dstD2 = -(dstD1);
                i = (dstD2 - dstD2) & valA;
            }

            uint32_t valA2 = Physics_CalculateSplineLength_5();
            int32_t tmpD = 0;
            tmpD = i_1[7];
            result = *(((valA2 * 0x180 + tmpD) << 2) + &g_a96ae0);

            if (result)
            {
                uint32_t valA4 = Physics_CalculateSplineLength_5();
                int32_t objC3 = 0;
                objC3 = i_1[7];
                (*(((valA4 * 0x180 + objC3) << 2) + &g_a96ae0))(i_1, &result_1);
                result = result_1;

                if (result)
                {
                    result = a5(result, a6);
                    result_1 = nullptr;
                }
            }

            i_1 = i;
        } while (i);
    }

    return result;
}
