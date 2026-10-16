#include "igi/human_movement_integrator.hpp"

#include <cmath>
#include <iostream>
#include <string_view>
#include <vector>

namespace {

using igi::gameplay::HumanMovementIntegrator;
using igi::gameplay::HumanMovementState;
using igi::gameplay::HumanMovementWorld;
using igi::gameplay::Vector3;
using igi::gameplay::WorldPosition3;

enum class WorldCall {
    wall_sweep,
    ground_query,
    human_separation,
    transform_commit,
};

class RecordingMovementWorld final : public HumanMovementWorld {
  public:
    std::vector<WorldCall> calls;
    WorldPosition3 recorded_starting_position{};
    WorldPosition3 recorded_destination_position{};
    Vector3 recorded_movement_delta{};
    float recorded_ground_query_budget{};
    float recorded_collision_radius{};

    void sweep_walls(HumanMovementState&, const WorldPosition3& starting_position,
                     WorldPosition3& destination_position, Vector3& movement_delta) override {
        calls.push_back(WorldCall::wall_sweep);
        record_positions(starting_position, destination_position, movement_delta);
    }

    void query_ground(HumanMovementState&, const WorldPosition3& starting_position,
                      WorldPosition3& destination_position, Vector3& movement_delta,
                      float vertical_query_budget) override {
        calls.push_back(WorldCall::ground_query);
        recorded_ground_query_budget = vertical_query_budget;
        record_positions(starting_position, destination_position, movement_delta);
    }

    void separate_humans(HumanMovementState&, const WorldPosition3& starting_position,
                         WorldPosition3& destination_position, Vector3& movement_delta) override {
        calls.push_back(WorldCall::human_separation);
        record_positions(starting_position, destination_position, movement_delta);
    }

    void commit_transform(HumanMovementState& human, const WorldPosition3& destination_position,
                          float collision_radius) override {
        calls.push_back(WorldCall::transform_commit);
        recorded_collision_radius = collision_radius;
        recorded_destination_position = destination_position;
        human.world_position = destination_position;
    }

  private:
    void record_positions(const WorldPosition3& starting_position,
                          const WorldPosition3& destination_position,
                          const Vector3& movement_delta) {
        recorded_starting_position = starting_position;
        recorded_destination_position = destination_position;
        recorded_movement_delta = movement_delta;
    }
};

bool approximately_equal(double first_value, double second_value, double tolerance = 0.0001) {
    return std::fabs(first_value - second_value) <= tolerance;
}

bool fail(std::string_view message) {
    std::cerr << "[FAIL] [HumanMovementIntegrator] " << message << '\n';
    return false;
}

bool verify_movement_composition_and_query_order() {
    HumanMovementState human{};
    human.world_position = {100.0, 200.0, 300.0};
    human.position_adjustment = {0.5f, -1.0f, 2.0f};
    human.base_movement = {1.0f, 2.0f, 3.0f};
    human.animation_movement = {4.0f, 5.0f, 6.0f};
    human.velocity = {10.0f, -20.0f, 30.0f};
    human.movement_flags =
        HumanMovementIntegrator::grounded_flag | HumanMovementIntegrator::roof_contact_flag;
    human.wall_sweep_enabled = true;
    human.ground_query_enabled = true;
    human.separation_enabled = true;
    human.collision_radius = 12.0f;

    RecordingMovementWorld world{};
    HumanMovementIntegrator integrator{};
    integrator.update(human, world);

    const std::vector<WorldCall> expected_call_order{
        WorldCall::wall_sweep,
        WorldCall::ground_query,
        WorldCall::human_separation,
        WorldCall::transform_commit,
    };
    if (world.calls != expected_call_order) {
        return fail("world queries or transform commit ran in the wrong order");
    }
    if (world.recorded_starting_position.x != 100.5 ||
        world.recorded_starting_position.y != 199.0 ||
        world.recorded_starting_position.z != 302.0) {
        return fail("position adjustments were not applied before collision queries");
    }
    if (!approximately_equal(world.recorded_movement_delta.x, 14.0) ||
        !approximately_equal(world.recorded_movement_delta.y, -11.0) ||
        !approximately_equal(world.recorded_movement_delta.z, 36.0)) {
        return fail("damped velocity and movement vectors were not composed correctly");
    }
    if (world.recorded_ground_query_budget != 2048.0f) {
        return fail("grounded movement used the wrong vertical query budget");
    }
    if (!approximately_equal(world.recorded_collision_radius, 12.0) ||
        !approximately_equal(world.recorded_destination_position.x, 114.5) ||
        !approximately_equal(world.recorded_destination_position.y, 188.0) ||
        !approximately_equal(world.recorded_destination_position.z, 338.0)) {
        return fail("the adjusted destination or collision radius was not committed");
    }
    if (!approximately_equal(human.velocity.x, 9.0) ||
        !approximately_equal(human.velocity.y, -18.0) ||
        !approximately_equal(human.velocity.z, 27.0)) {
        return fail("velocity did not receive the retail 0.9 damping");
    }
    if (!approximately_equal(human.committed_movement.x, 14.5) ||
        !approximately_equal(human.committed_movement.y, -12.0) ||
        !approximately_equal(human.committed_movement.z, 38.0)) {
        return fail("position adjustment was not included in committed movement");
    }
    if ((human.movement_flags & HumanMovementIntegrator::roof_contact_flag) != 0) {
        return fail("roof-contact flag was not cleared before collision processing");
    }

    return true;
}

bool verify_slope_slide_and_ground_query_budget() {
    HumanMovementState human{};
    human.slope_processing_enabled = true;
    human.movement_flags = HumanMovementIntegrator::grounded_flag;
    human.slope_normal = {1.0f, 0.0f, 0.0f};
    human.ground_query_enabled = true;

    RecordingMovementWorld world{};
    HumanMovementIntegrator integrator{};
    integrator.update(human, world);

    if (!approximately_equal(human.slide_acceleration.x, 1023.3)) {
        return fail("extreme-slope acceleration did not receive the retail damping");
    }
    if (world.recorded_ground_query_budget != 8192.0f) {
        return fail("sliding movement did not select the extended ground query budget");
    }
    if (!approximately_equal(world.recorded_destination_position.x, 1023.3)) {
        return fail("slope slide acceleration was not included in the destination");
    }

    return true;
}

} // namespace

int main() {
    if (!verify_movement_composition_and_query_order() ||
        !verify_slope_slide_and_ground_query_budget()) {
        return 1;
    }

    std::cout << "[PASS] [HumanMovementIntegrator] retail-derived movement checks passed\n";
    return 0;
}
