#include "004D0950-Render_ComputeNormals.h"
/* 0x004d0950 Render_ComputeNormals full linked: callers=159 callees=0 */
long double sub_4d0950(int32_t* a1)

{
    if (a1)
    {
        void* eax = *a1;

        if (eax)
            return *(*(*(eax + 0xc) + 0xc) + 0x78);
    }

    return 1f;
}
