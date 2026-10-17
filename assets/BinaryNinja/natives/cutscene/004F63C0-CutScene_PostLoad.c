// Original IGI.EXE function: CutScene_PostLoad (VA 0x004F63C0; static CFG gate PASS, CFG score 1.000).
#include "CutScene_PostLoad.h"
int32_t CutScene_PostLoad(void* context, char* param_2)

{
    long double fpu7 = *(context + 0x74);
    long double f0 = 0.0f;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        *(context + 0x74) = 0;

    long double fpu_val_7_1 = *(context + 0x78);
    long double f1 = 0.0f;
    fpu_val_7_1 - f1;

    if (*(&((fpu_val_7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f1 ? 1 : 0) << 0xe) + 1) & 1)
        *(context + 0x78) = 0;

    *(context + 0x64) = g_a76c54 * *(context + 0x68);

    if (!param_2 || !*param_2)
    {
        int32_t* i = *(context + 8);

        if (*i && i)
        {
            int32_t entity_1 = g_afa7e0;

            do
            {
                int32_t* temp_1 = *i;
                void* data_6;

                if (!temp_1)
                    data_6 = nullptr;
                else
                {
                    int32_t data_3 = *temp_1;
                    int32_t data_4 = -(data_3);
                    data_6 = (data_4 - data_4) & temp_1;
                }

                *((entity_1 << 2) + &g_afa6e0) = data_6;
                g_afa7e0 = entity_1 + 1;
                uint32_t data_8 = Script_ParseEnumReal32_8();
                int32_t temp_2 = 0;
                temp_2 = i[7];
                int32_t data_9 = *(((data_8 * 0x180 + temp_2) << 2) + &g_a96ae0);

                if (data_9)
                    data_9(i, 0);

                entity_1 = g_afa7e0 - 1;
                g_afa7e0 = entity_1;
                i = *((entity_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    Script_Isexists(context + 0x7c, context);
    Script_Isexists(context + 0xcc, context);
    Script_Isexists(context + 0x11c, context);
    Script_Isexists(context + 0x16c, context);
    Script_Isexists(context + 0x1bc, context);
    return 0;
}
