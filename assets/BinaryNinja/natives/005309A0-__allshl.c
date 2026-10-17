// IGI native provenance: __allshl - 0x005309A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005309A0-__allshl.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "__allshl.h"

int32_t __allshl(int32_t pThis, int32_t param, char flags) {
    if (flags >= 0x40)
        return 0;

    if (flags >= 0x20)
        return 0;

    return pThis << (flags & 0x1f);
}
