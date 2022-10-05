#include "numword.h"

core::numword::numword() : _num(0) {}

core::numword::numword(const numnum& num) : _num(num) {}

core::numword::~numword() { _num = 0; }

core::numnum core::numword::getnum() const { return _num; }

void core::numword::setnum(const core::numnum& num) { _num = num; }

core::numnum core::numword::operator = (const numnum& num)
{
    setnum(num);
    return getnum();
}

std::string core::numword::words(const core::numnum& n)
{
    return "";
}

std::string core::numword::operator () (const core::numnum& num) 
{ 
    return words(num);
}