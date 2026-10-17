// IGI native provenance: ComputerMenu_Setup - 0x0046AE30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046AE30-ComputerMenu_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerMenu_Setup.h"
int32_t ComputerMenu_Setup(int32_t context)

{
    AI_CombatTarget_29();
    int32_t entity_val = g_c28b48;
    int32_t item_30 = entity_val;
    int32_t item_34 = entity_val;
    int32_t result =
        Sys_CloseFileStream_14(0.0f, 0.0f, g_c28b44, entity_val, 0.0f, 127.0f, 0.0f, 0xc0040000, 0xffffffff, 0x44079eb8);
    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_4;

            if (!temp_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *temp_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_4;
            g_afa7e0 = entity_1 + 1;
            int32_t data_5 = StatusScreen_GetEvent();
            int32_t data_6 = 0;
            data_6 = i[7];
            result = *(((data_5 * 0x180 + data_6) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    result = *(context + 0x2c);

    if (result)
        return result;

    return Sys_AllocateMemory_15(0x5bddc8, *(context + 0x24) - Sys_CloseFileStream_17(0x5bddc8) * 0.5f,
        *(context + 0x28) - Sys_ExecuteBytecode_17(0x5bddc8) * 0.5f, 128.0f, 128.0f, 128.0f, 0x3f800000, 0x44001eb8, 0,
        0x400c0000, 0xffffffff);
}
