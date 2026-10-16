#include "004BF620-Sys_UnexpectedEndOfFile_2.h"
/* 0x004bf620 Sys_UnexpectedEndOfFile_2 full linked: callers=1 callees=28 */
int32_t sub_4bf620(int32_t* a1, int32_t* a2)

{
    sub_4bf3a0(a1);
    int32_t* eax = Mem_Alloc(0x24, 4);
    __builtin_memset(eax, 0, 0x24);
    eax[1] = 0;
    *eax = 0;
    eax[2] = 2;
    eax[5] = &eax[6];
    eax[6] = 0;
    eax[7] = &eax[5];
    *a2 = eax;

    if (!sub_4bfc70(a1, &a1[2]))
    {
    label_4bf7e7:
        sub_4b7e10("Unexpected end of file.");
    }
    else if (*a1[7] == 0x28)
    {
        int32_t var_14_1 = 0;

        if (sub_4b9ca0(a1, &eax[3]))
        {
            if (!sub_4bfc70(a1, &a1[2]))
            {
            label_4bf7e7_1:
                sub_4b7e10("Unexpected end of file.");
            }
            else if (sub_4bf1f0(a1, &eax[4]))
            {
                if (!sub_4bfc70(a1, &a1[2]))
                    return 1;

                int32_t* var_14_6 = &a1[2];

                if (sub_4bf3a0(a1) != 4)
                {
                label_4bf83e:
                    sub_4bfbe0(&a1[2], var_14_6);
                    return 1;
                }

                if (!sub_4bfc70(a1, var_14_6))
                {
                    sub_4b7e10("Unexpected end of file.");
                    return 1;
                }

                if (sub_4bf3a0(a1) != 3)
                {
                label_4bf810:

                    if (sub_4bf1f0(a1, &eax[8]))
                        return 1;
                }
                else
                {
                    if (sub_4bfc70(a1, &a1[2]))
                    {
                        while (true)
                        {
                            if (*a1[7] != 0x28)
                                goto label_4bf7f6;

                            int32_t* eax_13 = Mem_Alloc(0x14, 4);
                            void** esi_1 = eax_13;
                            *eax_13 = 0;
                            eax_13[1] = 0;
                            __builtin_memset(esi_1, 0, 0x14);
                            esi_1[2] = 3;
                            sub_4af8f0(&eax[5], esi_1);
                            int32_t var_24_1 = 0;

                            if (!sub_4b9ca0(a1, &esi_1[3]))
                                goto label_4bf7f6;

                            if (!sub_4bfc70(a1, &a1[2]))
                                goto label_4bf7e7_2;

                            if (!sub_4bf1f0(a1, &esi_1[4]))
                                goto label_4bf7f6;

                            if (!sub_4bfc70(a1, &a1[2]))
                                return 1;

                            var_14_6 = &a1[2];

                            if (sub_4bf3a0(a1) != 4)
                                goto label_4bf83e;

                            if (!sub_4bfc70(a1, var_14_6))
                                goto label_4bf7e7_2;

                            if (sub_4bf3a0(a1) != 3)
                                break;

                            if (!sub_4bfc70(a1, &a1[2]))
                                goto label_4bf7e7_2;
                        }

                        goto label_4bf810;
                    }

                label_4bf7e7_2:
                    sub_4b7e10("Unexpected end of file.");
                }
            }
        }
    }

label_4bf7f6:
    sub_4bf8f0(*a2);
    *a2 = 0;
    return 0;
}
