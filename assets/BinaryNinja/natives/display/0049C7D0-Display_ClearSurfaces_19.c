// IGI native provenance: Display_ClearSurfaces_19 - 0x0049C7D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049C7D0-Display_ClearSurfaces_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_ClearSurfaces_19.h"
void Display_ClearSurfaces_19()

{
    void* dest_val = nullptr;

    for (int32_t* i = &g_721564; i < 0x72445c; )
    {
        if (*i)
            Display_MeshFormatNotSupport(dest_val);

        i = &i[0x3ea];
        dest_val += 1;
    }
}
