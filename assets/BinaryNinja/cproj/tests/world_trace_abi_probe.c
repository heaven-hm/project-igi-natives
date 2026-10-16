#include "gi_platform.h"
#include "gi_stubs.h"

#include <stdint.h>
#include <string.h>

typedef void (*WorldTraceBatchFunction)(int world_context,
                                        int *hit_records,
                                        double *ray_start_positions,
                                        double *ray_end_positions,
                                        int ray_count,
                                        char trace_flags,
                                        double *trace_auxiliary,
                                        int collision_mask,
                                        int trace_mode);

static WorldTraceBatchFunction world_trace_batch = World_TraceBatch;

int main(void)
{
    int hit_records[0x150 / sizeof(int)];
    unsigned char original_hit_records[sizeof(hit_records)];
    double ray_start_positions[9] = {0.0};
    double ray_end_positions[9] = {0.0};
    double trace_auxiliary[4] = {0.0};

    memset(hit_records, 0xa5, sizeof(hit_records));
    memcpy(original_hit_records, hit_records, sizeof(hit_records));

    world_trace_batch(0,
                      hit_records,
                      ray_start_positions,
                      ray_end_positions,
                      3,
                      0,
                      trace_auxiliary,
                      -1,
                      1);

    return memcmp(hit_records, original_hit_records, sizeof(hit_records)) == 0 ? 0 : 1;
}
