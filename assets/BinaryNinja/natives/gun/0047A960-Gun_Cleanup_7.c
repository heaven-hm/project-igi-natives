#include "Gun_Cleanup_7.h"
int32_t* Gun_Cleanup_7(void* a1, int32_t a2)

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
        result = (*(((DynObj_LinkDynamicCube_12() * 0x180 + DynObj_LookupHashItem_5()) << 2) + &g_a96ae0))(a1, a2);
        *(a1 + 0xf0) = 0;
    }

    return result;
}
