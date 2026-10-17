// IGI native provenance: VehiclePhysics_InvokeGetArg_42D9F0 - 0x0042D9F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042D9F0-VehiclePhysics_InvokeGetArg_42D9F0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_InvokeGetArg_42D9F0.h"

char* VehiclePhysics_InvokeGetArg_42D9F0(long double arg1, long double arg2, int32_t* arg3)

{
    int32_t source_ptr = arg3[2];
    char* dest_ptr = *arg3;
    float base_val = arg3[1];
    *dest_ptr = Script_GetArg(base_val, source_ptr);
    dest_ptr[1] = Script_GetArg(base_val, source_ptr + 1);
    *(dest_ptr + 0xc) = Script_GetArg(base_val, source_ptr + 2);
    Profile_ValueSet(base_val, source_ptr + 3);
    *(dest_ptr + 4) = arg1 * 0.017453293005625408f;
    Profile_ValueSet(base_val, source_ptr + 4);
    *(dest_ptr + 8) = arg2;
    return Sys_ResolveSymbol_23(base_val, source_ptr + 5, &dest_ptr[0x10], 0x10);
}
