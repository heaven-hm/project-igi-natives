#include "KnifeStab_Setup.h"

int32_t KnifeStab_Setup(void* pThis)

{
    return QTask_FindType(*(pThis + 0xe8));
}
