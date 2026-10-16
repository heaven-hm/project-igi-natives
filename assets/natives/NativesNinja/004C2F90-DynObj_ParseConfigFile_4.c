#include "004C2F90-DynObj_ParseConfigFile_4.h"
/* 0x004c2f90 DynObj_ParseConfigFile_4 full linked: callers=0 callees=3 */
int32_t sub_4c2f90(int32_t* a1)

{
    int32_t result;
    result = a1[2];

    if (!result)
    {
        char* esi_1 = &g_547f48;

        if (!sub_48f340())
            esi_1 = &g_547f44;

        int32_t edx_1 = *a1;
        int32_t i = 0xffffffff;
        int32_t edi_1 = edx_1;
        result = 0;

        while (i)
        {
            bool cond:1_1 = 0 != *edi_1;
            edi_1 += 1;
            i -= 1;

            if (!cond:1_1)
                break;
        }

        char* edi_2 = esi_1;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:2_1 = 0 != *edi_2;
            edi_2 = &edi_2[1];
            i_1 -= 1;

            if (!cond:2_1)
                break;
        }

        if (~i - 1 > ~i_1 - 1)
        {
            char* edi_3 = esi_1;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond:4_1 = 0 != *edi_3;
                edi_3 = &edi_3[1];
                i_2 -= 1;

                if (!cond:4_1)
                    break;
            }

            int32_t edi_4 = edx_1;
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool cond:5_1 = 0 != *edi_4;
                edi_4 += 1;
                i_3 -= 1;

                if (!cond:5_1)
                    break;
            }

            result = sub_4a5980(0, edx_1, ~i_3 - 1, edx_1 - (~i_2 - 1) + ~i_3 - 1, esi_1);

            if (!result)
                return Rigid_DyncubeObjRead(*a1);
        }
    }

    return result;
}
