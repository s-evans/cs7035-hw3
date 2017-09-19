#ifndef DISCRETE_EXPONENT_H
#define DISCRETE_EXPONENT_H

#include "identity.hpp"

template<class Base, class Exponent, class Modulus>
Base discrete_exponent( Base base, Exponent exponent, Modulus const& modulus, Base result = identity<Base>::get() )
{
    while ( exponent > 0 ) {

        if ( exponent % 2 == 1 ) {
            result *= base;
            result %= modulus;
        } 

        base *= base;
        base %= modulus;
        exponent /= 2;
    }

    return result;
}

#endif // DISCRETE_EXPONENT_H
