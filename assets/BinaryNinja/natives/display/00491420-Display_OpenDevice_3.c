// IGI native provenance: Display_OpenDevice_3 - 0x00491420 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491420-Display_OpenDevice_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_OpenDevice_3.h"
char* Display_OpenDevice_3(char* context, int32_t* param_2)

{
    int32_t* dest_val = param_2;
    int32_t* flagP = nullptr;
    param_2 = nullptr;
    char entity_val = dest_val[0x1e];
    char* source_val = dest_val[0xd];
    char* context_val = source_val;
    char* item_18 = source_val;
    long double fpu7;

    if (!entity_val)
        fpu7 = dest_val[1];
    else
    {
        int32_t data_3;
        char* temp_val;
        temp_val = HIGHD(*(*(context + 0x154) + 4));
        data_3 = LOWD(*(*(context + 0x154) + 4));
        fpu7 = (data_3 - temp_val) >> 1;
    }

    float item_10 = dest_val[2];
    char* data_6;
    long double fpu_val_7_2;

    if (!entity_val)
    {
        data_6 = dest_val[1];
        fpu_val_7_2 = *(*(context + 0x154) + 4) - data_6;
    }
    else
    {
        data_6 = context;
        fpu_val_7_2 = *(*(data_6 + 0x154) + 4);
    }

    char temp_2 = *source_val;

    if (temp_2)
    {
        data_6 = &source_val[1];
        int32_t* flagP1 = &dest_val[0xe];
        char* item_14_1 = data_6;

        while (param_2 < 7)
        {
            if (temp_2 != 0xd)
            {
                if (temp_2 == 0x20)
                {
                    *source_val = 0;
                    long double fpu_val_7_3 = Sys_PopStack_18(*(context + (*dest_val << 2) + 0x1b8), context_val);
                    long double f1_1 = fpu_val_7_2;
                    fpu_val_7_3 - f1_1;

                    if (*(&((fpu_val_7_3 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_3, f1_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_3 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        item_18 = source_val;
                    else
                    {
                        *flagP1 = context_val;
                        flagP1 = &flagP1[1];
                        param_2 += 1;
                        *item_18 = 0;
                        context_val = &item_18[1];
                        item_18 = context_val;
                    }

                    data_6 = item_14_1;
                    *source_val = 0x20;
                }

                if (*source_val == 0xa)
                {
                    *flagP1 = context_val;
                    flagP1 = &flagP1[1];
                    param_2 += 1;
                    *source_val = 0;
                    context_val = data_6;
                    item_18 = data_6;
                }
            }

            temp_2 = source_val[1];
            source_val = &source_val[1];
            data_6 = &data_6[1];
            item_14_1 = data_6;

            if (!temp_2)
                break;
        }

        flagP = param_2;
    }

    dest_val[flagP + 0xe] = context_val;
    int32_t* i_1 = flagP + 1;
    param_2 = i_1;

    if (i_1 <= 0)
    {
        dest_val[9] = i_1;
        return data_6;
    }

    int32_t*** source_1 = &dest_val[0x16];
    int32_t data_16;
    int32_t* i;

    do
    {
        int32_t** data_13 = Sys_OpenFileStream_18(*(context + (*dest_val << 2) + 0x1b8), fpu7, item_10, source_1[-8]);
        *source_1 = data_13;

        if (dest_val[0x1e])
        {
            int32_t entity_8 = data_13[9];
            entity_8 |= 0x80;
            data_13[9] = entity_8;
        }

        int32_t** data_14 = *source_1;
        data_14[9] |= 8;
        (*source_1)[5] = dest_val[0xa] * 128.0f;
        (*source_1)[6] = dest_val[0xb] * 128.0f;
        (*source_1)[7] = dest_val[0xc] * 128.0f;
        data_16 = Sys_AllocateMemory_22(*source_1);
        source_1 = &source_1[1];
        i = i_1;
        i_1 -= 1;
        item_10 = data_16 + item_10;
    } while (i != 1);
    dest_val[9] = param_2;
    return data_16;
}
