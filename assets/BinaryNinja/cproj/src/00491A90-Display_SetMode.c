#include "gi_platform.h"
#include "00491A90-Display_SetMode.h"
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
    label_491b61: ;
        Display_CloseDevice_4(g_bcadec);

        if (g_5ca02d)
            Display_OpenDevice_4(a1);

        RECT rect;

        if (!FX_FragmentSimulate_23())
        {
            int32_t valA14 = GetSystemMetrics(SM_CXSCREEN);
            int32_t srcS4 = (*(int32_t*)(uintptr_t)(a1 + 8));
            int32_t valA16;
            int32_t tmpD3;
            tmpD3 = HIGHD(valA14 - (*(int32_t*)(uintptr_t)(a1 + 4)));
            valA16 = LOWD(valA14 - (*(int32_t*)(uintptr_t)(a1 + 4)));
            rect.left = (valA16 - tmpD3) >> 1;
            int32_t valA21;
            int32_t tmpD4;
            tmpD4 = HIGHD(GetSystemMetrics(SM_CYSCREEN) - srcS4);
            valA21 = LOWD(GetSystemMetrics(SM_CYSCREEN) - srcS4);
            int32_t valA23 = (valA21 - tmpD4) >> 1;
            int32_t objC13 = rect.left + (*(int32_t*)(uintptr_t)(a1 + 4));
            rect.idx = valA23;
            rect.right = objC13;
            rect.bottom = srcS4 + valA23;
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
        Sys_FreeMemory_3((*(int32_t*)(uintptr_t)(a1 + 0x18)));
        ((int(*)())(uintptr_t)(*((Display_SwapBuffers_5() << 2) + &g_a94e84)))(a1);
        g_5ca02d = 1;
        int32_t i = 0xffffffff;
        int32_t dstD6 = 0xc28b5c;
        result = 0;

        while (i)
        {
            bool cond_4_1 = 0 != *dstD6;
            dstD6 += 1;
            i -= 1;

            if (!cond_4_1)
                break;
        }

        int32_t objC16 = ~i;
        int32_t srcS7;
        int32_t dstD8;
        dstD8 = memcpy(&g_5c9fa8, dstD6 - objC16, objC16 & 0xfffffffc);
        memcpy(dstD8, srcS7, objC16 & 3);
    }
    else
    {
        int32_t i_1 = 0xffffffff;
        char* dstD1 = a1 + 0x1c;

        while (i_1)
        {
            bool cond_1_1 = 0 != *dstD1;
            dstD1 = &dstD1[1];
            i_1 -= 1;

            if (!cond_1_1)
                break;
        }

        if (~i_1 == 1)
        {
            char* dstD2 = &g_5c9fa8;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond_3_1 = 0 != *dstD2;
                dstD2 = &dstD2[1];
                i_2 -= 1;

                if (!cond_3_1)
                    break;
            }

            int32_t objC2 = ~i_2;
            int32_t srcS2;
            int32_t dstD5;
            dstD5 = memcpy(a1 + 0x1c, dstD2 - objC2, objC2 & 0xfffffffc);
            memcpy(dstD5, srcS2, objC2 & 3);
        }

        if ((*(int32_t*)(uintptr_t)(a1 + 4)) != g_c28b44 || (*(int32_t*)(uintptr_t)(a1 + 8)) != g_c28b48
                || (*(int32_t*)(uintptr_t)(a1 + 0x10)) != g_c28b50 || (*(int32_t*)(uintptr_t)(a1 + 0x18)) != g_c28b58
                || (*(int32_t*)(uintptr_t)(a1 + 0x16)) != g_c28b56)
            goto label_491b61;

        char* srcS3 = &g_c28b5c;
        char* valA6 = a1 + 0x1c;

        while (true)
        {
            char tmpD2 = *valA6;
            char f1_1 = *srcS3;
            bool c_1 = tmpD2 < f1_1;

            if (tmpD2 == f1_1)
            {
                if (!tmpD2)
                {
                    result = 0;
                    break;
                }

                tmpD2 = valA6[1];
                char f4_1 = srcS3[1];
                c_1 = tmpD2 < f4_1;

                if (tmpD2 == f4_1)
                {
                    valA6 = &valA6[2];
                    srcS3 = &srcS3[2];

                    if (tmpD2)
                        continue;

                    result = 0;
                    break;
                }
            }

            result = valA6 - valA6 + 1;
            break;
        }

        if (result)
            goto label_491b61;
    }

    return result;
}
