// IGI native provenance: TEXT_BLACK - 0x004213E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004213E0-TEXT_BLACK.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "TEXT_BLACK.h"
uint32_t TEXT_BLACK()

{
    DynObj_CreateMagicObject_4(g_57bbf4);
    Sys_CloseFileStream_23("TEXT_BLACK");
    Sys_CloseFileStream_23("TEXT_WHITE");
    Sys_CloseFileStream_23("TEXT_GREEN");
    Sys_CloseFileStream_23("TEXT_ORANGE");
    uint32_t result = QTask_CloseEvent_2(g_53b770);
    g_53b770 = 0x181;
    return result;
}
