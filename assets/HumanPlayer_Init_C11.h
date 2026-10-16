#pragma once
#include <stdint.h>
/* HumanPlayer_Init @ 0x40fe30 - Human player task-type bootstrap.
   Registers task type, subscribes ~15 QTask event handlers,
   defines HumanPlayer script options, registers UnlimitedAmmo. */
extern uint16_t g_HumanPlayerType; /* 0x5385b0 */
extern void *g_HumanPlayerCtx;     /* 0x56e210 */
extern void *g_HumanPlayerFlags;   /* 0x56e09c */
void *HumanPlayer_Init(void);
