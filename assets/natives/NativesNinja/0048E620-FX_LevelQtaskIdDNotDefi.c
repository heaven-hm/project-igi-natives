#include "0048E620-FX_LevelQtaskIdDNotDefi.h"
/* 0x0048e620 FX_LevelQtaskIdDNotDefi full linked: callers=0 callees=12 */
int32_t* sub_48e620(int32_t* a1, void* const a2)

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    void* const eax = a2;
    void* esi = *(eax + 0x28);
    int32_t* edi = a1;
    *(eax + 0x18) = sub_48e7d0;
    *(eax + 0x20) = sub_48e870;
    char ebx = 0;
    int32_t var_4 = 0;

    if (*(esi + 8) == edi[0xeb0])
    {
        int32_t eax_2 = sub_4f1030(edi[0xeb1]);
        var_4 = eax_2;

        if (!eax_2)
        {
            int32_t var_18_2 = edi[0xeb1];
            int32_t eax_3 = Warning_Show("Level QTask ID #%d not defined (AI Activate)");
            *(esi + 0xc) = 0xffffffff;
            return eax_3;
        }

        ebx = 1;
    }

    void* eax_5 = sub_4f1030(*(esi + 8));

    if (!eax_5)
    {
        int32_t var_18_4 = *(esi + 8);
        int32_t eax_6 = Warning_Show("Level QTask ID #%d not defined (AI Activate)");
        *(esi + 0xc) = 0xffffffff;
        return eax_6;
    }

    *(esi + 0xc) = 0xffffffff;
    *(esi + 0x10) = 0xffffffff;
    int32_t* eax_7 = sub_4532d0(eax_5);

    if (!eax_7)
    {
        if (ebx)
            eax_7 = sub_4532d0(var_4);

        if (!ebx || !eax_7)
        {
            int32_t eax_8 = sub_4c48c0();
            int16_t var_18_7 = eax_8;
            eax_8 = *(eax_5 + 0x1c);
            eax_7 = TaskType_IsDerivedFrom(eax_8, var_18_7);

            if (eax_7)
            {
                sub_5096f0(&a1, edi[0xedb], eax_5 + 0x20);
                eax_7 = a1;

                if (eax_7)
                {
                    a2 = 0xffffffff;

                    if (sub_48e300(edi, eax_7, 0xa, sub_48e7a0, &a2))
                    {
                        void* const ecx_7 = a2;
                        int32_t eax_10 = *a1;

                        if (eax_10 != ecx_7)
                        {
                            *(esi + 0xc) = eax_10;
                            *(esi + 0x10) = a2;
                        }
                        else
                            *(esi + 0xc) = ecx_7;
                    }

                    eax_7 = sub_453300(eax_5, 1);
                    edi[0xeac] = eax_7;

                    if (ebx)
                    {
                        eax_7 = sub_453300(var_4, 1);
                        edi[0xead] = eax_7;
                    }
                }
            }
        }
    }

    return eax_7;
}
