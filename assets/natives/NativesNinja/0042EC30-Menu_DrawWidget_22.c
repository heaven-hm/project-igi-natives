#include "0042EC30-Menu_DrawWidget_22.h"
/* 0x0042ec30 Menu_DrawWidget_22 full linked: callers=2 callees=0 */
void* Menu_DrawWidget_22(void* a1)

{
    void* result = *(a1 + 0x1b4);

    if (result)
    {
        void* ecx_1 = *(result + 0x2d4);
        int32_t edx_1 = 0;
        result = *(ecx_1 + 0x118);

        if (result > 0)
        {
            int32_t* esi_1 = ecx_1 + 0x124;

            do
            {
                int32_t eax = *esi_1;

                if (eax >= 0)
                {
                    int32_t ebx_2 = eax * 7;
                    *(a1 + (ebx_2 << 3) + 0x1d0) =
                        *(a1 + (ebx_2 << 3) + 0x1d0) - *(ecx_1 + 0x25c);
                }

                result = *(ecx_1 + 0x118);
                edx_1 += 1;
                esi_1 = &esi_1[5];
            } while (edx_1 < result);
        }
    }

    return result;
}
