#include "004C6240-DynObj_Createterrainmateria.h"
/* 0x004c6240 DynObj_Createterrainmateria full linked: callers=1 callees=42 */
void* sub_4c6240(void* a1, int32_t a2)

{
    sub_4d11c0();
    int32_t i = 0xffffffff;
    int32_t edi = a2;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx = ~i;
    void var_80;
    int32_t esi_1;
    int32_t edi_2;
    edi_2 = memcpy(&var_80, edi - ecx, ecx & 0xfffffffc);
    memcpy(edi_2, esi_1, ecx & 3);
    char* edi_3 = ".bit";
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_3;
        edi_3 = &edi_3[1];
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t ecx_4 = ~i_1;
    void* edi_5 = &var_80;
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool cond:2_1 = 0 != *edi_5;
        edi_5 += 1;
        i_2 -= 1;

        if (!cond:2_1)
            break;
    }

    int32_t esi_3;
    int32_t edi_7;
    edi_7 = memcpy(edi_5 - 1, edi_3 - ecx_4, ecx_4 & 0xfffffffc);
    memcpy(edi_7, esi_3, ecx_4 & 3);
    void* var_a0 = &var_80;
    int32_t var_88;
    int32_t* eax_2 = Resource_Load(&var_88, &var_80, &var_80, &var_88);
    void* edi_8 = &eax_2[0x300];
    *(a1 + 0xdcc) = eax_2;

    if (var_88 >= 0xc00)
    {
        void* esi_4 = nullptr;

        for (void* i_3 = nullptr; i_3 < 0xc00; )
        {
            *(esi_4 + 0xb81a20) = 1;
            int32_t edx_1 = *(a1 + 0xdcc);
            int32_t edx_2 = *(i_3 + edx_1 + 8);
            var_88 = edx_2;

            if (edx_2)
            {
                *(i_3 + edx_1) = edi_8;
                int32_t eax_6 = var_88;
                int32_t eax_8;
                int32_t edx_3;
                edx_3 = HIGHD(eax_6 * eax_6);
                eax_8 = LOWD(eax_6 * eax_6);
                edi_8 += (eax_8 + (edx_3 & 7)) >> 3;
            }

            i_3 += 0xc;
            esi_4 += 1;
            *(i_3 + *(a1 + 0xdcc) - 8) = 0;
        }
    }
    else
    {
        void* eax_4 = Mem_Alloc(0xc00, 4);
        *(a1 + 0xdcc) = eax_4;
        __builtin_memset(eax_4, 0, 0xc00);
        __builtin_memset(0xb81a20, 0, 0x100);
    }

    int32_t edi_10 = a2;
    int32_t i_4 = 0xffffffff;

    while (i_4)
    {
        bool cond:4_1 = 0 != *edi_10;
        edi_10 += 1;
        i_4 -= 1;

        if (!cond:4_1)
            break;
    }

    int32_t ecx_10 = ~i_4;
    int32_t esi_6;
    int32_t edi_12;
    edi_12 = memcpy(&var_80, edi_10 - ecx_10, ecx_10 & 0xfffffffc);
    memcpy(edi_12, esi_6, ecx_10 & 3);
    char* edi_13 = ".hmp";
    int32_t i_5 = 0xffffffff;

    while (i_5)
    {
        bool cond:5_1 = 0 != *edi_13;
        edi_13 = &edi_13[1];
        i_5 -= 1;

        if (!cond:5_1)
            break;
    }

    int32_t ecx_14 = ~i_5;
    void* edi_15 = &var_80;
    int32_t i_6 = 0xffffffff;

    while (i_6)
    {
        bool cond:6_1 = 0 != *edi_15;
        edi_15 += 1;
        i_6 -= 1;

        if (!cond:6_1)
            break;
    }

    int32_t esi_8;
    int32_t edi_17;
    edi_17 = memcpy(edi_15 - 1, edi_13 - ecx_14, ecx_14 & 0xfffffffc);
    memcpy(edi_17, esi_8, ecx_14 & 3);
    int32_t eax_13 = sub_4b5b60(&var_80);

    if (!eax_13)
        *(a1 + 0xdd0) = 0;
    else
    {
        void* var_a0_1 = &var_80;
        int32_t* eax_14 = Resource_Load(eax_13, &var_80, &var_88, &var_88);
        *(a1 + 0xdd0) = eax_14;
        void* edi_18 = &eax_14[0x300];

        if (var_88 >= 0xc00)
        {
            void* esi_9 = nullptr;

            for (int32_t i_7 = 0; i_7 < 0xc00; )
            {
                *(esi_9 + 0xb81920) = 1;
                void** ecx_21 = *(a1 + 0xdd0) + i_7;
                int32_t edx_7 = ecx_21[2];
                var_88 = edx_7;

                if (edx_7)
                {
                    *ecx_21 = edi_18;
                    edi_18 += (var_88 + 1) * (var_88 + 1);
                }

                i_7 += 0xc;
                esi_9 += 1;
                *(*(a1 + 0xdd0) + i_7 - 8) = 0;
            }
        }
        else
        {
            void* eax_16 = Mem_Alloc(0xc00, 4);
            *(a1 + 0xdd0) = eax_16;
            __builtin_memset(eax_16, 0, 0xc00);
            __builtin_memset(0xb81920, 0, 0x100);
        }
    }

    int32_t edi_20 = a2;
    int32_t i_8 = 0xffffffff;

    while (i_8)
    {
        bool cond:11_1 = 0 != *edi_20;
        edi_20 += 1;
        i_8 -= 1;

        if (!cond:11_1)
            break;
    }

    int32_t ecx_24 = ~i_8;
    int32_t esi_11;
    int32_t edi_22;
    edi_22 = memcpy(&var_80, edi_20 - ecx_24, ecx_24 & 0xfffffffc);
    memcpy(edi_22, esi_11, ecx_24 & 3);
    char* edi_23 = ".cmd";
    int32_t i_9 = 0xffffffff;

    while (i_9)
    {
        bool cond:12_1 = 0 != *edi_23;
        edi_23 = &edi_23[1];
        i_9 -= 1;

        if (!cond:12_1)
            break;
    }

    int32_t ecx_28 = ~i_9;
    void* edi_25 = &var_80;
    int32_t i_10 = 0xffffffff;

    while (i_10)
    {
        bool cond:13_1 = 0 != *edi_25;
        edi_25 += 1;
        i_10 -= 1;

        if (!cond:13_1)
            break;
    }

    int32_t esi_13;
    int32_t edi_27;
    edi_27 = memcpy(edi_25 - 1, edi_23 - ecx_28, ecx_28 & 0xfffffffc);
    void* var_a0_2 = &var_80;
    *(a1 + 8) =
        Resource_Load(&var_80, ecx_28, memcpy(edi_27, esi_13, ecx_28 & 3), nullptr);
    int32_t edi_28 = a2;
    int32_t i_11 = 0xffffffff;

    while (i_11)
    {
        bool cond:14_1 = 0 != *edi_28;
        edi_28 += 1;
        i_11 -= 1;

        if (!cond:14_1)
            break;
    }

    int32_t ecx_34 = ~i_11;
    int32_t esi_15;
    int32_t edi_30;
    edi_30 = memcpy(&var_80, edi_28 - ecx_34, ecx_34 & 0xfffffffc);
    memcpy(edi_30, esi_15, ecx_34 & 3);
    char* edi_31 = ".ctr";
    int32_t i_12 = 0xffffffff;

    while (i_12)
    {
        bool cond:15_1 = 0 != *edi_31;
        edi_31 = &edi_31[1];
        i_12 -= 1;

        if (!cond:15_1)
            break;
    }

    int32_t ecx_38 = ~i_12;
    void* edi_33 = &var_80;
    int32_t i_13 = 0xffffffff;

    while (i_13)
    {
        bool cond:16_1 = 0 != *edi_33;
        edi_33 += 1;
        i_13 -= 1;

        if (!cond:16_1)
            break;
    }

    int32_t esi_17;
    int32_t edi_35;
    edi_35 = memcpy(edi_33 - 1, edi_31 - ecx_38, ecx_38 & 0xfffffffc);
    memcpy(edi_35, esi_17, ecx_38 & 3);
    void* var_a8 = &var_80;
    int32_t var_84;
    *(a1 + 0xc) = Resource_Load(&var_84, ecx_38, &var_80, &var_84);
    int32_t edi_36 = a2;
    int32_t i_14 = 0xffffffff;

    while (i_14)
    {
        bool cond:17_1 = 0 != *edi_36;
        edi_36 += 1;
        i_14 -= 1;

        if (!cond:17_1)
            break;
    }

    int32_t ecx_44 = ~i_14;
    int32_t esi_19;
    int32_t edi_38;
    edi_38 = memcpy(&var_80, edi_36 - ecx_44, ecx_44 & 0xfffffffc);
    memcpy(edi_38, esi_19, ecx_44 & 3);
    char* edi_39 = ".qsc";
    int32_t i_15 = 0xffffffff;

    while (i_15)
    {
        bool cond:18_1 = 0 != *edi_39;
        edi_39 = &edi_39[1];
        i_15 -= 1;

        if (!cond:18_1)
            break;
    }

    int32_t ecx_48 = ~i_15;
    void* edi_41 = &var_80;
    int32_t i_16 = 0xffffffff;

    while (i_16)
    {
        bool cond:19_1 = 0 != *edi_41;
        edi_41 += 1;
        i_16 -= 1;

        if (!cond:19_1)
            break;
    }

    int32_t esi_21;
    int32_t edi_43;
    edi_43 = memcpy(edi_41 - 1, edi_39 - ecx_48, ecx_48 & 0xfffffffc);
    memcpy(edi_43, esi_21, ecx_48 & 3);
    Game_DefineOptions("CreateTerrainMaterial", CreateTerrainMaterial, 0, 0xe2);
    Game_DefineOptions("CreateTerrainTileMap", Create_TerrainTileMap, 0, 0x41);
    int32_t* eax_24 = Qvm_Load(&var_80);
    Qvm_Execute(eax_24);
    Qvm_Cleanup(eax_24);
    sub_4b8920("CreateTerrainMaterial");
    sub_4b8920("CreateTerrainTileMap");
    uint32_t i_20 = var_84 >> 5;

    if (i_20 > 0)
    {
        int32_t edx_13 = 0;
        uint32_t i_17;

        do
        {
            int32_t ecx_53 = *(a1 + 0xc);
            int32_t* ecx_54 = edx_13 + ecx_53 + 0x1c;
            int32_t edi_45 = *(edx_13 + ecx_53 + 0x1c) + *(a1 + 8);
            edx_13 += 0x20;
            i_17 = i_20;
            i_20 -= 1;
            *ecx_54 = edi_45;
        } while (i_17 != 1);
    }

    *(a1 + 0xdc0) = Mem_Alloc(0x1000, 4);
    *(a1 + 0xdc4) = Mem_Alloc(0x10000, 4);

    for (int32_t i_18 = 0; i_18 < 0x10000; i_18 += 0x100)
    {
        for (int32_t j = 0; j < 0x100; )
        {
            j += 1;
            *(i_18 + *(a1 + 0xdc4) + j - 1) = 0;
        }
    }

    for (int32_t i_19 = 0; i_19 < 0x1000; )
    {
        i_19 += 0x10;
        *(*(a1 + 0xdc0) + i_19 - 0x10) = 0;
    }

    return sub_4ce3d0(a1);
}
