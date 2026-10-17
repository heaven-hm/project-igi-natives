// Original IGI.EXE function: DynObj_CreateMagicObject_12 (VA 0x004CE830; static CFG gate PASS, CFG score 0.917).
#include "DynObj_CreateMagicObject_12.h"
int32_t* DynObj_CreateMagicObject_12(int32_t* context, int32_t param_2)

{
    int32_t* result = context;
    int32_t entity_2 = result[0x37a];
    int32_t temp_1 = -(result[0x379]);
    int32_t temp_2 = 0;
    double item_58 = -(result[0x378]);
    double item_50 = temp_1;
    double item_48 = -(entity_2);

    if (!param_2)
    {
        result[0x37c] = 1;

        if (g_54876c)
        {
            int32_t context_val;
            int32_t item_60_1 = context_val;
            void* flagP1 = result[4];
            int32_t item_40;
            memcpy(&item_40, flagP1, 0x40);
            char item_10_1 = 0;
            int32_t i = 7;
            void item_34;
            int32_t* source_2 = &item_34;
            int32_t* dest_1 = flagP1 + 0x28;

            do
            {
                int32_t entity_6 = *dest_1;
                dest_1 -= 4;
                *source_2 = entity_6;
                source_2 = &source_2[1];
                char entity_9 = item_10_1 | (*(flagP1 + 0x30) >> (temp_2 & 0x1f) & 1) << (i & 0x1f);
                temp_2 += 1;
                i -= 1;
                item_10_1 = entity_9;
            } while (i > 0xffffffff);

            SoundSys_AttachLipsync_3();
            result = DynObj_ParseConfigFile_12(context, &item_40, 0, &item_58);
            SoundSys_EvaluateTrigger_3();
        }
    }

    return result;
}
