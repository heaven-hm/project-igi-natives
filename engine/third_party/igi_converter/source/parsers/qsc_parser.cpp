#include "qsc_parser.h"
#include <ostream>
#include <sstream>

namespace qsc {

namespace {

// Binding-power table for Pratt parsing. Higher value = tighter binding.
// Mirrors the operator SET used by qvm_decompiler.cpp GetPriority(), but with
// standard C-like binding-power ordering. (GetPriority's numbers can't be used
// directly as bp because they place '=' at the top — fine for the decompiler's
// parenthesisation heuristic, wrong for parse semantics.)
struct OpInfo {
    int bp;            // 0 = not an infix op
    bool right_assoc;
};

OpInfo InfixInfo(const std::string& op) {
    // Lowest precedence at top.
    if (op == "=")  return {10, true};   // assignment (right-assoc)
    if (op == "||") return {20, false};
    if (op == "&&") return {30, false};
    if (op == "|")  return {40, false};
    if (op == "^")  return {50, false};
    if (op == "&")  return {60, false};
    if (op == "==" || op == "!=") return {70, false};
    if (op == "<" || op == "<=" || op == ">" || op == ">=") return {80, false};
    if (op == "<<" || op == ">>") return {90, false};
    if (op == "+" || op == "-")   return {100, false};
    if (op == "*" || op == "/")   return {110, false};
    return {0, false};
}

bool IsPrefixOp(const std::string& op) {
    return op == "-" || op == "!" || op == "~" || op == "+";
}

struct Parser {
    const std::vector<Token>& toks;
    size_t pos = 0;
    ParseResult& out;

    Parser(const std::vector<Token>& t, ParseResult& r) : toks(t), out(r) {}

    const Token& peek(size_t off = 0) const {
        size_t i = pos + off;
        return i < toks.size() ? toks[i] : toks.back(); // last is End
    }
    const Token& advance() { return toks[pos++]; }
    bool eof() const { return peek().kind == TokKind::End; }

    [[noreturn]] void die(const std::string& msg, const Token& t) {
        std::ostringstream os;
        os << "parse error at " << t.line << ":" << t.col << ": " << msg
           << " (got " << TokKindName(t.kind);
        if (!t.lexeme.empty()) os << " '" << t.lexeme << "'";
        os << ")";
        throw std::runtime_error(os.str());
    }

    void expect(TokKind k, const char* what) {
        if (peek().kind != k) die(std::string("expected ") + what, peek());
        advance();
    }

    std::unique_ptr<Node> makeNode(NodeKind k, const Token& at) {
        auto n = std::make_unique<Node>();
        n->kind = k; n->line = at.line; n->col = at.col;
        return n;
    }

    // ---- Expression parsing (Pratt) ----

    std::unique_ptr<Node> parsePrefix() {
        const Token& t = peek();
        switch (t.kind) {
            case TokKind::IntLit:
            case TokKind::HexLit: {
                auto n = makeNode(NodeKind::IntLit, t);
                n->i_val = t.int_val;
                advance();
                return n;
            }
            case TokKind::FloatLit: {
                auto n = makeNode(NodeKind::FloatLit, t);
                n->f_val = t.float_val;
                advance();
                return n;
            }
            case TokKind::StringLit: {
                auto n = makeNode(NodeKind::StringLit, t);
                n->s_val = t.lexeme;
                advance();
                return n;
            }
            case TokKind::KwTrue: {
                auto n = makeNode(NodeKind::BoolLit, t);
                n->b_val = true;
                advance();
                return n;
            }
            case TokKind::KwFalse: {
                auto n = makeNode(NodeKind::BoolLit, t);
                n->b_val = false;
                advance();
                return n;
            }
            case TokKind::Ident: {
                Token id = t;
                advance();
                if (peek().kind == TokKind::LParen) {
                    return parseCall(id);
                }
                auto n = makeNode(NodeKind::IdentLit, id);
                n->s_val = id.lexeme;
                return n;
            }
            case TokKind::LParen: {
                advance();
                auto inner = parseExpr(0);
                expect(TokKind::RParen, "')'");
                return inner;
            }
            case TokKind::Op: {
                if (!IsPrefixOp(t.lexeme)) die("unexpected operator in prefix position", t);
                Token op = t;
                advance();
                // Unary '+' is a no-op; collapse.
                auto rhs = parsePrefix();
                if (op.lexeme == "+") return rhs;
                auto n = makeNode(NodeKind::Unary, op);
                n->s_val = op.lexeme;
                n->children.push_back(std::move(rhs));
                return n;
            }
            default:
                die("expected expression", t);
        }
    }

    std::unique_ptr<Node> parseCall(const Token& callee) {
        auto n = makeNode(NodeKind::Call, callee);
        n->s_val = callee.lexeme;
        expect(TokKind::LParen, "'('");
        ++out.call_count;
        if (out.call_count > kMaxCalls) die("call count exceeds kMaxCalls (4096)", callee);
        if (peek().kind != TokKind::RParen) {
            while (true) {
                auto arg = parseExpr(0);
                ++out.arg_count;
                if (out.arg_count > kMaxArgs) die("argument count exceeds kMaxArgs (65536)", callee);
                n->children.push_back(std::move(arg));
                if (peek().kind == TokKind::Comma) { advance(); continue; }
                break;
            }
        }
        expect(TokKind::RParen, "')'");
        return n;
    }

    std::unique_ptr<Node> parseExpr(int min_bp) {
        auto left = parsePrefix();
        while (true) {
            const Token& t = peek();
            if (t.kind != TokKind::Op) break;
            OpInfo info = InfixInfo(t.lexeme);
            if (info.bp == 0 || info.bp < min_bp) break;
            Token op = t;
            advance();
            int right_min_bp = info.right_assoc ? info.bp : info.bp + 1;
            auto right = parseExpr(right_min_bp);
            auto bin = makeNode(NodeKind::Binary, op);
            bin->s_val = op.lexeme;
            bin->children.push_back(std::move(left));
            bin->children.push_back(std::move(right));
            left = std::move(bin);
        }
        return left;
    }

    // ---- Statements ----

    std::unique_ptr<Node> parseStmt() {
        const Token& t = peek();
        switch (t.kind) {
            case TokKind::KwIf:    return parseIf();
            case TokKind::KwWhile: return parseWhile();
            case TokKind::LBrace:  return parseBlock();
            case TokKind::Semicolon: { // empty stmt — skip
                advance();
                auto n = makeNode(NodeKind::Block, t);
                return n;
            }
            default: {
                auto expr = parseExpr(0);
                expect(TokKind::Semicolon, "';'");
                auto n = makeNode(NodeKind::ExprStmt, t);
                n->children.push_back(std::move(expr));
                return n;
            }
        }
    }

    std::unique_ptr<Node> parseIf() {
        Token kw = peek();
        advance();
        expect(TokKind::LParen, "'(' after 'if'");
        auto cond = parseExpr(0);
        expect(TokKind::RParen, "')' after if-condition");
        auto thenStmt = parseStmt();
        auto n = makeNode(NodeKind::If, kw);
        n->children.push_back(std::move(cond));
        n->children.push_back(std::move(thenStmt));
        if (peek().kind == TokKind::KwElse) {
            advance();
            n->children.push_back(parseStmt());
        }
        return n;
    }

    std::unique_ptr<Node> parseWhile() {
        Token kw = peek();
        advance();
        expect(TokKind::LParen, "'(' after 'while'");
        auto cond = parseExpr(0);
        expect(TokKind::RParen, "')' after while-condition");
        auto body = parseStmt();
        auto n = makeNode(NodeKind::While, kw);
        n->children.push_back(std::move(cond));
        n->children.push_back(std::move(body));
        return n;
    }

    std::unique_ptr<Node> parseBlock() {
        Token lb = peek();
        expect(TokKind::LBrace, "'{'");
        auto n = makeNode(NodeKind::Block, lb);
        while (peek().kind != TokKind::RBrace && !eof()) {
            n->children.push_back(parseStmt());
        }
        expect(TokKind::RBrace, "'}'");
        return n;
    }

    std::unique_ptr<Node> parseProgram() {
        Token start = peek();
        auto prog = makeNode(NodeKind::Program, start);
        while (!eof()) {
            prog->children.push_back(parseStmt());
        }
        return prog;
    }
};

} // anonymous

ParseResult Parse(const std::vector<Token>& tokens) {
    ParseResult r;
    if (tokens.empty()) {
        r.ok = false; r.error = "no tokens"; return r;
    }
    Parser p(tokens, r);
    try {
        r.program = p.parseProgram();
    } catch (const std::exception& ex) {
        r.ok = false;
        r.error = ex.what();
    }
    return r;
}

static const char* NodeKindName(NodeKind k) {
    switch (k) {
        case NodeKind::Program:   return "Program";
        case NodeKind::Block:     return "Block";
        case NodeKind::ExprStmt:  return "ExprStmt";
        case NodeKind::If:        return "If";
        case NodeKind::While:     return "While";
        case NodeKind::Call:      return "Call";
        case NodeKind::Binary:    return "Binary";
        case NodeKind::Unary:     return "Unary";
        case NodeKind::IntLit:    return "IntLit";
        case NodeKind::FloatLit:  return "FloatLit";
        case NodeKind::BoolLit:   return "BoolLit";
        case NodeKind::StringLit: return "StringLit";
        case NodeKind::IdentLit:  return "IdentLit";
    }
    return "?";
}

void DumpAst(const Node& n, std::ostream& os, int indent) {
    for (int i = 0; i < indent; ++i) os << "  ";
    os << NodeKindName(n.kind);
    switch (n.kind) {
        case NodeKind::IntLit:    os << " " << n.i_val; break;
        case NodeKind::FloatLit:  os << " " << n.f_val; break;
        case NodeKind::BoolLit:   os << " " << (n.b_val ? "TRUE" : "FALSE"); break;
        case NodeKind::StringLit: os << " \"" << n.s_val << "\""; break;
        case NodeKind::IdentLit:  os << " " << n.s_val; break;
        case NodeKind::Call:      os << " " << n.s_val << "(" << n.children.size() << ")"; break;
        case NodeKind::Binary:
        case NodeKind::Unary:     os << " '" << n.s_val << "'"; break;
        default: break;
    }
    os << "\n";
    for (const auto& c : n.children) DumpAst(*c, os, indent + 1);
}

} // namespace qsc
