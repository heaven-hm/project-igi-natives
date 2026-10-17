// Original IGI.EXE function: AI_SelectTarget_25 (VA 0x00468690; static CFG gate PASS, CFG score 1.000).
#include "AI_SelectTarget_25.h"
int32_t AI_SelectTarget_25(void* context)

{
    int32_t context_val = 0;
    char* dest_val = context + 0x8c;
    *(context + 0x18c) = 0;
    int32_t result;

    do
    {
        result = *dest_val;

        if (!result)
            break;

        result = result - 0x20;

        if (result > 0x19)
        {
            context_val = 0;
            dest_val = &dest_val[1];
        }
        else
        {
            int32_t entity_1 = 0;
            entity_1 = lookup_table_468778[result];

            switch (entity_1)
            {
                case 0:
                {
                    dest_val = &dest_val[1];
                    break;
                }
                case 1:
                {
                    context_val = 1;
                    dest_val = &dest_val[1];
                    break;
                }
                case 2:
                {
                    int32_t temp_1 = Camera_ResetMatrix_4(dest_val);

                    if (context_val)
                    {
                        int32_t data_2 = *(context + 0x18c);

                        if (data_2)
                        {
                            int32_t data_4 = *(context + (data_2 << 2) + 0x18c) + 1;

                            while (data_4 < temp_1)
                            {
                                int32_t entity_2 = *(context + 0x18c);

                                if (entity_2 >= 0x40)
                                    break;

                                *(context + (entity_2 << 2) + 0x190) = data_4;
                                data_4 += 1;
                                *(context + 0x18c) += 1;
                            }

                            context_val = 0;
                        }
                    }

                    result = *(context + 0x18c);
                    *(context + (result << 2) + 0x190) = temp_1;
                    *(context + 0x18c) += 1;

                    if (temp_1)
                    {
                        int32_t i;

                        do
                        {
                            dest_val = &dest_val[1];
                            int32_t temp_2;
                            temp_2 = HIGHD(0x66666667 * temp_1);
                            result = LOWD(0x66666667 * temp_1);
                            i = temp_2 >> 2;
                            temp_1 s/= 0xa;
                        } while (i != -((i >> 0x1f)));
                    }
                    break;
                }
                case 3:
                {
                    context_val = 0;
                    dest_val = &dest_val[1];
                    break;
                }
            }
        }
    } while (*(context + 0x18c) < 0x40);

    return result;
}
