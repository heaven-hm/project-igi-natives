// IGI native provenance: Physics_InterpolateWaypoint_11 - 0x0050A5D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050A5D0-Physics_InterpolateWaypoint_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_InterpolateWaypoint_11.h"
int32_t Physics_InterpolateWaypoint_11(int32_t* context , PSTR param_2)

{
    *context = 0;
    context[1] = 0;
    HANDLE data_val = CreateFileA(param_2, 0, FILE_SHARE_NONE, nullptr, OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL, nullptr);

    if (data_val == 0xffffffff)
        return 0xffffffff;

    GetFileTime(data_val, nullptr, nullptr, context);
    CloseHandle(data_val);
    return 0;
}
