#include "gi_platform.h"
#include "004BCEC0-Sys_CloseFileStream_28.h"
int32_t Sys_CloseFileStream_28(int32_t* a1, int32_t* a2, float* a3)

{
    int32_t* valA7 = a1;
    int32_t objC1 = *(valA7[0xa] + (valA7[7] << 2));
    int32_t* v_30;

    if (objC1 == 1)
    {
        int32_t* saved_dst = nullptr;
        v_30 = nullptr;
        Sys_UnknownDataType_3(valA7, a2, v_30, saved_dst);
        *a3 = *a2;
        return 1;
    }

    if (objC1 == 2)
    {
        int32_t* __saved_edi_1 = nullptr;
        v_30 = nullptr;
        Sys_UnknownDataType_3(valA7, a3, v_30, __saved_edi_1);
        *a2 = *a3;
        return 2;
    }

    int32_t* __saved_edi_2 = &a1;
    v_30 = valA7;

    if (Sys_OpenFileStream_28(v_30, __saved_edi_2))
    {
        int32_t* valA4 = a1;
        int32_t objC3 = *valA4;

        if (!objC3 || objC3 == 2)
        {
            int32_t tmpD2 = valA4[6];
            v_30 = nullptr;
            int32_t v_18;
            int32_t valA5 = valA4[4](&v_18, tmpD2, v_30);
            int32_t result = a1[1];
            memcpy(&v_18, valA5, 0x18);

            if (result == 1)
            {
                long double x87_r7_2 = v_18;
                *a2 = v_18;
                *a3 = x87_r7_2;
                return result;
            }

            if (result == 2)
            {
                double v_10;
                *a2 = v_10;
                *a3 = v_10;
                return result;
            }
        }
    }

    return 0;
}
