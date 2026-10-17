// IGI native provenance: Display_SwapBuffers_2 - 0x00490D10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00490D10-Display_SwapBuffers_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SwapBuffers_2.h"
HRESULT Display_SwapBuffers_2(int32_t context , int32_t param_2 , float param_3)

{
    int32_t entity_val;
    int32_t temp_val;

    if (*(param_3 + 4))
    {
        int32_t data_2 = Timer_Now();
        temp_val = *(param_3 + 8);
        entity_val = *(param_3 + 4);
        *param_3 = data_2 - temp_val - entity_val;
    }
    else
    {
        int32_t data_1;
        data_1 = Timer_Now();
        *(param_3 + 4) = data_1;
    }

    void* data_5 = *(param_3 + 0x158);

    if (data_5)
    {
        char data_6 = Display_SyncVSync_11(data_5, temp_val, entity_val, data_5);
        *(param_3 + 0x29) = data_6;

        if (!data_6)
        {
            Display_SetDisplayMode_12(*(param_3 + 0x158));
            Display_CloseDevice_11(*(param_3 + 0x158));
            *(param_3 + 0x158) = 0;
        }
        else
        {
            int32_t data_9;
            int32_t temp_1;
            temp_1 = HIGHD(0x10624dd3 * *param_3 * 0x3c);
            data_9 = LOWD(0x10624dd3 * *param_3 * 0x3c);
            int32_t entity_3 = *(param_3 + 0x14);
            uint32_t temp_2 = temp_1 >> 6;

            if (temp_2 != entity_3)
            {
                int32_t i_1 = temp_2 - entity_3;
                int32_t i;

                do
                {
                    void item_58;
                    Display_SetGammaRamp_12(&item_58);
                    Display_SyncVSync_12(*(param_3 + 0x158), &item_58);
                    i = i_1;
                    i_1 -= 1;
                    *(param_3 + 0x14) += 1;
                } while (i != 1);
            }
        }
    }

    int32_t data_13 = Timer_Now();
    HRESULT data_14 = *(param_3 + 0xc);
    int32_t entity_9 = data_13 - *(param_3 + 8) - *(param_3 + 4);
    *param_3 = entity_9;

    if (entity_9 >= data_14)
    {
        *(param_3 + 0x28) = 0;
    label_490e72:
        data_14 = *(param_3 + 0x29);

        if (!data_14)
        {
            data_14 = *(param_3 + 0x28);

            if (!data_14)
            {
            label_490e81:
                data_14 = 0;
                return data_14;
            }
        }
    }
    else
    {
        int32_t data_17;
        int32_t temp_8;
        temp_8 = HIGHD(0x10624dd3 * COMBINE(0, *(param_3 + 0xb8)) / *(param_3 + 0xb4) * entity_9);
        data_17 = LOWD(0x10624dd3 * COMBINE(0, *(param_3 + 0xb8)) / *(param_3 + 0xb4) * entity_9);
        data_14 = *(param_3 + 0x1c);
        uint32_t dest_2 = temp_8 >> 6;

        if (data_14 == dest_2)
            goto label_490e72;

        if (data_14 == 0xffffffff)
        {
            HRESULT data_18 = Display_ClearSurfaces_2(param_3, dest_2, 0, param_2, context);

            if (!data_18)
                return data_18;
        }
        else if (dest_2 - data_14 != 1)
        {
            do
            {
                data_14 = Display_ClearSurfaces_2(param_3, data_14 + 1, 0x80000000, param_2, context);

                if (!data_14)
                    goto label_490e81;

                data_14 = *(param_3 + 0x1c);
            } while (data_14 != dest_2);
        }
        else
        {
            HRESULT data_19 = Display_ClearSurfaces_2(param_3, dest_2, 0, param_2, context);

            if (!data_19)
                return data_19;
        }

        data_14 = Display_RestoreDevice_2(param_3);
    }

    data_14 = 1;
    return data_14;
}
