#include "004C75F0-DynObj_FindSymbol_9.h"
/* 0x004c75f0 DynObj_FindSymbol_9 full linked: callers=1 callees=1 */
void* const sub_4c75f0(int32_t a1, void* a2)

{
    void* const result = a2;
    int32_t esi;
    int32_t var_14 = esi;
    void* i = *(result + 0x2c);
    void* const result_1 = nullptr;
    int32_t edx = 0x8000;

    while (i)
    {
        esi = *(i + 0x5c);
        i = *(i + 0x58);
        edx |= esi;
    }

    if (edx != *(result + 0x38))
        result_1 = 1;

    *(result + 0x38) = edx;

    while (true)
    {
        int32_t ebp_4 = *(result + 4);
        void* result_2 = *(result + 8);

        if (!result_2)
            break;

        if (*(result + 0x30) || *(result + 0x2c))
        {
            result = result_1;

            if (!result)
                break;

        label_4c76ff:
            int32_t ebx_6 = 0x8000;
            int32_t* ecx_7 = result_2 + 0xc;
            int32_t i_2 = 8;
            int32_t i_1;

            do
            {
                void* eax_9 = *ecx_7;

                if (eax_9)
                {
                    ebp_4 = *(eax_9 + 0x3a);
                    ebp_4 |= *(eax_9 + 0x38);
                    ebx_6 |= ebp_4;
                }

                ecx_7 = &ecx_7[1];
                i_1 = i_2;
                i_2 -= 1;
            } while (i_1 != 1);

            if (*(result_2 + 0x3a) == ebx_6)
                result_1 = nullptr;

            *(result_2 + 0x3a) = ebx_6;
        }
        else
        {
            int32_t* eax_1 = *(*(result_2 + (ebp_4 << 2) + 0xc) + 0x3c);

            if (eax_1)
                sub_4e54e0(eax_1);

            int32_t edx_1 = *(*(result_2 + (ebp_4 << 2) + 0xc) + *(a1 + 0xd14));
            int32_t eax_4 = *(a1 + 0xd08) - 1;
            *(a1 + 0xd08) = eax_4;

            if (edx_1 != eax_4)
            {
                int32_t ecx_4 = *(a1 + 0xd04);
                void* ebp_1 = *(ecx_4 + (edx_1 << 2));
                eax_4 = *(ecx_4 + (eax_4 << 2)) * *(a1 + 0xd10) + *(a1 + 0xd00);
                int32_t ebx_5 = *(*(a1 + 0xd14) + eax_4);
                *(ecx_4 + (edx_1 << 2)) = *(ecx_4 + (ebx_5 << 2));
                *(*(a1 + 0xd04) + (ebx_5 << 2)) = ebp_1;
                *(*(a1 + 0xd14) + eax_4) = edx_1;
            }

            *(result_2 + (ebp_4 << 2) + 0xc) = 0;
            *(result_2 + 0x30) &= ~(1 << (ebp_4 & 0x1f));

            if (result_1)
                goto label_4c76ff;
        }

        result = result_2;
    }

    return result;
}
