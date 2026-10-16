#include "gi_platform.h"
#include "004614B0-Human_MovementIntegrator.h"

#include <stdarg.h>

enum
{
    HUMAN_MOVEMENT_FLAGS_OFFSET = 0x2F4,
    HUMAN_WORLD_POSITION_OFFSET = 0x20,
    HUMAN_COLLISION_DISABLED_OFFSET = 0x694,
    HUMAN_GROUND_QUERY_ENABLED_OFFSET = 0x695,
    HUMAN_WALL_SWEEP_ENABLED_OFFSET = 0x696,
    HUMAN_SEPARATION_ENABLED_OFFSET = 0x698,
    HUMAN_SLIDE_ACCELERATION_OFFSET = 0x67C,
    HUMAN_VELOCITY_OFFSET = 0x670,
    HUMAN_BASE_MOVEMENT_OFFSET = 0x664,
    HUMAN_ANIMATION_MOVEMENT_OFFSET = 0x520,
    HUMAN_SLOPE_ENABLED_OFFSET = 0x6F8,
    HUMAN_SLOPE_NORMAL_OFFSET = 0x6D8,
    HUMAN_COMMITTED_MOVEMENT_OFFSET = 0x688,
    HUMAN_POSITION_ADJUSTMENT_OFFSET = 0x728,
    HUMAN_ROOF_DISTANCE_OFFSET = 0x720,
    HUMAN_COLLISION_RADIUS_OFFSET = 0xA0
};

enum
{
    HUMAN_MOVEMENT_FLAG_GROUNDED = 0x04,
    HUMAN_MOVEMENT_FLAG_ROOF_CONTACT = 0x10
};

static float HumanMovement_ReadFloat(const void *human_object, size_t offset)
{
    float value;

    memcpy(&value, (const unsigned char *)human_object + offset, sizeof(value));
    return value;
}

static void HumanMovement_WriteFloat(void *human_object, size_t offset, float value)
{
    memcpy((unsigned char *)human_object + offset, &value, sizeof(value));
}

static uint8_t HumanMovement_ReadByte(const void *human_object, size_t offset)
{
    return *((const unsigned char *)human_object + offset);
}

static uint32_t HumanMovement_ReadUInt32(const void *human_object, size_t offset)
{
    uint32_t value;

    memcpy(&value, (const unsigned char *)human_object + offset, sizeof(value));
    return value;
}

static double HumanMovement_ReadDouble(const void *human_object, size_t offset)
{
    double value;

    memcpy(&value, (const unsigned char *)human_object + offset, sizeof(value));
    return value;
}

static void HumanMovement_ReadVector3(void *human_object, size_t offset, float vector[3])
{
    memcpy(vector, (const unsigned char *)human_object + offset, sizeof(float) * 3);
}

static void HumanMovement_WriteVector3(void *human_object,
                                      size_t offset,
                                      const float vector[3])
{
    memcpy((unsigned char *)human_object + offset, vector, sizeof(float) * 3);
}

static void HumanMovement_Log(const char *severity, const char *format, ...)
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

    (void)fprintf(stderr, "%s [%s] [Physics/HumanMovement] ", timestamp, severity);
    va_start(arguments, format);
    (void)vfprintf(stderr, format, arguments);
    va_end(arguments);
    (void)fputc('\n', stderr);
}

static bool HumanMovement_VerboseLoggingEnabled(void)
{
    const char *verbose_setting = getenv("IGI_NATIVE_VERBOSE_LOGS");

    return verbose_setting != NULL &&
           verbose_setting[0] != '\0' &&
           strcmp(verbose_setting, "0") != 0;
}

static long double HumanMovement_ClampSlopeNormalAndCalculateArcsine(float value)
{
    if (value < -1.0f)
    {
        value = -1.0f;
    }
    else if (value > 1.0f)
    {
        value = 1.0f;
    }

    return asinl((long double)value);
}

static void HumanMovement_UpdateSlopeSlide(void *human_object,
                                           uint32_t movement_flags,
                                           bool *is_sliding)
{
    float slope_normal[3];
    float inverse_length;
    float slope_angle_degrees;
    long double arcsine;
    long double normal_length_squared;

    *is_sliding = false;

    if (HumanMovement_ReadUInt32(human_object, HUMAN_SLOPE_ENABLED_OFFSET) == 0 ||
        (movement_flags & HUMAN_MOVEMENT_FLAG_GROUNDED) == 0)
    {
        goto reset_slide_acceleration;
    }

    HumanMovement_ReadVector3(human_object, HUMAN_SLOPE_NORMAL_OFFSET, slope_normal);

    if (slope_normal[0] != 0.0f || slope_normal[1] != 0.0f || slope_normal[2] != 0.0f)
    {
        normal_length_squared = (long double)slope_normal[0] * slope_normal[0] +
                                (long double)slope_normal[1] * slope_normal[1] +
                                (long double)slope_normal[2] * slope_normal[2];
        inverse_length = (float)(1.0L / sqrtl(normal_length_squared));
        slope_normal[0] *= inverse_length;
        slope_normal[1] *= inverse_length;
        slope_normal[2] *= inverse_length;
    }

    arcsine = HumanMovement_ClampSlopeNormalAndCalculateArcsine(slope_normal[2]);
    slope_angle_degrees = (float)(90.0L - arcsine * 57.295776f);

    if (slope_angle_degrees > 80.0f)
    {
        const float slide_acceleration[3] = {
            slope_normal[0] * 1137.0f,
            slope_normal[1] * 1137.0f,
            0.0f
        };

        HumanMovement_WriteVector3(human_object,
                                   HUMAN_SLIDE_ACCELERATION_OFFSET,
                                   slide_acceleration);
        *is_sliding = true;
        return;
    }

    if (slope_angle_degrees > 60.0f)
    {
        const float slide_acceleration[3] = {
            slope_normal[0] * 948.0f,
            slope_normal[1] * 948.0f,
            0.0f
        };

        HumanMovement_WriteVector3(human_object,
                                   HUMAN_SLIDE_ACCELERATION_OFFSET,
                                   slide_acceleration);
        *is_sliding = true;
        return;
    }

    if (slope_angle_degrees > 50.0f)
    {
        HumanMovement_WriteFloat(
            human_object,
            HUMAN_SLIDE_ACCELERATION_OFFSET,
            HumanMovement_ReadFloat(human_object, HUMAN_SLIDE_ACCELERATION_OFFSET) +
                slope_normal[0] * 56.888889f);
        HumanMovement_WriteFloat(
            human_object,
            HUMAN_SLIDE_ACCELERATION_OFFSET + sizeof(float),
            HumanMovement_ReadFloat(human_object,
                                    HUMAN_SLIDE_ACCELERATION_OFFSET + sizeof(float)) +
                slope_normal[1] * 56.888889f);
        *is_sliding = true;
        return;
    }

    if (slope_angle_degrees > 45.0f)
    {
        HumanMovement_WriteFloat(
            human_object,
            HUMAN_SLIDE_ACCELERATION_OFFSET,
            HumanMovement_ReadFloat(human_object, HUMAN_SLIDE_ACCELERATION_OFFSET) +
                slope_normal[0] * 18.962963f);
        HumanMovement_WriteFloat(
            human_object,
            HUMAN_SLIDE_ACCELERATION_OFFSET + sizeof(float),
            HumanMovement_ReadFloat(human_object,
                                    HUMAN_SLIDE_ACCELERATION_OFFSET + sizeof(float)) +
                slope_normal[1] * 18.962963f);
        *is_sliding = true;
        return;
    }

reset_slide_acceleration:
    {
        const float slide_acceleration[3] = { 0.0f, 0.0f, 0.0f };

        HumanMovement_WriteVector3(human_object,
                                   HUMAN_SLIDE_ACCELERATION_OFFSET,
                                   slide_acceleration);
    }
}

static void HumanMovement_DampVelocity(void *human_object, float damped_velocity[3])
{
    size_t axis_index;

    for (axis_index = 0; axis_index < 3; ++axis_index)
    {
        size_t velocity_offset = HUMAN_VELOCITY_OFFSET + axis_index * sizeof(float);

        damped_velocity[axis_index] = HumanMovement_ReadFloat(human_object, velocity_offset) * 0.9f;
        HumanMovement_WriteFloat(human_object, velocity_offset, damped_velocity[axis_index]);
    }
}

static void HumanMovement_DampSlideAcceleration(void *human_object,
                                                float damped_slide_acceleration[3])
{
    size_t axis_index;

    for (axis_index = 0; axis_index < 3; ++axis_index)
    {
        size_t acceleration_offset = HUMAN_SLIDE_ACCELERATION_OFFSET + axis_index * sizeof(float);

        damped_slide_acceleration[axis_index] =
            HumanMovement_ReadFloat(human_object, acceleration_offset) * 0.9f;
        HumanMovement_WriteFloat(human_object,
                                 acceleration_offset,
                                 damped_slide_acceleration[axis_index]);
    }
}

static void HumanMovement_ApplyCollisionQueries(void *human_object,
                                                const double starting_position[3],
                                                double destination_position[3],
                                                float movement_delta[3],
                                                uint32_t *movement_flags,
                                                bool is_sliding)
{
    float ground_query_distance = 0.0f;

    if (HumanMovement_ReadByte(human_object, HUMAN_COLLISION_DISABLED_OFFSET) != 0)
    {
        return;
    }

    if (HumanMovement_ReadByte(human_object, HUMAN_WALL_SWEEP_ENABLED_OFFSET) != 0)
    {
        Human_WallSweep(human_object,
                        starting_position,
                        destination_position,
                        movement_delta,
                        movement_flags);
    }

    if (HumanMovement_ReadByte(human_object, HUMAN_GROUND_QUERY_ENABLED_OFFSET) != 0)
    {
        if ((*movement_flags & HUMAN_MOVEMENT_FLAG_GROUNDED) != 0)
        {
            ground_query_distance = 2048.0f;
        }

        if (is_sliding)
        {
            ground_query_distance = 8192.0f;
        }

        (void)Human_GroundQuery(human_object,
                                starting_position,
                                destination_position,
                                movement_delta,
                                movement_flags,
                                ground_query_distance);
    }

    if (HumanMovement_ReadByte(human_object, HUMAN_SEPARATION_ENABLED_OFFSET) != 0)
    {
        Human_Separation(human_object,
                         starting_position,
                         destination_position,
                         movement_delta);
    }
}

void Human_MovementIntegrator(void *human_object)
{
    uint32_t movement_flags;
    float movement_delta[3];
    float damped_velocity[3];
    float damped_slide_acceleration[3];
    double starting_position[3];
    double destination_position[3];
    bool is_sliding;
    size_t axis_index;

    if (human_object == NULL)
    {
        HumanMovement_Log("ERROR", "received a null human object pointer");
        return;
    }

    memcpy(&movement_flags,
           (const unsigned char *)human_object + HUMAN_MOVEMENT_FLAGS_OFFSET,
           sizeof(movement_flags));

    HumanMovement_UpdateSlopeSlide(human_object, movement_flags, &is_sliding);
    HumanMovement_DampSlideAcceleration(human_object, damped_slide_acceleration);
    HumanMovement_DampVelocity(human_object, damped_velocity);
    movement_flags &= ~HUMAN_MOVEMENT_FLAG_ROOF_CONTACT;

    for (axis_index = 0; axis_index < 3; ++axis_index)
    {
        size_t axis_offset = axis_index * sizeof(float);
        float base_movement = HumanMovement_ReadFloat(human_object,
                                                      HUMAN_BASE_MOVEMENT_OFFSET + axis_offset);
        float animation_movement = HumanMovement_ReadFloat(
            human_object,
            HUMAN_ANIMATION_MOVEMENT_OFFSET + axis_offset);

        movement_delta[axis_index] = base_movement + animation_movement +
                                     damped_velocity[axis_index] +
                                     damped_slide_acceleration[axis_index];
    }

    memcpy(starting_position,
           (const unsigned char *)human_object + HUMAN_WORLD_POSITION_OFFSET,
           sizeof(starting_position));

    for (axis_index = 0; axis_index < 3; ++axis_index)
    {
        float position_adjustment = HumanMovement_ReadFloat(
            human_object,
            HUMAN_POSITION_ADJUSTMENT_OFFSET + axis_index * sizeof(float));

        starting_position[axis_index] += (double)position_adjustment;
        destination_position[axis_index] =
            starting_position[axis_index] + (double)movement_delta[axis_index];
    }

    HumanMovement_ApplyCollisionQueries(human_object,
                                        starting_position,
                                        destination_position,
                                        movement_delta,
                                        &movement_flags,
                                        is_sliding);

    if ((movement_flags & HUMAN_MOVEMENT_FLAG_ROOF_CONTACT) != 0)
    {
        if (HumanMovement_VerboseLoggingEnabled())
        {
            HumanMovement_Log("DEBUG",
                              "roof contact; distance from feet is %.0f",
                              HumanMovement_ReadDouble(human_object,
                                                       HUMAN_ROOF_DISTANCE_OFFSET) *
                                  0.000244140625);
        }
    }

    memcpy((unsigned char *)human_object + HUMAN_MOVEMENT_FLAGS_OFFSET,
           &movement_flags,
           sizeof(movement_flags));

    (void)WorldObject_CommitTransform(
                                      (void *)(uintptr_t)Level_StartMission_4(),
                                      human_object,
                                      destination_position,
                                      HumanMovement_ReadFloat(human_object,
                                                             HUMAN_COLLISION_RADIUS_OFFSET));

    for (axis_index = 0; axis_index < 3; ++axis_index)
    {
        HumanMovement_WriteFloat(human_object,
                                 HUMAN_COMMITTED_MOVEMENT_OFFSET + axis_index * sizeof(float),
                                 movement_delta[axis_index] +
                                     HumanMovement_ReadFloat(
                                         human_object,
                                         HUMAN_POSITION_ADJUSTMENT_OFFSET +
                                             axis_index * sizeof(float)));
    }

    if (HumanMovement_VerboseLoggingEnabled())
    {
        HumanMovement_Log("DEBUG",
                          "position=(%.2f, %.2f, %.2f), movement=(%.2f, %.2f, %.2f)",
                          destination_position[0],
                          destination_position[1],
                          destination_position[2],
                          movement_delta[0],
                          movement_delta[1],
                          movement_delta[2]);
    }
}
