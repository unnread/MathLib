#pragma once
#include <cmath>

namespace math
{

// Addition
template<typename... T>
auto addition(T... n)
{
    return (n + ...);
}

// Soustraction
template<typename T, typename... N>
auto soustraction(T a, N... n)
{
    return a - (n + ...);
}

// Multiplication
template<typename... T>
auto multiplication(T... n)
{
    return (n * ...);
}

// Division
template<typename T, typename... N>
auto division(T a, N... n)
{
    return a / (n * ...);
}

// Carré
template<typename T>
auto carre(T n)
{
    return n * n;
}

// Puissance
template<typename T, typename U>
auto puissance(T n, U p)
{
    return std::pow(n, p);
}

// Racine carrée
template<typename T>
auto racineCarree(T n)
{
    return std::sqrt(n);
}

// Distance entre deux points
inline float distance(float x1, float y1, float x2, float y2)
{
    return std::hypot(x2 - x1, y2 - y1);
}

// Hypoténuse
inline float hypotenuse(float a, float b)
{
    return std::hypot(a, b);
}

// Sinus
template<typename T>
auto sinus(T a)
{
    return std::sin(a);
}

// Cosinus
template<typename T>
auto cosinus(T a)
{
    return std::cos(a);
}

// Tangente
template<typename T>
auto tangente(T a)
{
    return std::tan(a);
}

// Degrés → radians
inline float degresVersRadians(float d)
{
    return d * 3.14159265359f / 180.0f;
}

// Radians → degrés
inline float radiansVersDegres(float r)
{
    return r * 180.0f / 3.14159265359f;
}

// Factorielle
inline unsigned long long factorielle(unsigned int n)
{
    unsigned long long r = 1;

    for (unsigned int i = 1; i <= n; i++)
        r *= i;

    return r;
}

}
