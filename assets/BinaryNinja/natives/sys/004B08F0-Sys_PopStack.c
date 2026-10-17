// Original IGI.EXE function: Sys_PopStack (VA 0x004B08F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack.h"
char* Sys_PopStack(char* context, char* param_2)

{
    char* source_val = param_2;
    char* result = 1;
    *context = 0x5e;

    if (*source_val)
    {
        char i;

        do
        {
            i = *source_val;

            if (i - 0x24 > 0x3a)
            {
                *(result + context) = *source_val;
                result = &result[1];
            }
            else
            {
                int32_t context_1 = 0;
                context_1 = *(i + 0x4b095c);

                switch (context_1)
                {
                    case 0:
                    {
                        *(result + context) = 0x2f;
                        *(&result[1] + context) = *source_val;
                        result = &result[2];
                        source_val = &source_val[1];
                        break;
                    }
                    case 1:
                    {
                        *(result + context) = 0x2e;
                        result = &result[1];
                        *(result + context) = 0x2a;
                        result = &result[1];
                        break;
                    }
                    case 2:
                    {
                        *(result + context) = 0x2f;
                        result = &result[1];
                        *(result + context) = 0x2e;
                        result = &result[1];
                        break;
                    }
                    case 3:
                    {
                        *(result + context) = i;
                        result = &result[1];
                        source_val = &source_val[1];
                        *(result + context) = *source_val;
                        result = &result[1];
                        break;
                    }
                    case 4:
                    {
                        *(result + context) = 0x2e;
                        result = &result[1];
                        break;
                    }
                    case 5:
                    {
                        *(result + context) = *source_val;
                        result = &result[1];
                        break;
                    }
                }
            }

            i = source_val[1];
            source_val = &source_val[1];
        } while (i);
    }

    *(result + context) = 0x24;
    *(result + context + 1) = 0;
    return result;
}
