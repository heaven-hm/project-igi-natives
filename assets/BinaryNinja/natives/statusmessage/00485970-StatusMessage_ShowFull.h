#pragma once
#include <stdint.h>
/* 00485970 StatusMessage_ShowFull | gate FAIL | openigi True */
struct status_msg* StatusMessage_ShowFull(void * ctx, char * message, char * sprite, char * style);
