#pragma once

#include <cstdint>
#include <string>
#include <vector>
#include <array>
#include "mef_native.h"

struct MEFMaterial {
    int index = 0;
    std::string name;
    std::array<float, 3> diffuse = {0.8f, 0.8f, 0.8f};
    std::array<float, 3> ambient = {0.1f, 0.1f, 0.1f};
    std::array<float, 3> specular = {0.9f, 0.9f, 0.9f};
    std::array<float, 3> emissive = {0.0f, 0.0f, 0.0f};
    float shininess = 0.0f;
    bool has_collision = false;
    // Texture maps (from DiffuseTMap/OpacityTMap/etc. in gconv format)
    std::string diffuse_tmap;
    std::string opacity_tmap;
    std::string bump_tmap;
    std::string reflection_tmap;
};

struct MEFFace {
    int v0 = 0;
    int v1 = 0;
    int v2 = 0;
    int n0 = 0;
    int n1 = 0;
    int n2 = 0;
    int material_index = 0;
    int face_index = 0;
};

// Bone/weight data per vertex (Type 1 skeletal models only)
struct MEFBoneVertex {
    int      index         = 0;
    uint16_t bone_index    = 0;
    float    weight        = 1.0f;
    uint16_t local_vert_id = 0;
};

struct MEFObject {
    std::string name;
    std::vector<MEFMaterial>             materials;
    std::vector<std::array<float, 3>>    vertices;
    std::vector<std::array<float, 3>>    normals;
    std::vector<MEFFace>                 faces;
    std::vector<std::vector<float>>      uvs;
    std::vector<MEFBoneVertex>           bone_vertices; // Type 1 only
    std::vector<MefAttachment>           attachments;
    std::vector<std::string>             parse_errors;
    int model_type = 0; // 0=rigid, 1=bone, 3=lightmap
};

class MEFParser {
public:
    MEFParser();
    ~MEFParser() = default;

    std::vector<MEFObject> parse_file(const std::string& filepath);
    std::vector<MEFObject> parse_string(const std::string& content);

private:
    void reset();
    bool extract_args(const std::string& line, std::string& out_name, std::vector<std::string>& out_args);
    std::vector<float> parse_floats(const std::vector<std::string>& args);
    std::vector<int> parse_ints(const std::vector<std::string>& args);

    void handle_newobject(const std::vector<std::string>& args);
    void handle_material(const std::vector<std::string>& args);
    void handle_materialshininess(const std::vector<std::string>& args);
    void handle_vertex(const std::vector<std::string>& args);
    void handle_normal(const std::vector<std::string>& args);
    void handle_face(const std::vector<std::string>& args);
    void handle_uv(const std::vector<std::string>& args);
    void handle_breakscript(const std::vector<std::string>& args);
    void handle_modeltype(const std::vector<std::string>& args);
    void handle_bonevertex(const std::vector<std::string>& args);
    void handle_attachment(const std::vector<std::string>& args);
    void handle_diffusetmap(const std::vector<std::string>& args);
    void handle_opacitytmap(const std::vector<std::string>& args);
    void handle_bumptmap(const std::vector<std::string>& args);
    void handle_reflectiontmap(const std::vector<std::string>& args);

    std::vector<MEFObject> m_objects;
    MEFObject m_current_object;
    bool m_has_current_object;
};
