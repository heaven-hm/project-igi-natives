#include "00491A90-Display_SetMode.h"
/* 0x00491a90 Display_SetMode full linked: callers=5 callees=23 */
int32_t Display_SetMode(void* a1)

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
        sub_491ca0(g_bcadec);

        if (g_5ca02d)
            sub_491a50(a1);

        RECT rect;

        if (!sub_48f130())
        {
            int32_t eax_14 = GetSystemMetrics(SM_CXSCREEN);
            int32_t esi_4 = *(a1 + 8);
            int32_t eax_16;
            int32_t edx_3;
            edx_3 = HIGHD(eax_14 - *(a1 + 4));
            eax_16 = LOWD(eax_14 - *(a1 + 4));
            rect.left = (eax_16 - edx_3) >> 1;
            int32_t eax_21;
            int32_t edx_4;
            edx_4 = HIGHD(GetSystemMetrics(SM_CYSCREEN) - esi_4);
            eax_21 = LOWD(GetSystemMetrics(SM_CYSCREEN) - esi_4);
            int32_t eax_23 = (eax_21 - edx_4) >> 1;
            int32_t ecx_13 = rect.left + *(a1 + 4);
            rect.top = eax_23;
            rect.right = ecx_13;
            rect.bottom = esi_4 + eax_23;
        }
        else
        {
            rect.left = 0;
            rect.top = 0;
            rect.right = GetSystemMetrics(SM_CXSCREEN);
            rect.bottom = GetSystemMetrics(SM_CYSCREEN);
        }

        AdjustWindowRect(&rect, GetWindowLongA(sub_48f0a0(), 0xfffffff0), 0);
        LONG top = rect.top;
        LONG left = rect.left;
        SetWindowPos(sub_48f0a0(), nullptr, left, top, rect.right - left, rect.bottom - top, 0x44);
        UpdateWindow(sub_48f0a0());
        SetFocus(sub_48f0a0());
        sub_4b0f30(*(a1 + 0x18));
        (*((sub_491e10() << 2) + &g_a94e84))(a1);
        g_5ca02d = 1;
        int32_t i = 0xffffffff;
        int32_t edi_6 = 0xc28b5c;
        result = 0;

        while (i)
        {
            bool cond:4_1 = 0 != *edi_6;
            edi_6 += 1;
            i -= 1;

            if (!cond:4_1)
                break;
        }

        int32_t ecx_16 = ~i;
        int32_t esi_7;
        int32_t edi_8;
        edi_8 = memcpy(&g_5c9fa8, edi_6 - ecx_16, ecx_16 & 0xfffffffc);
        memcpy(edi_8, esi_7, ecx_16 & 3);
    }
    else
    {
        int32_t i_1 = 0xffffffff;
        char* edi_1 = a1 + 0x1c;

        while (i_1)
        {
            bool cond:1_1 = 0 != *edi_1;
            edi_1 = &edi_1[1];
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        if (~i_1 == 1)
        {
            char* edi_2 = &g_5c9fa8;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond:3_1 = 0 != *edi_2;
                edi_2 = &edi_2[1];
                i_2 -= 1;

                if (!cond:3_1)
                    break;
            }

            int32_t ecx_2 = ~i_2;
            int32_t esi_2;
            int32_t edi_5;
            edi_5 = memcpy(a1 + 0x1c, edi_2 - ecx_2, ecx_2 & 0xfffffffc);
            memcpy(edi_5, esi_2, ecx_2 & 3);
        }

        if (*(a1 + 4) != g_c28b44 || *(a1 + 8) != g_c28b48
                || *(a1 + 0x10) != g_c28b50 || *(a1 + 0x18) != g_c28b58
                || *(a1 + 0x16) != g_c28b56)
            goto label_491b61;

        char* esi_3 = &g_c28b5c;
        char* eax_6 = a1 + 0x1c;

        while (true)
        {
            char edx_2 = *eax_6;
            char temp1_1 = *esi_3;
            bool c_1 = edx_2 < temp1_1;

            if (edx_2 == temp1_1)
            {
                if (!edx_2)
                {
                    result = 0;
                    break;
                }

                edx_2 = eax_6[1];
                char temp4_1 = esi_3[1];
                c_1 = edx_2 < temp4_1;

                if (edx_2 == temp4_1)
                {
                    eax_6 = &eax_6[2];
                    esi_3 = &esi_3[2];

                    if (edx_2)
                        continue;

                    result = 0;
                    break;
                }
            }

            result = eax_6 - eax_6 + 1;
            break;
        }

        if (result)
            goto label_491b61;
    }

    return result;
}
