#include <iostream>
#include "numword.h"

int main()
{
    core::numword nw;
    uint64_t n;

    n = 3; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;
    n = 47; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;
    n = 73; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;
    n = 1492; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;
    n = 10012; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;
    n = 100073; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;
    n = 1000000; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;
    n = 1000000001; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;
    n = 123000000000; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;
    n = 474142398123; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;
    n = 1474142398007; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;
    n = 999000000000000; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;
    n = 999999999999999999; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;
    n = 1000000000000000000; std::cout << "n is " << n << ", " << nw.words(n) << std::endl;

    return 0;
}