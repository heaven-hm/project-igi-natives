// Original IGI.EXE function: Menu_DrawWidget_22 (VA 0x0042EC30; static CFG gate PASS, CFG score 1.000).
#include "Menu_DrawWidget_22.h"
void* Menu_DrawWidget_22(void* context)

{
    void* result = *(context + 0x1b4);

    if (result)
    {
        void* entity_1 = *(result + 0x2d4);
        int32_t temp_1 = 0;
        result = *(entity_1 + 0x118);

        if (result > 0)
        {
            int32_t* source_1 = entity_1 + 0x124;

            do
            {
                int32_t data_val = *source_1;

                if (data_val >= 0)
                {
                    int32_t context_2 = data_val * 7;
                    *(context + (context_2 << 3) + 0x1d0) =
                        *(context + (context_2 << 3) + 0x1d0) - *(entity_1 + 0x25c);
                }

                result = *(entity_1 + 0x118);
                temp_1 += 1;
                source_1 = &source_1[5];
            } while (temp_1 < result);
        }
    }

    return result;
}
