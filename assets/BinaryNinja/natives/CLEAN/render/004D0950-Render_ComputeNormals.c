// IGI native provenance: Render_ComputeNormals - 0x004D0950 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D0950-Render_ComputeNormals.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ComputeNormals.h"
long double Render_ComputeNormals(int32_t* context)

{
    if (context)
    {
        void* data_val = *context;

        if (data_val)
            return *(*(*(data_val + 0xc) + 0xc) + 0x78);
    }

    return 1.0f;
}
