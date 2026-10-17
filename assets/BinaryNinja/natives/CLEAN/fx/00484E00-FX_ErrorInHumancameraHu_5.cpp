// IGI native provenance: FX_ErrorInHumancameraHu_5 - 0x00484E00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00484E00-FX_ErrorInHumancameraHu_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_ErrorInHumancameraHu_5.h"
int32_t* FX_ErrorInHumancameraHu_5(int32_t context)

{
    int32_t source_val = 0;
    int32_t* i;

    for (i = &g_5c1188; i < 0x5c1588; )
    {
        if (*(i + 5))
        {
            int32_t entity_3 = **i;

            if (!entity_3)
            {
                Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

                while (true)
                    /* nop */
            }
            else if (entity_3 == context)
            {
                int32_t data_val = Qtask_UpdateList(*((source_val << 3) + &g_5c1188));
                *((source_val << 3) + &g_5c1188) = 0;
                *((source_val << 3) + &g_5c118d) = 0;
                return data_val;
            }
        }

        i = &i[2];
        source_val += 1;
    }

    return i;
}
