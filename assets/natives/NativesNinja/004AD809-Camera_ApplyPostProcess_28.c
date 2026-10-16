#include "004AD809-Camera_ApplyPostProcess_28.h"
/* 0x004ad809 Camera_ApplyPostProcess_28 full linked: callers=2 callees=5 */
char* sub_4ad809(uint32_t a1, int32_t a2)

{
    uint32_t dwBytes = a1 * a2;
    a1 = dwBytes;

    if (dwBytes <= 0xffffffe0)
    {
        if (!dwBytes)
            dwBytes = 1;

        dwBytes = (dwBytes + 0xf) & 0xfffffff0;
    }

    bool cond:1_1;

    do
    {
        if (dwBytes <= 0xffffffe0)
        {
            int32_t eax_1 = g_c3242c;
            char* result;

            if (eax_1 != 3)
            {
                if (eax_1 == 2 && dwBytes <= g_5466d4)
                {
                    result = sub_4ab891(dwBytes >> 4);

                    if (result)
                    {
                        sub_4acd10(result, 0, dwBytes);
                        return result;
                    }
                }
            }
            else if (a1 <= g_c321fc)
            {
                result = sub_4ab0e4(a1);

                if (result)
                {
                    sub_4acd10(result, 0, a1);
                    return result;
                }
            }

            result = HeapAlloc(g_c32428, HEAP_ZERO_MEMORY, dwBytes);

            if (result || !g_936250)
                return result;
        }
        else if (!g_936250)
            return nullptr;

        cond:1_1 = !sub_4ad722(dwBytes);
    } while (!cond:1_1);
    return nullptr;
}
