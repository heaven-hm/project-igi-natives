#include "gi_platform.h"

#include <math.h>
#include <stdio.h>
#include <string.h>

enum
{
    human_storage_size = 0x734,
    human_movement_flags_offset = 0x2f4,
    human_world_position_offset = 0x20,
    human_collision_disabled_offset = 0x694,
    human_ground_query_enabled_offset = 0x695,
    human_wall_sweep_enabled_offset = 0x696,
    human_separation_enabled_offset = 0x698,
    human_slide_acceleration_offset = 0x67c,
    human_velocity_offset = 0x670,
    human_base_movement_offset = 0x664,
    human_animation_movement_offset = 0x520,
    human_slope_enabled_offset = 0x6f8,
    human_slope_normal_offset = 0x6d8,
    human_committed_movement_offset = 0x688,
    human_position_adjustment_offset = 0x728,
    human_collision_radius_offset = 0xa0,
    human_grounded_flag = 0x04,
    human_roof_contact_flag = 0x10,
    human_wall_contact_flag = 0x08,
    human_mock_ground_result_flag = 0x20
};

static unsigned int collision_call_order[3];
static unsigned int collision_call_count = 0;
static unsigned int collision_arguments_valid = 1;
static int collision_callbacks_modify_motion = 0;
static float observed_ground_query_distance = -1.0f;
static float expected_collision_radius = 0.0f;
static unsigned int transform_commit_count = 0;
static double committed_position[3];

static void WriteFloat(void *object, size_t offset, float value)
{
    memcpy((unsigned char *)object + offset, &value, sizeof(value));
}

static float ReadFloat(const void *object, size_t offset)
{
    float value;

    memcpy(&value, (const unsigned char *)object + offset, sizeof(value));
    return value;
}

static void WriteVector(void *object, size_t offset, const float vector[3])
{
    memcpy((unsigned char *)object + offset, vector, sizeof(float) * 3);
}

static int Fail(const char *error_message)
{
    (void)fprintf(stderr, "Human movement integrator probe failed: %s\n", error_message);
    collision_arguments_valid = 0;
    return 1;
}

int Level_StartMission_4(void)
{
    return 0x1234;
}

void Human_WallSweep(void *human_object,
                     const double starting_position[3],
                     double destination_position[3],
                     float movement_delta[3],
                     uint32_t *movement_flags)
{
    (void)human_object;
    (void)movement_flags;

    if (collision_call_count >= 3 || starting_position[0] != 100.25)
    {
        Fail("wall sweep was called with an unexpected order or starting position");
        return;
    }

    collision_call_order[collision_call_count++] = 1;
    if (collision_callbacks_modify_motion)
    {
        destination_position[0] += 1.0;
        movement_delta[0] += 1.0f;
    }

    *movement_flags |= human_wall_contact_flag;
}

void Human_GroundQuery(void *human_object,
                       const double starting_position[3],
                       double destination_position[3],
                       float movement_delta[3],
                       uint32_t *movement_flags,
                       float ground_query_distance)
{
    (void)human_object;

    if (collision_call_count >= 3 || starting_position[0] != 100.25)
    {
        Fail("ground query was called with an unexpected order or starting position");
        return;
    }

    collision_call_order[collision_call_count++] = 2;
    observed_ground_query_distance = ground_query_distance;
    if (collision_callbacks_modify_motion)
    {
        destination_position[1] += 2.0;
        movement_delta[1] += 2.0f;
    }

    *movement_flags |= human_mock_ground_result_flag;
}

void Human_Separation(void *human_character,
                      const double starting_position[3],
                      double destination_position[3],
                      float movement_delta[3])
{
    (void)human_character;

    if (collision_call_count >= 3 || starting_position[0] != 100.25)
    {
        Fail("separation was called with an unexpected order or starting position");
        return;
    }

    collision_call_order[collision_call_count++] = 3;
    if (collision_callbacks_modify_motion)
    {
        destination_position[2] += 3.0;
        movement_delta[2] += 3.0f;
    }
}

int WorldObject_CommitTransform(void *world_context,
                                void *human_object,
                                double destination_position[3],
                                float collision_radius)
{
    (void)human_object;

    if ((uintptr_t)world_context != 0x1234 ||
        fabsf(collision_radius - expected_collision_radius) > 1e-6f)
    {
        Fail("transform commit used an unexpected world context or collision radius");
        return 0;
    }

    ++transform_commit_count;
    memcpy(committed_position, destination_position, sizeof(committed_position));
    return 1;
}

static void ResetProbeState(void)
{
    memset(collision_call_order, 0, sizeof(collision_call_order));
    collision_call_count = 0;
    collision_arguments_valid = 1;
    collision_callbacks_modify_motion = 0;
    observed_ground_query_distance = -1.0f;
    expected_collision_radius = 0.0f;
    transform_commit_count = 0;
    memset(committed_position, 0, sizeof(committed_position));
}

static void InitializeHuman(void *human_object)
{
    const double starting_position[3] = {100.0, 200.0, 300.0};
    const float position_adjustment[3] = {0.25f, -0.5f, 1.0f};

    memset(human_object, 0, human_storage_size);
    memcpy((unsigned char *)human_object + human_world_position_offset,
           starting_position,
           sizeof(starting_position));
    WriteVector(human_object, human_position_adjustment_offset, position_adjustment);
    *((unsigned char *)human_object + human_wall_sweep_enabled_offset) = 1;
    *((unsigned char *)human_object + human_ground_query_enabled_offset) = 1;
    *((unsigned char *)human_object + human_separation_enabled_offset) = 1;
}

static int VerifyOrdinaryGroundedMovement(void)
{
    unsigned char human_object[human_storage_size];
    const float velocity[3] = {10.0f, 20.0f, 30.0f};
    const float base_movement[3] = {1.0f, 2.0f, 3.0f};
    const float animation_movement[3] = {2.0f, 3.0f, 4.0f};
    const float slide_acceleration[3] = {0.0f, 0.0f, 0.0f};
    const uint32_t movement_flags = human_grounded_flag | human_roof_contact_flag;

    ResetProbeState();
    InitializeHuman(human_object);
    collision_callbacks_modify_motion = 1;
    expected_collision_radius = 42.0f;
    WriteVector(human_object, human_velocity_offset, velocity);
    WriteVector(human_object, human_base_movement_offset, base_movement);
    WriteVector(human_object, human_animation_movement_offset, animation_movement);
    WriteVector(human_object, human_slide_acceleration_offset, slide_acceleration);
    WriteFloat(human_object, human_collision_radius_offset, expected_collision_radius);
    memcpy(human_object + human_movement_flags_offset,
           &movement_flags,
           sizeof(movement_flags));

    Human_MovementIntegrator(human_object);

    if (!collision_arguments_valid || collision_call_count != 3 ||
        collision_call_order[0] != 1 || collision_call_order[1] != 2 ||
        collision_call_order[2] != 3)
    {
        return 1;
    }

    if (fabsf(observed_ground_query_distance - 2048.0f) > 1e-6f)
    {
        return Fail("grounded movement did not request the 2048-unit ground budget");
    }

    if (transform_commit_count != 1 ||
        fabs(committed_position[0] - 113.25) > 1e-8 ||
        fabs(committed_position[1] - 224.5) > 1e-8 ||
        fabs(committed_position[2] - 338.0) > 1e-8)
    {
        return Fail("the transform commit did not receive the collision-adjusted destination");
    }

    if (ReadFloat(human_object, human_velocity_offset) != 9.0f ||
        ReadFloat(human_object, human_velocity_offset + sizeof(float)) != 18.0f ||
        ReadFloat(human_object, human_velocity_offset + 2 * sizeof(float)) != 27.0f)
    {
        return Fail("velocity was not damped by the retail 0.9 factor");
    }

    if (ReadFloat(human_object, human_committed_movement_offset) != 13.25f ||
        ReadFloat(human_object, human_committed_movement_offset + sizeof(float)) != 24.5f ||
        ReadFloat(human_object, human_committed_movement_offset + 2 * sizeof(float)) != 38.0f)
    {
        return Fail("committed movement does not include collision results and position adjustment");
    }

    uint32_t final_movement_flags;
    memcpy(&final_movement_flags,
           human_object + human_movement_flags_offset,
           sizeof(final_movement_flags));
    if (final_movement_flags !=
        (human_grounded_flag | human_wall_contact_flag | human_mock_ground_result_flag))
    {
        return Fail("the roof-contact bit was not cleared or collision flags were lost");
    }

    return 0;
}

static int VerifySteepSlopeGroundBudget(void)
{
    unsigned char human_object[human_storage_size];
    const float steep_slope_normal[3] = {1.0f, 0.0f, 0.0f};
    const uint32_t movement_flags = human_grounded_flag;

    ResetProbeState();
    InitializeHuman(human_object);
    memcpy(human_object + human_slope_enabled_offset, &movement_flags, sizeof(uint32_t));
    WriteVector(human_object, human_slope_normal_offset, steep_slope_normal);
    memcpy(human_object + human_movement_flags_offset, &movement_flags, sizeof(movement_flags));

    Human_MovementIntegrator(human_object);

    if (!collision_arguments_valid || collision_call_count != 3 ||
        fabsf(observed_ground_query_distance - 8192.0f) > 1e-6f)
    {
        return Fail("a steep grounded slope did not use the 8192-unit ground budget");
    }

    if (fabsf(ReadFloat(human_object, human_slide_acceleration_offset) - 1023.3f) > 1e-3f ||
        fabsf(ReadFloat(human_object, human_slide_acceleration_offset + sizeof(float))) > 1e-6f)
    {
        return Fail("the steep-slope slide acceleration was not scaled and damped");
    }

    return 0;
}

int main(void)
{
    if (VerifyOrdinaryGroundedMovement() != 0)
    {
        return 1;
    }

    if (VerifySteepSlopeGroundBudget() != 0)
    {
        return 1;
    }

    return 0;
}
