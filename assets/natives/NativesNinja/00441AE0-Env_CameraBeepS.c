#include "00441AE0-Env_CameraBeepS.h"
/* 0x00441ae0 Env_CameraBeepS full linked: callers=1 callees=11 */
struct status_msg* sub_441ae0(void* a1)

{
    void* edi = nullptr;
    int32_t* eax = *(a1 + 0x25c4);
    void* ebp = *(a1 + 0x25d0);

    if (eax)
    {
        edi = *eax;

        if (!edi)
        {
            Qtask_UpdateList(eax);
            *(a1 + 0x25c4) = edi;
        }
    }

    if (!*(ebp + 0x16c))
    {
        if (edi)
        {
            sub_4e6c00(edi);
            Qtask_UpdateList(*(a1 + 0x25c4));
            *(a1 + 0x25c4) = 0;
        }
    }
    else if (!edi)
    {
        struct status_msg* eax_2 = sub_4e6b00(sub_4f0ee0(), "camera_beep_s");

        if (eax_2)
        {
            sub_4e6c30(eax_2, a1 + 0x20);
            *(a1 + 0x25c4) = QTask_LinkEventHandler_2(eax_2);
        }
    }

    struct status_msg* result = *(a1 + 0x25c8);

    if (!*(ebp + 0x169))
    {
        if (result)
        {
            result = sub_4e6c00(result);
            *(a1 + 0x25c8) = 0;
        }
    }
    else if (!result)
    {
        char* var_10_4;

        if (!*(ebp + 0x164))
            var_10_4 = "camera_beep_l";
        else
            var_10_4 = "camera_beep_al";

        result = sub_4e6b00(sub_4f0ee0(), var_10_4);
        *(a1 + 0x25c8) = result;

        if (result)
            return sub_4e6c30(result, a1 + 0x20);
    }

    return result;
}
