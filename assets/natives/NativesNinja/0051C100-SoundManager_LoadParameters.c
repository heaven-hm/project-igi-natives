#include "0051C100-SoundManager_LoadParameters.h"
/* 0x0051c100 SoundManager_LoadParameters full linked: callers=0 callees=8 */
int32_t* sub_51c100(char* a1, char* a2)

{
    char* ebp = a1;
    int32_t* eax;
    eax = ebp[0x20];
    int32_t* edi = *(ebp + 0x40);

    if (eax)
    {
        if (!a2 || !*a2)
        {
            int32_t* i = *(ebp + 8);

            if (*i && i)
            {
                int32_t ecx_1 = g_afa7e0;

                do
                {
                    int32_t* edx_1 = *i;
                    void* eax_6;

                    if (!edx_1)
                        eax_6 = nullptr;
                    else
                    {
                        int32_t eax_3 = *edx_1;
                        int32_t eax_4 = -(eax_3);
                        eax_6 = (eax_4 - eax_4) & edx_1;
                    }

                    *((ecx_1 << 2) + &g_afa6e0) = eax_6;
                    g_afa7e0 = ecx_1 + 1;
                    uint32_t eax_8 = sub_4f1a70();
                    int32_t ecx_3 = 0;
                    ecx_3 = i[7];
                    int32_t eax_12 = *(((eax_8 * 0x180 + ecx_3) << 2) + &g_a96ae0);

                    if (eax_12)
                        eax_12(i, 0);

                    ecx_1 = g_afa7e0 - 1;
                    g_afa7e0 = ecx_1;
                    i = *((ecx_1 << 2) + &g_afa6e0);
                } while (i);
            }
        }

        if (!edi)
        {
        label_51c25c:
            eax = sub_4e6b00(ebp, &ebp[0x20]);

            if (eax)
            {
                eax = QTask_LinkEventHandler_2(eax);
                *(ebp + 0x40) = eax;
            }
        }
        else
        {
            void* esi_1 = *edi;

            if (!esi_1)
            {
            label_51c23b:
                void* eax_19 = *edi;

                if (eax_19)
                {
                    sub_4e6c00(eax_19);
                    Qtask_UpdateList(edi);
                    *(ebp + 0x40) = 0;
                }

                goto label_51c25c;
            }

            a1 = nullptr;
            uint32_t eax_14 = sub_4e6650();
            int32_t eax_15 = 0;
            eax_15 = *(esi_1 + 0x1c);
            int32_t eax_16 = *(((eax_14 * 0x180 + eax_15) << 2) + &g_a96ae0);

            if (eax_16)
                eax_16(esi_1, &a1);

            char* esi_2 = a1;

            if (!esi_2)
                goto label_51c23b;

            char* eax_17 = &ebp[0x20];

            while (true)
            {
                char edx_5 = *eax_17;
                char temp1_1 = *esi_2;
                bool c_2 = edx_5 < temp1_1;

                if (edx_5 == temp1_1)
                {
                    if (!edx_5)
                    {
                        eax = nullptr;
                        break;
                    }

                    edx_5 = eax_17[1];
                    char temp4_1 = esi_2[1];
                    c_2 = edx_5 < temp4_1;

                    if (edx_5 == temp4_1)
                    {
                        eax_17 = &eax_17[2];
                        esi_2 = &esi_2[2];

                        if (edx_5)
                            continue;

                        eax = nullptr;
                        break;
                    }
                }

                eax = eax_17 - eax_17 + 1;
                break;
            }

            if (eax)
                goto label_51c23b;
        }
    }
    else if (edi)
    {
        eax = *edi;

        if (eax)
        {
            sub_4e6c00(eax);
            int32_t eax_1 = Qtask_UpdateList(edi);
            *(ebp + 0x40) = 0;
            return eax_1;
        }
    }

    return eax;
}
