#include "fibonacci_test.hpp"
#include "gmpxx.h"
#include <cstdlib>
#include <iostream>

int main()
{

    // k = 8; p = 5801232617; r = 5801232537;

    static const mpz_class r = 5801232537_mpz;

    mpz_class p = r;

    static const constexpr unsigned int f = 10;

    for ( unsigned int k = 0 ; k < r ; ++k, p += f ) {

        if ( fibonacci_test( p ) ) {
            std::cout << "k = " << k << "; p = " << p << "; r = " << r << ";" << std::endl;
            return EXIT_SUCCESS;
        }
    }

    return EXIT_FAILURE;
}
