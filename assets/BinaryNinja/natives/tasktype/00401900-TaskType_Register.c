// Original IGI.EXE function: TaskType_Register (VA 0x00401900; static CFG gate PASS, CFG score 1.000).
#include "TaskType_Register.h"
int32_t TaskType_Register(int32_t context, int32_t param_2, int16_t param_3, int32_t param_4)

// Sig: uint16_t TaskType_Register(uint32_t p1, uint32_t p2, uint16_t
// parentType, uint32_t p4)
// Note: Registers and allocates a task type, copies the task handler table, and
// returns the allocated 16-bit type id. Ghidra/r2 CFG agreement: 18 basic
// blocks and 23 edges; see assets/IGI1-Native-Name-Evidence.json.
{
    int32_t flagP = 0;

    for (char* i = &g_af5f05; i < 0xafa705; )
    {
        if (!*i)
        {
            int32_t source_1 = flagP * 0x30;
            *(source_1 + &g_af5f05) = 1;
            *(source_1 + 0xaf5ee4) = param_2;
            *(source_1 + &g_af5ee0) = context;
            *(source_1 + &g_af5ee8) = param_3;

            if (param_3 == 0x181)
                *(source_1 + 0xaf5f0c) = 0x20000000;
            else
                *(source_1 + 0xaf5f0c) = *(param_3 * 0x30 + 0xaf5f0c);

            if (!param_4)
                *(source_1 + 0xaf5f04) = 0;
            else
            {
                Sys_FreeMemory_2(source_1 + 0xaf5eec, param_2, param_4, 0);
                *(source_1 + 0xaf5f04) = 1;
            }

            if (param_3 == 0x181)
            {
                int32_t* data_7 = (flagP << 2) + &g_a96ae0;
                int32_t j_2 = 0xfe;
                int32_t j;

                do
                {
                    *data_7 = 0;
                    data_7 = &data_7[0x180];
                    j = j_2;
                    j_2 -= 1;
                } while (j != 1);
                int32_t data_8 = QTask_DeleteTask();
                data_8 = flagP;
                return data_8;
            }

            int32_t* entity_2 = (flagP << 2) + &g_a96ae0;
            int32_t j_3 = 0xfe;
            int32_t* data_5 = (param_3 << 2) + &g_a96ae0;
            int32_t j_1;

            do
            {
                int32_t source_2 = *data_5;
                data_5 = &data_5[0x180];
                *entity_2 = source_2;
                entity_2 = &entity_2[0x180];
                j_1 = j_3;
                j_3 -= 1;
            } while (j_1 != 1);
            int32_t data_6 = QTask_DeleteTask();
            data_6 = flagP;
            return data_6;
        }

        i = &i[0x30];
        flagP += 1;
    }

    Error_Show("Unable to allocate task type");

    while (true)
        /* nop */
}
