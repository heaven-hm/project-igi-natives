// Original IGI.EXE function: Menu_UpdateLanguage_4 (VA 0x00418FD0; static CFG gate PASS, CFG score 1.000).
#include "Menu_UpdateLanguage_4.h"
void* Menu_UpdateLanguage_4(void* context)

{
    *(context + 0x28) = 2;
    return context;
}
