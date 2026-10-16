#pragma once
#include <stdint.h>
/* 00461A70 Human_WallSweep | gate PASS | openigi True */
void Human_WallSweep(void *human_object,
                     const double starting_position[3],
                     double destination_position[3],
                     float movement_delta[3],
                     uint32_t *movement_flags);
