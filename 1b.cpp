#include <cstdlib>
#include <iostream>
#include "gmpxx.h"
#include "fermat_test.hpp"
#include "fibonacci_test.hpp"

int main()
{

    // k = 8822719; p = 5889459727; r = 5801232537;

    static const mpz_class r = 5801232537_mpz;

    // TODO: use fibonacci test

    mpz_class p = r;

    static const constexpr unsigned int f = 10;

    for ( unsigned int k = 0 ; k < r ; ++k, p += f ) {

        if ( p % 3 == 0 ) {
            continue;
        }

        if ( p % 5 == 0 ) {
            continue;
        }

        if ( fermat_test( p, r ) ) {
            std::cout << "k = " << k << "; p = " << p << "; r = " << r << ";" << std::endl;
            return EXIT_SUCCESS;
        }
    }

    return EXIT_FAILURE;
}
