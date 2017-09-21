#include "gmpxx.h"
#include "thousand_primes_test.hpp"
#include <cstdlib>
#include <iostream>

int main()
{

    // k = 1; p = 5801232539; r = 5801232537;

    static const mpz_class r = 5801232537_mpz;

    mpz_class p = r;

    static const constexpr unsigned int f = 2;

    for ( unsigned int k = 0; k < r; ++k, p += f ) {

        if ( thousand_primes_test( p ) ) {
            std::cout << "k = " << k << "; p = " << p << "; r = " << r << ";" << std::endl;
            return EXIT_SUCCESS;
        }
    }

    return EXIT_FAILURE;
}
