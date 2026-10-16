#include "00416130-Level_LocalCommonTextures.h"
/* 0x00416130 Level_LocalCommonTextures full linked: callers=1 callees=5 */
int32_t Level_LocalCommonTextures()

{
    int32_t result = g_57bab4;
    int32_t ebp = 0;

    if (result > 0)
    {
        void* ebx_1 = &g_57b5e8;

        do
        {
            void var_100;
            int16_t* esi_1;
            int16_t* edi_1;
            edi_1 = memcpy(&var_100, "LOCAL:common/textures/", 0x14);
            *edi_1 = *esi_1;
            edi_1[1] = esi_1[1];
            void var_e9;
            *__builtin_memset(&var_e9, 0, 0xe8) = 0;
            void* edi_6 = ebx_1;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond:0_1 = 0 != *edi_6;
                edi_6 += 1;
                i -= 1;

                if (!cond:0_1)
                    break;
            }

            int32_t ecx_1 = ~i;
            void* edi_8 = &var_100;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond:1_1 = 0 != *edi_8;
                edi_8 += 1;
                i_1 -= 1;

                if (!cond:1_1)
                    break;
            }

            int32_t esi_5;
            int32_t edi_10;
            edi_10 = memcpy(edi_8 - 1, edi_6 - ecx_1, ecx_1 & 0xfffffffc);
            int32_t* var_114 = &var_100;
            memcpy(edi_10, esi_5, ecx_1 & 3);
            sub_4b24c0(ebx_1 + 0x18, 0, var_114);
            result = g_57bab4;
            ebp += 1;
            ebx_1 += 0x3c;
        } while (ebp < result);
    }

    return result;
}
