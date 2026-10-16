#include "gi_platform.h"

#include <math.h>
#include <stdio.h>
#include <string.h>

enum
{
    human_object_posture_offset = 0x33d,
    human_collision_wall_flag = 0x08,
    trace_hit_buffer_size = 0x150,
    trace_hit_point_offset = 0x08,
    trace_hit_normal_offset = 0x38,
    trace_hit_present_offset = 0x58,
    trace_hit_distance_offset = 0x60
};

static unsigned int world_trace_batch_call_count = 0;
static int world_trace_batch_arguments_valid = 1;

static int Fail(const char *error_message)
{
    (void)fprintf(stderr, "Human wall sweep probe failed: %s\n", error_message);
    return 1;
}

float *FX_ExplosionSpawn_16(float *bone_position, void *human_object, int flags)
{
    (void)human_object;
    (void)flags;

    bone_position[0] = 0.0f;
    bone_position[1] = 0.0f;
    bone_position[2] = 0.0f;
    return bone_position;
}

int Level_StartMission_4(void)
{
    return 0x1234;
}

int Level_LoadObjects_4(void)
{
    return 0x01;
}

void World_TraceBatch(int world_context,
                      int *hit_records,
                      double *ray_start_positions,
                      double *ray_end_positions,
                      int ray_count,
                      char trace_flags,
                      double *trace_auxiliary,
                      int collision_mask,
                      int trace_mode)
{
    unsigned char *hit_buffer = (unsigned char *)hit_records;
    double hit_point[3] = {50.0, 0.0, 0.0};
    float hit_normal[3] = {-1.0f, 0.0f, 0.0f};
    uint32_t hit_present = 1;
    double hit_distance = 50.0;

    ++world_trace_batch_call_count;

    if (world_context != 0x1234 || ray_count != 3 || trace_flags != 0x01 ||
        collision_mask != -1 || trace_mode != 1 || trace_auxiliary == NULL ||
        ray_start_positions == NULL || ray_end_positions == NULL)
    {
        world_trace_batch_arguments_valid = 0;
        return;
    }

    if (world_trace_batch_call_count == 1)
    {
        const double expected_profile_heights[3] = {409.6, 1638.4, 7372.8};

        for (size_t profile_index = 0; profile_index < 3; ++profile_index)
        {
            size_t vector_offset = profile_index * 3;

            if (fabs(ray_start_positions[vector_offset]) > 1e-8 ||
                fabs(ray_start_positions[vector_offset + 1]) > 1e-8 ||
                fabs(ray_start_positions[vector_offset + 2] -
                     expected_profile_heights[profile_index]) > 1e-4 ||
                fabs(ray_end_positions[vector_offset] - 110.24) > 1e-4 ||
                fabs(ray_end_positions[vector_offset + 1]) > 1e-8 ||
                fabs(ray_end_positions[vector_offset + 2] -
                     expected_profile_heights[profile_index]) > 1e-4)
            {
                world_trace_batch_arguments_valid = 0;
                return;
            }
        }

        memcpy(hit_buffer + trace_hit_point_offset, hit_point, sizeof(hit_point));
        memcpy(hit_buffer + trace_hit_normal_offset, hit_normal, sizeof(hit_normal));
        memcpy(hit_buffer + trace_hit_present_offset, &hit_present, sizeof(hit_present));
        memcpy(hit_buffer + trace_hit_distance_offset, &hit_distance, sizeof(hit_distance));
    }
    else if (world_trace_batch_call_count == 2)
    {
        for (size_t byte_index = 0; byte_index < trace_hit_buffer_size; ++byte_index)
        {
            if (hit_buffer[byte_index] != 0)
            {
                world_trace_batch_arguments_valid = 0;
                break;
            }
        }
    }
    else
    {
        world_trace_batch_arguments_valid = 0;
    }
}

int main(void)
{
    unsigned char human_object[human_object_posture_offset + 1] = {0};
    double starting_position[3] = {0.0, 0.0, 0.0};
    double destination_position[3] = {100.0, 0.0, 0.0};
    float movement_delta[3] = {0.0f, 0.0f, 0.0f};
    uint32_t movement_flags = 0;

    Human_WallSweep(human_object,
                    starting_position,
                    destination_position,
                    movement_delta,
                    &movement_flags);

    if (!world_trace_batch_arguments_valid)
    {
        return Fail("the retail trace arguments or three-ray profile were changed");
    }

    if (world_trace_batch_call_count != 2)
    {
        return Fail("expected one blocking trace followed by one clear trace");
    }

    if ((movement_flags & human_collision_wall_flag) == 0)
    {
        return Fail("the blocking wall did not set the collision flag");
    }

    if (fabs(destination_position[0] - 39.76) > 1e-3 ||
        fabs(destination_position[1]) > 1e-8 ||
        fabs(destination_position[2]) > 1e-8)
    {
        return Fail("the destination does not match the wall-slide calculation");
    }

    if (fabsf(movement_delta[0] - 39.76f) > 1e-3f ||
        fabsf(movement_delta[1]) > 1e-8f ||
        fabsf(movement_delta[2]) > 1e-8f)
    {
        return Fail("the movement delta does not match the adjusted destination");
    }

    return 0;
}
