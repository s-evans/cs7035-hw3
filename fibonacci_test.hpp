#ifndef FIBONACCI_TEST_H
#define FIBONACCI_TEST_H

inline bool fibonacci_test( mpz_class const& possible_prime )
{
    if ( possible_prime < 5 ) {
        return false;
    }

    // TODO: false converse???

    if ( ( possible_prime - 2 ) % 5 == 0 || ( possible_prime - 3 ) % 5 == 0 ) {
        // TODO: 
        return false;
    } else if ( ( possible_prime - 1 ) % 5 == 0 || ( possible_prime - 4 ) % 5 == 0 ) {
        // TODO: 
        return false;
    }

    return false;
}

#endif // FIBONACCI_TEST_H
