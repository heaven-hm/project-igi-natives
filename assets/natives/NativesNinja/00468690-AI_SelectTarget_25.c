#include "00468690-AI_SelectTarget_25.h"
/* 0x00468690 AI_SelectTarget_25 full linked: callers=1 callees=1 */
int32_t sub_468690(void* a1)

{
    int32_t ebx = 0;
    char* edi = a1 + 0x8c;
    *(a1 + 0x18c) = 0;
    int32_t result;

    do
    {
        result = *edi;

        if (!result)
            break;

        result = result - 0x20;

        if (result > 0x19)
        {
            ebx = 0;
            edi = &edi[1];
        }
        else
        {
            int32_t ecx_1 = 0;
            ecx_1 = lookup_table_468778[result];

            switch (ecx_1)
            {
                case 0:
                {
                    edi = &edi[1];
                    break;
                }
                case 1:
                {
                    ebx = 1;
                    edi = &edi[1];
                    break;
                }
                case 2:
                {
                    int32_t edx_1 = sub_4a5490(edi);

                    if (ebx)
                    {
                        int32_t eax_2 = *(a1 + 0x18c);

                        if (eax_2)
                        {
                            int32_t eax_4 = *(a1 + (eax_2 << 2) + 0x18c) + 1;

                            while (eax_4 < edx_1)
                            {
                                int32_t ecx_2 = *(a1 + 0x18c);

                                if (ecx_2 >= 0x40)
                                    break;

                                *(a1 + (ecx_2 << 2) + 0x190) = eax_4;
                                eax_4 += 1;
                                *(a1 + 0x18c) += 1;
                            }

                            ebx = 0;
                        }
                    }

                    result = *(a1 + 0x18c);
                    *(a1 + (result << 2) + 0x190) = edx_1;
                    *(a1 + 0x18c) += 1;

                    if (edx_1)
                    {
                        int32_t i;

                        do
                        {
                            edi = &edi[1];
                            int32_t edx_2;
                            edx_2 = HIGHD(0x66666667 * edx_1);
                            result = LOWD(0x66666667 * edx_1);
                            i = edx_2 >> 2;
                            edx_1 s/= 0xa;
                        } while (i != -((i >> 0x1f)));
                    }
                    break;
                }
                case 3:
                {
                    ebx = 0;
                    edi = &edi[1];
                    break;
                }
            }
        }
    } while (*(a1 + 0x18c) < 0x40);

    return result;
}
