// Original IGI.EXE function: Menu_DrawWidget_22 (VA 0x0042EC30; static CFG gate PASS, CFG score 1.000).
#include "Menu_DrawWidget_22.h"
void* Menu_DrawWidget_22(void* a1)

{
    void* result = *(a1 + 0x1b4);

    if (result)
    {
        void* objC1 = *(result + 0x2d4);
        int32_t tmpD1 = 0;
        result = *(objC1 + 0x118);

        if (result > 0)
        {
            int32_t* srcS1 = objC1 + 0x124;

            do
            {
                int32_t valA = *srcS1;

                if (valA >= 0)
                {
                    int32_t ctxB2 = valA * 7;
                    *(a1 + (ctxB2 << 3) + 0x1d0) =
                        *(a1 + (ctxB2 << 3) + 0x1d0) - *(objC1 + 0x25c);
                }

                result = *(objC1 + 0x118);
                tmpD1 += 1;
                srcS1 = &srcS1[5];
            } while (tmpD1 < result);
        }
    }

    return result;
}
