#include <cstdlib>
#include <iostream>
#include "gmpxx.h"
#include "fermat_test.hpp"
#include "fibonacci_test.hpp"
#include "thousand_primes_test.hpp"

int main()
{

    // k = 11; p = 3624838065575969338652497; r = 3624838065575969338652387;

    static const mpz_class r = 3624838065575969338652387_mpz;

    mpz_class p = r;

    static const constexpr unsigned int f = 10;

    for ( unsigned int k = 0 ; k < r ; ++k, p += f ) {

        if ( !thousand_primes_test( p ) ) {
            continue;
        }

        if ( !fermat_test( r, p ) ) {
            continue;
        }

        if ( !fibonacci_test( p ) ) {
            continue;
        }

        std::cout << "k = " << k << "; p = " << p << "; r = " << r << ";" << std::endl;

        return EXIT_SUCCESS;
    }

    return EXIT_FAILURE;
}
