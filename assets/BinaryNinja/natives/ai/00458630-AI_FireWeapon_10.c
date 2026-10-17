// Original IGI.EXE function: AI_FireWeapon_10 (VA 0x00458630; static CFG gate PASS, CFG score 1.000).
#include "AI_FireWeapon_10.h"
void AI_FireWeapon_10(void* context, void* param_2)

{
    int32_t context_val = *(context + 8);
    void* flagP = *(param_2 + 0x800);

    if (!(context_val & 4))
    {
        void* entity_1 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x1d;
        int32_t data_2 = *(entity_1 + 0x74);
        *(context + 0x14) = data_2;
        data_2(context, param_2);
        return;
    }

    if (context_val & 0x10000)
    {
        void* data_4 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x1e;
        int32_t data_5 = *(data_4 + 0x78);
        *(context + 0x14) = data_5;
        data_5(context, param_2);
        return;
    }

    if (context_val & 0x20000)
    {
        void* temp_2 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x20;
        int32_t data_7 = *(temp_2 + 0x80);
        *(context + 0x14) = data_7;
        data_7(context, param_2);
        return;
    }

    if (*(param_2 + 0x538) == 0xc)
    {
        int32_t data_10 = Render_DrawSplineMesh_10(param_2 + 0x68, 0);

        if (*(param_2 + 0x53c) == data_10 && !*(param_2 + 0xd19))
        {
            *(param_2 + 0xd19) = 1;
            long double fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
            long double f0_1 = *(flagP + 0x3da8);
            fp0_1 - f0_1;

            if (*(&((fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                | (fp0_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                void* data_15 = *(flagP + 0x3aa8);

                if (data_15)
                {
                    int32_t* data_16 = *(data_15 + 0xc);

                    if (data_16 && *data_16)
                    {
                        void* temp_3 = *(flagP + 0x3aa8);
                        int32_t item_8 = *(flagP + 0x3dac);
                        void* item_4_1 = param_2;
                        void* flagP1 = **(temp_3 + 0xc);
                        uint32_t data_19 = AI_CheckSector_17();
                        int32_t temp_4 = 0;
                        temp_4 = *(flagP1 + 0x1c);
                        int32_t data_20 = *(((data_19 * 0x180 + temp_4) << 2) + &g_a96ae0);

                        if (data_20)
                            data_20(flagP1, &item_8);
                    }
                }
            }
        }
    }

    if (!(context_val & 1))
        return;

    int32_t* data_22 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0;
    int32_t data_23 = *data_22;
    *(context + 0x14) = data_23;
    data_23(context, param_2);
}
