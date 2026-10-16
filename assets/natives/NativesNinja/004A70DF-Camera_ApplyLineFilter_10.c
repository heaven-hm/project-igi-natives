#include "004A70DF-Camera_ApplyLineFilter_10.h"
/* 0x004a70df Camera_ApplyLineFilter_10 full linked: callers=1 callees=1 */
int32_t* sub_4a70df()

{
    int32_t edx = g_c321e0;
    int32_t* result = nullptr;
    int32_t eax = 0;

    if (edx > 0)
    {
        int32_t* ebx_1 = g_c311dc;
        int32_t* edi_1 = ebx_1;

        while (true)
        {
            void* ecx_1 = *edi_1;

            if (!ecx_1)
            {
                int32_t edi_3 = eax << 2;
                *(edi_3 + g_c311dc) = sub_4aa670(0x20);
                int32_t* result_1 = *(edi_3 + g_c311dc);

                if (!result_1)
                    break;

                result = result_1;
            }
            else if (!(*(ecx_1 + 0xc) & 0x83))
                result = ebx_1[eax];
            else
            {
                eax += 1;
                edi_1 = &edi_1[1];

                if (eax >= edx)
                    break;

                continue;
            }

            if (!result)
                break;

            result[4] = 0xffffffff;
            result[1] = 0;
            result[3] = 0;
            result[2] = 0;
            *result = 0;
            result[7] = 0;
            break;
        }
    }

    return result;
}
