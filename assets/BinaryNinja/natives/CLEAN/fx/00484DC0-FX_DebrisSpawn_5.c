// IGI native provenance: FX_DebrisSpawn_5 - 0x00484DC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00484DC0-FX_DebrisSpawn_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_DebrisSpawn_5.h"
int32_t* FX_DebrisSpawn_5(void* context)

{
    int32_t source_val = 0;
    char* i;

    for (i = &g_5c118d; i < 0x5c158d; )
    {
        if (!*i)
        {
            int32_t* data_1 = QTask_LinkEventHandler_2(context);
            *((source_val << 3) + &g_5c1188) = data_1;
            *((source_val << 3) + &g_5c118d) = 1;
            return data_1;
        }

        i = &i[8];
        source_val += 1;
    }

    return i;
}
