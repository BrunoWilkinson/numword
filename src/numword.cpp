#include "numword.h"

core::numword::numword() : _num(0) {}

core::numword::numword(const numnum& num) : _num(num) {}

core::numword::~numword() { _num = 0; }

std::string core::numword::words(numnum n)
{
    return "";
}