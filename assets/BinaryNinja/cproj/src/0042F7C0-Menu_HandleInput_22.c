#include "gi_platform.h"
#include "0042F7C0-Menu_HandleInput_22.h"
void* Menu_HandleInput_22(void* a1)

{
    void* result = (*(int32_t*)(uintptr_t)(*(a1 + 0x1b4) + 0x2d4));
    (*(int32_t*)(uintptr_t)(a1 + 0x758)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x754)) = 0;

    if (!*(result + 0x260))
        (*(int32_t*)(uintptr_t)(a1 + 0x750)) = *(result + 0x118);

    int32_t i = 0;

    if (*(result + 0x118) > 0)
    {
        int32_t ctxB;
        int32_t v_c_1 = ctxB;
        bool* objC3 = a1 + 0x75c;
        char* srcS1 = result + 0x11c;

        do
        {
            if (srcS1[1])
                (*(int32_t*)(uintptr_t)(a1 + 0x758)) += 1;

            if (*srcS1)
                (*(int32_t*)(uintptr_t)(a1 + 0x754)) += 1;

            *objC3 = !*(result + 0x260);
            i += 1;
            srcS1 = &srcS1[0x14];
            objC3 = &objC3[0x1c];
        } while (i < *(result + 0x118));
    }

    return result;
}
