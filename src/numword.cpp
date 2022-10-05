#include "numword.h"

core::numword::numword() : _num(0) {}

core::numword::numword(const numnum& num) : _num(num) {}

core::numword::~numword() { _num = 0; }

core::numnum core::numword::getnum() const { return _num; }

void core::numword::setnum(const core::numnum& num) { _num = num; }

std::string core::numword::words(core::numnum n)
{
    return "";
}