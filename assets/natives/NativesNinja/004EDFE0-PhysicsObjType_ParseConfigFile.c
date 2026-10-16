#include "004EDFE0-PhysicsObjType_ParseConfigFile.h"
/* 0x004edfe0 PhysicsObjType_ParseConfigFile full linked: callers=1 callees=5 */
char* PhysicsObjType_ParseConfigFile(char* a1)

// Sig: void PhysicsObjType_ParseConfigFile(char* cfg_file)
// Note: Name from igi.exe error string inside function:
// "PhysicsObjType_ParseConfigFile(): Couldn't load script" @0x54DC7C. Parses a
// physicsobj type config.
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
    Error_Show("PhysicsObjType_ParseConfigFile(): Couldn't load script: %s");

    while (true)
        /* nop */
}
