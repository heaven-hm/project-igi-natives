// IGI native provenance: Qvm_ProcessOpcodenotimpleme - 0x004C1400 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C1400-Qvm_ProcessOpcodenotimpleme.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_ProcessOpcodenotimpleme.h"

int32_t Qvm_ProcessOpcodenotimpleme(int32_t* arg1, int32_t* arg2, int32_t arg3)

{
    uint32_t eax_2;
    int32_t* context_val;
    int32_t edx_1;
    int32_t* source_ptr;

    if (arg3 - 8 <= 6)
        switch (arg3)
        {
            case 8:
            case 0xc:
            {
                source_ptr = arg1;
                context_val = arg2;
                int32_t data_val = source_ptr[2];
                edx_1 = data_val + 5;
                eax_2 = *(*context_val + data_val + 1);
            label_4c1475:
                source_ptr[2] = edx_1;
                goto label_4c1478;
            }
            case 9:
            case 0xd:
            {
                source_ptr = arg1;
                context_val = arg2;
                uint32_t ebx_1 = 0;
                int32_t edx_2 = source_ptr[2];
                ebx_1 = *(*context_val + edx_2 + 1);
                eax_2 = ebx_1;
                source_ptr[2] = edx_2 + 2;
            label_4c1478:
                int32_t edx_5 = 0;
                edx_5 = *(arg3 + &jump_table_4c1514[1]);

                switch (edx_5)
                {
                    case 0:
                    {
                        char* eax_10 = DynObj_RegisterSymbol_4(&context_val[0xc], eax_2);

                        if (eax_10)
                            DynObj_FindSymbol_4(*source_ptr, eax_10);
                        break;
                    }
                    case 1:
                    {
                        int32_t eax_8 = DynObj_RegisterSymbol_4(&context_val[0x12], eax_2);

                        if (eax_8)
                        {
                            int32_t edi_1 = eax_8;
                            int32_t i = 0xffffffff;

                            while (i)
                            {
                                bool cond:0_1 = 0 != *edi_1;
                                edi_1 += 1;
                                i -= 1;

                                if (!cond:0_1)
                                    break;
                            }

                            Sys_CloseFileStream_4(*source_ptr, eax_8, ~i - 1);
                        }
                        break;
                    }
                }

                return Sys_CloseFileStream_4(*source_ptr, &g_534364, 2);
                break;
            }
            case 0xa:
            case 0xe:
            {
                source_ptr = arg1;
                context_val = arg2;
                int32_t edx_4 = source_ptr[2];
                arg1 = *(*context_val + edx_4 + 1);
                eax_2 = arg1;
                edx_1 = edx_4 + 3;
                goto label_4c1475;
            }
        }
    Error_Show("Opcode not implemented for PUSHSTRING");

    while (true)
        /* nop */
}
