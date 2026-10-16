#include "004644A0-HumanView_Setup.h"
/* 0x004644a0 HumanView_Setup full linked: callers=0 callees=9 */
int32_t* sub_4644a0(void* a1, int32_t a2)

{
    void* edi = *(a1 + 0x14);
    void* ebx = *(Level_LoadLevel_6() + 0x5c);
    int32_t* result = sub_4e81f0();

    if (result[0x15] == ebx)
    {
        result = *(ebx + 0x68);

        if (*result == edi && *(ebx + 0xe8) == 1)
        {
            result = sub_46c060();

            if (!result)
            {
                sub_465700(a1);
                (*((sub_4d9610() << 2) + &g_a982e0))(a1, a2);
                result = Table_GetAt(edi + 0x4c4, 0);

                if (result)
                {
                    int32_t var_48 = 1;
                    uint32_t eax_5 = sub_477c20();
                    int32_t ecx_2 = 0;
                    ecx_2 = *(edi + 0x1c);
                    (*(((eax_5 * 0x180 + ecx_2) << 2) + &g_a96ae0))(edi, &var_48);
                    void var_40;
                    void var_28;
                    sub_4f2310(result, &var_40, &var_28);
                    return (*((sub_4c48c0() << 2) + &g_a982e0))(result, 0);
                }
            }
        }
    }

    return result;
}
