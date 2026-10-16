#include "004D9700-Render_VirmodelIsNull.h"
/* 0x004d9700 Render_VirmodelIsNull full linked: callers=1 callees=2 */
int32_t sub_4d9700(void* a1, int32_t* a2)

{
    if (a2)
    {
        *(a1 + 0x74) = a2;
        int32_t result;
        long double st0;
        st0 = sub_4d0950(a2);
        *(a1 + 0xa0) = st0;
        return result;
    }

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
