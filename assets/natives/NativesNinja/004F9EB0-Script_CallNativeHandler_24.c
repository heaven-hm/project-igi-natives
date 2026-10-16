#include "004F9EB0-Script_CallNativeHandler_24.h"
/* 0x004f9eb0 Script_CallNativeHandler_24 full linked: callers=1 callees=14 */
int32_t sub_4f9eb0(void* a1, char* a2, int32_t a3, int32_t* a4, int32_t a5)

{
    int32_t eax_1;
    int32_t ecx;
    int32_t edx;
    eax_1 = sub_4fa5e0(a1, sub_4f9e70(a2));
    int32_t result;
    int32_t ecx_1;
    int32_t edx_1;
    result = sub_4fa4e0(eax_1, edx, ecx, a1, a3);

    if (a3 > 0xa)
        return result;

    switch (a3)
    {
        case 0:
        {
            edx_1 = *a4;
            return sub_4fa4e0(result, edx_1, a4, a1, edx_1);
            break;
        }
        case 1:
        {
            ecx_1 = *a4;
            return sub_4fa520(a4, edx_1, ecx_1, a1, ecx_1);
            break;
        }
        case 2:
        {
            result = *a4;
            return sub_4fa560(result, a4, ecx_1, a1, result);
            break;
        }
        case 3:
        {
            edx_1 = *a4;
            return sub_4fa5a0(result, edx_1, a4, a1, edx_1);
            break;
        }
        case 4:
        {
            return sub_4fa5e0(a1, *a4);
            break;
        }
        case 5:
        {
            return sub_4fa620(a1, *a4);
            break;
        }
        case 6:
        {
            return sub_4fa660(a1, *a4);
            break;
        }
        case 7:
        {
            return sub_4fa6a0(a1, *a4, a4[1]);
            break;
        }
        case 8:
        {
            return sub_4fa6e0(a1, a4);
            break;
        }
        case 9:
        {
            return sub_4fa730(a1, a4);
            break;
        }
        case 0xa:
        {
            return sub_4fa7a0(a1, a4, a5);
            break;
        }
    }
}
