// IGI native provenance: Display_SwapBuffers_20 - 0x0049F1C0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049F1C0-Display_SwapBuffers_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SwapBuffers_20.h"
int32_t Display_SwapBuffers_20(double* context)

{
    int32_t context_val;
    int32_t item_1f4 = context_val;
    int32_t flagP;
    int32_t item_1f8 = flagP;
    int32_t source_val;
    int32_t item_1fc = source_val;
    void* flagP1 = context[0xb];
    int32_t item_1b0 = *(context + 0x54);
    bool flag_0 = !context[0xc];
    void* data_2 = g_bcade8;
    int32_t dest_val;
    int32_t item_200 = dest_val;
    int32_t* stack_ptr_1 = &item_200;

    if (flag_0)
    {
        int32_t entity_7 = g_7205b0;

        if (*(data_2 + 4) != entity_7)
        {
            *(data_2 + 4) = entity_7;
            int32_t item_204_5 = 0;
            (*(g_bcade8 + (g_7205b0 << 2) + 0x14))(0);
            stack_ptr_1 = &item_200;
        }

        void* data_9 = g_bcad7c;
        int32_t entity_9 = g_7205b8;

        if (*(data_9 + 4) != entity_9)
        {
            *(data_9 + 4) = entity_9;
            int32_t item_204_6 = 0;
            (*(g_bcad7c + (g_7205b8 << 2) + 0x14))(0);
            stack_ptr_1 = &item_200;
        }

        void* data_11 = g_bcadac;
        int32_t entity_10 = g_7205bc;

        if (*(data_11 + 4) != entity_10)
        {
            *(data_11 + 4) = entity_10;
            int32_t item_204_7 = 0;
            (*(g_bcadac + (g_7205bc << 2) + 0x14))(0);
            stack_ptr_1 = &item_200;
        }

        void* data_12 = g_bcadc4;
        int32_t entity_12 = g_bcacec;

        if (*(data_12 + 4) != entity_12)
        {
            *(data_12 + 4) = entity_12;
            int32_t item_204_8 = 0;
            (*(g_bcadc4 + (g_bcacec << 2) + 0x14))(0);
            stack_ptr_1 = &item_1fc;
        }
    }
    else
    {
        int32_t entity_val = g_723504;

        if (*(data_2 + 4) != entity_val)
        {
            *(data_2 + 4) = entity_val;
            int32_t item_204_1 = 0;
            (*(g_bcade8 + (g_723504 << 2) + 0x14))(0);
            stack_ptr_1 = &item_200;
        }

        void* data_3 = g_bcad7c;
        int32_t entity_2 = g_7205b8;

        if (*(data_3 + 4) != entity_2)
        {
            *(data_3 + 4) = entity_2;
            int32_t item_204_2 = 0;
            (*(g_bcad7c + (g_7205b8 << 2) + 0x14))(0);
            stack_ptr_1 = &item_200;
        }

        void* data_5 = g_bcadac;
        int32_t entity_4 = g_723508;

        if (*(data_5 + 4) != entity_4)
        {
            *(data_5 + 4) = entity_4;
            int32_t item_204_3 = 0;
            (*(g_bcadac + (g_723508 << 2) + 0x14))(0);
            stack_ptr_1 = &item_200;
        }

        void* data_7 = g_bcadc4;
        int32_t entity_5 = g_bcacec;

        if (*(data_7 + 4) != entity_5)
        {
            *(data_7 + 4) = entity_5;
            int32_t item_204_4 = 0;
            (*(g_bcadc4 + (g_bcacec << 2) + 0x14))(0);
            stack_ptr_1 = &item_1fc;
        }
    }

❓️    void* entity_14 = context[0xa];
    void* data_14 = *(*(entity_14 + 0xc) + 0xc);
    long double fpu_val_7_3 =
        context[4] * *(data_14 + 0x38) + *(context + 0x1c) * *(data_14 + 0x34) + context[3] * *(data_14 + 0x30);
    long double fpu_val_6_7 = *(context + 0x2c) * *(data_14 + 0x38) + context[5] * *(data_14 + 0x34)
        + *(context + 0x24) * *(data_14 + 0x30);
    stack_ptr_1[5] = fpu_val_6_7;
    long double fpu_val_6_11 =
        context[7] * *(data_14 + 0x38) + *(context + 0x34) * *(data_14 + 0x34) + context[6] * *(data_14 + 0x30);
    stack_ptr_1[6] = fpu_val_6_11;
    *(stack_ptr_1 + 0x58) = fpu_val_7_3 + *context;
    *(stack_ptr_1 + 0x60) = stack_ptr_1[5] + context[1];
    *(stack_ptr_1 + 0x68) = stack_ptr_1[6] + context[2];
    *(stack_ptr_1 - 4) = *(*(*(entity_14 + 0xc) + 0xc) + 0x3c);
    *(stack_ptr_1 - 8) = &stack_ptr_1[0x16];
    Display_CreateSurface_18();
    void* stack_ptr_25;

    if (!(*(flagP1 + 0x1c) & 1))
    {
        int32_t* data_25 = g_5ca114;
        int32_t temp_11 = *data_25;
        int32_t* data_26;
        int32_t entity_19;
        void* stack_ptr_30;

        if (!context[0xc])
        {
            *(stack_ptr_1 - 4) = 1;
            *(stack_ptr_1 - 8) = 0x89;
            *(stack_ptr_1 - 0xc) = data_25;
            (*(temp_11 + 0x50))();
            data_26 = g_5ca114;
            *(stack_ptr_1 - 4) = 4;
            stack_ptr_30 = stack_ptr_1 - 4;
            entity_19 = *data_26;
        }
        else
        {
            *(stack_ptr_1 - 4) = 0;
            *(stack_ptr_1 - 8) = 0x89;
            *(stack_ptr_1 - 0xc) = data_25;
            (*(temp_11 + 0x50))();
            data_26 = g_5ca114;
            *(stack_ptr_1 - 4) = 2;
            stack_ptr_30 = stack_ptr_1 - 4;
            entity_19 = *data_26;
        }

        *(stack_ptr_30 - 4) = 1;
        *(stack_ptr_30 - 8) = 0;
        *(stack_ptr_30 - 0xc) = data_26;
        (*(entity_19 + 0x94))();
        int32_t* data_27 = g_5ca114;
        *stack_ptr_30 = 1;
        *(stack_ptr_30 - 4) = 0x1b;
        *(stack_ptr_30 - 8) = data_27;
        (*(*data_27 + 0x50))();
        int32_t* data_28 = g_5ca114;
        *stack_ptr_30 = 5;
        *(stack_ptr_30 - 4) = 0x13;
        *(stack_ptr_30 - 8) = data_28;
        (*(*data_28 + 0x50))();
        int32_t* data_29 = g_5ca114;
        *stack_ptr_30 = 6;
        *(stack_ptr_30 - 4) = 0x14;
        *(stack_ptr_30 - 8) = data_29;
        (*(*data_29 + 0x50))();
        stack_ptr_25 = stack_ptr_30 + 4;
    }
    else
    {
        int32_t* data_19 = g_5ca114;
        *(stack_ptr_1 - 4) = 0;
        *(stack_ptr_1 - 8) = 0x89;
        *(stack_ptr_1 - 0xc) = data_19;
        (*(*data_19 + 0x50))();
        int32_t* data_20 = g_5ca114;
        *(stack_ptr_1 - 4) = 2;
        *(stack_ptr_1 - 8) = 1;
        *(stack_ptr_1 - 0xc) = 0;
        int32_t temp_9 = *data_20;
        *(stack_ptr_1 - 0x10) = data_20;
        (*(temp_9 + 0x94))();
        int32_t* data_21 = g_5ca114;
        *(stack_ptr_1 - 4) = 1;
        *(stack_ptr_1 - 8) = 0x1b;
        *(stack_ptr_1 - 0xc) = data_21;
        (*(*data_21 + 0x50))();
        int32_t* data_22 = g_5ca114;
        *(stack_ptr_1 - 4) = 2;
        *(stack_ptr_1 - 8) = 0x13;
        *(stack_ptr_1 - 0xc) = data_22;
        (*(*data_22 + 0x50))();
        int32_t* data_23 = g_5ca114;
        *(stack_ptr_1 - 4) = 2;
        *(stack_ptr_1 - 8) = 0x14;
        *(stack_ptr_1 - 0xc) = data_23;
        (*(*data_23 + 0x50))();
        stack_ptr_25 = stack_ptr_1;
    }

    int32_t* data_30 = g_5ca114;
    int32_t temp_14 = 0;
    temp_14 = *(flagP1 + 0x1f);
    int32_t entity_21 = *data_30;
    *(stack_ptr_25 - 4) = -((temp_14 + 1)) << 0x18;
    *(stack_ptr_25 - 8) = 0x3c;
    *(stack_ptr_25 - 0xc) = data_30;
    (*(entity_21 + 0x50))();
    long double fpu_val_7_10 = *context - g_bcab08;
    *(stack_ptr_25 + 0x20) = context[1] - g_bcab10;
    *(stack_ptr_25 + 0x24) = context[2] - g_bcab18;
    long double fpu_val_6_17 = g_bcabec * fpu_val_7_10;
    memcpy(stack_ptr_25 + 0x28, &context[3], 0x28);
    *(stack_ptr_25 + 0x1c) = fpu_val_6_17;
    *(stack_ptr_25 + 0x20) = g_bcabec * *(stack_ptr_25 + 0x20);
    long double fpu_val_7_15 = g_bcabec * *(stack_ptr_25 + 0x24);
    *(stack_ptr_25 - 4) = stack_ptr_25 + 0x1c;
    *(stack_ptr_25 - 8) = stack_ptr_25 + 0x28;
    *(stack_ptr_25 - 0xc) = stack_ptr_25 + 0x118;
    *(stack_ptr_25 + 0x24) = fpu_val_7_15;
    long double fpu_val_7_17 = g_bcabec * context[8];
    *(stack_ptr_25 + 0x14) = g_bcabec * *(context + 0x44);
    *(stack_ptr_25 + 0x18) = g_bcabec * context[9];
    *(stack_ptr_25 + 0x28) = *(stack_ptr_25 + 0x28) * fpu_val_7_17;
    *(stack_ptr_25 + 0x2c) = *(stack_ptr_25 + 0x2c) * *(stack_ptr_25 + 0x14);
    *(stack_ptr_25 + 0x30) = *(stack_ptr_25 + 0x30) * *(stack_ptr_25 + 0x18);
    *(stack_ptr_25 + 0x34) = *(stack_ptr_25 + 0x34) * fpu_val_7_17;
    *(stack_ptr_25 + 0x38) = *(stack_ptr_25 + 0x38) * *(stack_ptr_25 + 0x14);
    *(stack_ptr_25 + 0x3c) = *(stack_ptr_25 + 0x3c) * *(stack_ptr_25 + 0x18);
    *(stack_ptr_25 + 0x40) = *(stack_ptr_25 + 0x40) * fpu_val_7_17;
    *(stack_ptr_25 + 0x44) = *(stack_ptr_25 + 0x44) * *(stack_ptr_25 + 0x14);
    *(stack_ptr_25 + 0x48) = *(stack_ptr_25 + 0x48) * *(stack_ptr_25 + 0x18);
    Display_SetGammaRamp_7();
    int32_t* data_32 = g_5ca114;
    int32_t entity_23 = *data_32;
    *(stack_ptr_25 - 4) = stack_ptr_25 + 0x118;
    *(stack_ptr_25 - 8) = 1;
    *(stack_ptr_25 - 0xc) = data_32;
    (*(entity_23 + 0x2c))();
    int32_t* stack_ptr_61 = stack_ptr_25;

    if (!*(context + 0x5c))
    {
        long double fpu_val_7_24 = g_b81700 * g_bcabc4;
        int32_t data_34 = g_b81700;
        memcpy(&stack_ptr_61[0x56], &g_bcaae0, 0xa8);
        stack_ptr_61[0x15] = fpu_val_7_24;
        memcpy(&stack_ptr_61[0x1c], &stack_ptr_61[0x56], 0xa8);
        stack_ptr_61[0x2c] = data_34;
        long double fpu_val_7_26 = Display_ClearSurfaces_4() * g_bcabc0;
        stack_ptr_61[0x2d] = stack_ptr_61[0x15] / fpu_val_7_26;
        stack_ptr_61[0x2e] = g_bcabc8 / stack_ptr_61[0x2c];
        long double fpu_val_7_31 = Display_ClearSurfaces_4() * stack_ptr_61[0x2e];
        stack_ptr_61[0x34] = 0;
        *(stack_ptr_61 - 4) = &stack_ptr_61[0x1c];
        stack_ptr_61[0x2f] = fpu_val_7_31;
        Transcontext_SetActiveTransContext();
    }

    int16_t data_35 = *(flagP1 + 0x10);

    if (data_35 != 0xffff)
    {
        int32_t* entity_25 = g_5ca114;
        int32_t temp_20 = *entity_25;
        *(stack_ptr_61 - 4) = *(*(*(context[0xa] + 0x10) + (data_35 << 2)) + 0x20);
        *(stack_ptr_61 - 8) = 0;
        *(stack_ptr_61 - 0xc) = entity_25;
        (*(temp_20 + 0x8c))();
        void* stack_ptr_66 = stack_ptr_61;
        int32_t entity_26 = context[0xc];

        if (entity_26)
        {
            int32_t data_39 = 0;
            int32_t* temp_21 = g_5ca114;
            data_39 = *(flagP1 + 0x12);
            int32_t source_5 = *temp_21;
            *(stack_ptr_66 - 4) = *(entity_26 + data_39 * 0x2c + 0x5c);
            *(stack_ptr_66 - 8) = 1;
            *(stack_ptr_66 - 0xc) = temp_21;
            (*(source_5 + 0x8c))();
        }

❓️        int32_t entity_28 = 0;
        *(stack_ptr_66 - 4) = 0;
        entity_28 = *(flagP1 + 0xc);
        int32_t source_6 = 0;
        *(stack_ptr_66 - 8) = entity_28;
        *(stack_ptr_66 - 0xc) = flagP1 + 0x20;
        int32_t entity_30 = 0;
        entity_30 = *(flagP1 + 0x16);
        int32_t dest_5 = 0;
        dest_5 = *(flagP1 + 0x14);
        *(stack_ptr_66 - 0x10) = entity_30;
        int32_t* entity_31 = *(stack_ptr_66 + 0x50);
        int32_t* data_41 = g_5ca114;
        source_6 = entity_31[0xb];
        int32_t temp_22 = *data_41;
        *(stack_ptr_66 - 0x14) = source_6 + dest_5;
        int32_t entity_32 = *entity_31;
        *(stack_ptr_66 - 0x18) = *entity_31[0xc];
        *(stack_ptr_66 - 0x1c) = entity_32;
        *(stack_ptr_66 - 0x20) = data_41;
        (*(temp_22 + 0x80))();
        stack_ptr_61 = stack_ptr_66;
    }

    int32_t result = *(context + 0x5c);
    *stack_ptr_61;
    stack_ptr_61[1];
    stack_ptr_61[2];
    stack_ptr_61[3];

    if (result)
        return result;

    stack_ptr_61[3] = &stack_ptr_61[0x56];
    return Transcontext_SetActiveTransContext();
}
