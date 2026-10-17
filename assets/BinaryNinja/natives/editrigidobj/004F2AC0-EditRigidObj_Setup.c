// IGI native provenance: EditRigidObj_Setup - 0x004F2AC0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004F2AC0-EditRigidObj_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditRigidObj_Setup.h"
void* EditRigidObj_Setup(void* context)

{
    void* result = *(context + 0xe8);

    if (result)
    {
        int32_t entity_1 = 0;
        entity_1 = *(result + 0x1c);
        result = (*((entity_1 << 2) + &g_a970e0))(result);
    }

    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* data_3;

            if (!source_1)
                data_3 = nullptr;
            else
            {
                int32_t data_val = *source_1;
                int32_t data_1 = -(data_val);
                data_3 = (data_1 - data_1) & source_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_3;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_4 = 0;
            g_afa7e0 = temp_2;
            data_4 = i[7];
            result = *((data_4 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    return result;
}
