#include "004B08F0-Sys_PopStack.h"
/* 0x004b08f0 Sys_PopStack full linked: callers=1 callees=0 */
char* sub_4b08f0(char* a1, char* a2)

{
    char* esi = a2;
    char* result = 1;
    *a1 = 0x5e;

    if (*esi)
    {
        char i;

        do
        {
            i = *esi;

            if (i - 0x24 > 0x3a)
            {
                *(result + a1) = *esi;
                result = &result[1];
            }
            else
            {
                int32_t ebx_1 = 0;
                ebx_1 = *(i + 0x4b095c);

                switch (ebx_1)
                {
                    case 0:
                    {
                        *(result + a1) = 0x2f;
                        *(&result[1] + a1) = *esi;
                        result = &result[2];
                        esi = &esi[1];
                        break;
                    }
                    case 1:
                    {
                        *(result + a1) = 0x2e;
                        result = &result[1];
                        *(result + a1) = 0x2a;
                        result = &result[1];
                        break;
                    }
                    case 2:
                    {
                        *(result + a1) = 0x2f;
                        result = &result[1];
                        *(result + a1) = 0x2e;
                        result = &result[1];
                        break;
                    }
                    case 3:
                    {
                        *(result + a1) = i;
                        result = &result[1];
                        esi = &esi[1];
                        *(result + a1) = *esi;
                        result = &result[1];
                        break;
                    }
                    case 4:
                    {
                        *(result + a1) = 0x2e;
                        result = &result[1];
                        break;
                    }
                    case 5:
                    {
                        *(result + a1) = *esi;
                        result = &result[1];
                        break;
                    }
                }
            }

            i = esi[1];
            esi = &esi[1];
        } while (i);
    }

    *(result + a1) = 0x24;
    *(result + a1 + 1) = 0;
    return result;
}
