// Original IGI.EXE function: Rigid_DyncubeObjRead (VA 0x004C48E0; static CFG gate PASS, CFG score 1.000).
#include "Rigid_DyncubeObjRead.h"
char* Rigid_DyncubeObjRead(char* a1)

// Sig: void Rigid_DyncubeObjRead(uint32_t *cfg_file)
// Note: Read rigid dynCube config file , Params: config file of rigid dynCube.
{
    char* result = Camera_UpdateViewCone_6(a1, "vssver");

    if (result)
        return result;

    int32_t* valA = Qvm_Load(a1);

    if (valA)
    {
        Qvm_Execute(valA);
        return Qvm_Cleanup(valA);
    }

    char* v_c_3 = a1;
    Error_Show("RigidDynCubeObj_ParseConfigFile(): Couldn't load script: %s");

    while (true)
        /* nop */
}
