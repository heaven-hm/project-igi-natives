#include "gi_platform.h"
#include "00401C10-QTask_ChangeParent_2.h"
void* const QTask_ChangeParent_2(void* a1, int16_t a2)

{
    void* const result = (*(int32_t*)(uintptr_t)(a1 + 0x10));

    for (void* i = *(result + 4); i; i = *(i + 4))
    {
        if (*(result + 0x1c) == a2)
            return result;

        result = i;
    }

    return nullptr;
}
