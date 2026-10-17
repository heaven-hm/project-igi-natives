// Original IGI.EXE function: AI_CheckSector_13 (VA 0x0045B2F0; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_13.h"
struct status_msg* AI_CheckSector_13(void* context, float param_2)

{
    float dest_val = param_2;
    void* context_val = *(context + 8);
    float flagP = *(dest_val + 0x800);

    if (!(context_val & 4))
    {
        void* entity_1 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x1d;
        int32_t data_1 = *(entity_1 + 0x74);
        *(context + 0x14) = data_1;
        return data_1(context, dest_val);
    }

    if (context_val & 0x10000)
    {
        void* data_3 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x1e;
        int32_t data_4 = *(data_3 + 0x78);
        *(context + 0x14) = data_4;
        return data_4(context, dest_val);
    }

    if (context_val & 0x20000)
    {
        void* temp_2 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x20;
        int32_t data_6 = *(temp_2 + 0x80);
        *(context + 0x14) = data_6;
        return data_6(context, dest_val);
    }

    struct status_msg* result = AI_CheckSector_3(flagP);

    if (result == 1 && *(dest_val + 0x538) == 0xb)
    {
        result = Render_DrawSplineMesh_10(dest_val + 0x68, 0);

        if (*(dest_val + 0x53c) == result)
        {
            result = *(dest_val + 0xd18);

            if (!result)
            {
                param_2 = Sys_AllocateMemory_14(Level_SetMission_5()) * *(flagP + 0x3d9c) + *(flagP + 0x3d98);
                long double fpu_val_7_5 = Sys_AllocateMemory_14(Level_SetMission_5()) * *(flagP + 0x3da4);
                void* data_11 = *(dest_val + 0x70);
                int32_t item_54_1 = fpu_val_7_5 * 30.0f + *(flagP + 0x3da0);
                double item_40 = *(data_11 + 0x858) + *(dest_val + 0x20);
                double item_38_1 = *(data_11 + 0x85c) + *(dest_val + 0x28);
                double item_30_1 = *(data_11 + 0x860) + *(dest_val + 0x30);
                void item_4c;
                void item_28;
                long double fpu0;
                AI_CheckVisibility_4(fpu0, &item_28, &item_4c, flagP, &item_40, param_2);
                int32_t* data_12 = HumanPlayer_CheckCollision_10(*(flagP + 0x3e04));
                result = Throwable_Create(Script_FormatString(), dest_val, &item_40, &item_28, &item_4c, data_12,
                    item_54_1);
                *(dest_val + 0xd18) = 1;
            }
        }
    }

    if (!(context_val & 1))
        return result;

    if (!(context_val & 0x2000000))
    {
        int32_t* data_17 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0;
        int32_t data_18 = *data_17;
        *(context + 0x14) = data_18;
        return data_18(context, dest_val);
    }

    void* entity_5 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0xa;
    int32_t data_15 = *(entity_5 + 0x28);
    *(context + 0x14) = data_15;
    return data_15(context, dest_val);
}
