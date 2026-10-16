#include "QTask_ChangeParent_2.h"
void* const QTask_ChangeParent_2(void* a1, int16_t a2)

{
    void* const result = *(a1 + 0x10);

    for (void* i = *(result + 4); i; i = *(i + 4))
    {
        if (*(result + 0x1c) == a2)
            return result;

        result = i;
    }

    return nullptr;
}
