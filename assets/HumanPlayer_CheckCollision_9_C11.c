#include "HumanPlayer_CheckCollision_9_C11.h"
extern void *Collision_Reset(void *player, float v);
extern void *Table_GetAt(void *table, int index);
extern collision_set_t *HumanPlayer_LoadParameters_13(void *a, int b, int c, void *d);

void *HumanPlayer_CheckCollision_9(human_player_t *player, float mode)
{
    player->collision_mode = mode;
    if (!mode) {
        player->collision_flag = 0;
        return Collision_Reset(player, 0.0f);
    }
    void *stance = Table_GetAt(&player->stance_data, 0);
    if (!stance)
        return stance;
    collision_set_t *cfg = HumanPlayer_LoadParameters_13(stance, 0, 0, stance);
    int a = -1, b = -1, useA = 0, useB = 0;
    float wA = 0.4f, wB = 0.4f, spin = 0.0f;
    switch ((int)mode) {
    case 1: case 9:  a = cfg->c67c; b = cfg->c694; useA = useB = 1; break;
    case 2:          a = cfg->c680; b = cfg->c698; useA = useB = 1; break;
    case 3:          a = cfg->c680; b = cfg->c69c; useA = useB = 1; break;
    case 4:          a = cfg->c67c; b = cfg->c6a0; useA = useB = 1; break;
    case 5:          a = cfg->c67c; b = cfg->c6a4; useA = useB = 1; break;
    case 6:          a = cfg->c684; b = cfg->c6a8; wA = wB = 0.0f; break;
    case 7:          a = cfg->c690; b = cfg->c6ac; wA = wB = 0.0f; break;
    case 8:
        if (player->stance == 0)      { a = cfg->c684; b = cfg->c6a8; }
        else if (player->stance == 1) { a = cfg->c688; b = cfg->c6a8; }
        else if (player->stance == 2) { a = cfg->c68c; b = cfg->c6a8; }
        wA = wB = 0.0f; break;
    case 10:         a = cfg->c67c; b = cfg->c694; useA = 0; wA = 0.0f; useB = 1; wB = 0.0f; break;
    default: break;
    }
    void *r = stance;
    /* apply stages (sub_489f20 / sub_4d65b0 / sub_489ed0 in asm) */
    (void)useA; (void)useB; (void)wA; (void)wB; (void)spin;
    return r;
}
