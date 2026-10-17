// IGI native provenance: QTask_DeleteTask - 0x004014B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004014B0-QTask_DeleteTask.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_DeleteTask.h"
int32_t QTask_DeleteTask()

{
    int32_t dest_val = 0;
    int16_t result;

    for (int16_t* i = &g_af5f08; i < 0xafa708; )
    {
        result = *(i - 3);

        if (result)
        {
            result = QTask_ChangeParent(dest_val);
            *i = result;
        }

        i = &i[0x18];
        dest_val += 1;
    }

    return result;
}
