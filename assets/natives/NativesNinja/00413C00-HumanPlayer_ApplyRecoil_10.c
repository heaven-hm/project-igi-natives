#include "00413C00-HumanPlayer_ApplyRecoil_10.h"
/* 0x00413c00 HumanPlayer_ApplyRecoil_10 full linked: callers=1 callees=2 */
void* HumanPlayer_ApplyRecoil_10(char* a1)

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    int32_t eax = Weapons_CountGet();
    int32_t ebp = 0;

    if (eax > 0)
    {
        while (true)
        {
            void* result = HumanPlayer_TakeDamage_10(ebp);
            char* esi_1 = a1;
            char* ecx_1 = result + 0x61c;
            int32_t ecx_3;

            while (true)
            {
                char eax_1 = *ecx_1;
                char temp0_1 = *esi_1;
                bool c_1 = eax_1 < temp0_1;

                if (eax_1 == temp0_1)
                {
                    if (!eax_1)
                    {
                        ecx_3 = 0;
                        break;
                    }

                    eax_1 = ecx_1[1];
                    char temp3_1 = esi_1[1];
                    c_1 = eax_1 < temp3_1;

                    if (eax_1 == temp3_1)
                    {
                        ecx_1 = &ecx_1[2];
                        esi_1 = &esi_1[2];

                        if (eax_1)
                            continue;

                        ecx_3 = 0;
                        break;
                    }
                }

                ecx_3 = ecx_1 - ecx_1 + 1;
                break;
            }

            if (!ecx_3)
                return result;

            ebp += 1;

            if (ebp >= eax)
                break;
        }
    }

    return 0;
}
