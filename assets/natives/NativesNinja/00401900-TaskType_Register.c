#include "00401900-TaskType_Register.h"
/* 0x00401900 TaskType_Register full linked: callers=279 callees=4 */
int32_t TaskType_Register(int32_t a1, int32_t a2, int16_t a3, int32_t a4)

// Sig: uint16_t TaskType_Register(uint32_t p1, uint32_t p2, uint16_t
// parentType, uint32_t p4)
// Note: Registers and allocates a task type, copies the task handler table, and
// returns the allocated 16-bit type id. Ghidra/r2 CFG agreement: 18 basic
// blocks and 23 edges; see assets/IGI1-Native-Name-Evidence.json.
{
    int32_t ebp = 0;

    for (char* i = &g_af5f05; i < 0xafa705; )
    {
        if (!*i)
        {
            int32_t esi_1 = ebp * 0x30;
            *(esi_1 + &g_af5f05) = 1;
            *(esi_1 + 0xaf5ee4) = a2;
            *(esi_1 + &g_af5ee0) = a1;
            *(esi_1 + &g_af5ee8) = a3;

            if (a3 == 0x181)
                *(esi_1 + 0xaf5f0c) = 0x20000000;
            else
                *(esi_1 + 0xaf5f0c) = *(a3 * 0x30 + 0xaf5f0c);

            if (!a4)
                *(esi_1 + 0xaf5f04) = 0;
            else
            {
                sub_4b0b00(esi_1 + 0xaf5eec, a2, a4, 0);
                *(esi_1 + 0xaf5f04) = 1;
            }

            if (a3 == 0x181)
            {
                int32_t* eax_7 = (ebp << 2) + &g_a96ae0;
                int32_t j_2 = 0xfe;
                int32_t j;

                do
                {
                    *eax_7 = 0;
                    eax_7 = &eax_7[0x180];
                    j = j_2;
                    j_2 -= 1;
                } while (j != 1);
                int32_t eax_8 = QTask_DeleteTask();
                eax_8 = ebp;
                return eax_8;
            }

            int32_t* ecx_2 = (ebp << 2) + &g_a96ae0;
            int32_t j_3 = 0xfe;
            int32_t* eax_5 = (a3 << 2) + &g_a96ae0;
            int32_t j_1;

            do
            {
                int32_t esi_2 = *eax_5;
                eax_5 = &eax_5[0x180];
                *ecx_2 = esi_2;
                ecx_2 = &ecx_2[0x180];
                j_1 = j_3;
                j_3 -= 1;
            } while (j_1 != 1);
            int32_t eax_6 = QTask_DeleteTask();
            eax_6 = ebp;
            return eax_6;
        }

        i = &i[0x30];
        ebp += 1;
    }

    Error_Show("Unable to allocate task type");

    while (true)
        /* nop */
}
