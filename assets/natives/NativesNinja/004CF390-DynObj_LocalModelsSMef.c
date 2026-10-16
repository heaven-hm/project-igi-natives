#include "004CF390-DynObj_LocalModelsSMef.h"
/* 0x004cf390 DynObj_LocalModelsSMef full linked: callers=1 callees=35 */
int32_t* sub_4cf390(int32_t a1)

{
    int32_t* result = Mem_Alloc(0x18, 4);
    int32_t var_20 = a1;
    int32_t* ebx = nullptr;
    result[1] = 0;
    *result = 0;
    result[4] = 0;
    result[5] = 0;
    int32_t eax;
    void* ecx;
    int32_t edx;
    eax = Game_DataSymbolLoad(0xa4ec6c, "LOCAL:models/%s.mef");
    int32_t var_30 = 0xa4ec6c;
    int32_t* eax_1 = Resource_Load(eax, edx, ecx, nullptr);
    result[2] = eax_1;
    float* eax_4 = sub_4b74d0(sub_4b7590(sub_4b7490(eax_1), 0x4d455348), eax_1);
    result[3] = eax_4;

    if (*eax_4 == 0x3dcccccd)
    {
        void* eax_5 = result[2];
        *(result[3] + 0x8c) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_5), 0x41545441), eax_5);
        void* eax_9 = result[2];
        *(result[3] + 0x88) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_9), 0x4d565458), eax_9);
        void* eax_13 = result[2];
        *(result[3] + 0x98) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_13), 0x504f5254), eax_13);
        void* eax_17 = result[2];
        *(result[3] + 0x90) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_17), 0x50544643), eax_17);
        void* eax_21 = result[2];
        *(result[3] + 0x94) = sub_4b74d0(sub_4b7590(sub_4b7490(eax_21), 0x50545658), eax_21);

        if (sub_4b7590(sub_4b7490(result[2]), 0x4e415854))
        {
            int32_t* eax_29 = sub_4b7590(sub_4b7490(result[2]), 0x4e415854);
            int32_t* edi_1 = eax_29;
            int32_t i_2 = 1;
            int32_t* eax_30;

            for (int32_t* i = sub_4b7470(eax_29); i; i = sub_4b7470(eax_30))
            {
                eax_30 = sub_4b7590(i, 0x4e415854);

                if (!eax_30)
                    break;

                i_2 += 1;
            }

            result[5] = Mem_Alloc(i_2 * 0x14, 4);
            result[4] = i_2;

            if (i_2)
            {
                int32_t i_1;

                do
                {
                    int32_t* eax_32 = sub_4b74d0(edi_1, result[2]);
                    *(ebx + result[5] + 0x10) = &eax_32[2];
                    *(ebx + result[5] + 8) = *eax_32;
                    *(ebx + result[5]) = eax_32[1];
                    *(ebx + result[5] + 4) = 0;
                    edi_1 = sub_4b7470(edi_1);

                    if (edi_1)
                        edi_1 = sub_4b7590(edi_1, 0x4e415854);

                    ebx = &ebx[5];
                    i_1 = i_2;
                    i_2 -= 1;
                } while (i_1 != 1);
            }
        }

        int32_t var_8 = result[3];
        int32_t var_4 = result[2];

        if (*((sub_4cea80() << 2) + &g_a94e84))
            (*((sub_4cea80() << 2) + &g_a94e84))(&var_8);

        return result;
    }

    int32_t __saved_ebp_1 = 0x3fb99999;
    int32_t var_1c_1 = 0xa0000000;
    int32_t var_28 = a1;
    int32_t var_2c = a1;
    Error_Show("Mesh "%s" and source code are incompatible. (Mesh "%s" is version %0.2f, source code "
    "is version %0.2f.)");

    while (true)
        /* nop */
}
