// Original IGI.EXE function: Display_SetDisplayMode_6 (VA 0x00491F10; static CFG gate PASS, CFG score 0.924).
#include "Display_SetDisplayMode_6.h"
int32_t __stdcall Display_SetDisplayMode_6(GUID* context, int32_t param_2, int32_t* param_3 )

{
    int32_t* lplpDD;
    HRESULT data_val = DirectDrawCreateEx(context, &lplpDD, 0x534a50, 0);
    void item_400;

    if (data_val)
    {
        Game_DataSymbolLoad(&item_400, "Couldn't create DirectDraw object");
        int32_t item_42c_1 = DDERR_GENERIC(data_val);
        void* item_430 = &item_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* lplpDD_1 = lplpDD;
    int32_t* item_408;
    int32_t data_2 = (**lplpDD_1)(lplpDD_1, 0x534a20, &item_408);

    if (data_2)
    {
        Game_DataSymbolLoad(&item_400, "Couldn't get the Direct3D interface");
        int32_t item_42c_2 = DDERR_GENERIC(data_2);
        void* item_430_1 = &item_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    if (!context)
    {
        param_3[0x4a] = 0;
        param_3[0x4b] = 0;
        param_3[0x4c] = 0;
        param_3[0x4d] = 0;
    }
    else
    {
        param_3[0x4a] = context->Data1;
        struct _GUID __frag(0x4, 0x4, 0x4) entity_2;
        entity_2.Data2 = context->Data2;
        entity_2.Data3 = context->Data3;
        param_3[0x4b] = entity_2.Data2;
        *(param_3 + 0x12e) = entity_2.Data3;
        int32_t entity_3;
        entity_3 = context->Data4[0];
        *(&entity_3 + 1) = context->Data4[1];
        *(&entity_3 + 2) = context->Data4[2];
        *(&entity_3 + 3) = context->Data4[3];
        param_3[0x4c] = entity_3;
        int32_t entity_4;
        entity_4 = context->Data4[4];
        *(&entity_4 + 1) = context->Data4[5];
        *(&entity_4 + 2) = context->Data4[6];
        *(&entity_4 + 3) = context->Data4[7];
        param_3[0x4d] = entity_4;
    }

    Display_08X04X04X02X02X02X02(&param_3[9], param_3[0x4a], param_3[0x4b], param_3[0x4c], param_3[0x4d]);
    int32_t* lplpDD_4 = lplpDD;
    param_3[0x4e] = 0x17c;
    param_3[0xad] = 0x17c;
    int32_t data_7 = (*(*lplpDD_4 + 0x2c))(lplpDD_4, &param_3[0x4e], &param_3[0xad]);

    if (!data_7)
    {
        if (*param_3)
        {
            int32_t* data_24 = item_408;
            int32_t data_25 = (*(*data_24 + 0xc))(data_24, Display_SwapBuffers_6, param_3);

            if (data_25)
            {
                Game_DataSymbolLoad(&item_400, "Couldn't enumerate Direct3D devices");
                int32_t item_42c_6 = DDERR_GENERIC(data_25);
                void* item_430_5 = &item_400;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
        }
        else
        {
            int32_t* data_9 = item_408;
            g_bcacf4 = 0;
            g_bcad74 = 0;
            int32_t data_10 = (*(*data_9 + 0xc))(data_9, Display_SyncVSync_6, &param_3[0x10c]);

            if (data_10)
            {
                Game_DataSymbolLoad(&item_400, "Couldn't enumerate Direct3D devices");
                int32_t item_42c_5 = DDERR_GENERIC(data_10);
                void* item_430_4 = &item_400;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
            else if (g_bcacf4)
            {
                char* source_5 = param_3[1];

                if (!source_5)
                {
                label_49210b:
                    void* temp_6 = param_3[3] + *param_3[4] * 0x4f8;
                    memcpy(temp_6, &param_3[9], 0x4f8);
                    int32_t dest_2 = param_2;
                    int32_t i = 0xffffffff;

                    while (i)
                    {
                        bool flag_1_1 = 0 != *dest_2;
                        dest_2 += 1;
                        i -= 1;

                        if (!flag_1_1)
                            break;
                    }

                    int32_t entity_16 = ~i;
                    int32_t source_9;
                    int32_t dest_5;
                    dest_5 = memcpy(temp_6 + 0x80, dest_2 - entity_16, entity_16 & 0xfffffffc);
                    memcpy(dest_5, source_9, entity_16 & 3);
                    char* dest_6 = &param_3[9];
                    int32_t i_1 = 0xffffffff;

                    while (i_1)
                    {
                        bool flag_2_1 = 0 != *dest_6;
                        dest_6 = &dest_6[1];
                        i_1 -= 1;

                        if (!flag_2_1)
                            break;
                    }

                    int32_t entity_20 = ~i_1;
                    int32_t source_11;
                    int32_t dest_9;
                    dest_9 = memcpy(temp_6, dest_6 - entity_20, entity_20 & 0xfffffffc);
                    memcpy(dest_9, source_11, entity_20 & 3);
                    *(temp_6 + 0x100) = 0;

                    if (context)
                        *(temp_6 + 0x100) = temp_6 + 0x104;

                    int32_t* data_20 = param_3[4];
                    *data_20 += 1;

                    if (param_3[1])
                    {
                        int32_t* data_22 = item_408;
                        (*(*data_22 + 8))(data_22);
                        int32_t* lplpDD_2 = lplpDD;
                        (*(*lplpDD_2 + 8))(lplpDD_2);
                        return 0;
                    }
                }
                else
                {
                    char* data_12 = &param_3[9];
                    int32_t data_14;

                    while (true)
                    {
                        char temp_3 = *data_12;
                        char f1_1 = *source_5;
                        bool c_1 = temp_3 < f1_1;

                        if (temp_3 == f1_1)
                        {
                            if (!temp_3)
                            {
                                data_14 = 0;
                                break;
                            }

                            temp_3 = data_12[1];
                            char f4_1 = source_5[1];
                            c_1 = temp_3 < f4_1;

                            if (temp_3 == f4_1)
                            {
                                data_12 = &data_12[2];
                                source_5 = &source_5[2];

                                if (temp_3)
                                    continue;

                                data_14 = 0;
                                break;
                            }
                        }

                        data_14 = data_12 - data_12 + 1;
                        break;
                    }

                    int32_t entity_12 = 0;
                    entity_12 = !data_14;

                    if (entity_12)
                        goto label_49210b;
                }
            }
        }

        int32_t* data_27 = item_408;
        (*(*data_27 + 8))(data_27);
        int32_t* lplpDD_3 = lplpDD;
        (*(*lplpDD_3 + 8))(lplpDD_3);
        return 1;
    }

    Game_DataSymbolLoad(&item_400, "Couldn't get driver caps");
    int32_t item_42c_4 = DDERR_GENERIC(data_7);
    void* item_430_3 = &item_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
