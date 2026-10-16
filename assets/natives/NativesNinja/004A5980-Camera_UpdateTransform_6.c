#include "004A5980-Camera_UpdateTransform_6.h"
/* 0x004a5980 Camera_UpdateTransform_6 full linked: callers=16 callees=2 */
int32_t __convention("regparm") sub_4a5980(int32_t a1, int32_t a2, int32_t a3, char* a4, char* a5)

{
    char* esi = a5;
    int16_t eax = 0x61dc;

    if (g_9361e4)
    {
        int32_t result = 0xff;
        uint32_t ebx_1 = 0;
        char* edi_2 = a4;
        bool c_5;

        while (true)
        {
            result = result;

            if (!result)
                return result;

            result = *esi;
            esi = &esi[1];
            ebx_1 = *edi_2;
            edi_2 = &edi_2[1];

            if (result != ebx_1)
            {
                int32_t result_1 = result;
                uint32_t var_18_1 = ebx_1;
                uint32_t eax_1;
                int32_t ecx;
                eax_1 = sub_4a9fc1(a3);
                ebx_1 = eax_1;
                result = sub_4a9fc1(ecx);
                c_5 = ebx_1 < result;

                if (ebx_1 != result)
                    break;
            }
        }

        return result - result + 1;
    }

    eax = 0xff;
    char* edi_1 = a4;

    while (true)
    {
        eax = eax;

        if (!eax)
            break;

        eax = *esi;
        esi = &esi[1];
        *(&eax + 1) = *edi_1;
        edi_1 = &edi_1[1];

        if (*(&eax + 1) != eax)
        {
            eax -= 0x41;
            a3 = a3 - a3;
            a3 &= 0x20;
            eax += a3;
            eax += 0x41;
            char temp0_1 = eax;
            eax = *(&eax + 1);
            *(&eax + 1) = temp0_1;
            eax -= 0x41;
            a3 = a3 - a3;
            a3 &= 0x20;
            eax += a3;
            eax += 0x41;
            bool c_3 = eax < *(&eax + 1);

            if (eax != *(&eax + 1))
            {
                char temp3_1 = eax;
                char temp4_1 = eax;
                eax = temp3_1 - temp4_1;
                eax = eax + 1;
                break;
            }
        }
    }

    return eax;
}
