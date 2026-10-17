// IGI native provenance: PatrolPathCommand_Process - 0x00453540 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453540-PatrolPathCommand_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PatrolPathCommand_Process.h"
int32_t PatrolPathCommand_Process(void* context)

{
    return *(context + 0x20);
}
