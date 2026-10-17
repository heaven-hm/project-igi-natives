// IGI native provenance: Camera_ResetMatrix_9 - 0x004A6D7D - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A6D7D-Camera_ResetMatrix_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_9.h"
uint32_t Camera_ResetMatrix_9(int32_t context, int32_t param_2, enum SET_FILE_POINTER_MOVE_METHOD param_3)

{
    int32_t source_3;

    if (context < g_c32540)
        source_3 = (context & 0x1f) << 3;

    if (context >= g_c32540 || !(*((&g_c32440)[context >> 5] + source_3 + 4) & 1))
    {
        g_936068 = 0;
        g_936064 = 9;
    }
    else
    {
        HANDLE hFile = Camera_ApplyLineFilter_23(context);

        if (hFile != 0xffffffff)
        {
            uint32_t result = SetFilePointer(hFile, param_2, nullptr, param_3);
            enum WIN32_ERROR data_val;

            if (result != 0xffffffff)
                data_val = NO_ERROR;
            else
                data_val = GetLastError();

            if (!data_val)
            {
                int32_t data_1 = (&g_c32440)[context >> 5];
                *(data_1 + source_3 + 4) &= 0xfd;
                return result;
            }

            Camera_UpdateViewCone_22(data_val);
        }
        else
            g_936064 = 9;
    }

    return 0xffffffff;
}
