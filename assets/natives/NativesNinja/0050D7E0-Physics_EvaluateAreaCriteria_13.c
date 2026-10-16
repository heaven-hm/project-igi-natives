#include "0050D7E0-Physics_EvaluateAreaCriteria_13.h"
/* 0x0050d7e0 Physics_EvaluateAreaCriteria_13 full linked: callers=0 callees=8 */
❓  int32_t sub_50d7e0(void* a1)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    int32_t ebx;
    int32_t var_10 = ebx;
    void* ebx_1 = a1;
    int32_t ebp;
    int32_t var_14 = ebp;
    int32_t esi_1 = *(ebx_1 + 0x14);
    int32_t edi;
    int32_t var_1c = edi;
    int32_t edi_1 = g_a7da00;
    int32_t ecx_1 = edi_1 & 0x8000003c;
    void* ebp_1 = *(ebx_1 + 0x24);
    int32_t ecx_2 = -(ecx_1);
    int32_t edx_1 = esi_1 & 0x8000003c;
    void* var_4 = *(ebx_1 + 0xc);
    int32_t edx_2 = -(edx_1);
    int32_t var_8 = esi_1;

    if (ecx_2 - ecx_2 + 1 != edx_2 - edx_2 + 1 || (edi_1 ^ esi_1) & 0x60000)
    {
        *(g_bcadac + 4) = 0xffffffff;
        esi_1 = var_8;
        edi_1 = g_a7da00;
    }

    if ((edi_1 ^ esi_1) & 0x8000003c)
    {
        *(g_bcad7c + 4) = 0xffffffff;
        esi_1 = var_8;
        edi_1 = g_a7da00;
    }

    int32_t eax_1 = 0;
    eax_1 = !g_a7da04;
    int32_t ecx_11 = 0;
    ecx_11 = !var_4;

    if (eax_1 != ecx_11 || (edi_1 ^ esi_1) & 0x1400000)
    {
        *(g_bcade8 + 4) = 0xffffffff;
        esi_1 = var_8;
    }

    int32_t ecx_12 = g_a7ced8;
    g_a7da04 = var_4;
    void* eax_4 = g_bcade8;
    g_a7da00 = esi_1;

    if (*(eax_4 + 4) != ecx_12)
    {
        *(eax_4 + 4) = ecx_12;
        (*(g_bcade8 + (g_a7ced8 << 2) + 0x14))(&var_8);
    }

    void* eax_6 = g_bcad7c;
    int32_t ecx_13 = g_a7d9f8;

    if (*(eax_6 + 4) != ecx_13)
    {
        *(eax_6 + 4) = ecx_13;
        (*(g_bcad7c + (g_a7d9f8 << 2) + 0x14))(&var_8);
    }

    void* eax_8 = g_bcadac;
    int32_t ecx_14 = g_a7d9f4;

    if (*(eax_8 + 4) != ecx_14)
    {
        *(eax_8 + 4) = ecx_14;
        (*(g_bcadac + (g_a7d9f4 << 2) + 0x14))(&var_8);
    }

    void* eax_10 = g_bcadc4;
    int32_t ecx_15 = g_bcacec;

    if (*(eax_10 + 4) != ecx_15)
    {
        *(eax_10 + 4) = ecx_15;
        (*(g_bcadc4 + (g_bcacec << 2) + 0x14))(&var_8);
    }

    void** var_24;

    if (var_4)
    {
        int32_t* eax_13 = g_5ca114;
        int32_t edx_14 = *(*(ebx_1 + 0xc) + 0x20);
        int32_t ecx_16 = *eax_13;
        var_24 = nullptr;
        (*(ecx_16 + 0x8c))(eax_13, var_24, edx_14);
    }

    int32_t eax_15 = *(ebx_1 + 0x1c);
    int32_t result;
    void*** esp;
    void** var_30;

    if (!*(ebx_1 + 0x20))
    {
        int32_t edx_21 = g_bcad08;
        int32_t* eax_26;

        if (eax_15 <= 2)
        {
            bool cond:2_1 = edx_21 + 4 > g_bcad04;
            int32_t* eax_28 = g_bcad00;
            int32_t var_20_8 = 0;
            int32_t ecx_46 = *eax_28;
            var_24 = &a1;
            void* edx_30;
            void** ebx_3;

            if (cond:2_1)
            {
                result = (*(ecx_46 + 0xc))(eax_28, 0x2020);
                esp = &var_24;
                ebx_3 = nullptr;
                g_bcad08 = 4;

                if (!result)
                {
                    edx_30 = var_4;
                label_50db91:

                    if (edx_30)
                    {
                        memcpy(edx_30, ebp_1, 0x1c);
                        memcpy(var_4 + 0x54, ebp_1 + 0x1c, 0x1c);
                        memcpy(var_4 + 0x1c, ebp_1, 0x1c);
                        *(var_4 + 0x1c) = *(ebp_1 + 0x1c);
                        *(var_4 + 0x30) = *(ebp_1 + 0x30);
                        memcpy(var_4 + 0x38, ebp_1, 0x1c);
                        *(var_4 + 0x3c) = *(ebp_1 + 0x20);
                        *(var_4 + 0x50) = *(ebp_1 + 0x34);
                        int32_t* eax_33 = g_bcad00;
                        (*(*eax_33 + 0x10))(eax_33);
                        eax_26 = g_5ca114;
                        int32_t var_28_12 = 0;
                        int32_t var_2c_8 = 4;
                        var_30 = ebx_3;
                        result = (*(*eax_26 + 0x7c))(eax_26, 5, g_bcad00);
                        esp = &var_30;
                    }
                }
            }
            else
            {
                result = (*(ecx_46 + 0xc))(eax_28, 0x20);
                esp = &var_24;
                void** ecx_47 = g_bcad08;
                ebx_3 = ecx_47;
                g_bcad08 = &ecx_47[1];
                edx_30 = var_4 + ecx_47 * 0x1c;
                var_4 = edx_30;

                if (!result)
                    goto label_50db91;
            }
        }
        else
        {
            bool cond:3_1 = eax_15 + edx_21 > g_bcad04;
            int32_t* eax_23 = g_bcad00;
            int32_t var_20_7 = 0;
            int32_t ecx_33 = *eax_23;
            var_24 = &a1;
            void** var_14_3;
            void* edx_24;

            if (cond:3_1)
            {
                result = (*(ecx_33 + 0xc))(eax_23, 0x2020);
                esp = &var_24;
                var_14_3 = nullptr;
                g_bcad08 = *(ebx_1 + 0x1c);

                if (!result)
                {
                    edx_24 = var_4;
                label_50dad7:

                    if (edx_24)
                    {
                        int32_t ecx_39 = *(ebx_1 + 0x1c) * 0x1c;
                        int32_t esi_6;
                        int32_t edi_11;
                        edi_11 = memcpy(edx_24, ebp_1, ecx_39 & 0xfffffffc);
                        memcpy(edi_11, esi_6, ecx_39 & 3);
                        int32_t* eax_25 = g_bcad00;
                        (*(*eax_25 + 0x10))(eax_25);
                        eax_26 = g_5ca114;
                        int32_t var_28_8 = 0;
                        int32_t var_2c_5 = *(ebx_1 + 0x1c);
                        int32_t edx_26 = *eax_26;
                        var_30 = var_14_3;
                        result = (*(edx_26 + 0x7c))(eax_26, 5, g_bcad00);
                        esp = &var_30;
                    }
                }
            }
            else
            {
                result = (*(ecx_33 + 0xc))(eax_23, 0x20);
                esp = &var_24;
                void** ecx_34 = g_bcad08;
                var_14_3 = ecx_34;
                edx_24 = var_4 + ecx_34 * 0x1c;
                void* var_4_2 = edx_24;
                g_bcad08 = ecx_34 + *(ebx_1 + 0x1c);

                if (!result)
                    goto label_50dad7;
            }
        }
    }
    else
    {
        bool cond:1_1 = eax_15 + g_bcad08 > g_bcad04;
        int32_t* eax_17 = g_bcad00;
        int32_t var_20_6 = 0;
        var_24 = &a1;
        int32_t ecx_18 = *eax_17;
        void* edx_18;

        if (cond:1_1)
        {
            result = (*(ecx_18 + 0xc))(eax_17, 0x2020);
            esp = &var_24;
            int32_t var_14_2 = 0;
            g_bcad08 = *(ebx_1 + 0x1c);

            if (!result)
            {
                edx_18 = var_4;
            label_50d9f9:

                if (edx_18)
                {
                    int32_t ecx_24 = *(ebx_1 + 0x1c) * 0x1c;
                    int32_t esi_3;
                    int32_t edi_6;
                    edi_6 = memcpy(edx_18, ebp_1, ecx_24 & 0xfffffffc);
                    memcpy(edi_6, esi_3, ecx_24 & 3);
                    int32_t* eax_19 = g_bcad00;
                    (*(*eax_19 + 0x10))(eax_19);
                    int32_t* eax_20 = g_5ca114;
                    int32_t var_2c_2 = 0;
                    var_30 = *(ebx_1 + 0x1c);
                    int32_t esi;
                    int32_t var_34_1 = esi;
                    return (*(*eax_20 + 0x7c))(eax_20, 3, g_bcad00);
                }
            }
        }
        else
        {
            result = (*(ecx_18 + 0xc))(eax_17, 0x20);
            esp = &var_24;
            int32_t ecx_19 = g_bcad08;
            int32_t var_14_1 = ecx_19;
            edx_18 = var_4 + ecx_19 * 0x1c;
            void* var_4_1 = edx_18;
            g_bcad08 = ecx_19 + *(ebx_1 + 0x1c);

            if (!result)
                goto label_50d9f9;
        }
    }
❓️    *esp;
    esp[1];
    esp[2];
    esp[3];
    return result;
}
