// Original IGI.EXE function: Physics_SimulateRigidBody_4 (VA 0x00505920; static CFG gate PASS, CFG score 1.000).
#include "Physics_SimulateRigidBody_4.h"
void* const Physics_SimulateRigidBody_4(int32_t context, int32_t param_2, void* param_3, void* param_4, int32_t param_5, int32_t param_6)

{
    void* const result_1 = param_3;
    void* const result = param_4;
    result_1 = nullptr;
    int32_t* i_1 = *(result + 8);

    if (*i_1 && i_1)
    {
        int32_t* i;

        do
        {
            int32_t* data_val = *i_1;

            if (!data_val)
                i = nullptr;
            else
            {
                int32_t dest_1 = *data_val;
                int32_t dest_2 = -(dest_1);
                i = (dest_2 - dest_2) & data_val;
            }

            uint32_t data_2 = Physics_CalculateSplineLength_5();
            int32_t temp_val = 0;
            temp_val = i_1[7];
            result = *(((data_2 * 0x180 + temp_val) << 2) + &g_a96ae0);

            if (result)
            {
                uint32_t data_4 = Physics_CalculateSplineLength_5();
                int32_t entity_3 = 0;
                entity_3 = i_1[7];
                (*(((data_4 * 0x180 + entity_3) << 2) + &g_a96ae0))(i_1, &result_1);
                result = result_1;

                if (result)
                {
                    result = param_5(result, param_6);
                    result_1 = nullptr;
                }
            }

            i_1 = i;
        } while (i);
    }

    return result;
}
