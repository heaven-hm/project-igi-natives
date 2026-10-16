#include "004F98A0-Script_EvaluateCondition_23.h"
/* 0x004f98a0 Script_EvaluateCondition_23 full linked: callers=4 callees=2 */
void* sub_4f98a0(float* a1, void* a2, char a3)

{
    float* edi;

    if (!a3)
    {
        edi = a1;
        *edi = 1f;
        edi[1] = 0;
        edi[2] = 0;
        edi[3] = 0;
        edi[4] = 0x3f800000;
        edi[5] = 0;
        edi[6] = 0;
        edi[7] = 0;
        edi[8] = 0x3f800000;
        edi[9] = 0;
    }
    else
    {
        edi = a1;
        sub_4b3be0(edi, *(a2 + 0x20));
    }

    void* result = *(a2 + 0x134);

    if (*(result + 0x64))
    {
        void* eax_1 = *(result + 0x14);
        float var_28 = *edi * *(eax_1 + 0x70) + edi[2] * *(eax_1 + 0x88) + *(eax_1 + 0x7c) * edi[1];
        float var_24_1 =
            *edi * *(eax_1 + 0x74) + *(eax_1 + 0x8c) * edi[2] + *(eax_1 + 0x80) * edi[1];
        float var_20_1 =
            edi[2] * *(eax_1 + 0x90) + *(eax_1 + 0x78) * *edi + *(eax_1 + 0x84) * edi[1];
        float var_1c_1 =
            *(eax_1 + 0x88) * edi[5] + edi[4] * *(eax_1 + 0x7c) + edi[3] * *(eax_1 + 0x70);
        float var_18_1 =
            *(eax_1 + 0x8c) * edi[5] + *(eax_1 + 0x80) * edi[4] + edi[3] * *(eax_1 + 0x74);
        float var_14_1 =
            edi[4] * *(eax_1 + 0x84) + *(eax_1 + 0x78) * edi[3] + *(eax_1 + 0x90) * edi[5];
        float var_10_1 =
            edi[6] * *(eax_1 + 0x70) + edi[8] * *(eax_1 + 0x88) + *(eax_1 + 0x7c) * edi[7];
        float var_c_1 =
            edi[6] * *(eax_1 + 0x74) + *(eax_1 + 0x8c) * edi[8] + *(eax_1 + 0x80) * edi[7];
        result = *(eax_1 + 0x94) + edi[9] + 1;
        void* result_1 = result;
        float var_8_1 =
            edi[8] * *(eax_1 + 0x90) + *(eax_1 + 0x78) * edi[6] + *(eax_1 + 0x84) * edi[7];
        memcpy(edi, &var_28, 0x28);
    }

    return result;
}
