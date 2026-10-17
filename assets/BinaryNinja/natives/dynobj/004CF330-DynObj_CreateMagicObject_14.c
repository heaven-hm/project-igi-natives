// Original IGI.EXE function: DynObj_CreateMagicObject_14 (VA 0x004CF330; static CFG gate PASS, CFG score 1.000).
#include "DynObj_CreateMagicObject_14.h"
int32_t* DynObj_CreateMagicObject_14(void* context)

{
    int32_t* result = DynObj_CreateMagicObject_13(*(context + 8), 0x4d4f4453, nullptr);
    int32_t i_1 = *result;
    void* source_1 = &result[1];

    if (i_1 > 0)
    {
        int32_t i;

        do
        {
            Camera_SetFieldOfView_33(context + 0x10, DynObj_LocalModelsSMef(source_1));
            void* dest_1 = source_1;
            int32_t j = 0xffffffff;
            result = nullptr;

            while (j)
            {
                bool flag_0_1 = 0 != *dest_1;
                dest_1 += 1;
                j -= 1;

                if (!flag_0_1)
                    break;
            }

            i = i_1;
            i_1 -= 1;
            source_1 = source_1 + ~j - 1 + 1;
        } while (i != 1);
    }

    return result;
}
