#include "004161D0-Level_LocalCommonSprites.h"
/* 0x004161d0 Level_LocalCommonSprites full linked: callers=1 callees=5 */
int32_t Level_LocalCommonSprites()

{
    int32_t result = g_57bab8;
    int32_t ebp = 0;

    if (result > 0)
    {
        void* ebx_1 = &g_57b1a8;

        do
        {
            void var_100;
            int16_t* esi_1;
            int16_t* edi_1;
            edi_1 = memcpy(&var_100, "LOCAL:common/sprites/", 0x14);
            *edi_1 = *esi_1;
            void var_ea;
            *__builtin_memset(&var_ea, 0, 0xe8) = 0;
            void* edi_5 = ebx_1;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond:0_1 = 0 != *edi_5;
                edi_5 += 1;
                i -= 1;

                if (!cond:0_1)
                    break;
            }

            int32_t ecx_1 = ~i;
            void* edi_7 = &var_100;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond:1_1 = 0 != *edi_7;
                edi_7 += 1;
                i_1 -= 1;

                if (!cond:1_1)
                    break;
            }

            int32_t esi_4;
            int32_t edi_9;
            edi_9 = memcpy(edi_7 - 1, edi_5 - ecx_1, ecx_1 & 0xfffffffc);
            int32_t* var_114 = &var_100;
            memcpy(edi_9, esi_4, ecx_1 & 3);
            sub_4b6720(ebx_1 + 0x18, var_114);
            result = g_57bab8;
            ebp += 1;
            ebx_1 += 0x30;
        } while (ebp < result);
    }

    return result;
}
