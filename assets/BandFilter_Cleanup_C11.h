#pragma once
#include <stdint.h>
/* BandFilter_Cleanup @ 0x4a25e0 - frees filter entry + clears 36B state.
   CFG: BN blocks=1 calls=2 / r2 nbbs=1 outdegree=2 => score 1.00 PASS(>=0.85) */
typedef struct band_filter {
    uint8_t head[0x2c];
    uint8_t state[0x24];
    uint8_t mid[0x20];
    void *entry;
} band_filter_t;
void BandFilter_Cleanup(band_filter_t *filter);
