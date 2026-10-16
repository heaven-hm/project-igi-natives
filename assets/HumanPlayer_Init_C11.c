#include "HumanPlayer_Init_C11.h"

/* --- engine imports (names as in Binary Ninja) --- */
extern int TaskType_Register(const char *name, int size, void *ops, int flags);
extern void QTask_RegisterEventCallback_3(int type, int kind);
extern void *Mem_Alloc8(void); /* sub_4c1800(8) */
extern void QTask_Subscribe(int type, int eventId, void *handler); /* BN: QTask_RemoveEventCallback */
extern void QTask_TriggerEvent(int type, int slot, void *fn);
extern void Game_DefineOptions(const char *name, void *fn, int a, int b);
extern void *Cheat_Register(const char *name, void *fn); /* sub_48f360 */

extern void HumanPlayer_LoadParameters_11(void);
extern void HumanPlayer_Setup(void);
extern void HumanPlayer_OnEvent(void);
extern void HumanPlayer_Action(void);
extern void HumanPlayer_Update(void);
extern void HumanPlayer_Cleanup(void);
extern void HumanPlayer_Cleanup_2(void);
extern void Human_DamageApply(void);

/* 0x40fe30: runs once at startup. Returns Cheat_Register handle. */
void *HumanPlayer_Init(void)
{
    /* 1. Create the HumanPlayer task type (0xdf0 = 3568 bytes per instance). */
    g_HumanPlayerType = TaskType_Register("HumanPlayer", 0xdf0, 0, 0);

    /* 2. Default event-callback class for this type. */
    QTask_RegisterEventCallback_3(g_HumanPlayerType, 1);

    /* 3. Tiny 8-byte player context, first u16 = type id. */
    g_HumanPlayerCtx = Mem_Alloc8();
    *(uint16_t *)g_HumanPlayerCtx = g_HumanPlayerType;

    /* 4. Subscribe handlers. (BN calls it RemoveEventCallback; it adds.) */
    QTask_Subscribe(g_HumanPlayerType, 0, HumanPlayer_LoadParameters_11); /* params load */
    QTask_TriggerEvent(g_HumanPlayerType, 1, 0x454ee0);  /* engine slot 1 */
    QTask_TriggerEvent(g_HumanPlayerType, 2, HumanPlayer_Setup); /* slot 2 = setup */
    QTask_Subscribe(g_HumanPlayerType, 0x4f1a60 /*event*/, 0x4108b0);
    QTask_Subscribe(g_HumanPlayerType, 0x4f1a70 /*event*/, 0x4108c0);
    QTask_Subscribe(g_HumanPlayerType, 0x4cea20 /*event*/, 0x410900);
    QTask_Subscribe(g_HumanPlayerType, 0x4f40d0 /*event*/, 0x410960);
    QTask_Subscribe(g_HumanPlayerType, 0x4f40e0 /*event*/, 0x4123f0);
    QTask_Subscribe(g_HumanPlayerType, 0x4f4140 /*event*/, 0x412420);
    QTask_Subscribe(g_HumanPlayerType, 0x416840 /*LoadLevel*/, Human_DamageApply);
    QTask_Subscribe(g_HumanPlayerType, 0x416860 /*InitTextures*/, HumanPlayer_Update); /* per-frame */
    QTask_Subscribe(g_HumanPlayerType, 0x460c40 /*event*/, HumanPlayer_OnEvent);
    QTask_Subscribe(g_HumanPlayerType, 0x416870 /*InitSprites*/, HumanPlayer_Action);
    QTask_Subscribe(g_HumanPlayerType, 0x47e990 /*event*/, HumanPlayer_Cleanup);
    QTask_Subscribe(g_HumanPlayerType, 0x487190 /*event*/, HumanPlayer_Cleanup_2);
    QTask_Subscribe(g_HumanPlayerType, 0x467d90 /*event*/, 0x413730);

    /* 5. Extra flags/context. */
    g_HumanPlayerFlags = 0x4f1980(/*sub_460c50*/0, 1);

    /* 6. Script options the mission files can Define*. */
    Game_DefineOptions("DefineHumanPlayerGeneral", 0x410070, 0, -1);
    Game_DefineOptions("DefineHumanPlayerWeaponCycle", 0x4101c0, 0, -1);
    Game_DefineOptions("DefineHumanPlayerWeaponCategory", 0x4102e0, 0, -1);
    Game_DefineOptions("DefineHumanPlayerAmmoLimit", 0x4103a0, 0, -1);

    /* 7. Returns cheat-table entry, not the player. */
    return Cheat_Register("UnlimitedAmmo", 0x410360);
}
