#include "004B5B90-Is_ResourceLoaded.h"
/* 0x004b5b90 Is_ResourceLoaded full linked: callers=8 callees=3 */
int32_t Is_ResourceLoaded(void* a1, void** a2)

// Sig: int Is_ResourceLoaded(char* resourcePath, char** outEntry)
// Note: Checks whether a resource path is ALREADY LOADED in the resource
// manager (walks path handling backslash 0x5C segments against the registry).
// Params: resourcePath = virtual path, outEntry = receives matching entry.
// RETURNS non-zero + fills outEntry when found. Resource_Load calls this first
// - use it to avoid double-loading.
{
    int32_t ebx;
    int32_t var_108 = ebx;
    int32_t esi = 0;

    while (true)
    {
        void var_80;
        esi = QFile_AliasResolve(&var_80, a1, esi);
        int32_t var_104_1 = esi;
        char i_1;
        sub_4b5af0(&i_1, &var_80);
        char i = i_1;

        if (i)
        {
            char* eax_3 = &i_1;

            do
            {
                char ecx_2 = 0x2f;

                if (i != 0x5c)
                    ecx_2 = *eax_3;

                *eax_3 = ecx_2;
                i = eax_3[1];
                eax_3 = &eax_3[1];
            } while (i);
        }

        uint32_t eax_4 = sub_4b5b30(&i_1);
        void* ecx_3 = g_943e40;
        void* ebp_1 = ecx_3;
        void* edi_1 = *(ecx_3 + 4);

        if (edi_1)
        {
            while (true)
            {
                if (*(ebp_1 + 0x20) == eax_4)
                {
                    char* esi_1 = &i_1;
                    char* ecx_4 = ebp_1 + 0x38;
                    int32_t ecx_6;

                    while (true)
                    {
                        char ebx_1 = *ecx_4;
                        char temp0_1 = *esi_1;
                        bool c_1 = ebx_1 < temp0_1;

                        if (ebx_1 == temp0_1)
                        {
                            if (!ebx_1)
                            {
                                ecx_6 = 0;
                                break;
                            }

                            ebx_1 = ecx_4[1];
                            char temp3_1 = esi_1[1];
                            c_1 = ebx_1 < temp3_1;

                            if (ebx_1 == temp3_1)
                            {
                                ecx_4 = &ecx_4[2];
                                esi_1 = &esi_1[2];

                                if (ebx_1)
                                    continue;

                                ecx_6 = 0;
                                break;
                            }
                        }

                        ecx_6 = ecx_4 - ecx_4 + 1;
                        break;
                    }

                    if (!ecx_6)
                    {
                        if (a2)
                            *a2 = ebp_1;

                        return 1;
                    }

                    esi = var_104_1;
                }

                ebp_1 = edi_1;
                edi_1 = *(edi_1 + 4);

                if (!edi_1)
                    break;
            }
        }

        if (!esi)
            break;
    }

    return 0;
}
