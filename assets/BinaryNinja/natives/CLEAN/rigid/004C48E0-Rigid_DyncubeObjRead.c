// IGI native provenance: Rigid_DyncubeObjRead - 0x004C48E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C48E0-Rigid_DyncubeObjRead.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
