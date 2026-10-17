// Original IGI.EXE function: DynObj_ParseConfigFile_4 (VA 0x004C2F90; static CFG gate PASS, CFG score 1.000).
#include "DynObj_ParseConfigFile_4.h"
int32_t DynObj_ParseConfigFile_4(int32_t* context)

{
    int32_t result;
    result = context[2];

    if (!result)
    {
        char* source_1 = &g_547f48;

        if (!FX_FireBallUpdate_27())
            source_1 = &g_547f44;

        int32_t temp_1 = *context;
        int32_t i = 0xffffffff;
        int32_t dest_1 = temp_1;
        result = 0;

        while (i)
        {
            bool flag_1_1 = 0 != *dest_1;
            dest_1 += 1;
            i -= 1;

            if (!flag_1_1)
                break;
        }

        char* dest_2 = source_1;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_2_1 = 0 != *dest_2;
            dest_2 = &dest_2[1];
            i_1 -= 1;

            if (!flag_2_1)
                break;
        }

        if (~i - 1 > ~i_1 - 1)
        {
            char* dest_3 = source_1;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool flag_4_1 = 0 != *dest_3;
                dest_3 = &dest_3[1];
                i_2 -= 1;

                if (!flag_4_1)
                    break;
            }

            int32_t dest_4 = temp_1;
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool flag_5_1 = 0 != *dest_4;
                dest_4 += 1;
                i_3 -= 1;

                if (!flag_5_1)
                    break;
            }

            result = Camera_UpdateTransform_6(0, temp_1, ~i_3 - 1, temp_1 - (~i_2 - 1) + ~i_3 - 1, source_1);

            if (!result)
                return Rigid_DyncubeObjRead(*context);
        }
    }

    return result;
}
