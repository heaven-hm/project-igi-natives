// Original IGI.EXE function: Rigid_DyncubeObjRead (VA 0x004C48E0; static CFG gate PASS, CFG score 1.000).
#include "Rigid_DyncubeObjRead.h"
char* Rigid_DyncubeObjRead(char* context)

// Sig: void Rigid_DyncubeObjRead(uint32_t *cfg_file)
// Note: Read rigid dynCube config file , Params: config file of rigid dynCube.
{
    char* result = Camera_UpdateViewCone_6(context, "vssver");

    if (result)
        return result;

    int32_t* data_val = Qvm_Load(context);

    if (data_val)
    {
        Qvm_Execute(data_val);
        return Qvm_Cleanup(data_val);
    }

    char* item_c_3 = context;
    Error_Show("RigidDynCubeObj_ParseConfigFile(): Couldn't load script: %s");

    while (true)
        /* nop */
}
