#include "0045F050-Human_Setup.h"
/* 0x0045f050 Human_Setup full linked: callers=0 callees=10 */
int32_t* sub_45f050(float a1, int32_t a2)

{
    void* edi = *(Level_LoadLevel_6() + 0x5c);
    int32_t ecx = *(sub_4e81f0() + 0x54);
    int32_t* result;

    if (ecx == edi)
        result = *(edi + 0x68);

    if (ecx != edi || *result != a1 || *(edi + 0xe8) != 1)
    {
        sub_45f140(a1);
        (*(((sub_4d14d0() * 0x180 + sub_4d9610()) << 2) + &g_a96ae0))(a1, a2);
        result = Table_GetAt(a1 + 0x4c4, 0);

        if (result)
        {
            int32_t var_48 = 0;
            uint32_t eax_8 = sub_477c20();
            int32_t eax_9 = 0;
            eax_9 = *(a1 + 0x1c);
            (*(((eax_8 * 0x180 + eax_9) << 2) + &g_a96ae0))(a1, &var_48);
            void var_40;
            void var_28;
            sub_4f2310(result, &var_40, &var_28);
            return (*(((sub_4d14d0() * 0x180 + sub_4c48c0()) << 2) + &g_a96ae0))(result, a2);
        }
    }

    return result;
}
