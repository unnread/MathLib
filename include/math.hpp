#pragma once
#include <cmath>

namespace math
{

// Addition
template<typename... T>
auto add(T... n)
{
    return (n + ...);
}

// Subtraction
template<typename T, typename... N>
auto subtract(T a, N... n)
{
    return a - (n + ...);
}

// Multiplication
template<typename... T>
auto multiply(T... n)
{
    return (n * ...);
}

// Division
template<typename T, typename... N>
auto divide(T a, N... n)
{
    return a / (n * ...);
}

// Square
template<typename T>
auto square(T n)
{
    return n * n;
}

// Power
template<typename T, typename U>
auto power(T n, U p)
{
    return std::pow(n, p);
}

// Square root
template<typename T>
auto squareRoot(T n)
{
    return std::sqrt(n);
}

// Distance between two points
inline float distance(float x1, float y1, float x2, float y2)
{
    return std::hypot(x2 - x1, y2 - y1);
}

// Hypotenuse
inline float hypotenuse(float a, float b)
{
    return std::hypot(a, b);
}

// Sine
template<typename T>
auto sine(T a)
{
    return std::sin(a);
}

// Cosine
template<typename T>
auto cosine(T a)
{
    return std::cos(a);
}

// Tangent
template<typename T>
auto tangent(T a)
{
    return std::tan(a);
}

// Degrees to radians
inline float degreesToRadians(float d)
{
    return d * 3.14159265359f / 180.0f;
}

// Radians to degrees
inline float radiansToDegrees(float r)
{
    return r * 180.0f / 3.14159265359f;
}

// Factorial
inline unsigned long long factorial(unsigned int n)
{
    unsigned long long r = 1;

    for (unsigned int i = 1; i <= n; i++)
        r *= i;

    return r;
}

// Legacy French names kept for source compatibility.
template<typename... T>
auto addition(T... n) { return add(n...); }

template<typename T, typename... N>
auto soustraction(T a, N... n) { return subtract(a, n...); }

template<typename... T>
auto multiplication(T... n) { return multiply(n...); }

template<typename T, typename... N>
auto division(T a, N... n) { return divide(a, n...); }

template<typename T>
auto carre(T n) { return square(n); }

template<typename T, typename U>
auto puissance(T n, U p) { return power(n, p); }

template<typename T>
auto racineCarree(T n) { return squareRoot(n); }

template<typename T>
auto sinus(T a) { return sine(a); }

template<typename T>
auto cosinus(T a) { return cosine(a); }

template<typename T>
auto tangente(T a) { return tangent(a); }

inline float degresVersRadians(float d) { return degreesToRadians(d); }
inline float radiansVersDegres(float r) { return radiansToDegrees(r); }
inline unsigned long long factorielle(unsigned int n) { return factorial(n); }

}
