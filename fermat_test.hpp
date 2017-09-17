#ifndef FERMAT_TEST_H
#define FERMAT_TEST_H

#include "discrete_exponent.hpp"

// Fermat’s Test
// If an-1 = 1 (mod n) then the function returns true since n might be prime, otherwise it returns false as n is composite.

inline bool fermat_test( mpz_class const& base, mpz_class const& possible_prime )
{
    return ( discrete_exponent( base, possible_prime - 1, possible_prime ) == 1 );
}

#endif // FERMAT_TEST_H
