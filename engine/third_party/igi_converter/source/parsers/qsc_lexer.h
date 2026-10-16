#pragma once
#include <string>
#include <vector>
#include <cstdint>

namespace qsc {

enum class TokKind : uint8_t {
    End,
    Ident,
    KwTrue, KwFalse, KwIf, KwElse, KwWhile,
    IntLit, HexLit, FloatLit, StringLit,
    LParen, RParen, LBrace, RBrace, Comma, Semicolon,
    Op,
};

struct Token {
    TokKind kind;
    std::string lexeme;
    int32_t  int_val   = 0;
    float    float_val = 0.0f;
    uint32_t line = 0;
    uint32_t col  = 0;
};

struct LexResult {
    std::vector<Token> tokens;
    bool ok = true;
    std::string error;
};

LexResult Lex(const std::string& source);

// Convenience for the --lex-qsc CLI smoke flag.
const char* TokKindName(TokKind k);

} // namespace qsc
