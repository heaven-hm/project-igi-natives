#pragma once
#include <stdint.h>
/* 004CDB20 World_TraceBatch | gate PASS | openigi True */
void World_TraceBatch(int world_context,
                      int* hit_records,
                      double* ray_start_positions,
                      double* ray_end_positions,
                      int ray_count,
                      char trace_flags,
                      double* trace_auxiliary,
                      int collision_mask,
                      int trace_mode);
