// IGI native provenance: Camera_SetFieldOfView_7 - 0x004A5D42 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5D42-Camera_SetFieldOfView_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_7.h"
void* Camera_SetFieldOfView_7(void* context, int32_t param_2)

{
    void* item_10 = context;
    int32_t item_14 = 0xfffffffe;
    int32_t (* item_18)(int32_t context, int32_t param_2, int32_t* param_3 ) = sub_4a5d20;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;

    while (true)
    {
        int32_t context_1 = *(context + 8);
        int32_t source_1 = *(context + 0xc);

        if (source_1 == 0xffffffff || source_1 == param_2)
        {
            fsbase->NtTib.ExceptionList = ExceptionList;
            return context;
        }

        int32_t source_2 = source_1 * 3;
        int32_t entity_1 = *(context_1 + (source_2 << 2));
        int32_t item_14_1 = entity_1;
        *(context + 0xc) = entity_1;

        if (!*(context_1 + (source_2 << 2) + 4))
        {
            int32_t item_20_1 = 0x101;
            void* flagP;
            Camera_ApplyLineFilter_7(*(context_1 + (source_2 << 2) + 8), flagP);
            (*(context_1 + (source_2 << 2) + 8))();
        }
    }
}
