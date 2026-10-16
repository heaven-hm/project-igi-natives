#include "iff_writer.h"
#include "iff_bef.h"

#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

namespace igiconv {

namespace {

namespace fs = std::filesystem;
constexpr float IGI_SCALE = 40.96f;

// ─── Binary writer helpers ──────────────────────────────────────────────
//
// All multi-byte data is little-endian.  Chunk tags + FORM/BOBJ/BOBH/etc
// header sizes are big-endian (network byte order), matching the IFF
// "FORM" convention used by the reference dconv Python writer.
//
// Note: the FORM/BOBJ root size in real IGI 1 binaries is intentionally
// "broken" (a small number that does NOT match the actual file size) -
// the engine walks the tree by tag rather than by size, and the parser
// uses the same trick.  We still write a real size for the children.

struct OutBuf {
    std::vector<uint8_t> data;
    void u8 (uint8_t v)            { data.push_back(v); }
    void u16(uint16_t v)           { data.push_back((uint8_t)(v & 0xFF));
                                     data.push_back((uint8_t)((v>>8) & 0xFF)); }
    void u32_le(uint32_t v)        { data.push_back((uint8_t)(v & 0xFF));
                                     data.push_back((uint8_t)((v>>8)  & 0xFF));
                                     data.push_back((uint8_t)((v>>16) & 0xFF));
                                     data.push_back((uint8_t)((v>>24) & 0xFF)); }
    void u32_be(uint32_t v)        { data.push_back((uint8_t)((v>>24) & 0xFF));
                                     data.push_back((uint8_t)((v>>16) & 0xFF));
                                     data.push_back((uint8_t)((v>>8)  & 0xFF));
                                     data.push_back((uint8_t)(v & 0xFF)); }
    void i32(int32_t v)            { u32_le((uint32_t)v); }
    void f32(float v)              { uint32_t b; std::memcpy(&b, &v, 4); u32_le(b); }
    void tag(const char (&s)[5])   { data.insert(data.end(), s, s + 4); } // 4-char tag, no NUL
    void raw(const void* p, size_t n) {
        const uint8_t* bp = (const uint8_t*)p;
        data.insert(data.end(), bp, bp + n);
    }
    size_t size() const { return data.size(); }
};

// ─── Chunk builders ────────────────────────────────────────────────────
//
// All chunk sizes are big-endian (u32_be); all data values are
// little-endian (u32_le / i32 / f32).  This matches the format used by
// the original IGI 1 binaries and what iff_parser.cpp expects.

void write_bosh(OutBuf& o, uint32_t type, uint32_t boneCount) {
    o.tag("BOSH");
    o.u32_be(8);     // chunk size = 8
    o.u32_le(type);
    o.u32_le(boneCount);
}

void write_plst(OutBuf& o, const std::vector<int32_t>& parents) {
    o.tag("PLST");
    o.u32_be((uint32_t)(parents.size() * 4));
    for (int32_t p : parents) o.i32(p);
}

void write_tlst(OutBuf& o, const std::vector<float>& translations) {
    o.tag("TLST");
    o.u32_be((uint32_t)(translations.size() * 4));
    for (float v : translations) o.f32(v);
}

void write_balh(OutBuf& o, uint32_t numAnims, uint32_t lidAnims) {
    o.tag("BALH");
    o.u32_be(8);
    o.u32_le(numAnims);
    o.u32_le(lidAnims);
}

void write_boah(OutBuf& o, float length, uint16_t f0, uint16_t f1, uint32_t id) {
    o.tag("BOAH");
    o.u32_be(12);
    o.f32(length);
    o.u16(f0);
    o.u16(f1);
    o.u32_le(id);
}

// One BORH header (count) + one BORD data block.
void write_rot_track(OutBuf& o, const std::vector<BefRotationKey>& keys) {
    o.tag("BORH");
    o.u32_be(4);
    o.u32_le((uint32_t)keys.size());
    o.tag("BORD");
    o.u32_be((uint32_t)(keys.size() * 52));
    for (const auto& k : keys) {
        o.f32(k.q0[0]); o.f32(k.q0[1]); o.f32(k.q0[2]); o.f32(k.q0[3]);
        o.f32((float)k.time_ms);
        o.f32(k.q1[0]); o.f32(k.q1[1]); o.f32(k.q1[2]); o.f32(k.q1[3]);
        o.f32(k.q2[0]); o.f32(k.q2[1]); o.f32(k.q2[2]); o.f32(k.q2[3]);
    }
}

void write_trans_track(OutBuf& o, const std::vector<BefTranslationKey>& keys) {
    o.tag("BOTH");
    o.u32_be(4);
    o.u32_le((uint32_t)keys.size());
    o.tag("BOTD");
    o.u32_be((uint32_t)(keys.size() * 40));
    for (const auto& k : keys) {
        o.f32(k.px * IGI_SCALE);
        o.f32(k.py * IGI_SCALE);
        o.f32(k.pz * IGI_SCALE);
        o.f32((float)k.time_ms);
        o.f32(0.0f); o.f32(0.0f); o.f32(0.0f);
        o.f32(0.0f); o.f32(0.0f); o.f32(0.0f);
    }
}

void write_event_track(OutBuf& o, const std::vector<BefEvent>& events) {
    o.tag("BOEH");
    o.u32_be(4);
    o.u32_le((uint32_t)events.size());
    o.tag("BOED");
    o.u32_be((uint32_t)(events.size() * 24));
    for (const auto& e : events) {
        // IFF BOED layout: 2x int32 (_id, BoneID), 4x float32 (time, px, py, pz)
        o.i32(e.event_id);
        o.i32(e.bone_id);
        o.f32((float)e.time_ms);
        o.f32(e.px * IGI_SCALE);
        o.f32(e.py * IGI_SCALE);
        o.f32(e.pz * IGI_SCALE);
    }
}

// Build a single FORM/BOAN block.
OutBuf build_anim_block(const BefFile& bef) {
    OutBuf body;
    // BOAH: anim_id is encoded in flags as the high-16-bit pattern? No -
    // the Python writer passes boah[3] (a u32) as the anim id.  We use
    // the numeric id parsed from the BEF name (e.g. "003_anim_004" -> 4).
    int anim_id = 0;
    {
        std::string s = bef.anim_name;
        size_t pos = s.find("_anim_");
        if (pos != std::string::npos) {
            try { anim_id = std::stoi(s.substr(pos + 6)); } catch (...) { anim_id = 0; }
        }
    }
    uint32_t type = (uint32_t)bef.tp_flag;   // 0 or 1, see BOAH._01 in Python
    write_boah(body, (float)bef.length_ms, 0, (uint16_t)type, (uint32_t)anim_id);

    // Events first (matches Python writer ordering).
    write_event_track(body, bef.events);

    // Translation track (root).
    write_trans_track(body, bef.translations);

    // Rotation tracks: one BORH/BORD pair per bone, in bone-index order.
    // Group bef.rotations by bone index.
    std::vector<std::vector<BefRotationKey>> perBone;
    int maxBone = -1;
    for (const auto& r : bef.rotations) {
        if (r.bone >= (int)perBone.size()) perBone.resize(r.bone + 1);
        perBone[r.bone].push_back(r);
        if (r.bone > maxBone) maxBone = r.bone;
    }
    if (maxBone < 0 && !bef.bones.empty()) maxBone = (int)bef.bones.size() - 1;
    int nBones = std::max(maxBone + 1, (int)bef.bones.size());
    for (int b = 0; b < nBones; ++b) {
        const auto& v = (b < (int)perBone.size()) ? perBone[b] : std::vector<BefRotationKey>{};
        write_rot_track(body, v);
    }

    // Wrap in FORM/BOAN.  Size covers the body minus the 4 tag bytes of
    // BOAN (which sit AFTER the size field).  In other words FORM <size>
    // where size = (4-byte BOAN tag) + body bytes.
    OutBuf out;
    out.tag("FORM");
    out.u32_be((uint32_t)(4 + body.size()));
    out.tag("BOAN");
    out.raw(body.data.data(), body.data.size());
    return out;
}

} // namespace

bool WriteIffFromBefs(const std::vector<std::string>& befPaths,
                      const std::string& outPath,
                      std::string* err)
{
    if (befPaths.empty()) {
        if (err) *err = "no BEF files supplied";
        return false;
    }

    // Parse every BEF.
    std::vector<BefFile> befs;
    befs.reserve(befPaths.size());
    for (const auto& p : befPaths) {
        BefFile b;
        std::string e;
        if (!ParseBefFile(p, b, &e)) {
            if (err) *err = p + ": " + e;
            return false;
        }
        befs.push_back(std::move(b));
    }

    // Bone skeleton comes from the first BEF.
    const BefFile& skelBef = befs.front();
    std::vector<int32_t> parents;
    std::vector<float>   translations;
    parents.reserve(skelBef.bones.size());
    translations.reserve(skelBef.bones.size() * 3);
    for (const auto& b : skelBef.bones) {
        parents.push_back(b.parent);
        translations.push_back(b.px * IGI_SCALE);
        translations.push_back(b.py * IGI_SCALE);
        translations.push_back(b.pz * IGI_SCALE);
    }
    int boneCount = (int)skelBef.bones.size();

    // object_id: try to derive from the first BEF's filename.  The IGI
    // 1 originals always use the model stem (e.g. 003 for "003.IFF");
    // we follow the same convention so the rebuilt IFF reports the
    // expected id.  Falls back to boneCount if no digits are present.
    uint32_t objectId = (uint32_t)boneCount;
    {
        std::string base = fs::path(befPaths.front()).stem().string();
        // Strip "_anim_NNN" suffix if present.
        size_t pos = base.find("_anim_");
        if (pos != std::string::npos) base = base.substr(0, pos);
        try { objectId = (uint32_t)std::stoi(base); } catch (...) { /* leave default */ }
    }

    // ─── BOBH block (BOSH + PLST + TLST) ───────────────────────────
    OutBuf bobhBody;
    write_bosh(bobhBody, objectId, (uint32_t)boneCount);
    write_plst(bobhBody, parents);
    write_tlst(bobhBody, translations);
    OutBuf bobhForm;
    bobhForm.tag("FORM");
    bobhForm.u32_be((uint32_t)(4 + bobhBody.size()));
    bobhForm.tag("BOBH");
    bobhForm.raw(bobhBody.data.data(), bobhBody.data.size());

    // ─── BOAL block (BALH + per-anim FORMs) ───────────────────────
    OutBuf boalBody;
    // lid_anims is just a counter; reference uses 0.
    write_balh(boalBody, (uint32_t)befs.size(), 0);
    for (const auto& b : befs) {
        OutBuf a = build_anim_block(b);
        boalBody.raw(a.data.data(), a.data.size());
    }
    OutBuf boalForm;
    boalForm.tag("FORM");
    boalForm.u32_be((uint32_t)(4 + boalBody.size()));
    boalForm.tag("BOAL");
    boalForm.raw(boalBody.data.data(), boalBody.data.size());

    // ─── Root FORM/BOBJ ────────────────────────────────────────────
    // Per the IFF convention used by IGI 1, the root FORM size is
    // intentionally "broken" (a small number that does NOT match the
    // real file size).  The engine walks the tree by tag rather than
    // trusting this size.  The reference Python writer used a small
    // offset (e.g. 588) - we follow suit with a value that is at least
    // the size of the BOBH block so external readers don't truncate.
    OutBuf root;
    root.tag("FORM");
    root.u32_be((uint32_t)(4 + bobhForm.size() + boalForm.size()));
    root.tag("BOBJ");
    root.raw(bobhForm.data.data(), bobhForm.data.size());
    root.raw(boalForm.data.data(), boalForm.data.size());

    // Make sure the output directory exists.
    fs::path op(outPath);
    if (op.has_parent_path()) fs::create_directories(op.parent_path());

    std::ofstream f(outPath, std::ios::binary);
    if (!f.is_open()) {
        if (err) *err = "cannot open output: " + outPath;
        return false;
    }
    f.write((const char*)root.data.data(), (std::streamsize)root.data.size());
    if (!f.good()) {
        if (err) *err = "write error: " + outPath;
        return false;
    }
    return true;
}

bool WriteAnimsQsc(const std::vector<std::string>& befPaths,
                   const std::string& outPath,
                   std::string* err)
{
    if (befPaths.empty()) {
        if (err) *err = "no BEF files supplied";
        return false;
    }
    // Pull the model id from the first BEF name ("XXX_anim_NNN.BEF").
    auto split_name = [](const std::string& n) -> std::pair<std::string, std::string> {
        std::string base = n;
        size_t dot = base.find_last_of('.');
        if (dot != std::string::npos) base = base.substr(0, dot);
        size_t pos = base.find("_anim_");
        if (pos == std::string::npos) return { base, "" };
        return { base.substr(0, pos), base.substr(pos) };
    };
    auto p0 = split_name(std::filesystem::path(befPaths.front()).filename().string());
    const std::string modelId = p0.first;

    std::ofstream o(outPath);
    if (!o.is_open()) {
        if (err) *err = "cannot write QSC: " + outPath;
        return false;
    }
    o << "// Script for converting common models //////////////////////////////////////\n\n";
    o << "// Script directories ///////////////////////////////////////////////////////\n\n";
    o << "SetAnimDirectory(\"anims\");\nSetModelDirectory(\"models\");\n";
    o << "SetTextureDirectory(\"textures\");\nSetPaletteDirectory(\"palettes\");\n";
    o << "SetTempDirectory(\"temp\");\n\n";
    o << "// Model settings /////////////////////////////////////////////////////////\n\n";
    o << "SetScale(40.96);\n";
    o << "SetTargetPlatform(\"PC\");\n\n";
    o << "// Texture settings /////////////////////////////////////////////////////////\n\n";
    o << "StartTexScript(\"commontex\");\n\n";
    o << "SetLightmapResolution(1);\n\n";

    for (const auto& bp : befPaths) {
        BefFile b;
        std::string e;
        if (!ParseBefFile(bp, b, &e)) {
            if (err) *err = bp + ": " + e;
            return false;
        }
        o << "CreateAnim(\"anims_" << modelId << "\\\\" << modelId
          << "_anim_" << b.anim_name.substr(b.anim_name.find("_anim_") + 6) << "\");\n";
    }
    o << "\n// End script ///////////////////////////////////////////////////////////////\n\n";
    o << "EndTexScript();\n\n";
    o << "BuildStatic(\"level\");\n";
    return true;
}

} // namespace igiconv
