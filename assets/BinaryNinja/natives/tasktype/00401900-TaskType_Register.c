// Original IGI.EXE function: TaskType_Register (VA 0x00401900; static CFG gate PASS, CFG score 1.000).
#include "TaskType_Register.h"
int32_t TaskType_Register(int32_t a1, int32_t a2, int16_t a3, int32_t a4)

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
            int32_t srcS1 = flagP * 0x30;
            *(srcS1 + &g_af5f05) = 1;
            *(srcS1 + 0xaf5ee4) = a2;
            *(srcS1 + &g_af5ee0) = a1;
            *(srcS1 + &g_af5ee8) = a3;

            if (a3 == 0x181)
                *(srcS1 + 0xaf5f0c) = 0x20000000;
            else
                *(srcS1 + 0xaf5f0c) = *(a3 * 0x30 + 0xaf5f0c);

            if (!a4)
                *(srcS1 + 0xaf5f04) = 0;
            else
            {
                Sys_FreeMemory_2(srcS1 + 0xaf5eec, a2, a4, 0);
                *(srcS1 + 0xaf5f04) = 1;
            }

            if (a3 == 0x181)
            {
                int32_t* valA7 = (flagP << 2) + &g_a96ae0;
                int32_t j_2 = 0xfe;
                int32_t j;

                do
                {
                    *valA7 = 0;
                    valA7 = &valA7[0x180];
                    j = j_2;
                    j_2 -= 1;
                } while (j != 1);
                int32_t valA8 = QTask_DeleteTask();
                valA8 = flagP;
                return valA8;
            }

            int32_t* objC2 = (flagP << 2) + &g_a96ae0;
            int32_t j_3 = 0xfe;
            int32_t* valA5 = (a3 << 2) + &g_a96ae0;
            int32_t j_1;

            do
            {
                int32_t srcS2 = *valA5;
                valA5 = &valA5[0x180];
                *objC2 = srcS2;
                objC2 = &objC2[0x180];
                j_1 = j_3;
                j_3 -= 1;
            } while (j_1 != 1);
            int32_t valA6 = QTask_DeleteTask();
            valA6 = flagP;
            return valA6;
        }

        i = &i[0x30];
        flagP += 1;
    }

    Error_Show("Unable to allocate task type");

    while (true)
        /* nop */
}
