#include "0045F500-Human_Process.h"
/* 0x0045f500 Human_Process full linked: callers=0 callees=3 */
char* sub_45f500(float a1, int32_t* a2)

{
    char eax = a2[3];
    double* ebx = *a2;
    double* ebp = a2[1];
    char* result;

    if (eax == 0xff)
    {
    label_45f54f:
        result = sub_45f580(a1, ebx, ebp, a2[2]);

        if (result)
        {
            sub_45f240(a1);
            return (*((sub_4d9610() << 2) + &g_a9a0e0))(a1, a2);
        }
    }
    else
    {
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        int32_t eax_5 = *(((eax * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (!eax_5)
            goto label_45f54f;

        eax_5(a1, a2[4]);
        result = a2[4];

        if (*result)
            goto label_45f54f;
    }

    return result;
}
