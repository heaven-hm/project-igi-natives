#include "004F1E30-Script_Enumint32.h"
/* 0x004f1e30 Script_Enumint32 full linked: callers=1 callees=10 */
int32_t sub_4f1e30()

{
    g_54e160 = sub_4f19c0("EnumInt32", sub_4f0fa0());
    g_54e150 = sub_4f19c0("EnumReal32", sub_4f0f50());
    g_54e154 = sub_4f19c0("EnumString16", sub_4f0fd0());
    g_54e158 = sub_4f19c0("EnumString32", sub_4f0fe0());
    int32_t result = sub_4f19c0("EnumString256", sub_4f0ff0());
    g_54e15c = result;
    return result;
}
