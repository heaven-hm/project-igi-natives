#pragma once
#include <stdint.h>
typedef struct collision_set {
    int c67c, c680, c684, c688, c68c, c690, c694, c698, c69c, c6a0, c6a4, c6a8, c6ac;
} collision_set_t;
typedef struct human_player {
    uint8_t pad0[0x4c4];
    uint8_t stance_data[0x24];
    int stance;            /* +0x4e8 */
    uint8_t pad4ec[4];
    uint8_t pad2[0xd58-0x4f0];
    float collision_mode;  /* +0xd58 */
    int collision_flag;    /* +0xd5c */
} human_player_t;
void *HumanPlayer_CheckCollision_9(human_player_t *player, float mode);
