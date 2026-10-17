// Original IGI.EXE function: PhysicsObjType_ParseConfigFile (VA 0x004EDFE0; static CFG gate PASS, CFG score 1.000).
#include "PhysicsObjType_ParseConfigFile.h"
char* PhysicsObjType_ParseConfigFile(char* context)

// Sig: void PhysicsObjType_ParseConfigFile(char* cfg_file)
// Note: Name from igi.exe error string inside function:
// "PhysicsObjType_ParseConfigFile(): Couldn't load script" . Parses a
// physicsobj type config.
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
    Error_Show("PhysicsObjType_ParseConfigFile(): Couldn't load script: %s");

    while (true)
        /* nop */
}
