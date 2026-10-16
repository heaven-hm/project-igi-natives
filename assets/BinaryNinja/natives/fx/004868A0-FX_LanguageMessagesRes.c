#include "FX_LanguageMessagesRes.h"
int32_t* FX_LanguageMessagesRes()

{
    char* v_8 = "LANGUAGE:messages.res";
    int32_t valA;
    void* objC;
    int32_t tmpD;
    int32_t* result = Resource_Load(valA, tmpD, objC, nullptr);
    g_5c8a40 = result;
    return result;
}
