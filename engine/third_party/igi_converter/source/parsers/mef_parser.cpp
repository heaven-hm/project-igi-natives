#include <cstring>
#include "mef_parser.h"
#include "../common.h"
#include "../logger.h"
#include <fstream>
#include <sstream>
#include <regex>
#include <algorithm>
#include <stdexcept>

MEFParser::MEFParser() {
    reset();
}

void MEFParser::reset() {
    m_objects.clear();
    m_current_object = MEFObject();
    m_has_current_object = false;
}

std::vector<MEFObject> MEFParser::parse_string(const std::string& content) {
    reset();

    std::stringstream stream(content);
    std::string line;
    int line_num = 0;
    while (std::getline(stream, line)) {
        line_num++;
        // Trim whitespace
        line.erase(0, line.find_first_not_of(" \t\r\n"));
        line.erase(line.find_last_not_of(" \t\r\n") + 1);

        if (line.empty() || line[0] == '#' || (line.size() > 1 && line[0] == '/' && line[1] == '/')) {
            continue; // Skip empty lines and comments
        }

        std::string name;
        std::vector<std::string> args;
        if (extract_args(line, name, args)) {
            if (name == "NewObject") {
                handle_newobject(args);
            } else if (name == "Material") {
                handle_material(args);
            } else if (name == "MaterialShininess") {
                handle_materialshininess(args);
            } else if (name == "Vertex") {
                handle_vertex(args);
            } else if (name == "Normal") {
                handle_normal(args);
            } else if (name == "Face") {
                handle_face(args);
            } else if (name == "UV") {
                handle_uv(args);
            } else if (name == "BreakScript") {
                handle_breakscript(args);
            } else if (name == "ModelType") {
                handle_modeltype(args);
            } else if (name == "BoneVertex") {
                handle_bonevertex(args);
            } else if (name == "Attachment") {
                handle_attachment(args);
            } else if (name == "DiffuseTMap") {
                handle_diffusetmap(args);
            } else if (name == "OpacityTMap") {
                handle_opacitytmap(args);
            } else if (name == "BumpTMap") {
                handle_bumptmap(args);
            } else if (name == "ReflectionTMap") {
                handle_reflectiontmap(args);
            } else {
                // Unknown command, ignore
            }
        } else {
            // Not a function call, skip silently
        }
    }

    if (m_has_current_object) {
        m_objects.push_back(m_current_object);
    }

    return m_objects;
}

std::vector<MEFObject> MEFParser::parse_file(const std::string& filepath) {
    std::ifstream file(filepath);
    if (!file.is_open()) {
        Log(log_type_t::LOG_ERROR, __FILE__, __LINE__, "MEFParser: Failed to open file: %s", filepath.c_str());
        return {};
    }

    std::stringstream buffer;
    buffer << file.rdbuf();

    auto objects = parse_string(buffer.str());
    Log(log_type_t::LOG_INFOR, __FILE__, __LINE__, "MEFParser: Parsed %zu object(s) from %s", objects.size(), filepath.c_str());

    return objects;
}

bool MEFParser::extract_args(const std::string& line, std::string& out_name, std::vector<std::string>& out_args) {
    // Match Name(args);
    std::regex re(R"(^\s*([A-Za-z0-9_]+)\s*\((.*)\)\s*;?\s*$)");
    std::smatch match;
    if (std::regex_match(line, match, re)) {
        out_name = match[1].str();
        std::string args_str = match[2].str();

        if (args_str.find_first_not_of(" \t\r\n") == std::string::npos) {
            return true;
        }

        bool in_quotes = false;
        std::string current_arg;
        for (char c : args_str) {
            if (c == '\"') {
                in_quotes = !in_quotes;
            } else if (c == ',' && !in_quotes) {
                // trim
                size_t start = current_arg.find_first_not_of(" \t\r\n");
                if (start != std::string::npos) {
                    size_t end = current_arg.find_last_not_of(" \t\r\n");
                    out_args.push_back(current_arg.substr(start, end - start + 1));
                } else {
                    out_args.push_back("");
                }
                current_arg.clear();
            } else {
                current_arg += c;
            }
        }
        size_t start = current_arg.find_first_not_of(" \t\r\n");
        if (start != std::string::npos) {
            size_t end = current_arg.find_last_not_of(" \t\r\n");
            out_args.push_back(current_arg.substr(start, end - start + 1));
        } else {
            out_args.push_back("");
        }

        return true;
    }
    return false;
}

std::vector<float> MEFParser::parse_floats(const std::vector<std::string>& args) {
    std::vector<float> floats;
    floats.reserve(args.size());
    for (const auto& arg : args) {
        try {
            floats.push_back(std::stof(arg));
        } catch (const std::exception&) {
            floats.push_back(0.0f);
        }
    }
    return floats;
}

std::vector<int> MEFParser::parse_ints(const std::vector<std::string>& args) {
    std::vector<int> ints;
    ints.reserve(args.size());
    for (const auto& arg : args) {
        try {
            ints.push_back(std::stoi(arg));
        } catch (const std::exception&) {
            ints.push_back(0);
        }
    }
    return ints;
}

void MEFParser::handle_newobject(const std::vector<std::string>& args) {
    if (m_has_current_object) {
        m_objects.push_back(m_current_object);
    }
    m_current_object = MEFObject();
    if (!args.empty()) {
        m_current_object.name = args[0];
    } else {
        m_current_object.name = "object_" + std::to_string(m_objects.size());
    }
    m_has_current_object = true;
}

void MEFParser::handle_material(const std::vector<std::string>& args) {
    if (!m_has_current_object) {
        m_current_object = MEFObject();
        m_current_object.name = "default";
        m_has_current_object = true;
    }
    if (args.size() < 2) return;

    MEFMaterial mat;
    try { mat.index = std::stoi(args[0]); } catch (...) { mat.index = 0; }
    mat.name = args.size() > 1 ? args[1] : "mat_" + std::to_string(mat.index);

    std::vector<std::string> float_args;
    if (args.size() > 2) {
        float_args.insert(float_args.end(), args.begin() + 2, args.end());
    }
    std::vector<float> floats = parse_floats(float_args);
    while (floats.size() < 13) {
        floats.push_back(0.0f);
    }

    mat.diffuse = {floats[0], floats[1], floats[2]};
    mat.ambient = {floats[3], floats[4], floats[5]};
    mat.specular = {floats[6], floats[7], floats[8]};
    mat.emissive = {floats[9], floats[10], floats[11]};
    mat.has_collision = (floats[12] > 0.5f);

    m_current_object.materials.push_back(mat);
}

void MEFParser::handle_materialshininess(const std::vector<std::string>& args) {
    if (!m_has_current_object || m_current_object.materials.empty() || args.size() < 2) {
        return;
    }

    int idx = -1;
    try { idx = std::stoi(args[0]); } catch (...) {}

    float shininess = 0.0f;
    try { shininess = std::stof(args[1]); } catch (...) {}

    for (auto& mat : m_current_object.materials) {
        if (mat.index == idx) {
            mat.shininess = shininess;
            return;
        }
    }

    // Fallback: apply to last material
    m_current_object.materials.back().shininess = shininess;
}

void MEFParser::handle_vertex(const std::vector<std::string>& args) {
    if (!m_has_current_object) {
        m_current_object = MEFObject();
        m_current_object.name = "default";
        m_has_current_object = true;
    }
    if (args.size() < 4) return;

    std::vector<std::string> fargs_strs(args.begin() + 1, args.begin() + 4);
    std::vector<float> fargs = parse_floats(fargs_strs);
    m_current_object.vertices.push_back({fargs[0], fargs[1], fargs[2]});
}

void MEFParser::handle_normal(const std::vector<std::string>& args) {
    if (!m_has_current_object) return;
    if (args.size() < 4) return;

    std::vector<std::string> fargs_strs(args.begin() + 1, args.begin() + 4);
    std::vector<float> fargs = parse_floats(fargs_strs);
    m_current_object.normals.push_back({fargs[0], fargs[1], fargs[2]});
}

void MEFParser::handle_face(const std::vector<std::string>& args) {
    if (!m_has_current_object) return;
    if (args.size() < 8) return;

    std::vector<int> iargs = parse_ints(args);

    MEFFace face;
    face.face_index = iargs[0];
    face.v0 = iargs[1];
    face.v1 = iargs[2];
    face.v2 = iargs[3];
    face.n0 = iargs[4];
    face.n1 = iargs[5];
    face.n2 = iargs[6];
    face.material_index = args.size() > 7 ? iargs[7] : 0;

    int num_vertices = static_cast<int>(m_current_object.vertices.size());
    if (face.v0 < 0 || face.v0 >= num_vertices ||
        face.v1 < 0 || face.v1 >= num_vertices ||
        face.v2 < 0 || face.v2 >= num_vertices) {

        std::string msg = "Face " + std::to_string(face.face_index) + ": vertex index out of range";
        m_current_object.parse_errors.push_back(msg);
        Log(log_type_t::LOG_ERROR, __FILE__, __LINE__, "MEFParser - %s", msg.c_str());
        return;
    }

    int num_normals = static_cast<int>(m_current_object.normals.size());
    if (num_normals > 0) {
        face.n0 = std::clamp(face.n0, 0, num_normals - 1);
        face.n1 = std::clamp(face.n1, 0, num_normals - 1);
        face.n2 = std::clamp(face.n2, 0, num_normals - 1);
    } else {
        face.n0 = face.n1 = face.n2 = 0;
    }

    m_current_object.faces.push_back(face);
}

void MEFParser::handle_uv(const std::vector<std::string>& args) {
    if (!m_has_current_object) return;
    if (args.size() < 1) return;

    std::vector<std::string> fargs_strs;
    if (args.size() > 1) {
        fargs_strs.insert(fargs_strs.end(), args.begin() + 1, args.end());
    }
    m_current_object.uvs.push_back(parse_floats(fargs_strs));
}

void MEFParser::handle_breakscript(const std::vector<std::string>& args) {
    // BreakScript is a separator; no action needed in Python other than pass, but if we wanted to push the current object we could.
    // The python code just does `pass`
}

void MEFParser::handle_modeltype(const std::vector<std::string>& args) {
    if (!m_has_current_object || args.empty()) return;
    try { m_current_object.model_type = std::stoi(args[0]); } catch (...) {}
}

void MEFParser::handle_bonevertex(const std::vector<std::string>& args) {
    if (!m_has_current_object || args.size() < 4) return;
    MEFBoneVertex bv;
    try { bv.index         = std::stoi(args[0]); } catch (...) {}
    try { bv.bone_index    = static_cast<uint16_t>(std::stoi(args[1])); } catch (...) {}
    try { bv.weight        = std::stof(args[2]); } catch (...) {}
    try { bv.local_vert_id = static_cast<uint16_t>(std::stoi(args[3])); } catch (...) {}
    m_current_object.bone_vertices.push_back(bv);
}

void MEFParser::handle_attachment(const std::vector<std::string>& args) {
    if (!m_has_current_object || args.size() < 14) return;
    MefAttachment a;
    std::memset(&a, 0, sizeof(a));

    std::string name = args[0];
    if (name.size() >= 2 && name.front() == '"' && name.back() == '"') {
        name = name.substr(1, name.size() - 2);
    }
    std::strncpy(a.name, name.c_str(), 15);

    auto floats = parse_floats(std::vector<std::string>(args.begin() + 1, args.begin() + 13));
    if (floats.size() == 12) {
        a.px = floats[0]; a.py = floats[1]; a.pz = floats[2];
        a.r00 = floats[3]; a.r01 = floats[4]; a.r02 = floats[5];
        a.r03 = floats[6]; a.r04 = floats[7]; a.r05 = floats[8];
        a.r06 = floats[9]; a.r07 = floats[10]; a.r08 = floats[11];
    }

    try { a.boneId = std::stoi(args[13]); } catch (...) { a.boneId = -1; }
    m_current_object.attachments.push_back(a);
}

// Helper: extract texture path from DiffuseTMap/etc. args
// Args: matIndex, "path", mode, flags  (path may be bare or quoted)
static std::string ExtractTmapPath(const std::vector<std::string>& args) {
    if (args.size() < 2) return {};
    std::string path = args[1];
    if (path.size() >= 2 && path.front() == '"' && path.back() == '"')
        path = path.substr(1, path.size() - 2);
    return path;
}

static MEFMaterial* FindMaterial(MEFObject& obj, const std::vector<std::string>& args) {
    if (args.empty() || obj.materials.empty()) return nullptr;
    int idx = 0;
    try { idx = std::stoi(args[0]); } catch (...) {}
    for (auto& mat : obj.materials)
        if (mat.index == idx) return &mat;
    return nullptr;
}

void MEFParser::handle_diffusetmap(const std::vector<std::string>& args) {
    if (!m_has_current_object) return;
    if (auto* mat = FindMaterial(m_current_object, args))
        mat->diffuse_tmap = ExtractTmapPath(args);
}

void MEFParser::handle_opacitytmap(const std::vector<std::string>& args) {
    if (!m_has_current_object) return;
    if (auto* mat = FindMaterial(m_current_object, args))
        mat->opacity_tmap = ExtractTmapPath(args);
}

void MEFParser::handle_bumptmap(const std::vector<std::string>& args) {
    if (!m_has_current_object) return;
    if (auto* mat = FindMaterial(m_current_object, args))
        mat->bump_tmap = ExtractTmapPath(args);
}

void MEFParser::handle_reflectiontmap(const std::vector<std::string>& args) {
    if (!m_has_current_object) return;
    if (auto* mat = FindMaterial(m_current_object, args))
        mat->reflection_tmap = ExtractTmapPath(args);
}
