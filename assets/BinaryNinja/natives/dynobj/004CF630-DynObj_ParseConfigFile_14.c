// Original IGI.EXE function: DynObj_ParseConfigFile_14 (VA 0x004CF630; static CFG gate PASS, CFG score 1.000).
#include "DynObj_ParseConfigFile_14.h"
int32_t* DynObj_ParseConfigFile_14(void* a1)

{
    int32_t* result = DynObj_CreateMagicObject_13(*(a1 + 8), 0x53564f4c, nullptr);

    if (result)
    {
        int32_t i_1 = *result;
        void* srcS1 = &result[1];

        if (i_1 > 0)
        {
            int32_t i;

            do
            {
                Camera_SetFieldOfView_33(a1 + 0x1c, DynObj_UpdateDynTree_14(srcS1));
                void* dstD1 = srcS1;
                int32_t j = 0xffffffff;
                result = nullptr;

                while (j)
                {
                    bool cond_0_1 = 0 != *dstD1;
                    dstD1 += 1;
                    j -= 1;

                    if (!cond_0_1)
                        break;
                }

                i = i_1;
                i_1 -= 1;
                srcS1 = srcS1 + ~j - 1 + 1;
            } while (i != 1);
        }
    }

    return result;
}
