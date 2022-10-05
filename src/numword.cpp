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

std::string core::numword::words()
{
    return words(_num);
}

std::string core::numword::words(const core::numnum& num)
{
    if (num > core::maxnum) return core::errnum;
    std::string output = "";
    core::numnum n = num;

    if (n == 0)
    {
        return core::singles[n];
    }

    if (n >= 1000)
    {
        for(int i = 5; i > 0; --i)
        {
            core::numnum power = (core::numnum)pow(1000.0, i);
            core::numnum _n = (n - (n % power)) / power;
            if (_n)
            {
                int index = i;
                core::numword _nw(_n);
                output += appendspace();
                output += _nw.words();
                output += appendspace();
                output += core::powers[index];
                n -= _n * power;
            }
        }
    }

    if (n >= 100 && n < 1000)
    {
        numnum _n =(n - (n % 100)) / 100;
        numword _nw(_n);
        output += appendspace();
        output += _nw.words();
        output += appendspace();
        output += core::hundred;
        n -= _n * 100;
    }

    if ( n >= 20 && n < 100)
    {
        numnum _n = (n - (n % 10)) / 10;
        output.append(appendspace());
        output.append(core::teens[_n]);
        n -= _n * 10;
        hyphen_flag = true;
    }

    if (n >= 10 && n < 20)
    {
        output.append(appendspace());
        output.append(teens[n - 10]);
        n = 0;
    }

    if (n > 0 && n < 10)
    {
        output.append(appendspace());
        output.append(core::singles[n]);
    }

    return output;
}

std::string core::numword::operator () (const core::numnum& num) 
{ 
    return words(num);
}

std::string core::numword::appendspace()
{
    std::string output = hyphen_flag ? core::hyphen : core::space;
    hyphen_flag = false;
    return output;
}