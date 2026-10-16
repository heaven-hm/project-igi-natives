#include "00486650-FX_RmS.h"
/* 0x00486650 FX_RmS full linked: callers=1 callees=14 */
char* sub_486650(char (** a1)[0x16], void* a2)

{
    char (** ebx)[0x16] = a1;
    int32_t edi = 0;
    char* result = &ebx[0x10];
    int32_t var_28 = 0;

    while (*result)
    {
        edi += 1;
        result = &result[0x102c];

        if (edi >= 0x18)
            break;
    }

    if (edi != 0x18)
    {
        void* esi_1 = a2;
        int32_t ebp_2 = edi * 0x102c;
        ebx[edi * 0x40b + 0x10] = 1;
        int32_t* eax_4;
        int32_t ecx_1;
        eax_4 = QTask_LinkEventHandler_2(esi_1);
        ebx[edi * 0x40b + 8] = eax_4;
        ebx[edi * 0x40b + 9] = 0;
        ebx[edi * 0x40b + 0xa] = 0;
        ebx[edi * 0x40b + 0x11] = 0;
        ebx[edi * 0x40b + 0x12] = 0;
        ebx[edi * 0x40b + 0xf] = 0;

        if (*(esi_1 + 0xb4))
        {
            char (** esi_2)[0x16] = &g_540b60;
            int32_t eax_7 = StatusScreen_Get();
            int32_t edx_1 = 0;
            a1 = &g_540b60;

            while (true)
            {
                char* esi_3 = *esi_2;
                char* edi_1 = a2 + 0xb4;

                while (true)
                {
                    char eax_9 = *edi_1;
                    ecx_1 = eax_9;
                    char temp1_1 = *esi_3;
                    bool c_1 = eax_9 < temp1_1;

                    if (eax_9 == temp1_1)
                    {
                        if (!ecx_1)
                        {
                            ecx_1 = 0;
                            break;
                        }

                        eax_9 = edi_1[1];
                        ecx_1 = eax_9;
                        char temp4_1 = esi_3[1];
                        c_1 = eax_9 < temp4_1;

                        if (eax_9 == temp4_1)
                        {
                            edi_1 = &edi_1[2];
                            esi_3 = &esi_3[2];

                            if (ecx_1)
                                continue;

                            ecx_1 = 0;
                            break;
                        }
                    }

                    ecx_1 = ecx_1 - ecx_1 + 1;
                    break;
                }

                if (!ecx_1)
                {
                    ebx[edi * 0x40b + 0xf] = eax_7 + edx_1 * 0x18 + 0x38c;
                    break;
                }

                edx_1 += 1;
                esi_2 = &a1[1];
                a1 = esi_2;

                if (edx_1 >= 4)
                    break;
            }

            esi_1 = a2;
        }

        Qhash_Init(1);
        void* eax_11 = sub_485fb0(ebx, edi);
        int32_t* edi_2 = &ebx[edi * 0x40b + 0xc];
        a1 = 3;
        bool cond:1_1;

        do
        {
            *edi_2 = sub_4b6ec0(eax_11, 0, 0, &g_567c74);
            edi_2 = &edi_2[1];
            cond:1_1 = a1 != 1;
            a1 -= 1;
        } while (cond:1_1);
        Qhash_Reset();

        if (*(esi_1 + 0x1b4))
        {
            int32_t var_20 = 0x3f800000;
            int32_t var_1c_1 = 0x3f800000;
            int32_t var_18_1 = 0;
            Sound_EventTrigger(esi_1 + 0x1b4, 1, &var_20);
        }

        void* edx_3 = *(esi_1 + 0xb0);
        int32_t i = 0xffffffff;
        void* edi_3 = edx_3;

        while (i)
        {
            bool cond:2_1 = 0 != *edi_3;
            edi_3 += 1;
            i -= 1;

            if (!cond:2_1)
                break;
        }

        int32_t eax_16;
        void* ecx_9;
        int32_t edx_4;

        if (~i - 1 < 0x80)
            eax_16 = sub_4b64e0(edx_3);

        if (~i - 1 >= 0x80 || !eax_16)
        {
            int32_t var_3c_5 = *(esi_1 + 0xb0);
            Game_DataSymbolLoad(&ebx[edi * 0x40b + 0x13], "RM: %s");
        }
        else
        {
            int32_t eax_17 = *(esi_1 + 0xb0);
            int32_t var_40_2 = eax_17;
            int32_t* eax_18 = Resource_Load(eax_17, edx_4, ecx_9, nullptr);
            int32_t i_1 = 0xffffffff;
            int32_t* edi_4 = eax_18;

            while (i_1)
            {
                bool cond:4_1 = 0 != *edi_4;
                edi_4 += 1;
                i_1 -= 1;

                if (!cond:4_1)
                    break;
            }

            int32_t ecx_10 = ~i_1;
            int32_t esi_6;
            int32_t edi_7;
            edi_7 = memcpy(&ebx[edi * 0x40b + 0x13], edi_4 - ecx_10, ecx_10 & 0xfffffffc);
            memcpy(edi_7, esi_6, ecx_10 & 3);

            if (!*(a2 + 0x1c6))
                sub_468de0(eax_18);

            esi_1 = a2;
        }

        if (*(esi_1 + 0x1c6))
        {
            void* edi_8 = &ebx[edi * 0x40b + 0x13];
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond:5_1 = 0 != *edi_8;
                edi_8 += 1;
                i_2 -= 1;

                if (!cond:5_1)
                    break;
            }

            ebx[edi * 0x40b + 0xb] = ~i_2 - 1 + ebp_2 + ebx + 0x4c;
            return ~i_2 - 1 + ebp_2 + ebx + 0x4c;
        }

        result = &ebx[edi * 0x40b + 0x13];
        ebx[edi * 0x40b + 0xb] = result;
    }

    return result;
}
