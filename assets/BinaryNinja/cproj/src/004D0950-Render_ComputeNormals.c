#include "gi_platform.h"
#include "004D0950-Render_ComputeNormals.h"
long double Render_ComputeNormals(int32_t* a1)

{
    if (a1)
    {
        void* valA = *a1;

        if (valA)
            return (*(int32_t*)(uintptr_t)(*(*(valA + 0xc) + 0xc) + 0x78));
    }

    return 1.0f;
}
