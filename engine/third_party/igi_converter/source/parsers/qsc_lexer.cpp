#include "qsc_lexer.h"
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <sstream>

namespace qsc {

namespace {

struct Lexer {
    const std::string& src;
    size_t pos = 0;
    uint32_t line = 1;
    uint32_t col  = 1;
    LexResult& out;

    Lexer(const std::string& s, LexResult& r) : src(s), out(r) {}

    bool eof() const { return pos >= src.size(); }
    char peek(size_t off = 0) const {
        return pos + off < src.size() ? src[pos + off] : '\0';
    }
    char advance() {
        char c = src[pos++];
        if (c == '\n') { ++line; col = 1; } else { ++col; }
        return c;
    }

    void fail(const std::string& msg, uint32_t l, uint32_t c) {
        std::ostringstream os;
        os << "lex error at " << l << ":" << c << ": " << msg;
        out.ok = false;
        out.error = os.str();
    }

    void skipTrivia() {
        while (!eof()) {
            char c = peek();
            if (c == ' ' || c == '\t' || c == '\r' || c == '\n') {
                advance();
            } else if (c == '/' && peek(1) == '/') {
                while (!eof() && peek() != '\n') advance();
            } else if (c == '/' && peek(1) == '*') {
                advance(); advance();
                while (!eof() && !(peek() == '*' && peek(1) == '/')) advance();
                if (!eof()) { advance(); advance(); }
            } else {
                break;
            }
        }
    }

    Token makeOp(const char* lit, uint32_t l, uint32_t c) {
        Token t; t.kind = TokKind::Op; t.lexeme = lit; t.line = l; t.col = c;
        return t;
    }

    void lexIdent(uint32_t l, uint32_t c) {
        size_t start = pos;
        // Identifiers in QSC may contain '.' (qualified names like
        // "AnimTask_1599.isRun"). The decompiler emits the QVM identifier
        // pool string verbatim, so we treat '.' between two ident chars as
        // part of the same identifier — not a member-access operator.
        auto isIdent = [](char ch) { return std::isalnum((unsigned char)ch) || ch == '_'; };
        while (!eof()) {
            char ch = peek();
            if (isIdent(ch)) { advance(); continue; }
            if (ch == '.' && isIdent(peek(1))) { advance(); continue; }
            break;
        }
        Token t;
        t.lexeme.assign(src, start, pos - start);
        t.line = l; t.col = c;
        if      (t.lexeme == "TRUE")  t.kind = TokKind::KwTrue;
        else if (t.lexeme == "FALSE") t.kind = TokKind::KwFalse;
        else if (t.lexeme == "if")    t.kind = TokKind::KwIf;
        else if (t.lexeme == "else")  t.kind = TokKind::KwElse;
        else if (t.lexeme == "while") t.kind = TokKind::KwWhile;
        else                          t.kind = TokKind::Ident;
        out.tokens.push_back(std::move(t));
    }

    void lexNumber(uint32_t l, uint32_t c) {
        size_t start = pos;
        Token t; t.line = l; t.col = c;

        // Hex prefix
        if (peek() == '0' && (peek(1) == 'x' || peek(1) == 'X')) {
            advance(); advance();
            size_t hexStart = pos;
            while (!eof() && std::isxdigit((unsigned char)peek())) advance();
            if (pos == hexStart) { fail("malformed hex literal", l, c); return; }
            t.kind = TokKind::HexLit;
            t.lexeme.assign(src, start, pos - start);
            t.int_val = (int32_t)std::strtoul(t.lexeme.c_str() + 2, nullptr, 16);
            out.tokens.push_back(std::move(t));
            return;
        }

        // Integer / float
        while (!eof() && std::isdigit((unsigned char)peek())) advance();
        bool isFloat = false;
        if (peek() == '.' && std::isdigit((unsigned char)peek(1))) {
            isFloat = true;
            advance();
            while (!eof() && std::isdigit((unsigned char)peek())) advance();
        }
        // Optional exponent (e.g. 1e5, 2.5e-3)
        if (peek() == 'e' || peek() == 'E') {
            isFloat = true;
            advance();
            if (peek() == '+' || peek() == '-') advance();
            size_t expStart = pos;
            while (!eof() && std::isdigit((unsigned char)peek())) advance();
            if (pos == expStart) { fail("malformed float exponent", l, c); return; }
        }

        t.lexeme.assign(src, start, pos - start);
        if (isFloat) {
            t.kind = TokKind::FloatLit;
            t.float_val = std::strtof(t.lexeme.c_str(), nullptr);
        } else {
            t.kind = TokKind::IntLit;
            t.int_val = (int32_t)std::strtol(t.lexeme.c_str(), nullptr, 10);
        }
        out.tokens.push_back(std::move(t));
    }

    void lexString(uint32_t l, uint32_t c) {
        advance(); // consume opening "
        std::string val;
        while (!eof() && peek() != '"') {
            char ch = advance();
            if (ch == '\\' && !eof()) {
                char esc = advance();
                switch (esc) {
                    case 'n':  val.push_back('\n'); break;
                    case 't':  val.push_back('\t'); break;
                    case 'r':  val.push_back('\r'); break;
                    case '"':  val.push_back('"');  break;
                    case '\\': val.push_back('\\'); break;
                    default:   val.push_back(esc);  break;
                }
            } else {
                val.push_back(ch);
            }
        }
        if (eof()) { fail("unterminated string literal", l, c); return; }
        advance(); // consume closing "

        Token t;
        t.kind = TokKind::StringLit;
        t.lexeme = std::move(val);
        t.line = l; t.col = c;
        out.tokens.push_back(std::move(t));
    }

    void run() {
        while (true) {
            skipTrivia();
            if (eof()) break;
            uint32_t l = line, c = col;
            char ch = peek();

            if (std::isalpha((unsigned char)ch) || ch == '_') { lexIdent(l, c); continue; }
            if (std::isdigit((unsigned char)ch)) { lexNumber(l, c); continue; }
            if (ch == '"') { lexString(l, c); continue; }

            // Single-char punctuation
            switch (ch) {
                case '(': advance(); out.tokens.push_back({TokKind::LParen,    "(", 0, 0.0f, l, c}); continue;
                case ')': advance(); out.tokens.push_back({TokKind::RParen,    ")", 0, 0.0f, l, c}); continue;
                case '{': advance(); out.tokens.push_back({TokKind::LBrace,    "{", 0, 0.0f, l, c}); continue;
                case '}': advance(); out.tokens.push_back({TokKind::RBrace,    "}", 0, 0.0f, l, c}); continue;
                case ',': advance(); out.tokens.push_back({TokKind::Comma,     ",", 0, 0.0f, l, c}); continue;
                case ';': advance(); out.tokens.push_back({TokKind::Semicolon, ";", 0, 0.0f, l, c}); continue;
            }

            // Operators (two-char then one-char)
            char n = peek(1);
            auto pushOp = [&](const char* s, int len){
                for (int i = 0; i < len; ++i) advance();
                out.tokens.push_back(makeOp(s, l, c));
            };
            if (ch == '<' && n == '<') { pushOp("<<", 2); continue; }
            if (ch == '>' && n == '>') { pushOp(">>", 2); continue; }
            if (ch == '&' && n == '&') { pushOp("&&", 2); continue; }
            if (ch == '|' && n == '|') { pushOp("||", 2); continue; }
            if (ch == '=' && n == '=') { pushOp("==", 2); continue; }
            if (ch == '!' && n == '=') { pushOp("!=", 2); continue; }
            if (ch == '<' && n == '=') { pushOp("<=", 2); continue; }
            if (ch == '>' && n == '=') { pushOp(">=", 2); continue; }
            switch (ch) {
                case '+': case '-': case '*': case '/':
                case '&': case '|': case '^':
                case '<': case '>': case '=':
                case '~': case '!':
                {
                    char buf[2] = { ch, 0 };
                    advance();
                    out.tokens.push_back(makeOp(buf, l, c));
                    continue;
                }
            }

            fail(std::string("unexpected character '") + ch + "'", l, c);
            return;
        }

        Token end; end.kind = TokKind::End; end.line = line; end.col = col;
        out.tokens.push_back(std::move(end));
    }
};

} // anonymous

LexResult Lex(const std::string& source) {
    LexResult r;
    Lexer lx(source, r);
    lx.run();
    return r;
}

const char* TokKindName(TokKind k) {
    switch (k) {
        case TokKind::End:       return "End";
        case TokKind::Ident:     return "Ident";
        case TokKind::KwTrue:    return "KwTrue";
        case TokKind::KwFalse:   return "KwFalse";
        case TokKind::KwIf:      return "KwIf";
        case TokKind::KwElse:    return "KwElse";
        case TokKind::KwWhile:   return "KwWhile";
        case TokKind::IntLit:    return "IntLit";
        case TokKind::HexLit:    return "HexLit";
        case TokKind::FloatLit:  return "FloatLit";
        case TokKind::StringLit: return "StringLit";
        case TokKind::LParen:    return "LParen";
        case TokKind::RParen:    return "RParen";
        case TokKind::LBrace:    return "LBrace";
        case TokKind::RBrace:    return "RBrace";
        case TokKind::Comma:     return "Comma";
        case TokKind::Semicolon: return "Semicolon";
        case TokKind::Op:        return "Op";
    }
    return "?";
}

} // namespace qsc
