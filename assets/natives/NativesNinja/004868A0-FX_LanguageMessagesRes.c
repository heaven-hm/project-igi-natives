#include "004868A0-FX_LanguageMessagesRes.h"
/* 0x004868a0 FX_LanguageMessagesRes full linked: callers=1 callees=1 */
int32_t* sub_4868a0()

{
    char* var_8 = "LANGUAGE:messages.res";
    int32_t eax;
    void* ecx;
    int32_t edx;
    int32_t* result = Resource_Load(eax, edx, ecx, nullptr);
    g_5c8a40 = result;
    return result;
}
