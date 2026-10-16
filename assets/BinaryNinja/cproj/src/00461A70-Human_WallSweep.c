#include "gi_platform.h"
#include "gi_stubs.h"

#include <stdarg.h>

enum
{
    HUMAN_POSTURE_OFFSET = 0x33D,
    HUMAN_COLLISION_WALL_FLAG = 0x08,
    HUMAN_REDUCED_SWEEP_FLAG = 0x04,
    HIT_BUFFER_SIZE = 0x150,
    HIT_RECORD_SIZE = 0x70,
    HIT_POINT_OFFSET = 0x08,
    HIT_NORMAL_OFFSET = 0x38,
    HIT_PRESENT_OFFSET = 0x58,
    HIT_DISTANCE_OFFSET = 0x60,
    MAXIMUM_SWEEP_ITERATIONS = 11
};

enum { WALL_SWEEP_TRACE_COUNT = 3 };

static void HumanWallSweep_Log(const char *severity, const char *format, ...)
{
    struct timespec current_time;
    struct tm utc_time;
    char timestamp[40] = "time-unavailable";
    va_list arguments;

    if (clock_gettime(CLOCK_REALTIME, &current_time) == 0 &&
        gmtime_r(&current_time.tv_sec, &utc_time) != NULL)
    {
        size_t timestamp_length;

        (void)strftime(timestamp, sizeof(timestamp), "%Y-%m-%dT%H:%M:%S", &utc_time);
        timestamp_length = strlen(timestamp);
        (void)snprintf(timestamp + timestamp_length,
                       sizeof(timestamp) - timestamp_length,
                       ".%03ldZ",
                       current_time.tv_nsec / 1000000L);
    }

    (void)fprintf(stderr, "%s [%s] [Physics/HumanWallSweep] ", timestamp, severity);
    va_start(arguments, format);
    (void)vfprintf(stderr, format, arguments);
    va_end(arguments);
    (void)fputc('\n', stderr);
}

static void HumanWallSweep_ReadHitVector(const unsigned char *hit_record,
                                         size_t offset,
                                         float vector[3])
{
    memcpy(vector, hit_record + offset, sizeof(float) * 3);
}

static void HumanWallSweep_ReadHitPoint(const unsigned char *hit_record,
                                        double point[3])
{
    memcpy(point, hit_record + HIT_POINT_OFFSET, sizeof(double) * 3);
}

static bool HumanWallSweep_ReadHitDistance(const unsigned char *hit_record,
                                           double *hit_distance)
{
    uint32_t hit_present;

    memcpy(&hit_present, hit_record + HIT_PRESENT_OFFSET, sizeof(hit_present));
    memcpy(hit_distance, hit_record + HIT_DISTANCE_OFFSET, sizeof(*hit_distance));

    return hit_present != 0 && isfinite(*hit_distance) && *hit_distance >= 0.0;
}

static bool HumanWallSweep_Normalize(float vector[3])
{
    long double length_squared = (long double)vector[0] * vector[0] +
                                 (long double)vector[1] * vector[1] +
                                 (long double)vector[2] * vector[2];

    if (length_squared <= 0.0L || !isfinite((double)length_squared))
    {
        return false;
    }

    long double inverse_length = 1.0L / sqrtl(length_squared);
    vector[0] = (float)((long double)vector[0] * inverse_length);
    vector[1] = (float)((long double)vector[1] * inverse_length);
    vector[2] = (float)((long double)vector[2] * inverse_length);
    return true;
}

static bool HumanWallSweep_FindNearestWallHit(unsigned char hit_buffer[HIT_BUFFER_SIZE],
                                              uint32_t movement_flags,
                                              size_t *nearest_record_index,
                                              float nearest_normal[3],
                                              double nearest_point[3],
                                              double *nearest_distance)
{
    size_t first_record_index = (movement_flags & HUMAN_REDUCED_SWEEP_FLAG) != 0 ? 1 : 0;
    size_t record_count = (movement_flags & HUMAN_REDUCED_SWEEP_FLAG) != 0 ? 2 : 3;
    bool found_wall_hit = false;

    *nearest_distance = INFINITY;

    for (size_t record_index = first_record_index;
         record_index < first_record_index + record_count;
         ++record_index)
    {
        size_t record_offset = record_index * HIT_RECORD_SIZE;
        unsigned char *hit_record = hit_buffer + record_offset;
        double hit_distance;
        float hit_normal[3];
        double hit_point[3];

        if (!HumanWallSweep_ReadHitDistance(hit_record, &hit_distance))
        {
            continue;
        }

        HumanWallSweep_ReadHitVector(hit_record, HIT_NORMAL_OFFSET, hit_normal);
        if (!HumanWallSweep_Normalize(hit_normal))
        {
            continue;
        }

        if (fabsf(hit_normal[2]) >= 0.1f)
        {
            continue;
        }

        hit_normal[2] = 0.0f;
        if (!HumanWallSweep_Normalize(hit_normal))
        {
            continue;
        }

        if (hit_distance < *nearest_distance)
        {
            HumanWallSweep_ReadHitPoint(hit_record, hit_point);
            memcpy(nearest_normal, hit_normal, sizeof(hit_normal));
            memcpy(nearest_point, hit_point, sizeof(hit_point));
            *nearest_distance = hit_distance;
            *nearest_record_index = record_index;
            found_wall_hit = true;
        }
    }

    return found_wall_hit;
}

static void HumanWallSweep_BuildTraceRays(const double starting_position[3],
                                          const double normalized_direction[3],
                                          double trace_distance,
                                          float bone_height,
                                          bool is_crouching,
                                          double ray_starts[WALL_SWEEP_TRACE_COUNT * 3],
                                          double ray_ends[WALL_SWEEP_TRACE_COUNT * 3])
{
    const double upper_profile_height = is_crouching ? 5324.8 : 7372.8;
    const double middle_profile_height = is_crouching ? 819.2 : 1638.4;
    const double profile_offsets[WALL_SWEEP_TRACE_COUNT] = {
        409.6 - bone_height,
        middle_profile_height - bone_height,
        upper_profile_height - bone_height
    };

    for (size_t profile_index = 0; profile_index < WALL_SWEEP_TRACE_COUNT; ++profile_index)
    {
        size_t vector_offset = profile_index * 3;

        ray_starts[vector_offset] = starting_position[0];
        ray_starts[vector_offset + 1] = starting_position[1];
        ray_starts[vector_offset + 2] = starting_position[2] + profile_offsets[profile_index];

        ray_ends[vector_offset] = starting_position[0] +
                                  normalized_direction[0] * trace_distance;
        ray_ends[vector_offset + 1] = starting_position[1] +
                                      normalized_direction[1] * trace_distance;
        ray_ends[vector_offset + 2] = starting_position[2] +
                                      profile_offsets[profile_index] +
                                      normalized_direction[2] * trace_distance;
    }

}

static void HumanWallSweep_ApplySlide(double destination_position[3],
                                      const double wall_point[3],
                                      const float wall_normal[3],
                                      uint32_t *movement_flags)
{
    double remaining_movement[3] = {
        destination_position[0] - wall_point[0],
        destination_position[1] - wall_point[1],
        destination_position[2] - wall_point[2]
    };
    double movement_into_wall = remaining_movement[0] * wall_normal[0] +
                                remaining_movement[1] * wall_normal[1] +
                                remaining_movement[2] * wall_normal[2];

    for (size_t axis_index = 0; axis_index < 3; ++axis_index)
    {
        destination_position[axis_index] = wall_point[axis_index] +
            remaining_movement[axis_index] - movement_into_wall * wall_normal[axis_index] +
            (double)wall_normal[axis_index] * 10.24;
    }

    *movement_flags |= HUMAN_COLLISION_WALL_FLAG;
}

void Human_WallSweep(void *human_object,
                     const double starting_position[3],
                     double destination_position[3],
                     float movement_delta[3],
                     uint32_t *movement_flags)
{
    float bone_position[3] = { 0.0f, 0.0f, 0.0f };
    float *bone_world_position;
    unsigned char hit_buffer[HIT_BUFFER_SIZE];
    size_t iteration_count = 0;
    bool should_continue_sweeping = false;

    if (human_object == NULL || starting_position == NULL || destination_position == NULL ||
        movement_delta == NULL || movement_flags == NULL)
    {
        HumanWallSweep_Log("ERROR", "Wall sweep received a null required argument.");
        return;
    }

    *movement_flags &= ~HUMAN_COLLISION_WALL_FLAG;
    bone_world_position = FX_ExplosionSpawn_16(bone_position, human_object, 0);
    if (bone_world_position == NULL)
    {
        for (size_t axis_index = 0; axis_index < 3; ++axis_index)
        {
            movement_delta[axis_index] = (float)(destination_position[axis_index] -
                                                  starting_position[axis_index]);
        }

        HumanWallSweep_Log("ERROR",
                           "Bone-position provider is unavailable; wall sweep was skipped.");
        return;
    }

    bone_position[0] = bone_world_position[0];
    bone_position[1] = bone_world_position[1];
    bone_position[2] = bone_world_position[2];

    do
    {
        double movement_vector[3] = {
            destination_position[0] - starting_position[0],
            destination_position[1] - starting_position[1],
            destination_position[2] - starting_position[2]
        };
        long double movement_length_squared =
            (long double)movement_vector[0] * movement_vector[0] +
            (long double)movement_vector[1] * movement_vector[1] +
            (long double)movement_vector[2] * movement_vector[2];
        double movement_length;
        double trace_distance;
        double normalized_direction[3];
        double ray_starts[WALL_SWEEP_TRACE_COUNT * 3];
        double ray_ends[WALL_SWEEP_TRACE_COUNT * 3];
        double trace_auxiliary_storage = 0.0;
        float wall_normal[3] = { 0.0f, 0.0f, 0.0f };
        double wall_point[3] = { 0.0, 0.0, 0.0 };
        double nearest_hit_distance;
        size_t nearest_record_index = 0;
        bool found_wall_hit;
        bool is_crouching = *((const unsigned char *)human_object + HUMAN_POSTURE_OFFSET) != 0;

        should_continue_sweeping = false;
        if (movement_length_squared <= 0.0L ||
            !isfinite((double)movement_length_squared))
        {
            break;
        }

        movement_length = (double)sqrtl(movement_length_squared);
        trace_distance = movement_length + 10.24;
        for (size_t axis_index = 0; axis_index < 3; ++axis_index)
        {
            normalized_direction[axis_index] = movement_vector[axis_index] / movement_length;
        }

        HumanWallSweep_BuildTraceRays(starting_position,
                                      normalized_direction,
                                      trace_distance,
                                      bone_position[2],
                                      is_crouching,
                                      ray_starts,
                                      ray_ends);

        memset(hit_buffer, 0, sizeof(hit_buffer));
        World_TraceBatch(Level_StartMission_4(),
                               (int *)hit_buffer,
                               ray_starts,
                               ray_ends,
                               WALL_SWEEP_TRACE_COUNT,
                               (char)Level_LoadObjects_4(),
                               &trace_auxiliary_storage,
                               -1,
                               1);

        found_wall_hit = HumanWallSweep_FindNearestWallHit(hit_buffer,
                                                            *movement_flags,
                                                            &nearest_record_index,
                                                            wall_normal,
                                                            wall_point,
                                                            &nearest_hit_distance);
        (void)nearest_record_index;
        (void)nearest_hit_distance;

        if (found_wall_hit)
        {
            double movement_into_wall = movement_vector[0] * wall_normal[0] +
                                        movement_vector[1] * wall_normal[1] +
                                        movement_vector[2] * wall_normal[2];

            if (movement_into_wall < 0.0)
            {
                HumanWallSweep_ApplySlide(destination_position,
                                          wall_point,
                                          wall_normal,
                                          movement_flags);
                should_continue_sweeping = true;
            }
        }

        ++iteration_count;
    } while (should_continue_sweeping && iteration_count < MAXIMUM_SWEEP_ITERATIONS);

    if (iteration_count >= MAXIMUM_SWEEP_ITERATIONS && should_continue_sweeping)
    {
        memcpy(destination_position, starting_position, sizeof(double) * 3);
        HumanWallSweep_Log("WARNING",
                           "Wall sweep reached its %d-pass cap; destination was rolled back.",
                           MAXIMUM_SWEEP_ITERATIONS);
    }

    for (size_t axis_index = 0; axis_index < 3; ++axis_index)
    {
        movement_delta[axis_index] = (float)(destination_position[axis_index] -
                                              starting_position[axis_index]);
    }
}
