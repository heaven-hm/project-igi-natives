#include "004CE830-DynObj_CreateMagicObject_12.h"
/* 0x004ce830 DynObj_CreateMagicObject_12 full linked: callers=2 callees=4 */
int32_t* sub_4ce830(int32_t* a1, int32_t a2)

{
    int32_t* result = a1;
    int32_t ecx_2 = result[0x37a];
    int32_t edx_1 = -(result[0x379]);
    int32_t edx_2 = 0;
    double var_58 = -(result[0x378]);
    double var_50 = edx_1;
    double var_48 = -(ecx_2);

    if (!a2)
    {
        result[0x37c] = 1;

        if (g_54876c)
        {
            int32_t ebx;
            int32_t var_60_1 = ebx;
            void* ebp_1 = result[4];
            int32_t var_40;
            memcpy(&var_40, ebp_1, 0x40);
            char var_10_1 = 0;
            int32_t i = 7;
            void var_34;
            int32_t* esi_2 = &var_34;
            int32_t* edi_1 = ebp_1 + 0x28;

            do
            {
                int32_t ecx_6 = *edi_1;
                edi_1 -= 4;
                *esi_2 = ecx_6;
                esi_2 = &esi_2[1];
                char ecx_9 = var_10_1 | (*(ebp_1 + 0x30) >> (edx_2 & 0x1f) & 1) << (i & 0x1f);
                edx_2 += 1;
                i -= 1;
                var_10_1 = ecx_9;
            } while (i > 0xffffffff);

            sub_4e5ca0();
            result = sub_4ce910(a1, &var_40, 0, &var_58);
            sub_4e5c90();
        }
    }

    return result;
}
