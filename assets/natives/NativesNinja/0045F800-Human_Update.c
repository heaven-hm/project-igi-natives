#include "0045F800-Human_Update.h"
/* 0x0045f800 Human_Update full linked: callers=0 callees=3 */
char* sub_45f800(float a1, int32_t* a2)

{
    char eax = a2[2];
    double* ebx = *a2;
    double* ebp = a2[1];
    char* result;

    if (eax == 0xff)
    {
    label_45f84d:
        result = sub_45f580(a1, ebx, ebp, 1);

        if (result)
        {
            sub_45f240(a1);
            return (*((sub_4d9610() << 2) + &g_a99ae0))(a1, a2);
        }
    }
    else
    {
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        int32_t eax_5 = *(((eax * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (!eax_5)
            goto label_45f84d;

        eax_5(a1, a2[3]);
        result = a2[3];

        if (*result)
            goto label_45f84d;
    }

    return result;
}
