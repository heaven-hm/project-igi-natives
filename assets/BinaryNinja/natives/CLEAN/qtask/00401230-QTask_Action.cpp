// IGI native provenance: QTask_Action - 0x00401230 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401230-QTask_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_Action.h"
void QTask_Action()

{
    int32_t dest_val = 0;

    for (char* i = &g_af5f05; i < 0xafa705; )
    {
        if (*i)
        {
            int32_t item_10_1 = QTask_RegisterEventCallback_2(dest_val);
            Warning_Show("QTasktype "%s" not deallocated");
        }

        i = &i[0x30];
        dest_val += 1;
    }
}
