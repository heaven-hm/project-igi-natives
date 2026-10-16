#include "gi_platform.h"
#include "00491F10-Display_SetDisplayMode_6.h"
int32_t __stdcall Display_SetDisplayMode_6(GUID* a1, int32_t a2, int32_t* a3 )

{
    int32_t* lplpDD;
    HRESULT valA = DirectDrawCreateEx(a1, &lplpDD, 0x534a50, 0);
    char v_400;

    if (valA)
    {
        Game_DataSymbolLoad(&v_400, "Couldn't create DirectDraw object");
        int32_t v_42c_1 = DDERR_GENERIC(valA);
        void* v_430 = &v_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* lplpDD_1 = lplpDD;
    int32_t* v_408;
    int32_t valA2 = (**lplpDD_1)(lplpDD_1, 0x534a20, &v_408);

    if (valA2)
    {
        Game_DataSymbolLoad(&v_400, "Couldn't get the Direct3D interface");
        int32_t v_42c_2 = DDERR_GENERIC(valA2);
        void* v_430_1 = &v_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    if (!a1)
    {
        a3[0x4a] = 0;
        a3[0x4b] = 0;
        a3[0x4c] = 0;
        a3[0x4d] = 0;
    }
    else
    {
        a3[0x4a] = a1->Data1;
        struct _GUID __frag(0x4, 0x4, 0x4) objC2;
        objC2.Data2 = a1->Data2;
        objC2.Data3 = a1->Data3;
        a3[0x4b] = objC2.Data2;
        (*(int32_t*)(uintptr_t)(a3 + 0x12e)) = objC2.Data3;
        int32_t objC3;
        objC3 = a1->Data4[0];
        *(&objC3 + 1) = a1->Data4[1];
        *(&objC3 + 2) = a1->Data4[2];
        *(&objC3 + 3) = a1->Data4[3];
        a3[0x4c] = objC3;
        int32_t objC4;
        objC4 = a1->Data4[4];
        *(&objC4 + 1) = a1->Data4[5];
        *(&objC4 + 2) = a1->Data4[6];
        *(&objC4 + 3) = a1->Data4[7];
        a3[0x4d] = objC4;
    }

    Display_08X04X04X02X02X02X02(&a3[9], a3[0x4a], a3[0x4b], a3[0x4c], a3[0x4d]);
    int32_t* lplpDD_4 = lplpDD;
    a3[0x4e] = 0x17c;
    a3[0xad] = 0x17c;
    int32_t valA7 = ((int(*)())(uintptr_t)(*(*lplpDD_4 + 0x2c)))(lplpDD_4, &a3[0x4e], &a3[0xad]);

    if (!valA7)
    {
        if (*a3)
        {
            int32_t* valA24 = v_408;
            int32_t valA25 = ((int(*)())(uintptr_t)(*(*valA24 + 0xc)))(valA24, Display_SwapBuffers_6, a3);

            if (valA25)
            {
                Game_DataSymbolLoad(&v_400, "Couldn't enumerate Direct3D devices");
                int32_t v_42c_6 = DDERR_GENERIC(valA25);
                void* v_430_5 = &v_400;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
        }
        else
        {
            int32_t* valA9 = v_408;
            g_bcacf4 = 0;
            g_bcad74 = 0;
            int32_t valA10 = ((int(*)())(uintptr_t)(*(*valA9 + 0xc)))(valA9, Display_SyncVSync_6, &a3[0x10c]);

            if (valA10)
            {
                Game_DataSymbolLoad(&v_400, "Couldn't enumerate Direct3D devices");
                int32_t v_42c_5 = DDERR_GENERIC(valA10);
                void* v_430_4 = &v_400;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
            else if (g_bcacf4)
            {
                char* srcS5 = a3[1];

                if (!srcS5)
                {
    label_49210b: ;
                    void* tmpD6 = a3[3] + *a3[4] * 0x4f8;
                    memcpy(tmpD6, &a3[9], 0x4f8);
                    int32_t dstD2 = a2;
                    int32_t i = 0xffffffff;

                    while (i)
                    {
                        bool cond_1_1 = 0 != *dstD2;
                        dstD2 += 1;
                        i -= 1;

                        if (!cond_1_1)
                            break;
                    }

                    int32_t objC16 = ~i;
                    int32_t srcS9;
                    int32_t dstD5;
                    dstD5 = memcpy(tmpD6 + 0x80, dstD2 - objC16, objC16 & 0xfffffffc);
                    memcpy(dstD5, srcS9, objC16 & 3);
                    char* dstD6 = &a3[9];
                    int32_t i_1 = 0xffffffff;

                    while (i_1)
                    {
                        bool cond_2_1 = 0 != *dstD6;
                        dstD6 = &dstD6[1];
                        i_1 -= 1;

                        if (!cond_2_1)
                            break;
                    }

                    int32_t objC20 = ~i_1;
                    int32_t srcS11;
                    int32_t dstD9;
                    dstD9 = memcpy(tmpD6, dstD6 - objC20, objC20 & 0xfffffffc);
                    memcpy(dstD9, srcS11, objC20 & 3);
                    *(tmpD6 + 0x100) = 0;

                    if (a1)
                        *(tmpD6 + 0x100) = tmpD6 + 0x104;

                    int32_t* valA20 = a3[4];
                    *valA20 += 1;

                    if (a3[1])
                    {
                        int32_t* valA22 = v_408;
                        ((int(*)())(uintptr_t)(*(*valA22 + 8)))(valA22);
                        int32_t* lplpDD_2 = lplpDD;
                        ((int(*)())(uintptr_t)(*(*lplpDD_2 + 8)))(lplpDD_2);
                        return 0;
                    }
                }
                else
                {
                    char* valA12 = &a3[9];
                    int32_t valA14;

                    while (true)
                    {
                        char tmpD3 = *valA12;
                        char f1_1 = *srcS5;
                        bool c_1 = tmpD3 < f1_1;

                        if (tmpD3 == f1_1)
                        {
                            if (!tmpD3)
                            {
                                valA14 = 0;
                                break;
                            }

                            tmpD3 = valA12[1];
                            char f4_1 = srcS5[1];
                            c_1 = tmpD3 < f4_1;

                            if (tmpD3 == f4_1)
                            {
                                valA12 = &valA12[2];
                                srcS5 = &srcS5[2];

                                if (tmpD3)
                                    continue;

                                valA14 = 0;
                                break;
                            }
                        }

                        valA14 = valA12 - valA12 + 1;
                        break;
                    }

                    int32_t objC12 = 0;
                    objC12 = !valA14;

                    if (objC12)
                        goto label_49210b;
                }
            }
        }

        int32_t* valA27 = v_408;
        ((int(*)())(uintptr_t)(*(*valA27 + 8)))(valA27);
        int32_t* lplpDD_3 = lplpDD;
        ((int(*)())(uintptr_t)(*(*lplpDD_3 + 8)))(lplpDD_3);
        return 1;
    }

    Game_DataSymbolLoad(&v_400, "Couldn't get driver caps");
    int32_t v_42c_4 = DDERR_GENERIC(valA7);
    void* v_430_3 = &v_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
