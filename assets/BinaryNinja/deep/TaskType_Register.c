/* LOGIC NOTE (TaskType_Register @ 0x00401900)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : Error_
   called by : AIGraph, AIStationaryGun, AIStationaryGunHolder, AddAmmo, Afterburner_Init
   data refs : none
   strings   : Unable to allocate task type
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "TaskType_Register.h"

int32_t TaskType_Register(int32_t arg1, int32_t arg2, int16_t arg3, int32_t arg4)

// Sig: uint16_t TaskType_Register(uint32_t p1, uint32_t p2, uint16_t
// parentType, uint32_t p4)
// Note: Registers and allocates a task type, copies the task handler table, and
// returns the allocated 16-bit type id. Ghidra/r2 CFG agreement: 18 basic
// blocks and 23 edges; see assets/IGI1-Native-Name-Evidence.json.
{
    int32_t frame = 0;

    for (char* i = &data_af5f05; i < 0xafa705; )
    {
        if (!*i)
        {
            int32_t src_1 = frame * 0x30;
            *(src_1 + &data_af5f05) = 1;
            *(src_1 + 0xaf5ee4) = arg2;
            *(src_1 + &data_af5ee0) = arg1;
            *(src_1 + &data_af5ee8) = arg3;

            if (arg3 == 0x181)
                *(src_1 + 0xaf5f0c) = 0x20000000;
            else
                *(src_1 + 0xaf5f0c) = *(arg3 * 0x30 + 0xaf5f0c);

            if (!arg4)
                *(src_1 + 0xaf5f04) = 0;
            else
            {
                Sys_FreeMemory_2(src_1 + 0xaf5eec, arg2, arg4, 0);
                *(src_1 + 0xaf5f04) = 1;
            }

            if (arg3 == 0x181)
            {
                int32_t* result_7 = (frame << 2) + &data_a96ae0;
                int32_t j_2 = 0xfe;
                int32_t j;

                do
                {
                    *result_7 = 0;
                    result_7 = &result_7[0x180];
                    j = j_2;
                    j_2 -= 1;
                } while (j != 1);
                int32_t result_8 = QTask_DeleteTask();
                result_8 = frame;
                return result_8;
            }

            int32_t* ctx_2 = (frame << 2) + &data_a96ae0;
            int32_t j_3 = 0xfe;
            int32_t* result_5 = (arg3 << 2) + &data_a96ae0;
            int32_t j_1;

            do
            {
                int32_t src_2 = *result_5;
                result_5 = &result_5[0x180];
                *ctx_2 = src_2;
                ctx_2 = &ctx_2[0x180];
                j_1 = j_3;
                j_3 -= 1;
            } while (j_1 != 1);
            int32_t result_6 = QTask_DeleteTask();
            result_6 = frame;
            return result_6;
        }

        i = &i[0x30];
        frame += 1;
    }

    Error_Show("Unable to allocate task type");

    while (true)
        /* nop */
}
