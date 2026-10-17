// IGI native provenance: Display_SwapBuffers_11 - 0x00496770 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00496770-Display_SwapBuffers_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SwapBuffers_11.h"
int32_t Display_SwapBuffers_11(int32_t context, int32_t param_2, int32_t param_3, int32_t* param_4)

{
    if (!g_6840e9)
        return 0;

    int32_t* saved_ebp_4 = param_4;

    if (!saved_ebp_4)
    {
        void item_58;
        Display_SetGammaRamp_12(&item_58);
        saved_ebp_4 = &item_58;
        param_4 = &item_58;
    }

    int32_t* saved_ebp_2 = saved_ebp_4;
    int32_t result = Display_ClearSurfaces_11(context, param_2, param_3);

    if (!result)
        return result;

    Display_SyncVSync_12(result, saved_ebp_4);
    void* entity_1 = *(result + 0xc);
    int16_t data_2 = *(entity_1 + 0x14);

    if (data_2 == 2 || !data_2)
    {
        int32_t* data_12 = *(result + 0x10);
        (*(*data_12 + 0x30))(data_12, 0, 0, 1);
        return result;
    }

    int32_t data_6;
    int32_t temp_2;
    temp_2 = HIGHD(*(entity_1 + 0x18) * *(entity_1 + 0x16) * *(entity_1 + 0x1c));
    data_6 = LOWD(*(entity_1 + 0x18) * *(entity_1 + 0x16) * *(entity_1 + 0x1c));
    int32_t* context_val = *(result + 0x10);
    (*(*context_val + 0x34))(context_val, ((data_6 + (temp_2 & 7)) >> 3) * param_4[0x14]);
    int32_t* data_10 = *(result + 0x10);
    (*(*data_10 + 0x30))(data_10, 0, 0, param_3 >> 4 & 1);
    return result;
}
