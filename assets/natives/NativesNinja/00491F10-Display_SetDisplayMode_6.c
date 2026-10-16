#include "00491F10-Display_SetDisplayMode_6.h"
/* 0x00491f10 Display_SetDisplayMode_6 full linked: callers=0 callees=22 */
int32_t __stdcall sub_491f10(GUID* a1, int32_t a2, int32_t* a3 @ 0x10)

{
    int32_t* lplpDD;
    HRESULT eax = DirectDrawCreateEx(a1, &lplpDD, 0x534a50, 0);
    void var_400;

    if (eax)
    {
        Game_DataSymbolLoad(&var_400, "Couldn't create DirectDraw object");
        int32_t var_42c_1 = sub_492be0(eax);
        void* var_430 = &var_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* lplpDD_1 = lplpDD;
    int32_t* var_408;
    int32_t eax_2 = (**lplpDD_1)(lplpDD_1, 0x534a20, &var_408);

    if (eax_2)
    {
        Game_DataSymbolLoad(&var_400, "Couldn't get the Direct3D interface");
        int32_t var_42c_2 = sub_492be0(eax_2);
        void* var_430_1 = &var_400;
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
        struct _GUID __frag(0x4, 0x4, 0x4) ecx_2;
        ecx_2.Data2 = a1->Data2;
        ecx_2.Data3 = a1->Data3;
        a3[0x4b] = ecx_2.Data2;
        *(a3 + 0x12e) = ecx_2.Data3;
        int32_t ecx_3;
        ecx_3 = a1->Data4[0];
        *(&ecx_3 + 1) = a1->Data4[1];
        *(&ecx_3 + 2) = a1->Data4[2];
        *(&ecx_3 + 3) = a1->Data4[3];
        a3[0x4c] = ecx_3;
        int32_t ecx_4;
        ecx_4 = a1->Data4[4];
        *(&ecx_4 + 1) = a1->Data4[5];
        *(&ecx_4 + 2) = a1->Data4[6];
        *(&ecx_4 + 3) = a1->Data4[7];
        a3[0x4d] = ecx_4;
    }

    sub_492370(&a3[9], a3[0x4a], a3[0x4b], a3[0x4c], a3[0x4d]);
    int32_t* lplpDD_4 = lplpDD;
    a3[0x4e] = 0x17c;
    a3[0xad] = 0x17c;
    int32_t eax_7 = (*(*lplpDD_4 + 0x2c))(lplpDD_4, &a3[0x4e], &a3[0xad]);

    if (!eax_7)
    {
        if (*a3)
        {
            int32_t* eax_24 = var_408;
            int32_t eax_25 = (*(*eax_24 + 0xc))(eax_24, sub_4922b0, a3);

            if (eax_25)
            {
                Game_DataSymbolLoad(&var_400, "Couldn't enumerate Direct3D devices");
                int32_t var_42c_6 = sub_492be0(eax_25);
                void* var_430_5 = &var_400;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
        }
        else
        {
            int32_t* eax_9 = var_408;
            g_bcacf4 = 0;
            g_bcad74 = 0;
            int32_t eax_10 = (*(*eax_9 + 0xc))(eax_9, sub_492230, &a3[0x10c]);

            if (eax_10)
            {
                Game_DataSymbolLoad(&var_400, "Couldn't enumerate Direct3D devices");
                int32_t var_42c_5 = sub_492be0(eax_10);
                void* var_430_4 = &var_400;
                Error_Show("%s\n\nDirectX error message: %s");

                while (true)
                    /* nop */
            }
            else if (g_bcacf4)
            {
                char* esi_5 = a3[1];

                if (!esi_5)
                {
                label_49210b:
                    void* edx_6 = a3[3] + *a3[4] * 0x4f8;
                    memcpy(edx_6, &a3[9], 0x4f8);
                    int32_t edi_2 = a2;
                    int32_t i = 0xffffffff;

                    while (i)
                    {
                        bool cond:1_1 = 0 != *edi_2;
                        edi_2 += 1;
                        i -= 1;

                        if (!cond:1_1)
                            break;
                    }

                    int32_t ecx_16 = ~i;
                    int32_t esi_9;
                    int32_t edi_5;
                    edi_5 = memcpy(edx_6 + 0x80, edi_2 - ecx_16, ecx_16 & 0xfffffffc);
                    memcpy(edi_5, esi_9, ecx_16 & 3);
                    char* edi_6 = &a3[9];
                    int32_t i_1 = 0xffffffff;

                    while (i_1)
                    {
                        bool cond:2_1 = 0 != *edi_6;
                        edi_6 = &edi_6[1];
                        i_1 -= 1;

                        if (!cond:2_1)
                            break;
                    }

                    int32_t ecx_20 = ~i_1;
                    int32_t esi_11;
                    int32_t edi_9;
                    edi_9 = memcpy(edx_6, edi_6 - ecx_20, ecx_20 & 0xfffffffc);
                    memcpy(edi_9, esi_11, ecx_20 & 3);
                    *(edx_6 + 0x100) = 0;

                    if (a1)
                        *(edx_6 + 0x100) = edx_6 + 0x104;

                    int32_t* eax_20 = a3[4];
                    *eax_20 += 1;

                    if (a3[1])
                    {
                        int32_t* eax_22 = var_408;
                        (*(*eax_22 + 8))(eax_22);
                        int32_t* lplpDD_2 = lplpDD;
                        (*(*lplpDD_2 + 8))(lplpDD_2);
                        return 0;
                    }
                }
                else
                {
                    char* eax_12 = &a3[9];
                    int32_t eax_14;

                    while (true)
                    {
                        char edx_3 = *eax_12;
                        char temp1_1 = *esi_5;
                        bool c_1 = edx_3 < temp1_1;

                        if (edx_3 == temp1_1)
                        {
                            if (!edx_3)
                            {
                                eax_14 = 0;
                                break;
                            }

                            edx_3 = eax_12[1];
                            char temp4_1 = esi_5[1];
                            c_1 = edx_3 < temp4_1;

                            if (edx_3 == temp4_1)
                            {
                                eax_12 = &eax_12[2];
                                esi_5 = &esi_5[2];

                                if (edx_3)
                                    continue;

                                eax_14 = 0;
                                break;
                            }
                        }

                        eax_14 = eax_12 - eax_12 + 1;
                        break;
                    }

                    int32_t ecx_12 = 0;
                    ecx_12 = !eax_14;

                    if (ecx_12)
                        goto label_49210b;
                }
            }
        }

        int32_t* eax_27 = var_408;
        (*(*eax_27 + 8))(eax_27);
        int32_t* lplpDD_3 = lplpDD;
        (*(*lplpDD_3 + 8))(lplpDD_3);
        return 1;
    }

    Game_DataSymbolLoad(&var_400, "Couldn't get driver caps");
    int32_t var_42c_4 = sub_492be0(eax_7);
    void* var_430_3 = &var_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
