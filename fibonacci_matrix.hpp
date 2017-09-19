#ifndef FIBONACCI_MATRIX_H
#define FIBONACCI_MATRIX_H

#include "matrix.hpp"
#include "identity.hpp"

template<class T>
class fibonacci_matrix : public matrix<T, 2, 2> {
public:

    // Create a fibonacci matrix
    static inline constexpr matrix<T, 2, 2> identity()
    {
        return matrix<T, 2, 2>{ 1, 1, 1, 0 };
    }

    fibonacci_matrix() = delete;

};

template<class T> struct identity<fibonacci_matrix<T>> {
    static inline constexpr fibonacci_matrix<T> get() {
        return fibonacci_matrix<T>::identity();
    }
};

#endif // FIBONACCI_MATRIX_H
