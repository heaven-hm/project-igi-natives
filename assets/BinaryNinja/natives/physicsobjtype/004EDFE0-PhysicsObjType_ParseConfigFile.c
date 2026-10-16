#include "PhysicsObjType_ParseConfigFile.h"
char* PhysicsObjType_ParseConfigFile(char* a1)

// Sig: void PhysicsObjType_ParseConfigFile(char* cfg_file)
// Note: Name from igi.exe error string inside function:
// "PhysicsObjType_ParseConfigFile(): Couldn't load script" @0x54DC7C. Parses a
// physicsobj type config.
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
    Error_Show("PhysicsObjType_ParseConfigFile(): Couldn't load script: %s");

    while (true)
        /* nop */
}
