#include "0047A8E0-Gun_Cleanup_6.h"
/* 0x0047a8e0 Gun_Cleanup_6 full linked: callers=0 callees=2 */
int32_t sub_47a8e0(void* a1, char* a2)

{
    int32_t result = *(a2 + 8);

    if (result != a1)
    {
        int32_t ecx_1 = *(a1 + 0x14);

        if (result != ecx_1)
        {
            result = *(a2 + 0xc);

            if (result != a1 && result != ecx_1)
            {
                if (!ecx_1)
                {
                    *a2 = 1;
                    return result;
                }

                int16_t eax = MagicObj_GetTypeId();
                ecx_1 = *(*(a1 + 0x14) + 0x1c);
                result = TaskType_IsDerivedFrom(ecx_1, eax);

                if (!result)
                {
                    *a2 = 1;
                    return result;
                }

                result = *(a2 + 8);

                if (result != *(*(a1 + 0x14) + 0x130))
                {
                    *a2 = 1;
                    return result;
                }
            }
        }
    }

    *a2 = 0;
    return result;
}
