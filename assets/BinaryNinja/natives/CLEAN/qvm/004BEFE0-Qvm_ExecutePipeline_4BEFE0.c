// IGI native provenance: Qvm_ExecutePipeline_4BEFE0 - 0x004BEFE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BEFE0-Qvm_ExecutePipeline_4BEFE0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_ExecutePipeline_4BEFE0.h"

int32_t Qvm_ExecutePipeline_4BEFE0(int32_t* arg1)

{
    char eax_1 = **arg1;

    if (eax_1 && eax_1 != 0xa && eax_1 != 0xd)
        return 1;

    if (arg1[5] >= arg1[4])
        return 0;

    int32_t a969c4_1 = g_a969c4;
    int32_t dest_ptr = 0;
    char eax_5;
    int32_t eax_7;
    char* edx_7;

    if (a969c4_1 - 2 > 0)
    {
        while (true)
        {
            int32_t eax_4 = arg1[5];

            if (eax_4 + dest_ptr >= arg1[4])
                break;

            eax_5 = (arg1[7] + eax_4)[dest_ptr];
            arg1[1][dest_ptr] = eax_5;
            arg1[3] = arg1[2];

            if (eax_5 != 0xd && eax_5 != 0xa && eax_5)
            {
                a969c4_1 = g_a969c4;
                dest_ptr += 1;

                if (dest_ptr >= a969c4_1 - 2)
                    break;

                continue;
            }

            arg1[1][dest_ptr] = 0;

            while (true)
            {
                if (eax_5 == 0xd)
                {
                label_4bf09f:

                    if (eax_5 == 0xa)
                        arg1[2] += 1;
                }
                else
                {
                    if (eax_5 != 0xa)
                    {
                        if (eax_5)
                            break;

                        goto label_4bf09f;
                    }

                    arg1[2] += 1;
                }

                int32_t eax_6 = arg1[5];
                dest_ptr += 1;

                if (eax_6 + dest_ptr >= arg1[4])
                    break;

                eax_5 = (arg1[7] + eax_6)[dest_ptr];
            }

            eax_7 = 0;
            arg1[5] += dest_ptr;
            edx_7 = arg1[1];
            *arg1 = edx_7;

            if (!*edx_7)
                goto label_4bf1ae;

            while (true)
            {
                char i = edx_7[eax_7];

                if (i == 0x22)
                {
                    do
                    {
                        if (i == 0x5c)
                        {
                            i = edx_7[eax_7 + 1];
                            eax_7 += 1;

                            if (!i)
                            {
                                eax_7 -= 1;
                                break;
                            }
                        }
                        else if (i == 0x22)
                            break;

                        i = edx_7[eax_7 + 1];
                        eax_7 += 1;
                    } while (i);
                }

                if (edx_7[eax_7] == 0x2f && edx_7[eax_7 + 1] == 0x2f)
                    break;

                i = edx_7[eax_7 + 1];
                eax_7 += 1;

                if (!i)
                    return 1;
            }

            goto label_4bf1a2;
        }
    }

    if (dest_ptr >= a969c4_1 - 2)
    {
        if (!dest_ptr)
        {
        label_4bf130:
            int32_t var_10_1 = arg1[1];
            int32_t var_14_1 = arg1[3];
            Sys_FreeMemory_22("Token too big in line %d '%s'.");
        }
        else
        {
            char* ecx_5 = arg1[1];

            while (true)
            {
                eax_5 = ecx_5[dest_ptr - 1];
                dest_ptr -= 1;

                if (eax_5 == 0x20)
                    break;

                if (eax_5 == 9)
                    break;

                if (!dest_ptr)
                    goto label_4bf130;
            }

            ecx_5[dest_ptr] = 0;

            if (!dest_ptr)
                goto label_4bf130;
        }
    }

    char* ecx_8 = arg1[1];
    eax_7 = 0;
    arg1[5] += dest_ptr;
    ecx_8[dest_ptr] = 0;
    edx_7 = arg1[1];
    *arg1 = edx_7;

    if (*edx_7)
    {
        while (true)
        {
            char i_1 = edx_7[eax_7];

            if (i_1 == 0x22)
            {
                do
                {
                    if (i_1 == 0x5c)
                    {
                        i_1 = edx_7[eax_7 + 1];
                        eax_7 += 1;

                        if (!i_1)
                        {
                            eax_7 -= 1;
                            break;
                        }
                    }
                    else if (i_1 == 0x22)
                        break;

                    i_1 = edx_7[eax_7 + 1];
                    eax_7 += 1;
                } while (i_1);
            }

            if (edx_7[eax_7] == 0x2f && edx_7[eax_7 + 1] == 0x2f)
                break;

            i_1 = edx_7[eax_7 + 1];
            eax_7 += 1;

            if (!i_1)
                return 1;
        }

    label_4bf1a2:
        edx_7[eax_7] = 0;
    }

label_4bf1ae:
    return 1;
}
