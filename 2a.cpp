#include <cstdlib>
#include <iostream>
#include "gmpxx.h"
#include "fermat_test.hpp"

int main()
{

    // k = 7; p = 3624838065575969338652401; r = 3624838065575969338652387;

    static const mpz_class r = 3624838065575969338652387_mpz;

    mpz_class p = r;

    static const constexpr unsigned int f = 2;

    for ( unsigned int k = 0 ; k < r ; ++k, p += f ) {

        if ( fermat_test( r, p ) ) {
            std::cout << "k = " << k << "; p = " << p << "; r = " << r << ";" << std::endl;
            return EXIT_SUCCESS;
        }
    }

    return EXIT_FAILURE;
}
