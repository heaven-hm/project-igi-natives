#include "004A9FC1-Camera_SetFieldOfView_19.h"
/* 0x004a9fc1 Camera_SetFieldOfView_19 full linked: callers=3 callees=2 */
uint32_t __fastcall sub_4a9fc1(int32_t a1)

{
    int32_t var_8 = a1;
    uint32_t arg_4;

    if (!g_9361e4)
    {
        uint32_t eax_1 = arg_4;

        if (eax_1 >= 0x41 && eax_1 <= 0x5a)
            return eax_1 + 0x20;

        return eax_1;
    }

    uint32_t ebx_1 = arg_4;
    BOOL eax_2;

    if (ebx_1 < 0x100)
    {
        if (g_54427c <= 1)
        {
            wchar16 (* eax_3)[0x21] = g_544070;
            eax_3 = (*eax_3)[ebx_1];
            eax_2 = eax_3 & 1;
        }
        else
        {
            uint32_t var_1c_1 = ebx_1;
            int32_t eax;
            int32_t entry_edx;
            eax_2 = sub_4a7f2a(eax, entry_edx, a1, 1);
        }
    }

    if (ebx_1 >= 0x100 || eax_2)
    {
        char eax_5 = ebx_1 >> 8;
        void* eax_6;

        if (!(*(&(**&g_544070)[eax_5] + 1) & 0x80))
        {
            *(&arg_4 + 1) = 0;
            arg_4 = ebx_1;
            eax_6 = 1;
        }
        else
        {
            *(&arg_4 + 2) = 0;
            arg_4 = eax_5;
            *(&arg_4 + 1) = ebx_1;
            eax_6 = 2;
        }

        int32_t eax_7 = sub_4ad4d3(g_9361e4, 0x100, &arg_4, eax_6, &var_8, 3, 0, 1);

        if (eax_7)
        {
            if (eax_7 != 1)
                return *(&var_8 + 1) << 8 | var_8;

            return var_8;
        }
    }

    return ebx_1;
}
