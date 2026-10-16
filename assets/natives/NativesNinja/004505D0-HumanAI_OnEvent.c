#include "004505D0-HumanAI_OnEvent.h"
/* 0x004505d0 HumanAI_OnEvent full linked: callers=0 callees=19 */
int32_t sub_4505d0(int32_t* a1)

{
    struct ai_ctx* esi = a1;
    g_5bda58 = esi;
    *(esi + 0x3d38) = sub_4b8770(&esi->pad[0x3d15]);
    int32_t* eax_2 = *(esi + 0x3c70);

    if (eax_2)
    {
        Qvm_Cleanup(eax_2);
        *(esi + 0x3c70) = 0;
    }

    if (sub_4f1050(esi) != 0xffffffff)
    {
        int32_t var_10_1 = sub_4f1050(esi);
        Game_DataSymbolLoad(&esi->pad[0x3b70], "MISSION:AI/%d.qsc");
        *(esi + 0x3c70) = Qvm_Load(&esi->pad[0x3b70]);
        esi->pad[0x8dc] = 0;
        esi->pad[0x8dd] = 0;
        esi->pad[0x8de] = 0;
        esi->pad[0x8df] = 0;
    }

    int32_t eax_6 = *(esi + 0x3b68);

    if (eax_6 != 0xffffffff)
    {
        void* eax_7 = sub_4f9290(eax_6);
        *(esi + 0x3b6c) = eax_7;

        if (eax_7)
        {
            int32_t edx;
            edx = esi->pad[0x14];
            *(&edx + 1) = esi->pad[0x15];
            *(&edx + 2) = esi->pad[0x16];
            *(&edx + 3) = esi->pad[0x17];
            double* eax_9 = sub_4c3440(edx);
            sub_5096f0(&a1, *(esi + 0x3b6c), eax_9);
            int32_t* eax_11 = a1;

            if (eax_11)
            {
                if (*(esi + 0x3e2c) != *eax_11)
                {
                    int32_t edx_3;
                    edx_3 = esi->pad[0x14];
                    *(&edx_3 + 1) = esi->pad[0x15];
                    *(&edx_3 + 2) = esi->pad[0x16];
                    *(&edx_3 + 3) = esi->pad[0x17];
                    double* eax_13 = sub_4c3440(edx_3);
                    *(esi + 0x3ea0) = sub_452d20(&esi->pad[0x3ea4], &esi->pad[0x3ea8],
                        &esi->pad[0x3eb0], *(esi + 0x3b6c), *a1, eax_13);
                    eax_11 = a1;
                }

                *(esi + 0x3e2c) = *eax_11;
            }
            else
            {
                int32_t __saved_edi_6 = *(esi + 0x3b68);
                int32_t var_c_6 = sub_4f1050(esi);
                Warning_Show("HumanAI #%d couldn't find closest node in graph #%d");
            }
        }
        else
        {
            int32_t __saved_edi_4 = *(esi + 0x3b68);
            int32_t var_c_3 = sub_4f1050(esi);
            Warning_Show("HumanAI #%d has AIGraph ID (#%d) but no matching AIGraph was found");
        }
    }

    int32_t eax_18 = sub_464250();
    void* ecx_5;
    ecx_5 = esi->pad[0x14];
    *(&ecx_5 + 1) = esi->pad[0x15];
    *(&ecx_5 + 2) = esi->pad[0x16];
    *(&ecx_5 + 3) = esi->pad[0x17];
    sub_4896c0(&esi->pad[0x15f8], sub_463130(ecx_5), 6, eax_18, 4, 8);
    esi->pad[0x3a28] = 1;
    return AIConfig_NoHumanaiconfigTaskF(esi);
}
