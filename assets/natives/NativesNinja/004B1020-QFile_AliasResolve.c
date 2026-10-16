#include "004B1020-QFile_AliasResolve.h"
/* 0x004b1020 QFile_AliasResolve full linked: callers=10 callees=12 */
int32_t QFile_AliasResolve(char* a1, void* a2, int32_t a3)

// Sig: int QFile_AliasResolve(char* outputPath, const char* inputPath, int
// maxDepth)
// Note: Resolves semicolon-separated QFile path aliases, copies the resolved
// path, and returns the alias depth. Ghidra/r2 CFG agreement: 17 basic blocks
// and 25 edges; see assets/IGI1-Native-Name-Evidence.json.
{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    int32_t ebx = 0;

    for (void* i = &g_942330; i < &g_9435b0; )
    {
        if (*(i + 0x90))
        {
            void* i_3 = i;
            int32_t j = 0xffffffff;

            while (j)
            {
                bool cond:0_1 = 0 != *i_3;
                i_3 += 1;
                j -= 1;

                if (!cond:0_1)
                    break;
            }

            if (!sub_4aad10(a2, i, ~j - 1))
            {
                int32_t ebx_2 = a3;
                char* esi_4 = ebx * 0x94 + &g_942340;

                if (ebx_2)
                {
                    while (true)
                    {
                        char* var_1c_2 = esi_4;
                        void* eax_4 = sub_4aa0a0(0x3b);

                        if (!eax_4)
                        {
                            char* var_18_2 = ebx * 0x94 + &g_942340;
                            Error_Show("Error in alias path: %s");

                            while (true)
                                /* nop */
                        }
                        else
                        {
                            esi_4 = eax_4 + 1;
                            int32_t temp0_1 = ebx_2;
                            ebx_2 -= 1;

                            if (temp0_1 == 1)
                                break;
                        }
                    }
                }

                char* var_1c_3 = esi_4;
                int32_t result;

                if (!sub_4aa0a0(0x3b))
                    result = 0;
                else
                    result = a3 + 1;

                char j_1 = *esi_4;
                char* edx_3 = a1;

                if (j_1 != 0x3b)
                {
                    while (j_1)
                    {
                        *edx_3 = j_1;
                        j_1 = esi_4[1];
                        edx_3 = &edx_3[1];
                        esi_4 = &esi_4[1];

                        if (j_1 == 0x3b)
                            break;
                    }
                }

                int32_t j_2 = 0xffffffff;
                void* edi_9 = a2 + ~j - 1;

                while (j_2)
                {
                    bool cond:4_1 = 0 != *edi_9;
                    edi_9 += 1;
                    j_2 -= 1;

                    if (!cond:4_1)
                        break;
                }

                int32_t ecx_13 = ~j_2;
                int32_t esi_7;
                int32_t edi_12;
                edi_12 = memcpy(edx_3, edi_9 - ecx_13, ecx_13 & 0xfffffffc);
                memcpy(edi_12, esi_7, ecx_13 & 3);
                char* edi_13 = a1;
                int32_t j_3 = 0xffffffff;

                while (j_3)
                {
                    bool cond:5_1 = 0 != *edi_13;
                    edi_13 = &edi_13[1];
                    j_3 -= 1;

                    if (!cond:5_1)
                        break;
                }

                int32_t ecx_17 = ~j_3;
                int32_t esi_9;
                int32_t edi_15;
                edi_15 = memcpy(&g_943a18, edi_13 - ecx_17, ecx_17 & 0xfffffffc);
                memcpy(edi_15, esi_9, ecx_17 & 3);
                return result;
            }
        }

        i += 0x94;
        ebx += 1;
    }

    int32_t i_1 = 0xffffffff;
    void* edi_1 = a2;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_1;
        edi_1 += 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t ecx_4 = ~i_1;
    int32_t esi_1;
    int32_t edi_4;
    edi_4 = memcpy(a1, edi_1 - ecx_4, ecx_4 & 0xfffffffc);
    memcpy(edi_4, esi_1, ecx_4 & 3);
    void* edi_5 = a2;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond:2_1 = 0 != *edi_5;
        edi_5 += 1;
        i_2 -= 1;

        if (!cond:2_1)
            break;
    }

    int32_t ecx_8 = ~i_2;
    int32_t esi_3;
    int32_t edi_7;
    edi_7 = memcpy(&g_943a18, edi_5 - ecx_8, ecx_8 & 0xfffffffc);
    memcpy(edi_7, esi_3, ecx_8 & 3);
    return 0;
}
