// IGI native provenance: Config_Language - 0x00405830 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00405830-Config_Language.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_Language.h"
int32_t Config_Language()

{
    char result = g_537b90;

    if (result)
        result = Sys_OpenFileStream_4("LANGUAGE:");

    return result;
}
