#include "004C48E0-Rigid_DyncubeObjRead.h"
/* 0x004c48e0 Rigid_DyncubeObjRead full linked: callers=1 callees=5 */
char* Rigid_DyncubeObjRead(char* a1)

// Sig: void Rigid_DyncubeObjRead(uint *cfg_file)
// Note: Read rigid dynCube config file , Params: config file of rigid dynCube.
{
    char* result = sub_4a5bb0(a1, "vssver");

    if (result)
        return result;

    int32_t* eax = Qvm_Load(a1);

    if (eax)
    {
        Qvm_Execute(eax);
        return Qvm_Cleanup(eax);
    }

    char* var_c_3 = a1;
    Error_Show("RigidDynCubeObj_ParseConfigFile(): Couldn't load script: %s");

    while (true)
        /* nop */
}
