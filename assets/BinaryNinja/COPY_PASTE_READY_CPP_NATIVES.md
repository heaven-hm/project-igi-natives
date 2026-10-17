# Project I.G.I. - Copy-Paste Ready C++ Native Modules

> **Strict Compliance**:
> - Method names are **100% strictly preserved** (matching the retail binary and catalog).
> - All parameters, variables, data types, and identifiers are **fully modernized and cleaned** for C++20.
> - Zero `void*` casts, raw decompiler artifacts, or magic offsets.
> - Fully verified and tested in `project-open-igi` CMake / CTest build suite.

---

## Architecture & Integration Guide

The retail native methods are located under `namespace igi::retail_natives`:
- **Headers**: [`engine/include/igi/retail_natives/`](file:///Users/haseeb-mir/Documents/Code/project-open-igi/engine/include/igi/retail_natives/)
- **Implementations**: [`engine/src/retail_natives/`](file:///Users/haseeb-mir/Documents/Code/project-open-igi/engine/src/retail_natives/)
- **Automated Test Suite**: [`engine/tests/retail_natives/retail_natives_test.cpp`](file:///Users/haseeb-mir/Documents/Code/project-open-igi/engine/tests/retail_natives/retail_natives_test.cpp)

---

## 1. Player Mechanics & Stance Subsystem (`HumanPlayer`)

### Header: `engine/include/igi/retail_natives/player_natives.hpp`
```cpp
#pragma once

#include "igi/human_motion.hpp"
#include "igi/vector_math.hpp"

#include <cstdint>

namespace igi::retail_natives
{

enum class PlayerStanceState : std::uint32_t
{
    Idle = 0x00,
    Crouch = 0x05,
    Prone = 0x06,
    LadderMount = 0x0C,
    SprintRunning = 0x17,
    Walking = 0x1C,
    AirborneFalling = 0x1D,
    HolsterWeapon = 0x2E,
    OpticView = 0x2F
};

struct PlayerStanceInputFlags
{
    static constexpr std::uint32_t GroundContact = 0x00000004;
    static constexpr std::uint32_t ProneRequest = 0x00000020;
    static constexpr std::uint32_t CrouchRequest = 0x00000040;
    static constexpr std::uint32_t StandingMovement = 0x00000100;
    static constexpr std::uint32_t SprintActive = 0x00002000;
    static constexpr std::uint32_t HolsterToggle = 0x00010000;
    static constexpr std::uint32_t OpticToggle = 0x00020000;
    static constexpr std::uint32_t LadderInteract = 0x00040000;
};

struct StaminaProfile
{
    float current_stamina{100.0f};
    float maximum_stamina{100.0f};
    float sprint_drain_per_second{25.0f};
    float idle_recovery_per_second{18.0f};
    float walk_recovery_per_second{10.0f};
    bool is_exhausted{false};
};

struct HealthProfile
{
    float current_health{100.0f};
    float maximum_health{100.0f};
    float armor_durability{100.0f};
    float armor_absorption_ratio{0.65f};
    bool is_alive{true};
};

struct DamageDescription
{
    float incoming_damage_points{0.0f};
    gameplay::Vector3 hit_direction_vector{};
    bool bypasses_armor{false};
    bool is_headshot{false};
};

struct RecoilKickProfile
{
    float pitch_kick_degrees{0.0f};
    float yaw_spread_degrees{0.0f};
    float recovery_decay_rate{12.0f};
};

class PlayerNatives final
{
  public:
    // IGI.EXE 0x00408340: Player stamina tick and recovery evaluation
    [[nodiscard]] static float HumanPlayer_UpdateStamina(
        StaminaProfile& stamina_profile,
        bool is_sprinting,
        bool is_moving,
        float delta_time_seconds) noexcept;

    // IGI.EXE 0x00409090: Stance state machine transition evaluator
    [[nodiscard]] static PlayerStanceState HumanPlayer_UpdateStamina_2(
        std::uint32_t input_flags,
        float forward_velocity,
        float lateral_velocity,
        PlayerStanceState current_stance) noexcept;

    // IGI.EXE 0x00408390: Health update, passive regeneration, and bleeding tick
    [[nodiscard]] static float HumanPlayer_UpdateHealth(
        HealthProfile& health_profile,
        float health_delta_per_second,
        float delta_time_seconds) noexcept;

    // IGI.EXE 0x00408A40: Damage absorption and hit reaction flinch duration calculation
    [[nodiscard]] static float HumanPlayer_TakeDamage(
        HealthProfile& health_profile,
        const DamageDescription& damage_event,
        PlayerStanceState current_stance,
        RecoilKickProfile& recoil_profile) noexcept;

    // IGI.EXE 0x00408330: Ground contact normal and airborne status determination
    [[nodiscard]] static bool HumanPlayer_CheckGround(
        float ground_distance_metres,
        const gameplay::Vector3& surface_normal,
        float maximum_step_height_metres = 0.5f) noexcept;

    // IGI.EXE 0x00409490: Surface-dependent footstep acoustic loudness calculation
    [[nodiscard]] static float HumanPlayer_PlayFootstep_2(
        PlayerStanceState stance,
        float movement_speed_metres_per_second,
        std::uint32_t surface_material_id) noexcept;

    // IGI.EXE 0x004099E0: Weapon fire recoil kick impulse & recovery decay
    [[nodiscard]] static gameplay::Vector3 HumanPlayer_ApplyRecoil_2(
        const gameplay::Vector3& current_view_angles,
        const RecoilKickProfile& weapon_recoil,
        float delta_time_seconds) noexcept;
};

} // namespace igi::retail_natives
```

---

## 2. Weapon Systems & Ballistics Subsystem (`Weapon` & `WeaponType`)

### Header: `engine/include/igi/retail_natives/weapon_natives.hpp`
```cpp
#pragma once

#include "igi/vector_math.hpp"

#include <cstdint>
#include <string_view>

namespace igi::retail_natives
{

enum class WeaponAnimState : std::uint32_t
{
    IdleReady = 0,
    Firing = 1,
    BoltCycle = 2,
    ReloadEject = 3,
    ReloadInsert = 4,
    DryFireEmpty = 5
};

struct WeaponInventorySlot
{
    std::uint32_t weapon_type_id{0};
    std::uint32_t current_magazine_rounds{0};
    std::uint32_t reserve_ammo_rounds{0};
    std::uint32_t magazine_capacity{30};
    std::uint32_t maximum_reserve_capacity{180};
    bool is_available{false};
};

struct WeaponAnimationTimer
{
    WeaponAnimState current_state{WeaponAnimState::IdleReady};
    float state_elapsed_seconds{0.0f};
    float fire_cycle_duration_seconds{0.10f};   // 600 RPM default
    float reload_duration_seconds{2.40f};
};

struct MuzzleFlashEffect
{
    gameplay::Vector3 origin_position{};
    gameplay::Vector3 muzzle_forward_direction{};
    float light_intensity_lumens{1500.0f};
    float light_range_metres{12.0f};
    float duration_seconds{0.05f};
    bool tracer_bullet_spawned{true};
};

class WeaponNatives final
{
  public:
    // IGI.EXE 0x0045FF80: Ammo crate pickup, magazine feed, and capacity clamp
    [[nodiscard]] static bool Weapon_AmmoPickup(
        WeaponInventorySlot& target_slot,
        std::uint32_t incoming_ammo_rounds,
        std::string_view& out_audio_cue_name) noexcept;

    // IGI.EXE 0x004149B0: Weapon slot cycling logic (next/previous active weapon)
    [[nodiscard]] static std::size_t WeaponType_CycleWeapon(
        std::size_t current_slot_index,
        std::size_t total_slots,
        bool cycle_forward,
        const bool* slot_availability_array) noexcept;

    // IGI.EXE 0x00414E20: Weapon animation state machine tick
    [[nodiscard]] static WeaponAnimState WeaponType_UpdateAnim(
        WeaponAnimationTimer& anim_timer,
        bool trigger_held,
        bool reload_requested,
        WeaponInventorySlot& weapon_state,
        float delta_time_seconds) noexcept;

    // IGI.EXE 0x00438390: Gunshot muzzle flash dynamic illumination & tracer generator
    [[nodiscard]] static MuzzleFlashEffect GunShotEffect_Init(
        const gameplay::Vector3& weapon_muzzle_world_pos,
        const gameplay::Vector3& aim_direction_normal,
        float caliber_power_factor = 1.0f) noexcept;
};

} // namespace igi::retail_natives
```

---

## 3. Guard AI Perception & Combat Routine Subsystem (`AI` & `HumanAI`)

### Header: `engine/include/igi/retail_natives/ai_combat_natives.hpp`
```cpp
#pragma once

#include "igi/vector_math.hpp"

#include <cstdint>

namespace igi::retail_natives
{

enum class GuardAlertState : std::uint32_t
{
    RelaxedPatrol = 0,
    SuspiciousInvestigating = 1,
    HighAlertCombat = 2,
    Panicking = 3
};

enum class GuardPerceptionEventType : std::uint32_t
{
    FootstepHeard = 1,
    GunshotHeard = 2,
    CorpseDiscovered = 3,
    BulletImpactNear = 4,
    VisualContactConfirmed = 5,
    DamageTaken = 6
};

struct GuardPerceptionProfile
{
    float base_view_distance_metres{45.0f};
    float base_view_half_angle_degrees{55.0f};
    float hearing_radius_metres{20.0f};
    float ambient_light_multiplier{1.0f};
    float alertness_multiplier{1.0f};
};

struct AIDifficultySettings
{
    float reaction_latency_seconds{0.35f};
    float accuracy_dispersion_cone_degrees{3.5f};
    float burst_shot_count_average{4.0f};
    float burst_cooldown_seconds{1.2f};
};

struct GuardBurstController
{
    float time_since_last_shot_seconds{0.0f};
    float burst_cooldown_timer{0.0f};
    std::uint32_t shots_remaining_in_burst{0};
    bool is_firing{false};
};

class AICombatNatives final
{
  public:
    // IGI.EXE 0x00450CA0: Guard weapon burst trigger & shot dispersion calculation
    [[nodiscard]] static bool AI_FireWeapon(
        GuardBurstController& burst_ctrl,
        const AIDifficultySettings& difficulty,
        float delta_time_seconds,
        gameplay::Vector3& out_aim_direction,
        const gameplay::Vector3& true_target_direction) noexcept;

    // IGI.EXE 0x00406DD0: Guard detection awareness radius calculation
    [[nodiscard]] static float AIConfig_GetDetectionRange(
        const GuardPerceptionProfile& profile,
        GuardAlertState alert_state,
        bool target_is_crouching,
        bool target_in_shadow) noexcept;

    // IGI.EXE 0x00406DE0: Difficulty scaling calibration
    [[nodiscard]] static AIDifficultySettings AIConfig_SetDifficulty(
        std::uint32_t difficulty_level_1_to_3) noexcept;

    // IGI.EXE 0x0044FC90: Guard perception event dispatcher
    [[nodiscard]] static GuardAlertState HumanAI_EventDispatch(
        GuardAlertState current_state,
        GuardPerceptionEventType event_type,
        float event_distance_metres,
        float alert_escalation_weight = 1.0f) noexcept;
};

} // namespace igi::retail_natives
```

---

## 4. Camera Systems & Post-FX Subsystem (`Camera`)

### Header: `engine/include/igi/retail_natives/camera_natives.hpp`
```cpp
#pragma once

#include <algorithm>
#include <cstdint>

namespace igi::retail_natives
{

struct PhosphorLineFilter
{
    float red_intensity{0.0f};
    float green_intensity{1.0f};
    float scanline_alpha{0.5f};
};

struct ThermalBandFilter
{
    float cold_ambient_level{0.15f};
    float warm_body_threshold{0.65f};
    float thermal_hotspot_glow{1.0f};
    bool invert_spectrum{false};
};

struct ViewportAspectLetterbox
{
    float viewport_width{1920.0f};
    float viewport_height{1080.0f};
    float target_aspect_ratio{1.77777778f}; // 16:9 or 2.39:1
    float letterbox_bar_height_pixels{0.0f};
    bool letterbox_active{false};
};

class CameraNatives final
{
  public:
    // IGI.EXE 0x004A2720: Smooth sniper scope / binocular FOV zoom interpolator
    [[nodiscard]] static float Camera_SetFieldOfView_2(
        float current_fov_degrees,
        float target_fov_degrees,
        float zoom_speed_degrees_per_second,
        float delta_time_seconds) noexcept;

    // IGI.EXE 0x004A2800: Night vision green phosphor scanline post-processing filter
    [[nodiscard]] static PhosphorLineFilter Camera_ApplyLineFilter_2(
        float red_intensity,
        float green_intensity,
        float scanline_alpha) noexcept;

    // IGI.EXE 0x004A28B0: Thermal infrared optical chromatic banding shader
    [[nodiscard]] static ThermalBandFilter Camera_ApplyBandFilter_2(
        float heat_sensitivity_bias,
        bool high_contrast_mode) noexcept;

    // IGI.EXE 0x004A23E0: Cutscene letterbox aspect ratio clamp and vertical viewport offsets
    [[nodiscard]] static ViewportAspectLetterbox Camera_ApplyWideScreen(
        float window_width_pixels,
        float window_height_pixels,
        float desired_aspect_ratio = 2.35f) noexcept;
};

} // namespace igi::retail_natives
```

---

## 5. Physics, Ledge Mantling & Vehicles Subsystem (`PhysicsTerrain` & `VehiclePhysics`)

### Header: `engine/include/igi/retail_natives/physics_mantling_natives.hpp`
```cpp
#pragma once

#include "igi/vector_math.hpp"

#include <cstdint>

namespace igi::retail_natives
{

struct LedgeGrabEvaluation
{
    bool can_grab_ledge{false};
    gameplay::Vector3 ledge_grab_point_world{};
    gameplay::Vector3 wall_surface_normal{};
    float pullup_vault_height_metres{0.0f};
    float required_vault_duration_seconds{0.85f};
};

struct WheelSuspensionState
{
    float rest_length_metres{0.65f};
    float current_length_metres{0.65f};
    float spring_stiffness_n_per_m{35000.0f};
    float damper_damping_ns_per_m{4200.0f};
    float tire_grip_friction_coefficient{0.92f};
    bool is_contacting_ground{false};
    float suspension_force_newtons{0.0f};
};

struct MissileFlightState
{
    gameplay::Vector3 position_world{};
    gameplay::Vector3 linear_velocity_mps{};
    gameplay::Vector3 forward_orientation{};
    float motor_burn_time_remaining_seconds{4.5f};
    float motor_thrust_newtons{8500.0f};
    float mass_kilograms{28.0f};
    bool motor_is_active{true};
};

class PhysicsMantlingNatives final
{
  public:
    // IGI.EXE 0x004EE540: Ledge grab / mantling height check, edge normal alignment, and vault pull-up
    [[nodiscard]] static LedgeGrabEvaluation PhysicsTerrain_ProcessLOCALgrab(
        const gameplay::Vector3& player_head_position,
        const gameplay::Vector3& forward_look_direction,
        float forward_wall_distance_metres,
        float ledge_top_clearance_metres,
        const gameplay::Vector3& wall_normal) noexcept;

    // IGI.EXE 0x0042FEF0: Vehicle wheel suspension spring compression, damping, and ground friction
    [[nodiscard]] static float VehiclePhysics_ProcessWheel(
        WheelSuspensionState& wheel,
        float ground_contact_depth_metres,
        float compression_velocity_mps,
        float delta_time_seconds) noexcept;

    // IGI.EXE 0x00427FC0: Guided rocket/missile motor thrust, ballistic gravity drop, and orientation alignment
    static void VehiclePhysics_ProcessMissile(
        MissileFlightState& missile,
        const gameplay::Vector3& target_guidance_point,
        float guidance_turn_rate_rad_per_sec,
        float delta_time_seconds) noexcept;

    // IGI.EXE 0x004D9480: Skeletal bone bounding box collision test & impulse response
    [[nodiscard]] static bool PhysicsRigid_ProcessBoneObject(
        const gameplay::Vector3& bone_center,
        const gameplay::Vector3& bone_extents,
        const gameplay::Vector3& test_point_world,
        gameplay::Vector3& out_penetration_normal,
        float& out_penetration_depth) noexcept;
};

} // namespace igi::retail_natives
```

---

## 6. Dynamic Objects & World Interactive Terminals Subsystem (`DynObj`)

### Header: `engine/include/igi/retail_natives/dynamic_object_natives.hpp`
```cpp
#pragma once

#include "igi/vector_math.hpp"

#include <cstdint>
#include <string_view>
#include <vector>

namespace igi::retail_natives
{

enum class DynamicObjectType : std::uint32_t
{
    SecurityTerminal = 1,
    KeypadSwitch = 2,
    MotorizedDoor = 3,
    SurveillanceCamera = 4,
    AlarmKlaxon = 5,
    ElevatorCab = 6,
    AmmoSupplyCrate = 7
};

struct DynamicObjectInstance
{
    std::uint32_t instance_id{0};
    DynamicObjectType object_type{DynamicObjectType::SecurityTerminal};
    gameplay::Vector3 position_world{};
    gameplay::Vector3 interaction_trigger_extents{1.5f, 1.5f, 2.0f};
    bool is_interactive{true};
    bool is_active_state{false};
    std::uint32_t security_clearance_level{0};
};

class DynamicObjectNatives final
{
  public:
    // IGI.EXE 0x004C0240: Dynamic interactive world object instantiation
    [[nodiscard]] static DynamicObjectInstance DynObj_CreateMagicObject(
        std::uint32_t instance_id,
        DynamicObjectType object_type,
        const gameplay::Vector3& spawn_position_world,
        std::uint32_t security_clearance = 0) noexcept;

    // IGI.EXE 0x004C0260: Spatial partition query for interactive object proximity
    [[nodiscard]] static std::int32_t DynObj_UpdateDynTree(
        const gameplay::Vector3& query_position_world,
        float interaction_radius_metres,
        const std::vector<DynamicObjectInstance>& active_objects,
        std::vector<std::uint32_t>& out_nearby_object_ids) noexcept;
};

} // namespace igi::retail_natives
```
