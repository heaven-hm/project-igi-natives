#include "004E5BA0-SoundSys_LoadSoundDef_3.h"
/* 0x004e5ba0 SoundSys_LoadSoundDef_3 full linked: callers=2 callees=0 */
int32_t sub_4e5ba0(void* a1, float a2, float a3, float a4, float a5)

{
    int32_t edi = a2;
    int32_t esi = *(a1 + 8);
    int32_t eax = a3;
    int32_t edx_2 = a2 + a4 - edi + 1;
    int32_t ecx_2 = a3 + a5 - eax + 1;

    if (edi < esi)
    {
        if (edi >= 0)
            goto label_4e5bfc;

        edx_2 += edi;

        if (edx_2 > 0)
        {
            edi = 0;
        label_4e5bfc:

            if (eax < esi)
            {
                if (eax >= 0)
                    goto label_4e5c11;

                ecx_2 += eax;

                if (ecx_2 > 0)
                {
                    eax = 0;
                label_4e5c11:

                    if (edx_2 + edi > esi)
                        edx_2 = esi - edi;

                    if (ecx_2 + eax > esi)
                        ecx_2 = esi - eax;

                    float ecx_3 = ecx_2 + eax;
                    float esi_2 = eax;
                    a2 = esi_2;
                    a3 = ecx_3;

                    if (eax < ecx_3)
                    {
                        int32_t edx_4 = edx_2 + edi;

                        do
                        {
                            int32_t eax_1 = edi;

                            if (edi < edx_4)
                            {
                                do
                                {
                                    if (*((((eax_1 & 0xfffffff8) + (esi_2 << (*(a1 + 4) & 0x1f)))
                                            >> 3) + a1 + 0xc) >> (eax_1 & 7) & 1)
                                        return 1;

                                    eax_1 += 1;
                                } while (eax_1 < edx_4);

                                esi_2 = a2;
                                ecx_3 = a3;
                            }

                            esi_2 += 1;
                            a2 = esi_2;
                        } while (esi_2 < ecx_3);
                    }
                }
            }
        }
    }

    return 0;
}
