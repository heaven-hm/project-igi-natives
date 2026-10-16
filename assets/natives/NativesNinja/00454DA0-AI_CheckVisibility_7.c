#include "00454DA0-AI_CheckVisibility_7.h"
/* 0x00454da0 AI_CheckVisibility_7 full linked: callers=1 callees=8 */
int32_t* sub_454da0(void* a1)

{
    void* ebx = a1;
    int32_t* result = sub_4f1030(*(ebx + 0xd10));

    if (result)
    {
        sub_4636a0(ebx, result);
        a1 = nullptr;
        uint32_t eax_2 = Level_CheckQTaskID_2();
        int32_t edx_1 = 0;
        edx_1 = result[7];
        int32_t eax_3 = *(((eax_2 * 0x180 + edx_1) << 2) + &g_a96ae0);

        if (eax_3)
            eax_3(result, &a1);

        void* eax_4 = a1;

        if (eax_4 == 2)
            sub_444bc0(result);
        else if (eax_4 - 2 == 1)
        {
            sub_447da0(result);
            void* eax_7 = *(ebx + 0x2f0);
            *(ebx + 0x2f8) = *(ebx + 0x2fc);
            *(ebx + 0x2fc) = 0xc;
            int32_t eax_8 = *(eax_7 + 0x30);
            *(ebx + 0x300) = eax_8;
            eax_8(ebx + 0x2ec, ebx);
        }

        void* var_50 = ebx;
        void var_48;
        memcpy(&var_48, ebx + 0x20, 0x18);
        void var_30;
        memcpy(&var_30, ebx + 0x534, 0x1c);
        void* var_14_1 = ebx + 0x1b0;
        void* var_10_1 = ebx + 0x110;
        int32_t var_c_1 = 0;
        uint32_t eax_11 = Level_InitSprites_2();
        int32_t edx_4 = 0;
        edx_4 = result[7];
        (*(((eax_11 * 0x180 + edx_4) << 2) + &g_a96ae0))(result, &var_50);
        result = *(ebx + 0x7bc) + 1;
        *(ebx + 0x7bc) = result;
    }

    return result;
}
