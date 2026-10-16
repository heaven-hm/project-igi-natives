#include "004EE030-Physics_ObjLoad.h"
/* 0x004ee030 Physics_ObjLoad full linked: callers=2 callees=1 */
int32_t Physics_ObjLoad(void* a1)

// Sig: void Physics_ObjLoad(char *path)
// Note: Loads physics objects from path, Params: Path 'LOCAL:physicsobj'
{
    return sub_4b1420(a1, sub_4ee050, nullptr);
}
