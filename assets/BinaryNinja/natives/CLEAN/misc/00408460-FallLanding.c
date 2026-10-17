// IGI native provenance: FallLanding - 0x00408460 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00408460-FallLanding.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
// REA/Ghidra assembly evidence: ev_2a58670f35511db6ce1c14fd9011eacb7b7cc84e605a9fb3072fafb1ac77a72c.
// Binary: igi.exe PE32 x86, SHA-256 dea34892d417715873ea61d7b2ba5556655f1ad65385104348146f9679915a01.
// The player-state structure is unresolved; field offsets below are observed retail offsets.

#include "FallLanding.h"

#include <math.h>
#include <stdbool.h>
#include <stdint.h>

extern const float g_5333f0;
extern const float g_5333ec;
extern const float g_5333e8;
extern const float g_5333bc;
extern const float g_5333e4;
extern const double g_5333d8;
extern const float g_5333d0;
extern const float g_5333cc;
extern const float g_5333c8;
extern const float g_5333c4;
extern const float g_56e1f4;

// These catalog aliases are not independently confirmed as retail symbol names.
extern void AI_UpdatePatrol_24(void *camera_task, float camera_vertical_kick);
extern int32_t FX_FragmentSimulate_14(void *damage_state, int32_t damage_kind);
extern uint8_t Human_HitDamage(void);
extern void Game_DataSymbolLoad(char *output_buffer, const char *sound_name);
extern void SoundSys_SetMasterVolume_7(void *camera_task, char *sound_name);
extern void *DynObj_UpdateDynTree_4(void *player_state);
extern int32_t AI_EventBroadcast(void *event_parameters);

static bool IsOrderedNonzero(float value)
{
    return !isnan(value) && value != 0.0f;
}

void FallLanding(void *human_player)
{
    uint8_t *player_state = (uint8_t *)human_player;
    float *vertical_velocity = (float *)(player_state + 0x66c);
    float forward_axis_input = *(float *)(player_state + 0x1b8);
    float backward_axis_input = *(float *)(player_state + 0x1bc);
    float left_axis_input = *(float *)(player_state + 0x1c0);
    float right_axis_input = *(float *)(player_state + 0x1c4);
    float forward_acceleration = 0.0f;
    float lateral_acceleration = 0.0f;

    *vertical_velocity -= g_5333f0;

    if (IsOrderedNonzero(forward_axis_input))
    {
        forward_acceleration = -g_56e1f4;
    }

    if (IsOrderedNonzero(backward_axis_input))
    {
        forward_acceleration += g_56e1f4;
    }

    if (IsOrderedNonzero(left_axis_input))
    {
        lateral_acceleration = g_56e1f4;
    }

    if (IsOrderedNonzero(right_axis_input))
    {
        lateral_acceleration -= g_56e1f4;
    }

    *(float *)(player_state + 0x664) +=
        forward_acceleration * *(float *)(player_state + 0x78)
        + lateral_acceleration * *(float *)(player_state + 0x7c);
    *(float *)(player_state + 0x668) +=
        forward_acceleration * *(float *)(player_state + 0x84)
        + lateral_acceleration * *(float *)(player_state + 0x88);
    *vertical_velocity +=
        forward_acceleration * *(float *)(player_state + 0x90)
        + lateral_acceleration * *(float *)(player_state + 0x94);

    if ((*(uint8_t *)(player_state + 0x2f4) & 0x04U) == 0U)
    {
        return;
    }

    float landing_speed_metres_per_second = fabsf(*vertical_velocity) * g_5333e8 * g_5333bc;
    float camera_kick_fraction = landing_speed_metres_per_second * 0.125f;

    if (camera_kick_fraction < 0.0f)
    {
        camera_kick_fraction = 0.0f;
    }
    else if (camera_kick_fraction > 1.0f)
    {
        camera_kick_fraction = 1.0f;
    }

    AI_UpdatePatrol_24(
        *(void **)(player_state + 0x4ec),
        camera_kick_fraction * -1024.0f);

    float damage_speed_metres_per_second = landing_speed_metres_per_second - g_5333d0;
    float landing_damage = 0.0f;

    if (damage_speed_metres_per_second > 0.0f)
    {
        *(int32_t *)(player_state + 0x2e8) = 13;
        FX_FragmentSimulate_14(player_state + 0x254, 13);

        landing_damage = damage_speed_metres_per_second
            * g_5333cc
            * *(float *)(player_state + 0x258);

        if (Human_HitDamage() == 0U)
        {
            *(float *)(player_state + 0x2c8) += landing_damage;
            *(float *)(player_state + 0x254) += landing_damage;
        }

        if (!isnan(landing_damage) && landing_damage != 0.0f)
        {
            const float maximum_health = *(float *)(player_state + 0x258);
            const char *fall_sound_name = "player_fall_1";

            if (landing_damage >= maximum_health * g_5333c8)
            {
                fall_sound_name = landing_damage >= maximum_health * g_5333c4
                    ? "player_fall_3"
                    : "player_fall_2";
            }

            char sound_event_name[32];
            Game_DataSymbolLoad(sound_event_name, fall_sound_name);
            SoundSys_SetMasterVolume_7(*(void **)(player_state + 0x4ec), sound_event_name);
        }
    }

    uint32_t landing_event_parameters[6];
    landing_event_parameters[0] = 0x0bU;
    landing_event_parameters[1] = *(uint32_t *)(player_state + 0xfc);
    landing_event_parameters[2] = 0x46U;
    landing_event_parameters[3] = (uint32_t)(uintptr_t)DynObj_UpdateDynTree_4(human_player);
    landing_event_parameters[4] = (uint32_t)(uintptr_t)human_player;
    landing_event_parameters[5] = (uint32_t)(uintptr_t)human_player;

    AI_EventBroadcast(landing_event_parameters);
}
