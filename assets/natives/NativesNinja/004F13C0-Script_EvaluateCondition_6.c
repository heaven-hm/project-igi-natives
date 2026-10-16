#include "004F13C0-Script_EvaluateCondition_6.h"
/* 0x004f13c0 Script_EvaluateCondition_6 full linked: callers=1 callees=1 */
int32_t sub_4f13c0(void* a1, void* a2)

{
    int32_t result = 0;
    int32_t ecx = *(a1 + 0x4c);

    if (ecx > 0)
    {
        int32_t* edx_1 = a1 + 0xc;

        do
        {
            if (**edx_1 == a2)
                return result;

            result += 1;
            edx_1 = &edx_1[1];
        } while (result < ecx);
    }

    *(a1 + (*(a1 + 0x4c) << 2) + 0xc) = QTask_LinkEventHandler_2(a2);
    result = *(a1 + 0x4c) + 1;
    *(a1 + 0x4c) = result;
    return result;
}
