#include "0047A960-Gun_Cleanup_7.h"
/* 0x0047a960 Gun_Cleanup_7 full linked: callers=0 callees=4 */
int32_t* sub_47a960(void* a1, int32_t a2)

{
    int32_t* result = *(a1 + 0x194);

    if (result)
    {
        result = *result;

        if (result)
        {
            QTask_FindType(result);
            result = Qtask_UpdateList(*(a1 + 0x194));
            *(a1 + 0x194) = 0;
        }
    }

    result = *(a1 + 0xf0);

    if (result)
    {
        result = (*(((sub_4cea20() * 0x180 + sub_4c48c0()) << 2) + &g_a96ae0))(a1, a2);
        *(a1 + 0xf0) = 0;
    }

    return result;
}
