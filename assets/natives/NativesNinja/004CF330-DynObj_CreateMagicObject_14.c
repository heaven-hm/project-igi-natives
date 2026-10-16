#include "004CF330-DynObj_CreateMagicObject_14.h"
/* 0x004cf330 DynObj_CreateMagicObject_14 full linked: callers=1 callees=3 */
int32_t* sub_4cf330(void* a1)

{
    int32_t* result = sub_4ceaa0(*(a1 + 8), 0x4d4f4453, nullptr);
    int32_t i_1 = *result;
    void* esi_1 = &result[1];

    if (i_1 > 0)
    {
        int32_t i;

        do
        {
            sub_4af8f0(a1 + 0x10, sub_4cf390(esi_1));
            void* edi_1 = esi_1;
            int32_t j = 0xffffffff;
            result = nullptr;

            while (j)
            {
                bool cond:0_1 = 0 != *edi_1;
                edi_1 += 1;
                j -= 1;

                if (!cond:0_1)
                    break;
            }

            i = i_1;
            i_1 -= 1;
            esi_1 = esi_1 + ~j - 1 + 1;
        } while (i != 1);
    }

    return result;
}
