// IGI native provenance: Env_InitLadder_13 - 0x0044FD50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044FD50-Env_InitLadder_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_InitLadder_13.h"
int32_t Env_InitLadder_13(int32_t* context)

{
    int32_t* source_val = context;
    int32_t item_4 = 0x18;
    char item_5 = 0;
    int32_t result = source_val[0xf1c];

    if (result)
    {
        if (AI_AlertAllies(source_val))
            item_4 = *(AI_AlertAllies(source_val) + 8);

        result = source_val[0x237];
        int32_t context_1 = 0;

        if (result > 0)
        {
            context = &source_val[0x207];

            do
            {
                int32_t flagP1 = *context;

                if (context_1 < item_4 && Camera_ApplyPostProcess_33(&source_val[flagP1 * 3 + 0x1bc]) && !item_5)
                    item_5 = HumanAI_EventDispatch(source_val, flagP1, context_1);

                source_val[flagP1 + 0x21f] = 0;
                int32_t* i_1 = source_val[flagP1 * 3 + 0x1bc];

                for (int32_t* i = *i_1; i; i = *i)
                {
                    Env_TriggerAlarm_13(source_val, i_1);
                    i_1 = i;
                    source_val[flagP1 + 0x21f] += 1;
                }

                result = source_val[0x237];
                context_1 += 1;
                context = &context[1];
            } while (context_1 < result);
        }
    }

    return result;
}
