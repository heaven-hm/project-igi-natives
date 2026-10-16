#include "004F0E90-Qtask_Update.h"
/* 0x004f0e90 Qtask_Update full linked: callers=2 callees=2 */
int32_t* Qtask_Update()

// Sig: void Qtask_Update(void)
// Note: Update QTask hash table call before loading level.
{
    void* eax = g_a758a4;

    if (eax)
        QTask_CleanupTypes(eax);

    int32_t* result;

    for (int32_t* i = &g_a71890; i < &g_a75890; i = &i[1])
    {
        result = *i;

        if (result)
        {
            result = Qtask_UpdateList(result);
            *i = 0;
        }
    }

    return result;
}
