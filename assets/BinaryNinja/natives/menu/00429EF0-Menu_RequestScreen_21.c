// Original IGI.EXE function: Menu_RequestScreen_21 (VA 0x00429EF0; static CFG gate FAIL, CFG score 0.667).
#include "Menu_RequestScreen_21.h"
void* Menu_RequestScreen_21(void* context)

{
    void* temp_1 = context;
    int32_t i = 0;
    void* flagP = *(*(temp_1 + 0x1b4) + 0x2d4);

    if (*(flagP + 0x28) > 0)
    {
        void* temp_val = temp_1 + 0x748;
        void* data_2 = flagP + 0x2c;

        do
        {
            i += 1;
            memcpy(temp_val, data_2, 0x1c);
            data_2 += 0x1c;
            temp_val += 0x1c;
        } while (i < *(flagP + 0x28));

        temp_1 = context;
    }

    memcpy(temp_1 + 0x780, temp_1 + 0x748, 0x1c);
    *(context + 0x794) = -(*(context + 0x794));
    memcpy(context + 0x79c, context + 0x764, 0x1c);
    *(context + 0x7b0) = -(*(context + 0x7b0));
    return context;
}
