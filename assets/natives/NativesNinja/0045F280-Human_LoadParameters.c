#include "0045F280-Human_LoadParameters.h"
/* 0x0045f280 Human_LoadParameters full linked: callers=0 callees=23 */
uint32_t sub_45f280(float a1, int32_t a2)

{
    void* esi = *(Level_LoadLevel_6() + 0x5c);
    void* eax_1 = sub_4e81f0();
    uint32_t result = *(a1 + 0x74);
    int32_t var_7c = 0;

    if (result)
    {
        result = sub_4d06c0(a1, &var_7c);

        if (!result)
        {
            result = Frames_GetTaskCounter();
            *(a1 + 0x7c4) = result;
        }
    }

    if (*(eax_1 + 0x54) != esi || **(esi + 0x68) != a1 || *(esi + 0xe8) != 1)
    {
        sub_45f140(a1);
        (*((sub_4d9610() << 2) + &g_a982e0))(a1, a2);
        void* eax_6 = Table_GetAt(a1 + 0x4c4, 0);

        if (eax_6)
        {
            int32_t var_48 = 0;
            uint32_t eax_8 = sub_477c20();
            int32_t edx_2 = 0;
            edx_2 = *(a1 + 0x1c);
            (*(((eax_8 * 0x180 + edx_2) << 2) + &g_a96ae0))(a1, &var_48);
            void var_40;
            void var_28;
            sub_4f2310(eax_6, &var_40, &var_28);
            (*((sub_4c48c0() << 2) + &g_a982e0))(eax_6, 0);
        }

        double var_60[0x2];
        memcpy(&var_60, a1 + 0x20, 0x18);
        double var_50;
        double var_50_1 = var_50 + 4096.0;
        float var_80;
        float var_68;
        result = sub_497f20(&var_68, &var_80, &var_60);
        long double x87_r7_3 = var_80;
        long double temp0_1 = 0f;
        x87_r7_3 - temp0_1;
        result = (x87_r7_3 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            long double x87_r7_4 = var_80;
            long double temp1_1 = 184320.0;
            x87_r7_4 - temp1_1;
            result = (x87_r7_4 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp1_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                int32_t* eax_13 = *(a1 + 0x854);
                uint32_t* esi_3 = a1 + 0x854;
                int32_t var_78;
                float var_64;

                if (eax_13)
                {
                    int32_t eax_16;
                    int32_t edx_3;
                    edx_3 = HIGHD(sub_4b7e00(eax_13) << 5);
                    eax_16 = LOWD(sub_4b7e00(eax_13) << 5);
                    uint32_t ecx_5 = *esi_3;
                    var_78 = (eax_16 - edx_3) >> 1;
                    var_68 = var_68 - var_78;
                    int32_t eax_21;
                    int32_t edx_4;
                    edx_4 = HIGHD(sub_4b7e00(ecx_5) << 5);
                    eax_21 = LOWD(sub_4b7e00(ecx_5) << 5);
                    var_78 = (eax_21 - edx_4) >> 1;
                    var_64 = var_64 - var_78;
                }

                char* edi_1 = a1 + 0x8d4;
                int32_t i_1 = 0x20;
                int32_t i;

                do
                {
                    uint32_t eax_24 = *esi_3;

                    if (!eax_24)
                    {
                        result = sub_4e7c40();

                        if (result)
                        {
                            char eax_28 = QHash_ValueGet();

                            if (!eax_28)
                                QHash_ValueSet();

                            result = sub_4b6ec0(sub_4e7c40(), 0, 0, &g_567c74);
                            *esi_3 = result;

                            if (!eax_28)
                                sub_4b0d50();
                        }
                    }
                    else
                    {
                        sub_4b6e90(eax_24, edi_1);
                        int32_t var_70_1 = var_64;
                        *edi_1 = 0;
                        uint32_t ecx_6 = *esi_3;
                        var_78 = var_68;
                        var_78 = var_78;
                        *(ecx_6 + 4) = var_78;
                        *(*esi_3 + 8) = var_70_1;
                        uint32_t eax_26 = *esi_3;
                        *(eax_26 + 0x24) |= 0x40000;
                        *(*esi_3 + 0xc) = 0x45800000;
                        sub_4b6f50(*esi_3);
                        result = sub_4b7e00(*esi_3);
                        var_64 = result + var_64;
                    }

                    esi_3 = &esi_3[1];
                    edi_1 = &edi_1[0x21];
                    i = i_1;
                    i_1 -= 1;
                } while (i != 1);
            }
        }
    }

    return result;
}
