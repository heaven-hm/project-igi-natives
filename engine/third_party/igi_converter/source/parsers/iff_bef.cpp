#include "iff_bef.h"
#include <cstdio>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace igiconv {

namespace {

// Strip C++ // line comments.  BEF uses them; we drop them so the rest
// of the parser can focus on keywords.
std::string strip_line_comment(const std::string& s) {
    // We're only matching '//' that is NOT inside a string literal.  This
    // is a quick approximation; BEF never puts '//' inside quoted names
    // in practice, so a simple find works.
    size_t pos = s.find("//");
    if (pos == std::string::npos) return s;
    return s.substr(0, pos);
}

// Tokenize a single line.  Splits on whitespace and the symbols
// ( ) , ; " and also handles the keyword-style function calls.  Strings
// are returned WITHOUT the surrounding quotes.
std::vector<std::string> tokenize_line(const std::string& line_in) {
    std::vector<std::string> out;
    std::string s = strip_line_comment(line_in);
    std::string cur;
    bool in_str = false;

    auto flush = [&]() {
        if (!cur.empty()) {
            out.push_back(cur);
            cur.clear();
        }
    };

    for (size_t i = 0; i < s.size(); ++i) {
        char c = s[i];
        if (in_str) {
            if (c == '"') {
                in_str = false;
                flush();
            } else {
                cur.push_back(c);
            }
            continue;
        }
        if (c == '"') {
            flush();
            in_str = true;
            continue;
        }
        if (c == '(' || c == ')' || c == ',' || c == ';') {
            flush();
            std::string tok; tok.push_back(c);
            out.push_back(tok);
            continue;
        }
        if (std::isspace(static_cast<unsigned char>(c))) {
            flush();
            continue;
        }
        cur.push_back(c);
    }
    flush();
    return out;
}

// Parse a float/int from a token, tolerating scientific notation and
// leading +/-.
bool parse_float(const std::string& tok, double& out) {
    if (tok.empty()) return false;
    try {
        size_t pos = 0;
        out = std::stod(tok, &pos);
        return pos == tok.size();
    } catch (...) {
        return false;
    }
}
bool parse_int(const std::string& tok, long& out) {
    double d;
    if (!parse_float(tok, d)) return false;
    out = (long)d;
    return true;
}

// Find the index of the matching ')' starting from a position that is
// expected to be the opening '('.  Returns the index of the ')' or
// std::string::npos.
size_t find_matching_paren(const std::string& s, size_t open_pos) {
    if (open_pos >= s.size() || s[open_pos] != '(') return std::string::npos;
    int depth = 0;
    bool in_str = false;
    for (size_t i = open_pos; i < s.size(); ++i) {
        char c = s[i];
        if (in_str) {
            if (c == '"') in_str = false;
            continue;
        }
        if (c == '"') { in_str = true; continue; }
        if (c == '(') ++depth;
        else if (c == ')') {
            --depth;
            if (depth == 0) return i;
        }
    }
    return std::string::npos;
}

} // namespace

// ─── ParseBefFile ────────────────────────────────────────────────────────
bool ParseBefFile(const std::string& path, BefFile& out, std::string* err) {
    out = BefFile{};
    std::ifstream f(path);
    if (!f.is_open()) {
        if (err) *err = "cannot open BEF file: " + path;
        return false;
    }

    std::string line;
    int line_no = 0;
    while (std::getline(f, line)) {
        ++line_no;
        // Keep raw line for parenthesised extraction.
        std::string raw = line;
        // Trim leading/trailing whitespace.
        size_t a = raw.find_first_not_of(" \t\r\n");
        if (a == std::string::npos) continue;
        size_t b = raw.find_last_not_of(" \t\r\n;");
        std::string t = (b == std::string::npos) ? raw.substr(a) : raw.substr(a, b - a + 1);
        if (t.empty()) continue;

        // Find first '(' for keyword recognition.
        size_t op = t.find('(');
        if (op == std::string::npos) continue;
        std::string kw = t.substr(0, op);
        // Trim keyword.
        size_t k1 = kw.find_first_not_of(" \t");
        size_t k2 = kw.find_last_not_of(" \t");
        kw = (k1 == std::string::npos) ? "" : kw.substr(k1, k2 - k1 + 1);
        if (kw.empty()) continue;

        size_t cp = find_matching_paren(t, op);
        if (cp == std::string::npos) {
            if (err) *err = "unbalanced '(' on line " + std::to_string(line_no);
            return false;
        }
        std::string args_str = t.substr(op + 1, cp - op - 1);
        std::vector<std::string> toks_raw = tokenize_line(args_str);
        // Filter out punctuation tokens - we only want the real arguments.
        std::vector<std::string> toks;
        toks.reserve(toks_raw.size());
        for (const auto& tk : toks_raw) {
            if (tk.size() == 1 && (tk[0] == '(' || tk[0] == ')' || tk[0] == ',' || tk[0] == ';'))
                continue;
            toks.push_back(tk);
        }

        if (kw == "AnimInit") {
            if (toks.size() < 4) {
                if (err) *err = "AnimInit expects 4 args, got " + std::to_string(toks.size())
                              + " on line " + std::to_string(line_no);
                return false;
            }
            out.anim_name = toks[0];
            long v;
            if (!parse_int(toks[1], v)) { if (err) *err = "bad AnimInit flags"; return false; }
            out.flags = (int)v;
            if (!parse_int(toks[2], v)) { if (err) *err = "bad AnimInit length"; return false; }
            out.length_ms = (int)v;
            if (!parse_int(toks[3], v)) { if (err) *err = "bad AnimInit tp"; return false; }
            out.tp_flag = (int)v;
        } else if (kw == "Bone") {
            if (toks.size() < 6) {
                if (err) *err = "Bone expects 6 args, got " + std::to_string(toks.size())
                              + " on line " + std::to_string(line_no);
                return false;
            }
            BefBone b;
            long v;
            parse_int(toks[0], v); b.index = (int)v;
            b.name = toks[1];
            parse_int(toks[2], v); b.parent = (int)v;
            double d;
            parse_float(toks[3], d); b.px = (float)d;
            parse_float(toks[4], d); b.py = (float)d;
            parse_float(toks[5], d); b.pz = (float)d;
            out.bones.push_back(std::move(b));
        } else if (kw == "TranslationKeyFrameData") {
            if (toks.size() < 6) {
                if (err) *err = "TranslationKeyFrameData expects 6 args, got " + std::to_string(toks.size());
                return false;
            }
            BefTranslationKey k;
            long v;
            double d;
            parse_int(toks[0], v); k.track = (int)v;
            parse_int(toks[1], v); k.flag  = (int)v;
            parse_int(toks[2], v); k.time_ms = (int)v;
            parse_float(toks[3], d); k.px = (float)d;
            parse_float(toks[4], d); k.py = (float)d;
            parse_float(toks[5], d); k.pz = (float)d;
            out.translations.push_back(std::move(k));
        } else if (kw == "RotationKeyFrameData") {
            if (toks.size() < 14) {
                if (err) *err = "RotationKeyFrameData expects 14 args, got " + std::to_string(toks.size());
                return false;
            }
            BefRotationKey k;
            long v;
            double d;
            parse_int(toks[0], v); k.bone = (int)v;
            parse_int(toks[1], v); k.flag = (int)v;
            parse_int(toks[2], v); k.time_ms = (int)v;
            float* dsts[3] = { k.q0, k.q1, k.q2 };
            for (int q = 0; q < 3; ++q) {
                for (int c = 0; c < 4; ++c) {
                    parse_float(toks[3 + q * 4 + c], d);
                    dsts[q][c] = (float)d;
                }
            }
            out.rotations.push_back(std::move(k));
        } else if (kw == "TriggerData") {
            if (toks.size() < 7) {
                if (err) *err = "TriggerData expects 7 args, got " + std::to_string(toks.size());
                return false;
            }
            BefEvent e;
            long v;
            double d;
            parse_int(toks[0], v); e.index = (int)v;
            parse_int(toks[1], v); e.event_id = (int)v;
            parse_int(toks[2], v); e.time_ms = (int)v;
            parse_int(toks[3], v); e.bone_id = (int)v;
            parse_float(toks[4], d); e.px = (float)d;
            parse_float(toks[5], d); e.py = (float)d;
            parse_float(toks[6], d); e.pz = (float)d;
            out.events.push_back(std::move(e));
        } else if (kw == "BuildHierarchy" || kw == "BreakScript") {
            // No-op structural keywords; we just skip.
        } else {
            // Unknown keyword in a BEF - warn but continue.
            // std::cerr << "ParseBefFile: unknown keyword '" << kw
            //           << "' on line " << line_no << "\n";
        }
    }
    return true;
}

namespace {
void write_float(std::ostream& o, float v) {
    if (v == 0.0f) { o << "0.0"; return; }
    // Match Python's default float repr (short, no trailing zeros).
    char buf[64];
    std::snprintf(buf, sizeof(buf), "%.9g", (double)v);
    o << buf;
}
void write_int(std::ostream& o, long v) { o << v; }
}

bool WriteBefFile(const std::string& path, const BefFile& bef, std::string* err) {
    std::ofstream o(path);
    if (!o.is_open()) {
        if (err) *err = "cannot write BEF file: " + path;
        return false;
    }

    o << "// Script for converting common models //////////////////////////////////////\n\n";
    o << "AnimInit(\"" << bef.anim_name << "\"," << bef.flags << ","
      << bef.length_ms << "," << bef.tp_flag << ");\n";
    o << "BreakScript();\n";

    for (const auto& b : bef.bones) {
        o << "Bone(" << b.index << ",\"" << b.name << "\"," << b.parent << ",";
        write_float(o, b.px); o << ",";
        write_float(o, b.py); o << ",";
        write_float(o, b.pz);
        o << ");\n";
    }
    o << "BuildHierarchy();\n";
    o << "BreakScript();\n";

    for (const auto& t : bef.translations) {
        o << "TranslationKeyFrameData(" << t.track << "," << t.flag << ","
          << t.time_ms << ",";
        write_float(o, t.px); o << ",";
        write_float(o, t.py); o << ",";
        write_float(o, t.pz);
        o << ");\n";
    }
    for (const auto& r : bef.rotations) {
        o << "RotationKeyFrameData(" << r.bone << "," << r.flag << ","
          << r.time_ms << ",";
        const float* qs[3] = { r.q0, r.q1, r.q2 };
        for (int q = 0; q < 3; ++q) {
            for (int c = 0; c < 4; ++c) {
                write_float(o, qs[q][c]);
                o << (q == 2 && c == 3 ? "" : ",");
            }
        }
        o << ");\n";
    }
    for (const auto& e : bef.events) {
        o << "TriggerData(" << e.index << "," << e.event_id << ","
          << e.time_ms << "," << e.bone_id << ",";
        write_float(o, e.px); o << ",";
        write_float(o, e.py); o << ",";
        write_float(o, e.pz);
        o << ");\n";
    }
    return true;
}

} // namespace igiconv
