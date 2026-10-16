#include "00448160-GenericTBA_Setup.h"
/* 0x00448160 GenericTBA_Setup full linked: callers=0 callees=7 */
char* sub_448160(void* a1)

{
    void* eax = *(a1 + 0x250);

    if (eax)
    {
        sub_4b0d10(eax);
        *(a1 + 0x250) = 0;
    }

    sub_4c17c0(Level_StartMission_3(), a1);
    (*((sub_481340() << 2) + &g_a976e0))(a1);

    if (sub_4f1050(a1) >= 0)
    {
        int32_t eax_6 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        int32_t eax_10 = *(((eax_6 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_10)
            eax_10(a1);
    }

    return sub_4f1340(a1 + 0x258);
}
