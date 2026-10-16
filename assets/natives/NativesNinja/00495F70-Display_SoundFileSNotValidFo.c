#include "00495F70-Display_SoundFileSNotValidFo.h"
/* 0x00495f70 Display_SoundFileSNotValidFo full linked: callers=2 callees=31 */
int32_t sub_495f70(int32_t* a1)

{
    char result = g_6840e9;

    if (!result)
        return result;

    int32_t* var_88_1 = a1;
    void var_68;
    void* ecx;
    int32_t edx;
    int32_t* eax_1 = Resource_Load(&var_68, edx, ecx, &var_68);

    if (*eax_1 != 0x46534c49)
    {
        Warning_Show("SOUND - File %s not valid format!");
        return Resource_Unload(a1);
    }

    void var_44;
    sub_497390(&var_44, a1);
    uint32_t eax_4 = sub_497450(&var_44);
    int32_t eax_5 = sub_497410(&var_44);

    if (sub_496450(eax_4, eax_5))
    {
        int32_t* var_84_3 = a1;
        Warning_Show("SOUND - File %s already loaded!");
        return Resource_Unload(a1);
    }

    void** ebp_1 = Mem_Alloc(0x30, 4);
    __builtin_memset(ebp_1, 0, 0x30);
    memcpy(&ebp_1[4], eax_1, 0x14);

    switch (ebp_1[5])
    {
        case 0:
        case 2:
        {
            int32_t* edi_4 = a1;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond:1_1 = 0 != *edi_4;
                edi_4 += 1;
                i -= 1;

                if (!cond:1_1)
                    break;
            }

            void* eax_10 = Mem_Alloc(~i, 4);
            ebp_1[0xa] = eax_10;

            if (!eax_10)
            {
                sub_4b0d10(ebp_1);
                ebp_1 = nullptr;
                Resource_Unload(a1);
            }

            int32_t* edi_5 = a1;
            int32_t i_1 = 0xffffffff;

            while (i_1)
            {
                bool cond:2_1 = 0 != *edi_5;
                edi_5 += 1;
                i_1 -= 1;

                if (!cond:2_1)
                    break;
            }

            int32_t ecx_2 = ~i_1;
            int32_t esi_3;
            int32_t edi_8;
            edi_8 = memcpy(ebp_1[0xa], edi_5 - ecx_2, ecx_2 & 0xfffffffc);
            memcpy(edi_8, esi_3, ecx_2 & 3);
            break;
        }
        case 1:
        {
            ebp_1[0xb] = &eax_1[5];
            break;
        }
        case 3:
        {
            int32_t esi_4 = ebp_1[8];
            void* eax_12 = Mem_Alloc((ebp_1[6] * *(ebp_1 + 0x16) * esi_4) >> 3, 4);
            ebp_1[0xb] = eax_12;

            if (!eax_12)
            {
                sub_4b0d10(ebp_1);
                ebp_1 = nullptr;
                Resource_Unload(a1);
            }

            void var_64;
            sub_496420(&var_64, ebp_1[6]);
            sub_496280(&eax_1[5], ebp_1[0xb], esi_4, &var_64);
            break;
        }
    }

    if (ebp_1[0xb])
    {
        int16_t var_48 = 0x12;
        int16_t var_58 = 1;
        int16_t var_56_1 = ebp_1[6];
        int32_t ecx_12 = ebp_1[7];
        int32_t var_54_1 = ecx_12;
        int16_t var_4a_1 = *(ebp_1 + 0x16);
        int32_t eax_19;
        int32_t edx_5;
        edx_5 = HIGHD(ebp_1[6] * *(ebp_1 + 0x16));
        eax_19 = LOWD(ebp_1[6] * *(ebp_1 + 0x16));
        uint32_t edx_8 = (eax_19 + (edx_5 & 7)) >> 3;
        int32_t var_50_1 = edx_8 * ecx_12;
        int32_t var_24;
        __builtin_memset(&var_24, 0, 0x24);
        var_24 = 0x24;
        int32_t var_20_1 = 0x100e8;
        int32_t* eax_24 = g_67a498;
        int16_t* var_14_1 = &var_58;
        int32_t var_1c_1 = ebp_1[8] * edx_8;

        if ((*(*eax_24 + 0xc))(eax_24, &var_24, &ebp_1[9], 0))
        {
            sub_4b0d10(ebp_1);
            return Resource_Unload(a1);
        }

        if (!sub_4964a0(nullptr, ebp_1, 0))
        {
            int32_t* esi_6 = ebp_1[9];
            (*(*esi_6 + 8))(esi_6);
            sub_4b0d10(ebp_1);
            return Resource_Unload(a1);
        }

        if (ebp_1[5] == 3)
        {
            sub_4b0d10(ebp_1[0xb]);
            ebp_1[0xb] = 0;
        }

        ebp_1[0xb] = 0;
    }

    sub_496250(0x5ca1b8, eax_4, eax_5, ebp_1);
    return Resource_Unload(a1);
}
