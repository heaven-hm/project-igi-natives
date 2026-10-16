#include "qsc_object_parser.h"

#include <algorithm>
#include <cctype>
#include <cstdint>
#include <optional>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

namespace igiconv {

namespace {

// ─── Small CSV / tokeniser ───────────────────────────────────────────────
//
// The "Task_New(...)" call in the decompiled QSC uses comma-separated
// arguments.  String literals can contain commas, parentheses, dots,
// digits, and spaces but cannot contain a raw '"' (the engine escapes
// them via backslashes).  The tokeniser respects string boundaries and
// nested parentheses, which is the only context where commas survive
// inside a string literal.  It returns a flat list of tokens with
// strings still wrapped in their "..." quotes so the caller can
// inspect the raw value.

enum class Tk {
    Number,   // integer or float literal, lexeme = the literal text
    String,   // "..." (quotes kept)
    Bad,      // not parseable
    End
};

struct Token {
    Tk kind;
    std::string text;
};

static bool isNumberStart(char c) {
    return std::isdigit(static_cast<unsigned char>(c)) || c == '-' || c == '+' || c == '.';
}

static bool isNumberCont(char c) {
    return std::isdigit(static_cast<unsigned char>(c)) || c == '.' || c == 'e' || c == 'E'
           || c == '-' || c == '+' || c == 'x' || c == 'X'
           || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

// Tokenise a parenthesised argument list `"(a, b, c)"` into a vector
// of {kind, text}.  The leading '(' and trailing ')' are NOT included.
static std::vector<Token> tokenizeArgs(const std::string& src, size_t& pos, std::string* err) {
    std::vector<Token> out;
    // Hard cap so a malformed file can't blow up memory.  The deepest
    // IGI1 calls have ~200 args (AnimTask).  Anything beyond 1024 is
    // almost certainly a parse error or a file we don't understand.
    constexpr size_t kMaxTokens = 1024;
    // skip '('
    if (pos >= src.size() || src[pos] != '(') {
        if (err) *err = "expected '(' at offset " + std::to_string(pos);
        return out;
    }
    ++pos;
    while (pos < src.size()) {
        if (out.size() >= kMaxTokens) {
            if (err) *err = "Task_New arg list exceeded " + std::to_string(kMaxTokens) + " tokens";
            return out;
        }
        // skip whitespace
        while (pos < src.size() && std::isspace(static_cast<unsigned char>(src[pos]))) ++pos;
        if (pos >= src.size()) break;
        if (src[pos] == ')') { ++pos; return out; }
        if (src[pos] == ',') { ++pos; continue; }

        // string literal
        if (src[pos] == '"') {
            size_t start = pos;
            ++pos;
            while (pos < src.size() && src[pos] != '"') {
                if (src[pos] == '\\' && pos + 1 < src.size()) ++pos; // skip escape
                ++pos;
            }
            if (pos >= src.size()) {
                if (err) *err = "unterminated string starting at offset " + std::to_string(start);
                return out;
            }
            ++pos; // consume closing "
            out.push_back({Tk::String, src.substr(start, pos - start)});
            continue;
        }

        // number literal
        if (isNumberStart(src[pos])) {
            size_t start = pos;
            ++pos;
            while (pos < src.size() && isNumberCont(src[pos])) ++pos;
            out.push_back({Tk::Number, src.substr(start, pos - start)});
            continue;
        }

        // nested parentheses: a Task_New call can be a sub-expression
        // of another Task_New (e.g. AIGraph wrapping HumanSoldier).
        // Consume the whole balanced paren group as one Bad token so
        // the outer arg count doesn't blow up on inner calls.
        if (src[pos] == '(') {
            size_t start = pos;
            int depth = 1;
            ++pos;
            while (pos < src.size() && depth > 0) {
                if (src[pos] == '(') ++depth;
                else if (src[pos] == ')') --depth;
                // Honour string boundaries so a ')' inside a string
                // doesn't decrement the depth.
                else if (src[pos] == '"') {
                    ++pos;
                    while (pos < src.size() && src[pos] != '"') {
                        if (src[pos] == '\\' && pos + 1 < src.size()) ++pos;
                        ++pos;
                    }
                }
                ++pos;
            }
            out.push_back({Tk::Bad, src.substr(start, pos - start)});
            continue;
        }

        // identifier / unknown -- consume as a single token
        size_t start = pos;
        while (pos < src.size()
               && !std::isspace(static_cast<unsigned char>(src[pos]))
               && src[pos] != ',' && src[pos] != ')' && src[pos] != '(') {
            ++pos;
        }
        out.push_back({Tk::Bad, src.substr(start, pos - start)});
    }
    if (err) *err = "missing ')' in argument list";
    return out;
}

static bool parseInt(const std::string& s, int32_t& out) {
    if (s.empty()) return false;
    try {
        size_t p = 0;
        long long v = std::stoll(s, &p);
        if (p != s.size()) return false;
        out = static_cast<int32_t>(v);
        return true;
    } catch (...) { return false; }
}

static bool parseDouble(const std::string& s, double& out) {
    if (s.empty()) return false;
    try {
        size_t p = 0;
        double v = std::stod(s, &p);
        if (p != s.size()) return false;
        out = v;
        return true;
    } catch (...) { return false; }
}

static std::string stripQuotes(const std::string& s) {
    if (s.size() >= 2 && s.front() == '"' && s.back() == '"')
        return s.substr(1, s.size() - 2);
    return s;
}

} // namespace

QscObjectSet QscObjectSet::parse(const std::string& qscText, std::string* err) {
    QscObjectSet set;

    // Hard upper bound on how many Task_New occurrences we'll walk
    // through - protects against pathological inputs.
    constexpr size_t kMaxCalls = 50000;
    // Walk through the source linearly.  Whenever we see
    // `Task_New(` followed later by `"HumanSoldier"` and a closing `)`,
    // tokenise the arg list and pluck the fields by index.
    const std::string needle = "Task_New";
    size_t searchFrom = 0;
    size_t callsScanned = 0;
    while (true) {
        if (callsScanned++ > kMaxCalls) {
            if (err) *err = "Task_New scan exceeded " + std::to_string(kMaxCalls) + " occurrences";
            break;
        }
        size_t p = qscText.find(needle, searchFrom);
        if (p == std::string::npos) break;
        // require word boundary before the call name
        bool leftOk = (p == 0)
                      || (!std::isalnum(static_cast<unsigned char>(qscText[p - 1]))
                          && qscText[p - 1] != '_');
        if (!leftOk) { searchFrom = p + needle.size(); continue; }
        size_t parenPos = p + needle.size();
        // skip whitespace
        while (parenPos < qscText.size()
               && std::isspace(static_cast<unsigned char>(qscText[parenPos]))) ++parenPos;
        if (parenPos >= qscText.size() || qscText[parenPos] != '(') {
            searchFrom = p + needle.size();
            continue;
        }

        std::string localErr;
        size_t pos = parenPos;
        auto tokens = tokenizeArgs(qscText, pos, &localErr);
        if (!localErr.empty()) {
            // The argument list wasn't terminated before EOF or hit
            // the safety cap.  Either way, advance search from just
            // past the current "Task_New" keyword so that nested
            // Task_New calls (which the cap'd tokenizer may have
            // skipped) are still picked up by the next find().
            searchFrom = p + needle.size();
            continue;
        }

        // Layout from the engine's Task_DeclareParameters("HumanSoldier"):
        //   [0]  Task ID (int)
        //   [1]  Class name "HumanSoldier"   <-- the trigger token
        //   [2]  Object name (string)
        //   [3]  Position X (float)
        //   [4]  Position Y
        //   [5]  Position Z
        //   [6]  Gamma (float, radians)
        //   [7]  Model id (string)
        //   [8]  Team (int)
        //   [9]  Bone Hierarchy (int)
        //   [10] Stand Animation (int)
        //
        // We require [1] to be the string "HumanSoldier" - this is what
        // makes the call unique, since the file may have other Task_New
        // calls (e.g. doors, lights, triggers) right next to it.
        if (tokens.size() >= 11
            && tokens[1].kind == Tk::String
            && stripQuotes(tokens[1].text) == "HumanSoldier") {

            HumanSoldierEntry e;
            if (tokens[2].kind == Tk::String) e.name = stripQuotes(tokens[2].text);
            double x=0, y=0, z=0, g=0; int32_t team=0, bh=-1, sa=-1;
            if (parseDouble(tokens[3].text, x)) e.posX = x;
            if (parseDouble(tokens[4].text, y)) e.posY = y;
            if (parseDouble(tokens[5].text, z)) e.posZ = z;
            if (parseDouble(tokens[6].text, g)) e.gamma = g;
            if (tokens[7].kind == Tk::String) e.modelId = stripQuotes(tokens[7].text);
            if (parseInt(tokens[8].text, team)) e.team = team;
            if (parseInt(tokens[9].text, bh))   e.boneHierarchy = bh;
            if (parseInt(tokens[10].text, sa))  e.standAnimation = sa;
            // Some entries use the integer -1 to mark "no animation" -
            // keep them so the GUI can show "(no anim)" for that model
            // but never try to play a -1 clip id.
            set.entries.push_back(std::move(e));
        }
        // Continue scanning from just past the "Task_New" keyword of
        // THIS call - not from after the closing ')'.  Skipping past
        // the whole call would miss nested HumanSoldier Task_New
        // calls buried inside the current call's arg list (e.g. an
        // AIGraph / ConditionalContainer that wraps HumanSoldier).
        // Setting searchFrom = p + needle.size() lets the next find()
        // pick up the inner Task_New occurrences.
        searchFrom = p + needle.size();
    }

    if (err) *err = "";
    return set;
}

std::vector<std::string> QscObjectSet::modelIds() const {
    std::set<std::string> uniq;
    for (const auto& e : entries) {
        if (!e.modelId.empty()) uniq.insert(e.modelId);
    }
    return std::vector<std::string>(uniq.begin(), uniq.end());
}

std::vector<const HumanSoldierEntry*>
QscObjectSet::entriesForModel(const std::string& modelId) const {
    std::vector<const HumanSoldierEntry*> out;
    for (const auto& e : entries) {
        if (e.modelId == modelId) out.push_back(&e);
    }
    return out;
}

std::vector<QscObjectSet::AnimRef>
QscObjectSet::animationsForModel(const std::string& modelId) const {
    std::set<std::pair<int32_t, int32_t>> uniq;
    for (const auto& e : entries) {
        if (e.modelId == modelId && e.boneHierarchy >= 0 && e.standAnimation >= 0) {
            uniq.insert({e.boneHierarchy, e.standAnimation});
        }
    }
    std::vector<AnimRef> out;
    out.reserve(uniq.size());
    for (const auto& p : uniq) out.push_back({p.first, p.second});
    return out;
}

// ─── LightmapBindingSet ──────────────────────────────────────────────────────
//
// Unlike QscObjectSet::parse (which only looks at one fixed Task_New schema),
// this walks the FULL nested tree of each top-level Task_New(...) call to
// find: (a) every quoted string anywhere in the tree (candidate model ids),
// and (b) a nested Task_New("LightmapInfo", ..., "<logical_id>") call. Every
// model id found in a tree that also contains a LightmapInfo child is bound
// to that tree's logical lightmap id.

namespace {

struct TaskCall { size_t openParen; size_t closeParen; };

// Locate the matching ')' for the Task_New call whose "Task_New" keyword
// starts at `taskNewPos`. Honours string boundaries and nested parens.
bool FindCallSpan(const std::string& s, size_t taskNewPos, TaskCall& out) {
    size_t p = taskNewPos + 8; // strlen("Task_New")
    while (p < s.size() && std::isspace(static_cast<unsigned char>(s[p]))) ++p;
    if (p >= s.size() || s[p] != '(') return false;
    out.openParen = p;
    size_t depth = 1, i = p + 1;
    while (i < s.size() && depth > 0) {
        if (s[i] == '"') {
            ++i;
            while (i < s.size() && s[i] != '"') {
                if (s[i] == '\\' && i + 1 < s.size()) ++i;
                ++i;
            }
        } else if (s[i] == '(') {
            ++depth;
        } else if (s[i] == ')') {
            --depth;
            if (depth == 0) { out.closeParen = i; return true; }
        }
        ++i;
    }
    return false;
}

// Quoted strings that are direct (non-nested) arguments of the call
// spanning [openParen, closeParen].
std::vector<std::string> ExtractDirectStrings(const std::string& s, size_t openParen, size_t closeParen) {
    std::vector<std::string> out;
    size_t j = openParen + 1;
    int depth = 0;
    while (j < closeParen) {
        if (s[j] == '(') { ++depth; ++j; continue; }
        if (s[j] == ')') { --depth; ++j; continue; }
        if (depth == 0 && s[j] == '"') {
            size_t st = j;
            ++j;
            while (j < closeParen && s[j] != '"') {
                if (s[j] == '\\' && j + 1 < closeParen) ++j;
                ++j;
            }
            out.push_back(s.substr(st + 1, j - st - 1));
            ++j;
            continue;
        }
        ++j;
    }
    return out;
}

// The leading integer Task ID argument of the call spanning
// [openParen, closeParen] (e.g. the "1104" in
// Task_New(1104, "Building", ...)). -1 if the call has no leading
// integer (e.g. it starts with "-1" for nested/anonymous tasks - that
// parses fine and returns -1, which doubles as "no id" - acceptable
// since real root-level tasks always have a positive id).
int32_t ExtractLeadingTaskId(const std::string& s, size_t openParen, size_t closeParen) {
    size_t j = openParen + 1;
    while (j < closeParen && std::isspace(static_cast<unsigned char>(s[j]))) ++j;
    size_t start = j;
    if (j < closeParen && (s[j] == '-' || s[j] == '+')) ++j;
    while (j < closeParen && std::isdigit(static_cast<unsigned char>(s[j]))) ++j;
    if (j == start || (j == start + 1 && (s[start] == '-' || s[start] == '+'))) return -1;
    try {
        return static_cast<int32_t>(std::stol(s.substr(start, j - start)));
    } catch (...) {
        return -1;
    }
}

// Raw top-level (depth-0, outside quotes) comma-separated argument
// substrings of the call spanning [openParen, closeParen], trimmed of
// surrounding whitespace. Unlike ExtractDirectStrings, this returns
// EVERY argument (numbers, identifiers, strings) in positional order,
// which is needed to read the X/Y/Z position fields that always sit at
// fixed argument indices regardless of the call's class name.
std::vector<std::string> ExtractDirectArgs(const std::string& s, size_t openParen, size_t closeParen) {
    std::vector<std::string> out;
    size_t j = openParen + 1;
    int depth = 0;
    size_t argStart = j;
    while (j <= closeParen) {
        if (j == closeParen || (depth == 0 && s[j] == ',')) {
            size_t st = argStart, en = j;
            while (st < en && std::isspace(static_cast<unsigned char>(s[st]))) ++st;
            while (en > st && std::isspace(static_cast<unsigned char>(s[en - 1]))) --en;
            out.push_back(s.substr(st, en - st));
            argStart = j + 1;
            ++j;
            continue;
        }
        if (s[j] == '"') {
            ++j;
            while (j < closeParen && s[j] != '"') {
                if (s[j] == '\\' && j + 1 < closeParen) ++j;
                ++j;
            }
        } else if (s[j] == '(') {
            ++depth;
        } else if (s[j] == ')') {
            --depth;
        }
        ++j;
    }
    return out;
}

// Schema for every observed Task_New is consistent in its first 6
// positional args: Task_New(id, "ClassName", "name", X, Y, Z, ...).
// Returns false (leaving x/y/z untouched) if the call has fewer than 6
// args or args[3..5] don't parse as numbers (e.g. a LightmapInfo call,
// whose args are all numeric/flag fields with no position).
bool ExtractPosition3(const std::string& s, size_t openParen, size_t closeParen,
                       double& x, double& y, double& z) {
    auto args = ExtractDirectArgs(s, openParen, closeParen);
    if (args.size() < 6) return false;
    try {
        size_t consumed;
        double px = std::stod(args[3], &consumed);
        if (consumed != args[3].size()) return false;
        double py = std::stod(args[4], &consumed);
        if (consumed != args[4].size()) return false;
        double pz = std::stod(args[5], &consumed);
        if (consumed != args[5].size()) return false;
        x = px; y = py; z = pz;
        return true;
    } catch (...) {
        return false;
    }
}

// Recursively process the Task_New call spanning [openParen, closeParen].
//
// The real decompiled QSC nests multiple sibling Building tasks under a
// shared wrapper (e.g. Task_New(-1, "Container", "Buildings", <building1>,
// <building2>, ...)). Binding must resolve at the NEAREST enclosing scope
// that has a LightmapInfo, not the outermost ancestor - otherwise every
// building in a shared Container would be (wrongly) bound to whichever
// LightmapInfo happens to appear first anywhere inside that container.
//
// If this node has a LightmapInfo DIRECT child, every model id collected
// from itself and from any child that did NOT itself resolve internally
// is bound to that LightmapInfo's logical id, and an empty vector is
// returned (fully resolved here - nothing left to bubble up). Otherwise
// returns the combined unresolved strings from this node and its
// children, for the PARENT to resolve (or bubble up further).
std::vector<std::string> ProcessNode(const std::string& s, size_t openParen, size_t closeParen,
                                      int32_t taskId, const std::string& taskName,
                                      bool hasPos, double posX, double posY, double posZ,
                                      std::vector<LightmapBinding>& bindings) {
    std::vector<std::string> unresolved = ExtractDirectStrings(s, openParen, closeParen);
    std::string ownLightmapId; // set if a DIRECT child is LightmapInfo

    size_t i = openParen + 1;
    while (i < closeParen) {
        if (i + 8 <= closeParen && s.compare(i, 8, "Task_New") == 0 &&
            (i == 0 || (!std::isalnum(static_cast<unsigned char>(s[i - 1])) && s[i - 1] != '_'))) {
            TaskCall childCall;
            if (FindCallSpan(s, i, childCall) && childCall.closeParen < closeParen) {
                auto childDirect = ExtractDirectStrings(s, childCall.openParen, childCall.closeParen);
                bool childIsLightmapInfo = std::find(childDirect.begin(), childDirect.end(), "LightmapInfo") != childDirect.end();
                if (childIsLightmapInfo) {
                    if (ownLightmapId.empty() && !childDirect.empty()) ownLightmapId = childDirect.back();
                    // LightmapInfo is a leaf - no model ids to bubble from it.
                } else {
                    int32_t childTaskId = ExtractLeadingTaskId(s, childCall.openParen, childCall.closeParen);
                    std::string childTaskName = childDirect.size() >= 2 ? childDirect[1] : std::string();
                    double childX = 0, childY = 0, childZ = 0;
                    bool childHasPos = ExtractPosition3(s, childCall.openParen, childCall.closeParen, childX, childY, childZ);
                    auto childUnresolved = ProcessNode(s, childCall.openParen, childCall.closeParen,
                                                        childTaskId, childTaskName,
                                                        childHasPos, childX, childY, childZ, bindings);
                    for (auto& u : childUnresolved) unresolved.push_back(std::move(u));
                }
                i = childCall.closeParen + 1;
                continue;
            }
        }
        ++i;
    }

    if (!ownLightmapId.empty()) {
        for (auto& m : unresolved) {
            LightmapBinding b;
            b.modelId = m;
            b.logicalId = ownLightmapId;
            b.taskId = taskId;
            b.taskName = taskName;
            b.hasPos = hasPos;
            b.posX = posX; b.posY = posY; b.posZ = posZ;
            bindings.push_back(std::move(b));
        }
        return {};
    }
    return unresolved;
}

} // namespace

std::optional<std::string>
LightmapBindingSet::logicalIdForModel(const std::string& modelId) const {
    for (const auto& b : bindings) {
        if (b.modelId == modelId) return b.logicalId;
    }
    return std::nullopt;
}

std::vector<const LightmapBinding*>
LightmapBindingSet::allBindingsForModel(const std::string& modelId) const {
    std::vector<const LightmapBinding*> out;
    for (const auto& b : bindings) {
        if (b.modelId == modelId) out.push_back(&b);
    }
    return out;
}

const LightmapBinding*
LightmapBindingSet::bindingForModelAndTaskId(const std::string& modelId, int32_t taskId) const {
    for (const auto& b : bindings) {
        if (b.modelId == modelId && b.taskId == taskId) return &b;
    }
    return nullptr;
}

const LightmapBinding*
LightmapBindingSet::nearestBindingForModelAndPosition(const std::string& modelId,
                                                        double x, double y, double z) const {
    const LightmapBinding* best = nullptr;
    double bestDistSq = 0.0;
    for (const auto& b : bindings) {
        if (b.modelId != modelId || !b.hasPos) continue;
        double dx = b.posX - x, dy = b.posY - y, dz = b.posZ - z;
        double distSq = dx * dx + dy * dy + dz * dz;
        if (!best || distSq < bestDistSq) {
            best = &b;
            bestDistSq = distSq;
        }
    }
    return best;
}

LightmapBindingSet LightmapBindingSet::parse(const std::string& qscText, std::string* err) {
    LightmapBindingSet set;
    constexpr size_t kMaxCalls = 50000;
    size_t scanned = 0;
    size_t i = 0;
    while (i < qscText.size()) {
        if (scanned++ > kMaxCalls) {
            if (err) *err = "Task_New scan exceeded " + std::to_string(kMaxCalls) + " occurrences";
            break;
        }
        size_t p = qscText.find("Task_New", i);
        if (p == std::string::npos) break;
        bool leftOk = (p == 0)
                      || (!std::isalnum(static_cast<unsigned char>(qscText[p - 1]))
                          && qscText[p - 1] != '_');
        if (!leftOk) { i = p + 8; continue; }

        TaskCall call;
        if (!FindCallSpan(qscText, p, call)) { i = p + 8; continue; }

        // A literal top-level Task_New("LightmapInfo", ...) (no enclosing
        // tree to bind to) has nothing to resolve - skip it rather than
        // feeding it to ProcessNode, which only special-cases LightmapInfo
        // when it sees it as a CHILD.
        auto rootDirect = ExtractDirectStrings(qscText, call.openParen, call.closeParen);
        bool rootIsLightmapInfo = std::find(rootDirect.begin(), rootDirect.end(), "LightmapInfo") != rootDirect.end();
        if (!rootIsLightmapInfo) {
            int32_t taskId = ExtractLeadingTaskId(qscText, call.openParen, call.closeParen);
            // Schema is Task_New(id, "ClassName", "name", ...) - rootDirect[0]
            // is the class name, rootDirect[1] (if present) is the name.
            std::string taskName = rootDirect.size() >= 2 ? rootDirect[1] : std::string();
            double posX = 0, posY = 0, posZ = 0;
            bool hasPos = ExtractPosition3(qscText, call.openParen, call.closeParen, posX, posY, posZ);
            ProcessNode(qscText, call.openParen, call.closeParen, taskId, taskName,
                        hasPos, posX, posY, posZ, set.bindings);
        }
        i = call.closeParen + 1;
    }

    if (err) *err = "";
    return set;
}

} // namespace igiconv
