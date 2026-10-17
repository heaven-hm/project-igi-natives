// IGI native provenance: Display_SetMode - 0x00491A90 - CFG score 89.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491A90-Display_SetMode.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetMode.h"
int32_t Display_SetMode(void* context)

// Sig: int Display_SetMode(void* modeStruct)
// Note: Switches the DISPLAY MODE at runtime: validates mode fields vs current
// (0xC28B44...), repositions/resizes the window (GetSystemMetrics), copies the
// mode into the active-mode struct. Param: modeStruct = pointer to a
// display-mode struct (same layout Display_GetActiveMode returns). RETURNS 0 on
// failure, non-zero on success.
{
    int32_t result;

    if (!g_5ca02d)
    {
    label_491b61:
        Display_CloseDevice_4(g_bcadec);

        if (g_5ca02d)
            Display_OpenDevice_4(context);

        RECT rect;

        if (!FX_FragmentSimulate_23())
        {
            int32_t data_14 = GetSystemMetrics(SM_CXSCREEN);
            int32_t source_4 = *(context + 8);
            int32_t data_16;
            int32_t temp_3;
            temp_3 = HIGHD(data_14 - *(context + 4));
            data_16 = LOWD(data_14 - *(context + 4));
            rect.left = (data_16 - temp_3) >> 1;
            int32_t data_21;
            int32_t temp_4;
            temp_4 = HIGHD(GetSystemMetrics(SM_CYSCREEN) - source_4);
            data_21 = LOWD(GetSystemMetrics(SM_CYSCREEN) - source_4);
            int32_t data_23 = (data_21 - temp_4) >> 1;
            int32_t entity_13 = rect.left + *(context + 4);
            rect.idx = data_23;
            rect.right = entity_13;
            rect.bottom = source_4 + data_23;
        }
        else
        {
            rect.left = 0;
            rect.idx = 0;
            rect.right = GetSystemMetrics(SM_CXSCREEN);
            rect.bottom = GetSystemMetrics(SM_CYSCREEN);
        }

        AdjustWindowRect(&rect, GetWindowLongA(FX_ExplosionSpawn_22(), 0xfffffff0), 0);
        LONG idx = rect.idx;
        LONG left = rect.left;
        SetWindowPos(FX_ExplosionSpawn_22(), nullptr, left, idx, rect.right - left, rect.bottom - idx, 0x44);
        UpdateWindow(FX_ExplosionSpawn_22());
        SetFocus(FX_ExplosionSpawn_22());
        Sys_FreeMemory_3(*(context + 0x18));
        (*((Display_SwapBuffers_5() << 2) + &g_a94e84))(context);
        g_5ca02d = 1;
        int32_t i = 0xffffffff;
        int32_t dest_6 = 0xc28b5c;
        result = 0;

        while (i)
        {
            bool flag_4_1 = 0 != *dest_6;
            dest_6 += 1;
            i -= 1;

            if (!flag_4_1)
                break;
        }

        int32_t entity_16 = ~i;
        int32_t source_7;
        int32_t dest_8;
        dest_8 = memcpy(&g_5c9fa8, dest_6 - entity_16, entity_16 & 0xfffffffc);
        memcpy(dest_8, source_7, entity_16 & 3);
    }
    else
    {
        int32_t i_1 = 0xffffffff;
        char* dest_1 = context + 0x1c;

        while (i_1)
        {
            bool flag_1_1 = 0 != *dest_1;
            dest_1 = &dest_1[1];
            i_1 -= 1;

            if (!flag_1_1)
                break;
        }

        if (~i_1 == 1)
        {
            char* dest_2 = &g_5c9fa8;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool flag_3_1 = 0 != *dest_2;
                dest_2 = &dest_2[1];
                i_2 -= 1;

                if (!flag_3_1)
                    break;
            }

            int32_t entity_2 = ~i_2;
            int32_t source_2;
            int32_t dest_5;
            dest_5 = memcpy(context + 0x1c, dest_2 - entity_2, entity_2 & 0xfffffffc);
            memcpy(dest_5, source_2, entity_2 & 3);
        }

        if (*(context + 4) != g_c28b44 || *(context + 8) != g_c28b48
                || *(context + 0x10) != g_c28b50 || *(context + 0x18) != g_c28b58
                || *(context + 0x16) != g_c28b56)
            goto label_491b61;

        char* source_3 = &g_c28b5c;
        char* data_6 = context + 0x1c;

        while (true)
        {
            char temp_2 = *data_6;
            char f1_1 = *source_3;
            bool c_1 = temp_2 < f1_1;

            if (temp_2 == f1_1)
            {
                if (!temp_2)
                {
                    result = 0;
                    break;
                }

                temp_2 = data_6[1];
                char f4_1 = source_3[1];
                c_1 = temp_2 < f4_1;

                if (temp_2 == f4_1)
                {
                    data_6 = &data_6[2];
                    source_3 = &source_3[2];

                    if (temp_2)
                        continue;

                    result = 0;
                    break;
                }
            }

            result = data_6 - data_6 + 1;
            break;
        }

        if (result)
            goto label_491b61;
    }

    return result;
}
