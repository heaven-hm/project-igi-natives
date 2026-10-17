// IGI native provenance: AnimSpline_DefaultHandler_50BBE0 - 0x0050BBE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050BBE0-AnimSpline_DefaultHandler_50BBE0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_DefaultHandler_50BBE0.h"

int32_t AnimSpline_DefaultHandler_50BBE0()

{
    int32_t* 5ca114_1 = g_5ca114;
    g_a7cebc = 0;
    return (*(*5ca114_1 + 0x10))(5ca114_1, Physics_SimulateRigidBody_12, 0);
}
