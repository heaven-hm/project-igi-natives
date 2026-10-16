#include "004A6D7D-Camera_ResetMatrix_9.h"
/* 0x004a6d7d Camera_ResetMatrix_9 full linked: callers=13 callees=4 */
uint32_t sub_4a6d7d(int32_t a1, int32_t a2, enum SET_FILE_POINTER_MOVE_METHOD a3)

{
    int32_t esi_3;

    if (a1 < g_c32540)
        esi_3 = (a1 & 0x1f) << 3;

    if (a1 >= g_c32540 || !(*((&g_c32440)[a1 >> 5] + esi_3 + 4) & 1))
    {
        g_936068 = 0;
        g_936064 = 9;
    }
    else
    {
        HANDLE hFile = sub_4abe33(a1);

        if (hFile != 0xffffffff)
        {
            uint32_t result = SetFilePointer(hFile, a2, nullptr, a3);
            enum WIN32_ERROR eax;

            if (result != 0xffffffff)
                eax = NO_ERROR;
            else
                eax = GetLastError();

            if (!eax)
            {
                int32_t eax_1 = (&g_c32440)[a1 >> 5];
                *(eax_1 + esi_3 + 4) &= 0xfd;
                return result;
            }

            sub_4abc46(eax);
        }
        else
            g_936064 = 9;
    }

    return 0xffffffff;
}
