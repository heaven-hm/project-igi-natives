#include "004530A0-AI_HumanmonitorNoTarget.h"
/* 0x004530a0 AI_HumanmonitorNoTarget full linked: callers=2 callees=12 */
int32_t* sub_4530a0(int32_t* a1)

{
    int32_t* edi = a1;
    int32_t eax = sub_4513e0(edi);

    if (eax)
    {
        int32_t* arg_8;
        int32_t* ebx_1 = arg_8;
        int32_t* esi_1 = ebx_1[3];
        int32_t* eax_2 = *esi_1;
        double var_18[0x3];

        if (!eax_2)
        {
        label_4530f6:
            int32_t* i_1 = g_57e1b8;
            int32_t* i = *i_1;

            if (i)
            {
                int32_t* eax_5;

                do
                {
                    arg_8 = nullptr;
                    sub_4af960(i_1);
                    sub_4af8f0(&ebx_1[3], i_1);
                    i_1[4] = eax;
                    uint32_t eax_4 = Frames_GetUpdateCounter();
                    int32_t* ecx_1 = a1;
                    i_1[3] = eax_4;
                    sub_451380(&var_18, ecx_1);
                    sub_5096f0(&arg_8, ebx_1[2], &var_18);
                    eax_5 = arg_8;

                    if (eax_5)
                    {
                        i_1[2] = *eax_5;
                        return eax_5;
                    }

                    i_1[2] = 0xffffffff;
                    i_1 = i;
                    i = *i;
                } while (i);

                return eax_5;
            }
        }
        else
        {
            while (true)
            {
                if (esi_1[4] == eax)
                {
                    uint32_t eax_6 = Frames_GetUpdateCounter();

                    if (esi_1[3] == eax_6)
                    {
                        int32_t esi_2 = esi_1[2];

                        if (esi_2 != 0xffffffff)
                            return sub_4f9720(ebx_1[2], esi_2);

                        break;
                    }

                    a1 = nullptr;
                    esi_1[3] = Frames_GetUpdateCounter();
                    sub_451380(&var_18, edi);
                    sub_5096f0(&a1, ebx_1[2], &var_18);
                    int32_t* eax_11 = a1;

                    if (!eax_11)
                    {
                        esi_1[2] = 0xffffffff;
                        return 0;
                    }

                    esi_1[2] = *eax_11;
                    return eax_11;
                }

                esi_1 = eax_2;
                eax_2 = *eax_2;

                if (!eax_2)
                    goto label_4530f6;
            }
        }
    }
    else
        Warning_Show("HumanMonitor - no target");

    return 0;
}
