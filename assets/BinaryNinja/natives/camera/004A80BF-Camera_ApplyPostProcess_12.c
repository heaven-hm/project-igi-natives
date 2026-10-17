// Original IGI.EXE function: Camera_ApplyPostProcess_12 (VA 0x004A80BF; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_12.h"
void Camera_ApplyPostProcess_12(uint32_t context, int32_t* param_2, char param_3, int32_t param_4, double* param_5, double* param_6) {
    *(context + 4) = 0;
    *(context + 8) = 0;
    *(context + 0xc) = 0;
    char entity_3 = param_3;

    if (entity_3 & 0x10)
    {
        uint32_t data_1 = context;
        param_3 = 0xc000008f;
        *(data_1 + 4) |= 1;
    }

    if (entity_3 & 2)
    {
        uint32_t data_2 = context;
        param_3 = 0xc0000093;
        *(data_2 + 4) |= 2;
    }

    if (1 & entity_3)
    {
        uint32_t data_3 = context;
        param_3 = 0xc0000091;
        *(data_3 + 4) |= 4;
    }

    if (entity_3 & 4)
    {
        uint32_t data_4 = context;
        param_3 = 0xc000008e;
        *(data_4 + 4) |= 8;
    }

    if (entity_3 & 8)
    {
        uint32_t data_5 = context;
        param_3 = 0xc0000090;
        *(data_5 + 4) |= 0x10;
    }

    uint32_t data_6 = context;
    *(data_6 + 8) = (~*param_2 & 1) << 4 | (*(data_6 + 8) & 0xffffffef);
    uint32_t data_7 = context;
    *(data_7 + 8) = (~*param_2 & 4) << 1 | (*(data_7 + 8) & 0xfffffff7);
    uint32_t data_8 = context;
    *(data_8 + 8) = (~*param_2 >> 1 & 4) | (*(data_8 + 8) & 0xfffffffb);
    uint32_t data_9 = context;
    *(data_9 + 8) = (~*param_2 >> 3 & 2) | (*(data_9 + 8) & 0xfffffffd);
    uint32_t data_10 = context;
    *(data_10 + 8) = (~*param_2 >> 5 & 1) | (*(data_10 + 8) & 0xfffffffe);
    char data_11 = Camera_UpdateViewCone_13();

    if (1 & data_11)
    {
        uint32_t entity_29 = context;
        *(entity_29 + 0xc) |= 0x10;
    }

    if (data_11 & 4)
    {
        uint32_t entity_30 = context;
        *(entity_30 + 0xc) |= 8;
    }

    if (data_11 & 8)
    {
        uint32_t entity_31 = context;
        *(entity_31 + 0xc) |= 4;
    }

    if (data_11 & 0x10)
    {
        uint32_t entity_32 = context;
        *(entity_32 + 0xc) |= 2;
    }

    if (data_11 & 0x20)
    {
        uint32_t data_12 = context;
        *(data_12 + 0xc) |= 1;
    }

    int32_t data_14 = *param_2 & 0xc00;

    if (!data_14)
    {
        uint32_t data_17 = context;
        *data_17 &= 0xfffffffc;
    }
    else
    {
        uint32_t data_16;

        if (data_14 == 0x400)
        {
            data_16 = context;
            *data_16 = (*data_16 & 0xfffffffd) | 1;
        }
        else if (data_14 == 0x800)
        {
            data_16 = context;
            *data_16 = (*data_16 & 0xfffffffe) | 2;
        }
        else if (data_14 == 0xc00)
        {
            uint32_t data_15 = context;
            *data_15 |= 3;
        }
    }

    int32_t data_19 = *param_2 & 0x300;
    uint32_t data_21;

    if (!data_19)
    {
        data_21 = context;
        *data_21 = (*data_21 & 0xffffffeb) | 8;
    }
    else if (data_19 == 0x200)
    {
        data_21 = context;
        *data_21 = (*data_21 & 0xffffffe7) | 4;
    }
    else if (data_19 == 0x300)
    {
        uint32_t data_20 = context;
        *data_20 &= 0xffffffe3;
    }
    uint32_t data_22 = context;
    *data_22 = (param_4 & 0xfff) << 5 | (*data_22 & 0xfffe001f);
    uint32_t data_23 = context;
    *(data_23 + 0x20) |= 1;
    uint32_t data_24 = context;
    *(data_24 + 0x20) = (*(data_24 + 0x20) & 0xffffffe3) | 2;
    *(context + 0x10) = *param_5;
    uint32_t data_27 = context;
    *(data_27 + 0x50) |= 1;
    uint32_t data_28 = context;
    *(data_28 + 0x50) = (*(data_28 + 0x50) & 0xffffffe3) | 2;
    *(context + 0x40) = *param_6;
    Camera_ResetMatrix_13();
    RaiseException(param_3, 0, 1, &context);
    /* no return */
}
