#pragma once
#include "qsc_lexer.h"
#include <memory>
#include <string>
#include <vector>

namespace qsc {

enum class NodeKind : uint8_t {
    Program,     // children = top-level stmts
    Block,       // children = stmts
    ExprStmt,    // children[0] = expr
    If,          // children = [cond, then, (else)?]
    While,       // children = [cond, body]
    Call,        // s_val = callee name; children = arg exprs
    Binary,      // s_val = operator; children = [lhs, rhs]
    Unary,       // s_val = operator; children = [operand]
    IntLit,      // i_val
    FloatLit,    // f_val
    BoolLit,     // b_val (TRUE/FALSE)
    StringLit,   // s_val
    IdentLit,    // s_val = identifier name
};

struct Node {
    NodeKind kind;
    uint32_t line = 0;
    uint32_t col  = 0;

    int32_t  i_val = 0;
    float    f_val = 0.0f;
    bool     b_val = false;
    std::string s_val;

    std::vector<std::unique_ptr<Node>> children;
};

struct ParseResult {
    std::unique_ptr<Node> program;
    bool ok = true;
    std::string error;
    // Surfaced for limit-check diagnostics.
    uint32_t call_count = 0;
    uint32_t arg_count  = 0;
};

ParseResult Parse(const std::vector<Token>& tokens);

// Limits per docs/igi1-file-formats.md §QSC parser constraints.
constexpr uint32_t kMaxCalls = 4096;
constexpr uint32_t kMaxArgs  = 65536;

// Pretty-print a tree (for --parse-qsc smoke flag).
void DumpAst(const Node& n, std::ostream& os, int indent = 0);

} // namespace qsc
