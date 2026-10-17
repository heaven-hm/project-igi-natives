// Original IGI.EXE function: HumanPlayer_ApplyRecoil_10 (VA 0x00413C00; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_ApplyRecoil_10.h"
void* HumanPlayer_ApplyRecoil_10(char* context)

{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    int32_t data_val = Weapons_CountGet();
    int32_t flagP = 0;

    if (data_val > 0)
    {
        while (true)
        {
            void* result = HumanPlayer_TakeDamage_10(flagP);
            char* source_1 = context;
            char* entity_1 = result + 0x61c;
            int32_t entity_3;

            while (true)
            {
                char data_1 = *entity_1;
                char f0_1 = *source_1;
                bool c_1 = data_1 < f0_1;

                if (data_1 == f0_1)
                {
                    if (!data_1)
                    {
                        entity_3 = 0;
                        break;
                    }

                    data_1 = entity_1[1];
                    char f3_1 = source_1[1];
                    c_1 = data_1 < f3_1;

                    if (data_1 == f3_1)
                    {
                        entity_1 = &entity_1[2];
                        source_1 = &source_1[2];

                        if (data_1)
                            continue;

                        entity_3 = 0;
                        break;
                    }
                }

                entity_3 = entity_1 - entity_1 + 1;
                break;
            }

            if (!entity_3)
                return result;

            flagP += 1;

            if (flagP >= data_val)
                break;
        }
    }

    return 0;
}
