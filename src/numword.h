#ifndef NUMWORD_H
#define NUMWORD_H

#include <cstdio>
#include <string>
#include <cmath>

namespace core {
    typedef uint64_t numnum;
    constexpr numnum maxnum = 999999999999999999;
    static const std::string errnum = "error";
    static const std::string singles[] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
    static const std::string teens[] = {
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };
    static const std::string tens[] = {
        errnum, errnum, "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty",
    };
    static const std::string hundred = "hundred";
    static const std::string powers[] = {
        errnum, "thousand", "million", "billion", "trillion", "quadrillion"
    };
    static const std::string hyphen = "-";
    static const std::string space = " ";

    class numword {
        numnum _num = 0;
        bool hyphen_flag = false;
        std::string appendspace();
        public:
            numword();
            numword(const numnum& num);
            ~numword();
            numnum getnum() const;
            void setnum(const numnum& num);
            numnum operator = (const numnum& num);
            std::string words();
            std::string words(const numnum& num);
            std::string operator () (const numnum& num);
    };
};

#endif // NUMWORD_H