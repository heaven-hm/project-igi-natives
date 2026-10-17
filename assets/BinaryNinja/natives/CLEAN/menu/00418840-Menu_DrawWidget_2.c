// IGI native provenance: Menu_DrawWidget_2 - 0x00418840 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00418840-Menu_DrawWidget_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_DrawWidget_2.h"
int32_t Menu_DrawWidget_2(void* context, void* param_2)

{
    int32_t data_val = Menu_PlayMusic_13();
    int16_t item_c = data_val;
    data_val = *(param_2 + 0x1c);
    char data_1 = TaskType_IsDerivedFrom(data_val, item_c);

    if (data_1)
    {
        data_1 = *(param_2 + 0x4c);

        if (data_1)
        {
            *(context + (*(context + 0xbc) << 2) + 0x3c) = param_2;
            *(context + 0xbc) += 1;
            return context;
        }
    }

    int32_t* i = *(param_2 + 8);

    if (*i && i)
    {
        do
        {
            data_1 = Menu_DrawWidget_2(context, i);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return data_1;
}
