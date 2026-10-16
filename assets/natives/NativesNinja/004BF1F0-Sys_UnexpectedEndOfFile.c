#include "004BF1F0-Sys_UnexpectedEndOfFile.h"
/* 0x004bf1f0 Sys_UnexpectedEndOfFile full linked: callers=7 callees=17 */
int32_t sub_4bf1f0(int32_t* a1, void** a2)

{
    *a2 = 0;
    int32_t* eax = Mem_Alloc(0x18, 4);
    int32_t* ebx = a1;
    eax[2] = 1;
    eax[1] = 0;
    *eax = 0;
    eax[3] = &eax[4];
    eax[5] = &eax[3];
    eax[4] = 0;

    if (sub_4bf3a0(ebx) != 1)
        a1 = 1;
    else
    {
        if (!sub_4bfc70(ebx, &ebx[2]))
        {
            sub_4b7e10("Unexpected end of file.");
            sub_4bf8f0(eax);
            return 0;
        }

        a1 = nullptr;
    }

    while (true)
    {
        int32_t eax_5 = sub_4bf3a0(ebx);
        char* var_4;

        if (!eax_5)
        {
            if (sub_4b9cd0(ebx, &var_4, 0, 0))
            {
                int32_t* eax_9 = Mem_Alloc(0x10, 4);
                eax_9[2] = 7;
                eax_9[1] = 0;
                *eax_9 = 0;
                eax_9[3] = var_4;
                sub_4af8f0(&eax[3], eax_9);
            label_4bf2eb:

                if (a1)
                {
                    *a2 = eax;
                    return 1;
                }

                if (sub_4bfc70(ebx, &ebx[2]))
                    continue;

                sub_4b7e10("Unexpected end of file.");
            }
            else if (g_a965a8)
                sub_4b7e10("Script error: Aborting.\n");
        }
        else
        {
            if (eax_5 == 2)
                break;

            void** var_8;

            if (sub_4bf580(ebx, &var_8))
            {
                sub_4af8f0(&eax[3], var_8);
                goto label_4bf2eb;
            }
        }
        sub_4bf8f0(eax);
        return 0;
    }

    if (!a1)
    {
        *a2 = eax;
        return 1;
    }

    int32_t var_20_6 = sub_4bf390(ebx);
    sub_4b7e10("Unexpected '}' in line %d");
    sub_4bf8f0(eax);
    return 0;
}
