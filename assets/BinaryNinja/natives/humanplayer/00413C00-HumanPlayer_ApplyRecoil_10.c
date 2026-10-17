// Original IGI.EXE function: HumanPlayer_ApplyRecoil_10 (VA 0x00413C00; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_ApplyRecoil_10.h"
void* HumanPlayer_ApplyRecoil_10(char* a1)

{
    int32_t objC;
    int32_t v_4_1 = objC;
    int32_t valA = Weapons_CountGet();
    int32_t flagP = 0;

    if (valA > 0)
    {
        while (true)
        {
            void* result = HumanPlayer_TakeDamage_10(flagP);
            char* srcS1 = a1;
            char* objC1 = result + 0x61c;
            int32_t objC3;

            while (true)
            {
                char valA1 = *objC1;
                char f0_1 = *srcS1;
                bool c_1 = valA1 < f0_1;

                if (valA1 == f0_1)
                {
                    if (!valA1)
                    {
                        objC3 = 0;
                        break;
                    }

                    valA1 = objC1[1];
                    char f3_1 = srcS1[1];
                    c_1 = valA1 < f3_1;

                    if (valA1 == f3_1)
                    {
                        objC1 = &objC1[2];
                        srcS1 = &srcS1[2];

                        if (valA1)
                            continue;

                        objC3 = 0;
                        break;
                    }
                }

                objC3 = objC1 - objC1 + 1;
                break;
            }

            if (!objC3)
                return result;

            flagP += 1;

            if (flagP >= valA)
                break;
        }
    }

    return 0;
}
