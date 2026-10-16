#include "0045B2F0-AI_CheckSector_13.h"
/* 0x0045b2f0 AI_CheckSector_13 full linked: callers=0 callees=10 */
struct status_msg* sub_45b2f0(void* a1, float a2)

{
    float edi = a2;
    void* ebx = *(a1 + 8);
    float ebp = *(edi + 0x800);

    if (!(ebx & 4))
    {
        void* ecx_1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t eax_1 = *(ecx_1 + 0x74);
        *(a1 + 0x14) = eax_1;
        return eax_1(a1, edi);
    }

    if (ebx & 0x10000)
    {
        void* eax_3 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1e;
        int32_t eax_4 = *(eax_3 + 0x78);
        *(a1 + 0x14) = eax_4;
        return eax_4(a1, edi);
    }

    if (ebx & 0x20000)
    {
        void* edx_2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x20;
        int32_t eax_6 = *(edx_2 + 0x80);
        *(a1 + 0x14) = eax_6;
        return eax_6(a1, edi);
    }

    struct status_msg* result = sub_4528f0(ebp);

    if (result == 1 && *(edi + 0x538) == 0xb)
    {
        result = sub_4d64c0(edi + 0x68, 0);

        if (*(edi + 0x53c) == result)
        {
            result = *(edi + 0xd18);

            if (!result)
            {
                a2 = sub_4b4770(Level_SetMission_5()) * *(ebp + 0x3d9c) + *(ebp + 0x3d98);
                long double x87_r7_5 = sub_4b4770(Level_SetMission_5()) * *(ebp + 0x3da4);
                void* eax_11 = *(edi + 0x70);
                int32_t var_54_1 = x87_r7_5 * 30f + *(ebp + 0x3da0);
                double var_40 = *(eax_11 + 0x858) + *(edi + 0x20);
                double var_38_1 = *(eax_11 + 0x85c) + *(edi + 0x28);
                double var_30_1 = *(eax_11 + 0x860) + *(edi + 0x30);
                void var_4c;
                void var_28;
                long double x87_r0;
                sub_452930(x87_r0, &var_28, &var_4c, ebp, &var_40, a2);
                int32_t* eax_12 = HumanPlayer_CheckCollision_10(*(ebp + 0x3e04));
                result = Throwable_Create(sub_4f0ee0(), edi, &var_40, &var_28, &var_4c, eax_12,
                    var_54_1);
                *(edi + 0xd18) = 1;
            }
        }
    }

    if (!(ebx & 1))
        return result;

    if (!(ebx & 0x2000000))
    {
        int32_t* eax_17 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0;
        int32_t eax_18 = *eax_17;
        *(a1 + 0x14) = eax_18;
        return eax_18(a1, edi);
    }

    void* ecx_5 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0xa;
    int32_t eax_15 = *(ecx_5 + 0x28);
    *(a1 + 0x14) = eax_15;
    return eax_15(a1, edi);
}
