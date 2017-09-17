#ifndef DISCRETE_EXPONENT_H
#define DISCRETE_EXPONENT_H

#include "gmpxx.h"

inline mpz_class discrete_exponent( mpz_class base, mpz_class exponent, mpz_class const& mod )
{
    mpz_class result = 1;

    while ( exponent > 0 ) {
        if ( exponent % 2 == 1 ) {
            result = ( result * base ) % mod;
        }

        exponent /= 2;
        base = ( base * base ) % mod;
    }

    return result;
}

#endif // DISCRETE_EXPONENT_H
