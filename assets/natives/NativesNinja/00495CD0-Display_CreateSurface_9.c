#include "00495CD0-Display_CreateSurface_9.h"
/* 0x00495cd0 Display_CreateSurface_9 full linked: callers=1 callees=4 */
int32_t sub_495cd0(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t* ebp = a1;
    int32_t result = 0;
    int32_t edi = a3;

    if ((*(*ebp + 0x2c))(ebp, a2, edi, &a1, &a3, 0, 0, 0))
        return 0;

    int32_t eax_2 = g_5ca1a0;
    int32_t esi = g_5ca19c;

    if (esi >= eax_2 + edi)
    {
        Resource_Unpack(g_5ca194, a1, edi);
        g_5ca1a0 += edi;
    }
    else
    {
        void* esi_1 = esi - eax_2;
        Resource_Unpack(g_5ca194, a1, esi_1);
        sub_4b1730(g_5ca194, 0x2c, 0);
        void* edi_1 = edi - esi_1;
        Resource_Unpack(g_5ca194, esi_1 + a1, edi_1);
        g_5ca1a0 = edi_1;
        result = 1;
    }

    (*(*ebp + 0x4c))(ebp, a1, a3, 0, 0);
    return result;
}
