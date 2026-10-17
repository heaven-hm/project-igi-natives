// Original IGI.EXE function: AIFunction_GetAnimationToPlay (VA 0x0044ECB0; static CFG gate PASS, CFG score 0.852).
#include "AIFunction_GetAnimationToPlay.h"
int32_t AIFunction_GetAnimationToPlay(int32_t context)

// Sig: int AIFunction_GetAnimationToPlay()
// Note: RETURNS which animation entry the engine decided to play for the
// current event/action (useful to log or override reactions). Per retail table
// takes no script args; machine code also touches an [flagP+8] slot (internal
// context).
{
    void* data_val = g_5bda58;
    int32_t i_2 = *(data_val + 0x3b64);
    int32_t item_20;

    if (i_2 <= 0)
    {
        Warning_Show("No animation entries defined");
        item_20 = 0xffffffff;
        int32_t item_18_1 = 0;
        int32_t item_14 = 0xbff00000;
        char* item_10 = &g_567c74;
        memcpy(context, &item_20, 0x18);
        return context;
    }

    long double fpu7 = 0.0;
    int32_t item_18;

    if (i_2 > 0)
    {
        double* data_2 = data_val + 0x3b10;
        int32_t i_1 = i_2;
        int32_t i;

        do
        {
            fpu7 = fpu7 + *data_2;
            data_2 = &data_2[2];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        int32_t item_28;
        item_28 = fpu7;
        long double f1_1 = 0.01;
        fpu7 - f1_1;

        if (!(*(&((fpu7 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1_1) ? 1 : 0) << 0xa
            | (fpu7 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double fp0 = Sys_AllocateMemory_14(Level_SetMission_5());
            void* dest_2 = g_5bda58;
            long double fpu_val_7_4 = fp0 * item_28;
            int32_t temp_1 = *(dest_2 + 0x3b64);
            int32_t entity_1 = 0;

            if (temp_1 > 0)
            {
                double* source_1 = dest_2 + 0x3b10;

                do
                {
                    fpu_val_7_4 = fpu_val_7_4 - *source_1;
                    long double f2_1 = 0.0;
                    fpu_val_7_4 - f2_1;

                    if (*(&((fpu_val_7_4 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        int32_t entity_5 = *((entity_1 << 4) + dest_2 + 0x3b08);
                        item_20 = entity_5;
                        char* item_10_3 = &g_567c74;
                        item_18 = entity_5;
                        memcpy(context, &item_20, 0x18);
                        return context;
                    }

                    entity_1 += 1;
                    source_1 = &source_1[2];
                } while (entity_1 < temp_1);
            }

            int32_t entity_3 = *((entity_1 << 4) + dest_2 + 0x3af8);
            item_20 = entity_3;
            char* item_10_2 = &g_567c74;
            item_18 = entity_3;
            memcpy(context, &item_20, 0x18);
            return context;
        }
    }

    int32_t* item_38 = Level_SetMission_5();
    char* item_10_1 = &g_567c74;
    int32_t data_7 = *((Sys_FreeMemory_14(item_38, i_2) << 4) + g_5bda58 + 0x3b08);
    item_20 = data_7;
    item_18 = data_7;
    memcpy(context, &item_20, 0x18);
    return context;
}
