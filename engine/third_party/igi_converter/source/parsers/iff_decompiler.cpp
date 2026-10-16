#include "iff_decompiler.h"
#include "iff_parser.h"

#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace igiconv {

namespace {

namespace fs = std::filesystem;

// Format a float compactly (matches BEF writer style: %.9g).
std::string fmt_float(float v) {
    if (v == 0.0f) return "0.0";
    char buf[64];
    std::snprintf(buf, sizeof(buf), "%.9g", (double)v);
    return buf;
}

// Pad a clip id to 3 digits (matches "anim_004" naming used everywhere).
std::string pad3(int n) {
    char b[8];
    std::snprintf(b, sizeof(b), "%03d", n);
    return b;
}

// ─── Text writers for the two file types ──────────────────────────────

void write_main_iff_text(const std::string& path, const std::string& baseName,
                         const IffFile& iff)
{
    std::ofstream o(path);
    o << "\n\\\\ Anim Name \n\n";
    o << "[(\"" << baseName << "\")]\n\n";

    o << "\n\\\\ Bone Header \n\n";
    o << "(" << (int)iff.skeleton.object_id << ", " << iff.skeleton.bone_count << ")\n\n";

    o << "\n\\\\ Bone Links \n\n";
    o << "[";
    for (size_t i = 0; i < iff.skeleton.parents.size(); ++i) {
        o << (i ? ", " : "") << iff.skeleton.parents[i];
    }
    o << "]\n\n";

    o << "\n\\\\ Bone Hierarchy \n\n";
    o << "[";
    for (size_t i = 0; i < iff.skeleton.translations.size() / 3; ++i) {
        o << (i ? ", " : "") << "("
          << fmt_float(iff.skeleton.translations[i*3+0]) << ", "
          << fmt_float(iff.skeleton.translations[i*3+1]) << ", "
          << fmt_float(iff.skeleton.translations[i*3+2]) << ")";
    }
    o << "]\n";

    o << "\n\n\\\\ Anims Header \n\n";
    o << "(" << (int)iff.clips.size() << ", " << (int)iff.animation_capacity << ")\n";

    o << "\n\n\\\\ Anims List \n\n";
    o << "[";
    for (size_t i = 0; i < iff.clips.size(); ++i) {
        int id = (int)iff.clips[i].animation_id;
        o << (i ? " " : "") << "(\"anims_" << baseName << "\\anim_"
          << pad3(id) << ".IFF\")";
        if (i + 1 < iff.clips.size()) o << "\n";
    }
    o << "]\n";
}

void write_per_anim_iff_text(const std::string& path, const std::string& baseName,
                             const IffClip& clip)
{
    std::ofstream o(path);
    int animId = (int)clip.animation_id;

    o << "\n\\\\ Anim Category \n\n";
    o << "[(\"anim_" << pad3(animId) << ".IFF\")]\n\n";

    o << "\n\\\\ Anim Header \n\n";
    o << "(" << fmt_float(clip.duration) << ", 0, "
      << (int)clip.flags << ", " << animId << ")\n\n";

    // Trigger events.
    o << "\n\\\\ Bone Trigger Events \n\n";
    o << "(" << (int)clip.events.size() << ",)\n";
    o << "[";
    for (size_t i = 0; i < clip.events.size(); ++i) {
        const auto& e = clip.events[i];
        o << (i ? ",\n " : "") << "(" << e.event_id << ", " << e.time << ", "
          << e.bone_id << ", " << fmt_float(e.pos[0]) << ", "
          << fmt_float(e.pos[1]) << ", " << fmt_float(e.pos[2]) << ")";
    }
    o << "]\n";

    // Translation frames (root only - 1 track).
    o << "\n\\\\ Bone Translation Frames \n\n";
    o << "(" << (int)clip.root_translations.size() << ",)\n";
    o << "[";
    for (size_t i = 0; i < clip.root_translations.size(); ++i) {
        const auto& k = clip.root_translations[i];
        o << (i ? ",\n " : "") << "(" << k.pos[0] << ", " << k.pos[1] << ", "
          << k.pos[2] << ", " << k.time << ", "
          << k.tangent_in[0] << ", " << k.tangent_in[1] << ", " << k.tangent_in[2] << ", "
          << k.tangent_out[0] << ", " << k.tangent_out[1] << ", " << k.tangent_out[2] << ")";
    }
    o << "]\n";

    // Rotation frames - one (count, list) pair per bone.
    o << "\n\\\\ Bone Rotation Frames \n\n";
    o << "(";
    for (size_t i = 0; i < clip.bone_rotations.size(); ++i) {
        o << (i ? ", " : "") << (int)clip.bone_rotations[i].size();
    }
    o << ",)\n[";
    bool firstKey = true;
    for (size_t i = 0; i < clip.bone_rotations.size(); ++i) {
        for (const auto& k : clip.bone_rotations[i]) {
            if (!firstKey) o << ",\n ";
            firstKey = false;
            o << "(00)(" << i << ")("
              << k.rot[0] << ", " << k.rot[1] << ", " << k.rot[2] << ", " << k.rot[3] << ", "
              << k.time << ", "
              << k.rot_b[0] << ", " << k.rot_b[1] << ", " << k.rot_b[2] << ", " << k.rot_b[3] << ", "
              << k.rot_c[0] << ", " << k.rot_c[1] << ", " << k.rot_c[2] << ", " << k.rot_c[3] << ")";
        }
    }
    o << "]\n";
}

} // namespace

bool IFF_Decompile(const std::string& srcIffPath,
                   const std::string& outDir,
                   std::string* err)
{
    if (!fs::exists(srcIffPath)) {
        if (err) *err = "source IFF not found: " + srcIffPath;
        return false;
    }
    fs::create_directories(outDir);

    IffFile iff = IFF_Parse(srcIffPath, /*logger*/nullptr);
    if (!iff.valid) {
        if (err) *err = "failed to parse IFF: " + srcIffPath;
        return false;
    }

    // Use the file stem (e.g. "003" for "003.IFF") as the model id.
    std::string baseName = fs::path(srcIffPath).stem().string();

    // Write the main .IFF text.
    std::string mainPath = (fs::path(outDir) / (baseName + ".IFF")).string();
    write_main_iff_text(mainPath, baseName, iff);

    // Write one .IFF per animation into anims_<id>/.
    fs::path animsDir = fs::path(outDir) / ("anims_" + baseName);
    fs::create_directories(animsDir);
    for (const auto& clip : iff.clips) {
        std::string fname = "anim_" + pad3((int)clip.animation_id) + ".IFF";
        write_per_anim_iff_text((animsDir / fname).string(), baseName, clip);
    }
    return true;
}

// ─── Reverse path: load decompiled IFF text back into BEF structs ───

namespace {

// Strip surrounding "[]" from a string like "[1, 2, 3]" -> "1, 2, 3".
std::string strip_brackets(const std::string& s) {
    size_t a = s.find('[');
    size_t b = s.find(']', a == std::string::npos ? 0 : a);
    if (a == std::string::npos || b == std::string::npos || b <= a + 1) return "";
    return s.substr(a + 1, b - a - 1);
}

// Strip surrounding "()" from a string like "(1, 2, 3)" -> "1, 2, 3".
std::string strip_parens(const std::string& s) {
    size_t a = s.find('(');
    size_t b = s.find(')', a == std::string::npos ? 0 : a);
    if (a == std::string::npos || b == std::string::npos || b <= a + 1) return "";
    return s.substr(a + 1, b - a - 1);
}

// Split a comma-separated list into tokens, respecting nested parens.
std::vector<std::string> split_csv(const std::string& s) {
    std::vector<std::string> out;
    std::string cur;
    int depth = 0;
    for (char c : s) {
        if (c == '(') { ++depth; cur.push_back(c); }
        else if (c == ')') { --depth; cur.push_back(c); }
        else if (c == ',' && depth == 0) { out.push_back(cur); cur.clear(); }
        else cur.push_back(c);
    }
    if (!cur.empty()) out.push_back(cur);
    return out;
}

// Strip a single pair of outer "" from a token, if present.
std::string strip_quotes(const std::string& s) {
    if (s.size() >= 2 && s.front() == '"' && s.back() == '"')
        return s.substr(1, s.size() - 2);
    return s;
}

bool parse_float(const std::string& s, double& out) {
    if (s.empty()) return false;
    try { size_t p = 0; out = std::stod(s, &p); return p == s.size(); }
    catch (...) { return false; }
}
bool parse_int(const std::string& s, long& out) {
    double d;
    if (!parse_float(s, d)) return false;
    out = (long)d;
    return true;
}

// Find the line in a file that contains a section heading like
// "\\ Bone Links" and return the index of the next "data" line
// (the one that starts with the first non-comment, non-heading
// content).  Returns -1 if not found.
int find_section(std::ifstream& f, const std::string& heading) {
    std::string line;
    int idx = 0;
    int foundAt = -1;
    while (std::getline(f, line)) {
        if (line.find(heading) != std::string::npos) {
            foundAt = idx;
            break;
        }
        ++idx;
    }
    if (foundAt < 0) return -1;
    // The "data line" is the first non-empty line AFTER the heading.
    // Caller will read this line next via a fresh getline.
    return foundAt;
}

// Parse a per-anim .IFF text file (as written by write_per_anim_iff_text)
// into a BefFile.  `baseName` is the model id (e.g. "003") used to fill
// out the anim_name ("<baseName>_anim_<id>").
bool parse_per_anim_iff_text(const std::string& path,
                             const std::string& baseName,
                             BefFile& out,
                             std::string* err)
{
    std::ifstream f(path);
    if (!f.is_open()) {
        if (err) *err = "cannot open " + path;
        return false;
    }
    std::string line;
    bool gotAnim = false, gotTrans = false, gotRot = false;
    std::vector<int> rotCounts;   // unused for now; rotations are flat
    while (std::getline(f, line)) {
        if (line.find("Anim Header") != std::string::npos) {
            // The next non-empty line is "(length, _u16, _u16, id)".
            std::string data;
            while (std::getline(f, data)) {
                size_t a = data.find_first_not_of(" \t");
                if (a == std::string::npos) continue;
                if (data[a] == '\\' || data[a] == '[' || data[a] == '(' || data[a] == '\"') {
                    // Possibly already on a data line.
                    if (data.find('(') != std::string::npos) break;
                    continue;
                }
                break;
            }
            std::string inner = strip_parens(data);
            auto toks = split_csv(inner);
            if (toks.size() < 4) {
                if (err) *err = "Anim Header parse failed in " + path;
                return false;
            }
            // Token layout produced by the decompiler:
            //   toks[0] = length (float, ms)
            //   toks[1] = literal "0" (placeholder for the
            //              2x u16 we cannot recover from this text format
            //              without changing the wire representation)
            //   toks[2] = clip flags (int, raw value before sign-conversion)
            //   toks[3] = animation id (int)
            double length; long id;
            if (!parse_float(toks[0], length)) { if (err) *err = "bad length"; return false; }
            if (!parse_int(toks[3], id))      { if (err) *err = "bad id";      return false; }
            uint32_t rawFlags = 0;
            try { rawFlags = (uint32_t)std::stoul(toks[2]); } catch (...) {}
            out.length_ms = (int)length;
            out.tp_flag    = (rawFlags & 1u) ? 1 : 0;
            out.flags      = (int)rawFlags;
            out.anim_name  = baseName + "_anim_" + pad3((int)id);
            gotAnim = true;
        } else if (line.find("Bone Trigger Events") != std::string::npos) {
            // Skip the (count,) line, then parse events in [].
            std::string data;
            while (std::getline(f, data)) {
                if (data.find('[') != std::string::npos) break;
            }
            // Accumulate lines until we see the closing ']'
            if (data.find('[') != std::string::npos) {
                std::string acc = data;
                while (acc.find(']') == std::string::npos && std::getline(f, data)) {
                    acc.push_back('\n');
                    acc += data;
                }
                std::string inner = strip_brackets(acc);
                if (!inner.empty()) {
                    std::string flat;
                    for (char c : inner) flat.push_back(c == '\n' ? ' ' : c);
                    int idx = 0;
                    size_t p = 0;
                    while (p < flat.size()) {
                        size_t o = flat.find('(', p);
                        if (o == std::string::npos) break;
                        size_t c = flat.find(')', o);
                        if (c == std::string::npos) break;
                        std::string tup = flat.substr(o + 1, c - o - 1);
                        auto parts = split_csv(tup);
                        BefEvent e;
                        e.index = idx++;
                        long v; double d;
                        if (parts.size() >= 6) {
                            parse_int(parts[0], v); e.event_id = (int)v;
                            parse_float(parts[1], d); e.time_ms = (int)d;
                            parse_int(parts[2], v); e.bone_id = (int)v;
                            parse_float(parts[3], d); e.px = (float)d;
                            parse_float(parts[4], d); e.py = (float)d;
                            parse_float(parts[5], d); e.pz = (float)d;
                        }
                        out.events.push_back(e);
                        p = c + 1;
                    }
                }
            }
        } else if (line.find("Bone Translation Frames") != std::string::npos) {
            std::string data;
            while (std::getline(f, data)) {
                if (data.find('[') != std::string::npos) break;
            }
            if (data.find('[') != std::string::npos) {
                std::string acc = data;
                while (acc.find(']') == std::string::npos && std::getline(f, data)) {
                    acc.push_back('\n');
                    acc += data;
                }
                std::string inner = strip_brackets(acc);
                if (!inner.empty()) {
                    std::string flat;
                    for (char c : inner) flat.push_back(c == '\n' ? ' ' : c);
                    size_t p = 0;
                    while (p < flat.size()) {
                        size_t o = flat.find('(', p);
                        if (o == std::string::npos) break;
                        size_t c = flat.find(')', o);
                        if (c == std::string::npos) break;
                        std::string tup = flat.substr(o + 1, c - o - 1);
                        auto parts = split_csv(tup);
                        BefTranslationKey k;
                        k.track = 0; k.flag = 0;
                        long v; double d;
                        if (parts.size() >= 10) {
                            parse_int(parts[0], v); k.time_ms = (int)v;
                            parse_float(parts[1], d); k.px = (float)d;
                            parse_float(parts[2], d); k.py = (float)d;
                            parse_float(parts[3], d); k.pz = (float)d;
                            // tangents at 4-6, 7-9 - we don't need them in BEF.
                        }
                        out.translations.push_back(k);
                        p = c + 1;
                    }
                }
            }
            gotTrans = true;
        } else if (line.find("Bone Rotation Frames") != std::string::npos) {
            // Skip the count line "(n0, n1, ...)" (one count per bone).
            std::string data;
            while (std::getline(f, data)) {
                if (data.find('[') != std::string::npos) break;
            }
            // Accumulate subsequent lines until we see ']'.
            if (data.find('[') != std::string::npos) {
                std::string acc = data;
                while (acc.find(']') == std::string::npos && std::getline(f, data)) {
                    acc.push_back('\n');
                    acc += data;
                }
                std::string inner = strip_brackets(acc);
                                if (!inner.empty()) {
                // Each rotation key is "(00)(<bone>)(<13 floats>)" and
                // keys are separated by ",\n" or "," with possible
                // whitespace.  Use a state machine to find each key.
                std::string flat;
                for (char c : inner) flat.push_back(c == '\n' ? ' ' : c);
                int keysRead = 0;
                size_t p = 0;
                int iter = 0;
                while (p < flat.size()) {
                    // Find the start of a key - it begins with "(00)"
                    // (possibly preceded by a space or comma).
                    size_t keyStart = flat.find("(00)", p);
                    if (keyStart == std::string::npos) break;
                    // Skip past "(00)" and the inner "(<bone>)" pair to
                    // reach the floats group "(...13 floats...)".
                    size_t scan = keyStart + 4; // past "(00)"
                    while (scan < flat.size() && flat[scan] != '(') ++scan;
                    if (scan >= flat.size()) break;
                    ++scan; // past '('
                    int depth = 1;
                    while (scan < flat.size() && depth > 0) {
                        if (flat[scan] == '(') ++depth;
                        else if (flat[scan] == ')') --depth;
                        ++scan;
                    }
                    if (scan >= flat.size()) break;
                    // We're now just after the bone's ')'.  Skip whitespace
                    // to the next '(' which starts the floats group.
                    while (scan < flat.size() && flat[scan] != '(') ++scan;
                    if (scan >= flat.size()) break;
                    ++scan; // past '('
                    // The floats group contains only digits, commas and
                    // dots - no parens - so the very next ')' is the
                    // end of this key.
                    while (scan < flat.size() && flat[scan] != ')') ++scan;
                    if (scan >= flat.size()) break;
                    size_t keyEnd = scan;
                    std::string key = flat.substr(keyStart, keyEnd - keyStart + 1);
                    p = keyEnd + 1;
                    // Now parse the key: extract tokens split by ( ) , whitespace
                    // and skip the first "(00)" prefix.
                    std::vector<std::string> parts;
                    std::string cur;
                    for (size_t i = 0; i < key.size(); ++i) {
                        char ch = key[i];
                        if (ch == '(' || ch == ')' || ch == ',') {
                            if (!cur.empty()) { parts.push_back(cur); cur.clear(); }
                        } else if (std::isspace((unsigned char)ch)) {
                            if (!cur.empty()) { parts.push_back(cur); cur.clear(); }
                        } else {
                            cur.push_back(ch);
                        }
                    }
                    if (!cur.empty()) parts.push_back(cur);
                    if (parts.size() < 15) continue;
                    BefRotationKey k;
                    long v; double d;
                    parse_int(parts[1], v); k.bone = (int)v;
                    k.flag = 0;
                    parse_float(parts[2], d);  k.q0[0] = (float)d;
                    parse_float(parts[3], d);  k.q0[1] = (float)d;
                    parse_float(parts[4], d);  k.q0[2] = (float)d;
                    parse_float(parts[5], d);  k.q0[3] = (float)d;
                    parse_float(parts[6], d);  k.time_ms = (int)d;
                    parse_float(parts[7], d);  k.q1[0] = (float)d;
                    parse_float(parts[8], d);  k.q1[1] = (float)d;
                    parse_float(parts[9], d);  k.q1[2] = (float)d;
                    parse_float(parts[10], d); k.q1[3] = (float)d;
                    parse_float(parts[11], d); k.q2[0] = (float)d;
                    parse_float(parts[12], d); k.q2[1] = (float)d;
                    parse_float(parts[13], d); k.q2[2] = (float)d;
                    parse_float(parts[14], d); k.q2[3] = (float)d;
                    out.rotations.push_back(k);
                }
                }
            }
            gotRot = true;
        }
    }
    if (!gotAnim) {
        if (err) *err = "no Anim Header section in " + path;
        return false;
    }
    if (!gotTrans) {
        if (err) *err = "no Bone Translation Frames section in " + path;
        return false;
    }
    if (!gotRot) {
        if (err) *err = "no Bone Rotation Frames section in " + path;
        return false;
    }
    return true;
}

} // namespace

bool IFF_LoadDecompiledDir(const std::string& outDir,
                           const std::string& baseName,
                           std::vector<BefFile>& clipsOut,
                           BefFile& skeletonOut,
                           std::string* err)
{
    clipsOut.clear();
    skeletonOut = BefFile{};

    fs::path mainPath = fs::path(outDir) / (baseName + ".IFF");
    if (!fs::exists(mainPath)) {
        if (err) *err = "main IFF text not found: " + mainPath.string();
        return false;
    }
    std::ifstream mf(mainPath);
    if (!mf.is_open()) {
        if (err) *err = "cannot open " + mainPath.string();
        return false;
    }
    std::string line;
    bool gotBones = false, gotParents = false, gotTrans = false;
    bool gotAnimsHeader = false, gotAnimsList = false;
    int expectedAnimCount = 0;
    std::vector<std::string> animRefs;

    while (std::getline(mf, line)) {
        if (line.find("Bone Header") != std::string::npos) {
            // Next non-empty line is "(obj_id, bone_count)"
            std::string data;
            while (std::getline(mf, data)) {
                if (data.find('(') != std::string::npos) break;
            }
            std::string inner = strip_parens(data);
            auto toks = split_csv(inner);
            long v;
            if (toks.size() >= 2) parse_int(toks[1], v);
            int nBones = (int)v;
            skeletonOut.bones.reserve(nBones);
            for (int i = 0; i < nBones; ++i) {
                BefBone b;
                b.index = i;
                b.name = "Bone_" + (i < 10 ? std::string("0") + std::to_string(i)
                                            : std::to_string(i));
                b.parent = -1;
                skeletonOut.bones.push_back(b);
            }
            gotBones = true;
        } else if (line.find("Bone Links") != std::string::npos) {
            std::string data;
            while (std::getline(mf, data)) {
                if (data.find('[') != std::string::npos) break;
            }
            std::string inner = strip_brackets(data);
            auto toks = split_csv(inner);
            for (size_t i = 0; i < toks.size() && i < skeletonOut.bones.size(); ++i) {
                long v;
                if (parse_int(toks[i], v)) skeletonOut.bones[i].parent = (int)v;
            }
            gotParents = true;
        } else if (line.find("Bone Hierarchy") != std::string::npos) {
            std::string data;
            while (std::getline(mf, data)) {
                if (data.find('[') != std::string::npos) break;
            }
            std::string inner = strip_brackets(data);
            std::string flat;
            for (char c : inner) flat.push_back(c == '\n' ? ' ' : c);
            size_t p = 0;
            size_t boneIdx = 0;
            while (p < flat.size() && boneIdx < skeletonOut.bones.size()) {
                size_t o = flat.find('(', p);
                if (o == std::string::npos) break;
                size_t c = flat.find(')', o);
                if (c == std::string::npos) break;
                std::string tup = flat.substr(o + 1, c - o - 1);
                auto parts = split_csv(tup);
                if (parts.size() >= 3) {
                    double x, y, z;
                    parse_float(parts[0], x);
                    parse_float(parts[1], y);
                    parse_float(parts[2], z);
                    skeletonOut.bones[boneIdx].px = (float)x;
                    skeletonOut.bones[boneIdx].py = (float)y;
                    skeletonOut.bones[boneIdx].pz = (float)z;
                }
                ++boneIdx;
                p = c + 1;
            }
            gotTrans = true;
        } else if (line.find("Anims Header") != std::string::npos) {
            std::string data;
            while (std::getline(mf, data)) {
                if (data.find('(') != std::string::npos) break;
            }
            std::string inner = strip_parens(data);
            auto toks = split_csv(inner);
            if (!toks.empty()) {
                long v;
                if (parse_int(toks[0], v)) expectedAnimCount = (int)v;
            }
            gotAnimsHeader = true;
        } else if (line.find("Anims List") != std::string::npos) {
            // The Anims List is multi-line - accumulate everything from
            // the first '[' to the closing ']'.
            std::string data;
            while (std::getline(mf, data)) {
                if (data.find('[') != std::string::npos) break;
            }
            if (data.find('[') == std::string::npos) { /* give up */ }
            else {
                std::string acc = data;
                while (acc.find(']') == std::string::npos && std::getline(mf, data)) {
                    acc.push_back('\n');
                    acc += data;
                }
                std::string inner = strip_brackets(acc);
                std::string flat;
                for (char c : inner) flat.push_back(c == '\n' ? ' ' : c);
                size_t p = 0;
                while (p < flat.size()) {
                    size_t o = flat.find('"', p);
                    if (o == std::string::npos) break;
                    size_t c = flat.find('"', o + 1);
                    if (c == std::string::npos) break;
                    animRefs.push_back(flat.substr(o + 1, c - o - 1));
                    p = c + 1;
                }
            }
            gotAnimsList = true;
        }
    }
    if (!gotBones || !gotParents || !gotTrans) {
        if (err) *err = "main IFF text is missing bone sections: " + mainPath.string();
        return false;
    }
    if (!gotAnimsList) {
        if (err) *err = "main IFF text has no Anims List";
        return false;
    }

    fs::path animsDir = fs::path(outDir) / ("anims_" + baseName);
    for (const auto& ref : animRefs) {
        // ref is something like "anims_003\anim_002.IFF" - take the
        // base name (after the last path separator, if any) and join
        // it to the anims dir.
        std::string leaf = ref;
        size_t sep = leaf.find_last_of("/\\");
        if (sep != std::string::npos) leaf = leaf.substr(sep + 1);
        fs::path p = animsDir / leaf;
        if (!fs::exists(p)) {
            if (err) *err = "missing per-anim file: " + p.string();
            return false;
        }
        BefFile clip;
        std::string e;
        if (!parse_per_anim_iff_text(p.string(), baseName, clip, &e)) {
            if (err) *err = p.string() + ": " + e;
            return false;
        }
        clipsOut.push_back(std::move(clip));
    }
    if ((int)clipsOut.size() != expectedAnimCount && expectedAnimCount > 0) {
        // Non-fatal but warn; engine doesn't care.
    }
    return true;
}

} // namespace igiconv
