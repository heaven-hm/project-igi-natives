#include "0048D340-Gunner_Combat.h"
/* 0x0048d340 Gunner_Combat full linked: callers=0 callees=30 */
int32_t* sub_48d340(long double a1 @ st1, void* a2, int32_t a3)

{
    int32_t esi = a3;
    void* eax = *(a2 + 0x14);
    char* var_64 = "Gunner Combat - Stand";
    int32_t edi_1 = *(esi + 0x28) + 8;
    int32_t var_68 = 0xffffffff;
    void* var_6c = a2;
    int32_t var_4c = 0;
    int32_t var_70 = edi_1;
    sub_48a920(a2, var_70);
    void* eax_1 = *(a2 + 0x3de4);

    if (!eax_1)
        return sub_450ff0(a2, esi);

    int32_t eax_3 = *(a2 + 0x3ac8);
    void* var_78;

    if (eax_3 != 0xffffffff)
    {
        void* eax_4 = sub_4f1030(eax_3);

        if (!eax_4)
        {
            int32_t var_64_3 = *(a2 + 0x3ac8);
            Warning_Show("Stationary gun ID #%d not found");
        label_48d3f5:

            if (eax_4)
            {
                double var_38;
                int64_t* var_68_3 = &var_38;
                sub_451380(var_68_3, a2);
                long double x87_r7_2 = var_38 - *(eax_4 + 0xf0);
                double var_30;
                long double x87_r6_2 = var_30 - *(eax_4 + 0xf8);
                double var_30_1 = x87_r6_2;
                double var_28;
                long double x87_r5_2 = var_28 - *(eax_4 + 0x100);
                double var_28_1 = x87_r5_2;
                double var_20 = *(eax_4 + 0x120) * x87_r5_2 + *(eax_4 + 0x114) * x87_r6_2
                    + *(eax_4 + 0x108) * x87_r7_2;
                double var_18_1 = *(eax_4 + 0x124) * x87_r5_2 + *(eax_4 + 0x118) * x87_r6_2
                    + *(eax_4 + 0x10c) * x87_r7_2;
                double var_10_1 = *(eax_4 + 0x128) * x87_r5_2 + *(eax_4 + 0x11c) * x87_r6_2
                    + *(eax_4 + 0x110) * x87_r7_2;
                memcpy(&var_38, &var_20, 0x18);
                var_38 = -(var_20);
                double var_30_2 = -(var_30_1);
                double var_28_2 = -(var_28_1);
                memcpy(&var_78, &var_38, 0x18);
                WeaponType_InitType();
                long double x87_r0;
                float var_50 = x87_r0;
                memcpy(&var_78, &var_38, 0x18);
                WeaponType_GetConfig();
                float var_54_1 = a1;
                var_68_3 = a1;
                var_70 = var_50;
                char* var_74_1 = "Gun->Tgt: A:%1.3f, G:%1.3f";
                var_78 = 0xffffffff;
                void* var_7c_1 = a2;
                char* var_80_1 = "Gun params:";
                int32_t var_84_1 = 0xffffffff;
                void* var_88_1 = a2;
                var_68_3 = *(eax_4 + 0x1e0) * 0.0174532924f;
                var_70 = *(eax_4 + 0x1e4) * 0.0174532924f;
                var_78 = *(eax_4 + 0x1e8) * 0.0174532924f;
                char* var_7c_2 = "MG:%1.3f, A-:%1.3f, A+:%1.3f";
                int32_t var_80_2 = 0xffffffff;
                void* var_84_2 = a2;
                long double x87_r1_7 = var_54_1;
                long double temp1_1 = 0f;
                x87_r1_7 - temp1_1;
                long double x87_r1_8 = var_54_1;

                if (*(&((x87_r1_7 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r1_7, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r1_7 == temp1_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
                    x87_r1_8 = -(x87_r1_8);

                long double x87_r0_2 = *(eax_4 + 0x1e8) * 0.0174532924f;
                x87_r1_8 - x87_r0_2;

                if (*(&((x87_r1_8 < x87_r0_2 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r1_8, x87_r0_2) ? 1 : 0) << 0xa
                    | (x87_r1_8 == x87_r0_2 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
                {
                    long double x87_r1_11 = *(eax_4 + 0x1e4) * 0.0174532924f;
                    long double temp2_1 = var_50;
                    x87_r1_11 - temp2_1;

                    if (*(&((x87_r1_11 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r1_11, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r1_11 == temp2_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
                    {
                        long double x87_r1_13 = *(eax_4 + 0x1e0) * 0.0174532924f;
                        long double temp3_1 = var_50;
                        x87_r1_13 - temp3_1;

                        if (!(*(&((x87_r1_13 < temp3_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r1_13, temp3_1) ? 1 : 0) << 0xa
                            | (x87_r1_13 == temp3_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41))
                        {
                            char* var_64_5 = "Target is in guncone";
                            int32_t var_68_4 = 0xffffffff;
                            void* var_6c_1 = a2;
                            var_4c = 1;
                        }
                    }
                }
            }
        }
        else if (!*(eax_4 + 0x21c) || *(eax_4 + 0x208) == eax)
            goto label_48d3f5;

        esi = a3;
    }

    char eax_9;
    int32_t ecx_2;
    eax_9 = sub_48efe0(a2, 4);

    if (!eax_9)
    {
        int32_t eax_30 = var_4c;

        if (!eax_30)
            *(edi_1 + 0x14) = 0x1e;
        else
        {
            int32_t eax_31 = *(edi_1 + 0x14);

            if (!eax_31)
            {
🚫🚫                /* unimplemented  {fild st0, dword [ebx+0x3ac8]} */
                int32_t var_64_16 = ecx_2;
🚫🚫🚫                float var_64_17 = /* float var_64_17 = unimplemented  {fstp dword [esp], st0} */;
                /* unimplemented  {fstp dword [esp], st0} */
                return sub_48ef70(a2, 4, var_64_17);
            }

            eax_30 = eax_31 - 1;
            *(edi_1 + 0x14) = eax_30;
        }

        if (*(a2 + 0x3e00) != 0xffffffff)
            return sub_48d080(a2, esi);

        char* var_64_18 = "No primary weapon";
        int32_t var_68_16 = 0xffffffff;
        void* var_6c_9 = a2;
        return eax_30;
    }

    int32_t ecx_3 = *(edi_1 + 0x18);
    *(edi_1 + 0x18) = 0;

    if (var_4c)
        *(edi_1 + 0x14) = 0x1e;
    else
    {
        int32_t eax_11 = *(edi_1 + 0x14);

        if (!eax_11)
        {
            sub_48ef70(a2, 4, 1f);
            int32_t var_70_1 = 0xffffffff;
            var_78 = *(a2 + 0x3aa8);
            return sub_4511f0(var_78, a2, var_70_1);
        }

        *(edi_1 + 0x14) = eax_11 - 1;
    }

    sub_475310(**(eax + 0x7b4), a2 + 0x38, a2 + 0x78);

    if (!*(eax_1 + 0x29))
    {
        sub_4511f0(*(a2 + 0x3aa8), a2, 0xffffffff);
        *(edi_1 + 0x18) = ecx_3 + 1;

        if (ecx_3 + 1 <= *(a2 + 0x3d50))
        {
            *(esi + 0x24) = 0;
            return sub_4525b0(a2, *(a2 + 0x3aa8) + 0x110, 0.0349065848f, 0);
        }

        return sub_450ff0(a2, esi);
    }

    int32_t eax_22 = *(esi + 0x24);

    if (eax_22)
    {
        int32_t* eax_23 = eax_22(a2, esi);

        if (!eax_23)
            return eax_23;

        *(esi + 0x24) = 0;
    }

    if (sub_451270(*(a2 + 0x3aa8), 0) >= 4)
        return sub_4511f0(*(a2 + 0x3aa8), a2, 2);

    sub_4511f0(*(a2 + 0x3aa8), a2, 0);
    void* ecx_9 = sub_451380(a2 + 0x3e88, a2);
    ecx_9 = *(*(esi + 0x28) + 0x28);
    var_78 = ecx_9;
    int32_t __saved_ebp;
    uint32_t eax_27 = sub_48b9c0(&__saved_ebp, esi, edi_1, a2, var_78);
    *(*(esi + 0x28) + 0x28) = 0;
    *(esi + 0x24) = sub_48d8b0;
    return eax_27;
}
