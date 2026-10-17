// IGI native provenance: SoundSys_Definegroup - 0x004E63E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E63E0-SoundSys_Definegroup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_Definegroup.h"
int32_t SoundSys_Definegroup()

{
    DynObj_CreateMagicObject_4(g_a5e60c);
    DynObj_CreateMagicObject_4(g_a5e610);
    Sys_ExecuteBytecode_2(g_a5e600);
    char data_val = g_548812;
    g_a5e600 = 0;

    if (data_val != 0xff)
        QTask_InitContext(data_val);

    data_val = g_548813;

    if (data_val != 0xff)
        QTask_InitContext(data_val);

    data_val = g_548814;

    if (data_val != 0xff)
        QTask_InitContext(data_val);

    data_val = g_548815;

    if (data_val != 0xff)
        QTask_InitContext(data_val);

    data_val = g_548816;

    if (data_val != 0xff)
        QTask_InitContext(data_val);

    data_val = g_548817;

    if (data_val != 0xff)
        QTask_InitContext(data_val);

    data_val = g_548818;

    if (data_val != 0xff)
        QTask_InitContext(data_val);

    data_val = g_54881b;

    if (data_val != 0xff)
        QTask_InitContext(data_val);

    data_val = g_548819;

    if (data_val != 0xff)
        QTask_InitContext(data_val);

    data_val = g_54881a;

    if (data_val != 0xff)
        QTask_InitContext(data_val);

    uint32_t data_1 = g_54881c;

    if (data_1 != 0xff)
        data_1 = QTask_CreateTask_2(data_1);

    data_1 = g_548808;
    QTask_CloseEvent_2(data_1);
    QTask_CloseEvent_2(g_54880e);
    QTask_CloseEvent_2(g_54880a);
    Sys_CloseFileStream_23("DefineGroup");
    Sys_CloseFileStream_23("DefineSound");
    Sys_CloseFileStream_23("DefineGraph");
    return Sys_CloseFileStream_23("DefineTriggerOnce");
}
