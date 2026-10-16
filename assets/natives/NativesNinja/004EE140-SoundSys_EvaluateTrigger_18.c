#include "004EE140-SoundSys_EvaluateTrigger_18.h"
/* 0x004ee140 SoundSys_EvaluateTrigger_18 full linked: callers=12 callees=3 */
void* sub_4ee140(char* a1)

{
    int32_t ebp = 0;

    if (sub_4ee110() > 0)
    {
        while (true)
        {
            void* result = sub_4ee120(ebp);
            char* esi_1 = a1;
            char* ecx_1 = result + 0x138;
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

            if (ebp >= sub_4ee110())
                break;
        }
    }

    return 0;
}
