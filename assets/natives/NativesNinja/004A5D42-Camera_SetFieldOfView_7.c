#include "004A5D42-Camera_SetFieldOfView_7.h"
/* 0x004a5d42 Camera_SetFieldOfView_7 full linked: callers=4 callees=1 */
void* sub_4a5d42(void* a1, int32_t a2)

{
    void* var_10 = a1;
    int32_t var_14 = 0xfffffffe;
    int32_t (* var_18)(int32_t a1, int32_t a2, int32_t* a3 @ 0x10) = sub_4a5d20;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;

    while (true)
    {
        int32_t ebx_1 = *(a1 + 8);
        int32_t esi_1 = *(a1 + 0xc);

        if (esi_1 == 0xffffffff || esi_1 == a2)
        {
            fsbase->NtTib.ExceptionList = ExceptionList;
            return a1;
        }

        int32_t esi_2 = esi_1 * 3;
        int32_t ecx_1 = *(ebx_1 + (esi_2 << 2));
        int32_t var_14_1 = ecx_1;
        *(a1 + 0xc) = ecx_1;

        if (!*(ebx_1 + (esi_2 << 2) + 4))
        {
            int32_t var_20_1 = 0x101;
            void* ebp;
            sub_4a5dd6(*(ebx_1 + (esi_2 << 2) + 8), ebp);
            (*(ebx_1 + (esi_2 << 2) + 8))();
        }
    }
}
