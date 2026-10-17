// Original IGI.EXE function: Menu_UpdateLanguage_5 (VA 0x004190C0; static CFG gate PASS, CFG score 1.000).
#include "Menu_UpdateLanguage_5.h"
void* Menu_UpdateLanguage_5(void* context)

{
    *(context + 0x26c2) = 1;
    return context;
}
