#ifndef TOKEN_HPP
#define TOKEN_HPP

#include "View.hpp"
#include <iostream>
#include <vector>
#include <cstdint>

namespace Kelly
{
    struct Token
    {
        int32_t start;
        int32_t length;
        int32_t row;
        int32_t column;
        int16_t type;

        static constexpr int16_t Identifier = 1;
        static constexpr int16_t Symbol = 2;
        static constexpr int16_t NumericLiteral = 3;
        static constexpr int16_t StringLiteral = 4;
    };

    std::vector<Token> GetTokens(const char* source);
}

#endif
