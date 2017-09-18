#ifndef IDENTITY_H
#define IDENTITY_H

#include "identity.hpp"
#include "tag.hpp"

template<typename T> T identity( tag<T> ) {
    return 1;
}

#endif // IDENTITY_H
