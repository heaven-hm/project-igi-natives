// Original IGI.EXE function: Physics_MenuitemMoveCalledWi (VA 0x00505AD0; static CFG gate PASS, CFG score 0.963).
#include "Physics_MenuitemMoveCalledWi.h"
int32_t Physics_MenuitemMoveCalledWi(void* context, int32_t param_2)

{
    void* data_val = Physics_ApplyImpulse_4(context);
    void* source_val;

    if (param_2 > 0)
    {
        source_val = Physics_CheckHullCollision_4(context, param_2);

        if (!*(source_val + 0x4c))
        {
        label_505b79:

            if (source_val)
            {
                int32_t item_1c;
                memset(&item_1c, 0, 0x1c);
                item_1c = *(source_val + 0x38);
                uint32_t data_11 = Physics_InterpolateWaypoint_5();
                int32_t temp_val = 0;
                temp_val = *(source_val + 0x1c);
                (*(((data_11 * 0x180 + temp_val) << 2) + &g_a96ae0))(source_val, &item_1c);

                if (data_val)
                {
                    uint32_t data_14 = Physics_InterpolateWaypoint_5();
                    int32_t data_15 = 0;
                    data_15 = *(data_val + 0x1c);
                    (*(((data_14 * 0x180 + data_15) << 2) + &g_a96ae0))(data_val, &item_1c);
                }

                return 1;
            }
        }

        return 0;
    }

    source_val = Physics_ApplyImpulse_4(context);

    if (!source_val)
        source_val = Physics_UpdateForces_4(context);
    else
    {
        int32_t data_5 = param_2 + 4;

        if (param_2 + 4 > 3)
        {
        label_505b64:
            Error_Show("MenuItem_Move() called with illegal direction parameter.");

            while (true)
                /* nop */
        }
        else
        {
            while (true)
            {
                int32_t source_1;

                switch (data_5)
                {
                    case 0:
                    {
                        source_1 = *(source_val + 0x40);
                        break;
                    }
                    case 1:
                    {
                        source_1 = *(source_val + 0x3c);
                        break;
                    }
                    case 2:
                    {
                        source_1 = *(source_val + 0x48);
                        break;
                    }
                    case 3:
                    {
                        source_1 = *(source_val + 0x44);
                        break;
                    }
                }

                if (!source_1)
                    return 0;

                source_val = Physics_CheckHullCollision_4(context, source_1);

                if (!*(source_val + 0x4c))
                    break;

                if (!source_val)
                    return 0;

                data_5 = param_2 + 4;

                if (param_2 + 4 > 3)
                    goto label_505b64;
            }
        }
    }

    goto label_505b79;
}
