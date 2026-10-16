#include "004BD880-Sys_CloseFileStream_29.h"
/* 0x004bd880 Sys_CloseFileStream_29 full linked: callers=0 callees=7 */
void* sub_4bd880(int32_t* a1)

{
    char* ebx = a1;
    sub_4bd9c0(ebx);

    if (!sub_4bcd90(ebx, &a1))
        goto label_4bd99c;

    int32_t* ecx_1 = a1;
    void* result;

    if (*ecx_1 != 1)
    {
        int32_t edx_6 = *(ebx + 0x14);
        *(ebx + 0x20) = 9;
        *(ebx + 0x10) = edx_6;
    label_4bd99c:
        result = *(ebx + 0x20);

        if (!result)
        {
            int32_t eax_10 = *(ebx + 0x14);
            *(ebx + 0x20) = 0xa;
            *(ebx + 0x10) = eax_10;
            return sub_4bd9e0(ebx);
        }
    }
    else
    {
        int32_t ebp_1 = *(ebx + 0x14);
        int32_t esi_1 = *(ebx + 0x1c);
        void* eax_1 = *ebx + ebp_1;
        int32_t __saved_esi_8 = *(ebx + 0x18);
        int32_t edx_2 = *(eax_1 + 1);
        void* var_1c_1 = eax_1 + 5;
        int32_t var_24_1 = 0;
        int32_t var_28_1 = 1;
        int32_t var_2c = edx_2;
        char* var_20_1 = ebx;
        int32_t edx_3 = ecx_1[6];
        int32_t __saved_esi_7 = __saved_esi_8;
        int32_t var_18;
        int32_t eax_3 = ecx_1[4](&var_18, edx_3, &var_2c);
        result = *(ebx + 0x20);
        memcpy(&var_18, eax_3, 0x18);

        if (!result)
        {
            *(ebx + 0x2c) = 0;
            *(ebx + 0x1c) = esi_1;
            int32_t __saved_esi_6 = __saved_esi_7;
            *(ebx + 0x14) = ebp_1 + (edx_2 << 2) + 5;
            int32_t* edx_5 = a1;
            *(ebx + 0x18) = __saved_esi_6;
            int32_t eax_5 = edx_5[1];

            if (eax_5 == 3)
            {
                int32_t var_8;
                return sub_4bce40(ebx, var_8, eax_5);
            }

            if (eax_5 != 2)
                return sub_4bda00(ebx, var_18);

            int32_t __saved_esi_2 = __saved_esi_6;
            double var_10;
            return sub_4bda30(ebx, var_10);
        }
    }

    return result;
}
