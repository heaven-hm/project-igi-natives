#include "Qtask_Update.h"
int32_t* Qtask_Update()

// Sig: void Qtask_Update(void)
// Note: Update QTask hash table call before loading level.
{
    void* valA = g_a758a4;

    if (valA)
        QTask_CleanupTypes(valA);

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
