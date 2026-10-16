#include "004F9160-Graph_Process.h"
/* 0x004f9160 Graph_Process full linked: callers=0 callees=1 */
void* sub_4f9160(void* a1)

{
    void* result = *(a1 + 0x6c);

    if (result)
    {
        result = sub_4b0d10(result);
        *(a1 + 0x6c) = 0;
    }

    return result;
}
