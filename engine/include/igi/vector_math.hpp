#pragma once

#include "igi/human_motion.hpp"

#include <cmath>

namespace igi::gameplay {

inline Vector3 operator+(Vector3 first, Vector3 second) noexcept {
    return {first.x + second.x, first.y + second.y, first.z + second.z};
}
inline Vector3 operator-(Vector3 first, Vector3 second) noexcept {
    return {first.x - second.x, first.y - second.y, first.z - second.z};
}
inline Vector3 operator*(Vector3 vector, float factor) noexcept {
    return {vector.x * factor, vector.y * factor, vector.z * factor};
}
inline float dot(Vector3 first, Vector3 second) noexcept {
    return first.x * second.x + first.y * second.y + first.z * second.z;
}
inline Vector3 cross(Vector3 first, Vector3 second) noexcept {
    return {first.y * second.z - first.z * second.y,
            first.z * second.x - first.x * second.z,
            first.x * second.y - first.y * second.x};
}
inline float length(Vector3 vector) noexcept {
    return std::sqrt(dot(vector, vector));
}
inline Vector3 normalized(Vector3 vector) noexcept {
    const float magnitude = length(vector);
    return magnitude > 0.000001f ? vector * (1.0f / magnitude) : Vector3{};
}
inline bool finite(Vector3 vector) noexcept {
    return std::isfinite(vector.x) && std::isfinite(vector.y) && std::isfinite(vector.z);
}

} // namespace igi::gameplay
