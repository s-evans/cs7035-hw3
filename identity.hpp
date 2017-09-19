#ifndef IDENTITY_H
#define IDENTITY_H

template<class T>
struct identity {
    static inline constexpr T get() {
        return 1;
    }
};

#endif // IDENTITY_H
