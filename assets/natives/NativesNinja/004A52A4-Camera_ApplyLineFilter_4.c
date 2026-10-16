#include "004A52A4-Camera_ApplyLineFilter_4.h"
/* 0x004a52a4 Camera_ApplyLineFilter_4 full linked: callers=8 callees=3 */
int32_t sub_4a52a4(int32_t* a1, void* a2, enum SET_FILE_POINTER_MOVE_METHOD a3)

{
    int32_t eax = a1[3];

    if (eax & 0x83)
    {
        enum SET_FILE_POINTER_MOVE_METHOD edi_1 = a3;

        if (!edi_1 || edi_1 == FILE_CURRENT || edi_1 == FILE_END)
        {
            eax &= 0xef;
            a1[3] = eax;

            if (edi_1 == FILE_CURRENT)
            {
                a2 += sub_4a6e17(a1);
                edi_1 = FILE_BEGIN;
            }

            sub_4a6bd2(a1);
            int32_t eax_2 = a1[3];

            if (eax_2 & 0x80)
            {
                eax_2 &= 0xfc;
                a1[3] = eax_2;
            }
            else if (eax_2 & 1 && eax_2 & 8 && !(*(&eax_2 + 1) & 4))
                a1[6] = 0x200;

            int32_t ecx_3 = 0;
            ecx_3 = sub_4a6d7d(a1[4], a2, edi_1) != 0xffffffff;
            return ecx_3 - 1;
        }
    }

    g_936064 = 0x16;
    return 0xffffffff;
}
