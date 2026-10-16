#include "004A507C-Camera_ApplyBandFilter_3.h"
/* 0x004a507c Camera_ApplyBandFilter_3 full linked: callers=1 callees=4 */
int32_t sub_4a507c(int32_t* a1, int32_t a2)

{
    void* ebp = *a1;
    void* esi = a1[6];
    TEB* fsbase;

    if (esi != fsbase->NtTib.ExceptionList)
        sub_4a5d00(esi);

    if (esi)
    {
        void* var_4_2 = &a1[8];
        sub_4a5dee();

        if (a1[8] != 0x56433230)
            sub_4a5d42(esi, a1[7]);
        else
        {
            int32_t eax_3 = a1[9];

            if (eax_3)
                eax_3(a1);
        }
    }

    int32_t var_4_5 = 0;
    sub_4a5dd6(a1[5], ebp);
    a1[1];
    a1[2];
    a1[3];
    a1[4];
❓    /* jump -> *(a1 + 0x14) */
}
