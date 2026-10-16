#include "Sys_PopStack.h"
char* Sys_PopStack(char* a1, char* a2)

{
    char* srcS = a2;
    char* result = 1;
    *a1 = 0x5e;

    if (*srcS)
    {
        char i;

        do
        {
            i = *srcS;

            if (i - 0x24 > 0x3a)
            {
                *(result + a1) = *srcS;
                result = &result[1];
            }
            else
            {
                int32_t ctxB1 = 0;
                ctxB1 = *(i + 0x4b095c);

                switch (ctxB1)
                {
                    case 0:
                    {
                        *(result + a1) = 0x2f;
                        *(&result[1] + a1) = *srcS;
                        result = &result[2];
                        srcS = &srcS[1];
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
                        srcS = &srcS[1];
                        *(result + a1) = *srcS;
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
                        *(result + a1) = *srcS;
                        result = &result[1];
                        break;
                    }
                }
            }

            i = srcS[1];
            srcS = &srcS[1];
        } while (i);
    }

    *(result + a1) = 0x24;
    *(result + a1 + 1) = 0;
    return result;
}
