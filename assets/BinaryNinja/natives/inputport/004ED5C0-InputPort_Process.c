// IGI native provenance: InputPort_Process - 0x004ED5C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ED5C0-InputPort_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "InputPort_Process.h"
struct status_msg* InputPort_Process(void* context)

{
    int32_t kind;
    kind = g_a5efa0;
    return QTask_HandleInput(context, kind, 0);
}
