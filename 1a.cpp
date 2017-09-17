#include <cstdlib>
#include <iostream>
#include "gmpxx.h"
#include "fermat_test.hpp"

int main()
{

    // k = 15692926; p = 5832618389; r = 5801232537;
    //
    // real    1m29.180s
    // user    1m28.827s
    // sys     0m0.046s
    static const mpz_class r = 5801232537_mpz;

    mpz_class p = r;

    static const constexpr unsigned int f = 2;

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
