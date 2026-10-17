// IGI native provenance: Display_NoMoreDirect3DCallba - 0x00495190 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00495190-Display_NoMoreDirect3DCallba.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_NoMoreDirect3DCallba.h"
int32_t* Display_NoMoreDirect3DCallba(int32_t context, int32_t* param_2)

{
    int32_t entity_val = 0;

    for (int32_t* i = &g_bcad24; i < &g_bcad74; )
    {
        if (!*i)
        {
            *((entity_val << 3) + &g_bcad20) = *param_2;
            *((entity_val << 3) + &g_bcad24) = context;
            *param_2 = (entity_val << 3) + &g_bcad20;
            return (entity_val << 3) + &g_bcad20;
        }

        i = &i[2];
        entity_val += 1;
    }

    Error_Show("No more Direct3D callbacks available.");

    while (true)
        /* nop */
}
