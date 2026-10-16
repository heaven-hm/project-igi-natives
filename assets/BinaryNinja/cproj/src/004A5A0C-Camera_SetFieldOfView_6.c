#include "gi_platform.h"
#include "004A5A0C-Camera_SetFieldOfView_6.h"
void* Camera_SetFieldOfView_6(char* a1, char* a2)

{
    int32_t ctxB;
    int32_t v_28 = ctxB;
    char* srcS = a2;
    char v_24[0x20];
    __builtin_memset(&v_24, 0, 0x20);
    char i;

    do
    {
        i = *srcS;
        uint32_t i_1 = i;
        int32_t saved_frame;
        *(&saved_frame + (i_1 >> 3) - 0x20) |= 1 << (i_1 & 7);
        srcS = &srcS[1];
    } while (i);
    char* tmpD1 = a1;

    if (!tmpD1)
        tmpD1 = g_936060;

    char valA4;

    while (true)
    {
        valA4 = *tmpD1;
        uint32_t srcS1 = valA4;

        if (!(v_24[srcS1 >> 3] & 1 << (srcS1 & 7)))
            break;

        if (!valA4)
            break;

        tmpD1 = &tmpD1[1];
    }

    char* ctxB3 = tmpD1;

    while (true)
    {
        valA4 = *tmpD1;

        if (!valA4)
            goto label_4a5a96;

        uint32_t srcS3 = valA4;

        if (v_24[srcS3 >> 3] & 1 << (srcS3 & 7))
        {
            *tmpD1 = 0;
            tmpD1 = &tmpD1[1];
    label_4a5a96: ;
            int32_t valA7 = ctxB3 - tmpD1;
            int32_t valA8 = -(valA7);
            g_936060 = tmpD1;
            return (valA8 - valA8) & ctxB3;
        }

        tmpD1 = &tmpD1[1];
    }
}
