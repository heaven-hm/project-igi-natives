#include "004B24C0-Sys_SIsNotAValidTextureF.h"
/* 0x004b24c0 Sys_SIsNotAValidTextureF full linked: callers=3 callees=7 */
int32_t sub_4b24c0(int32_t* a1, int32_t a2, int32_t* a3)

{
    int32_t* var_10 = a3;
    int32_t eax;
    void* ecx;
    int32_t edx;
    int32_t* eax_1 = Resource_Load(eax, edx, ecx, nullptr);
    char eax_2 = *eax_1;

    if (eax_2 == 0x4c)
    {
        int32_t* var_2c;
        int32_t var_28;
        int32_t var_24;
        int32_t var_20;
        int32_t var_1c;
        int32_t var_18;
        int32_t var_14;
        int32_t var_10_1;
        void* var_c;

        if (*(eax_1 + 1) == 0x4f && *(eax_1 + 2) == 0x4f && *(eax_1 + 3) == 0x50 && eax_1[1] == 2)
        {
            sub_4b26a0();
            int32_t ecx_3 = 0;
            ecx_3 = eax_1[2];
            int32_t edx_3 = 0;
            edx_3 = *(eax_1 + 0x16);
            var_c = &eax_1[6];
            var_10_1 = 0;
            var_14 = ecx_3;
            int32_t eax_4 = 0;
            var_18 = edx_3;
            eax_4 = eax_1[5];
            int32_t ecx_4 = 0;
            ecx_4 = *(eax_1 + 0x12);
            int32_t edx_4 = 0;
            edx_4 = eax_1[4];
            var_1c = eax_4;
            var_20 = ecx_4;
            var_24 = edx_4;
            var_28 = a2;
            var_2c = a1;
        label_4b252e:
            sub_4b23b0(var_2c, var_28, var_24, var_20, var_1c, var_18, var_14, var_10_1, var_c);
            int32_t result = Resource_Unload(a3);
            sub_4b26b0();
            return result;
        }

        if (eax_2 == 0x4c && *(eax_1 + 1) == 0x4f && *(eax_1 + 2) == 0x4f && *(eax_1 + 3) == 0x50
            && eax_1[1] == 0xb)
        {
            sub_4b26a0();
            var_c = &eax_1[8];
            int32_t ecx_6 = 0;
            var_10_1 = eax_1[3];
            ecx_6 = eax_1[5];
            int32_t eax_7 = 0;
            eax_7 = eax_1[6];
            var_14 = ecx_6;
            var_18 = eax_1[2];
            var_1c = eax_7;
            int32_t edx_7 = 0;
            int32_t eax_8 = 0;
            edx_7 = *(eax_1 + 0x1e);
            eax_8 = *(eax_1 + 0x1a);
            int32_t ecx_7 = 0;
            ecx_7 = *(eax_1 + 0x16);
            var_20 = ecx_7;
            var_24 = edx_7 * eax_8;
            var_28 = a2;
            var_2c = a1;
            goto label_4b252e;
        }
    }

    int32_t* var_c_1 = a3;
    Error_Show("'%s' is not a valid Texture file.");

    while (true)
        /* nop */
}
