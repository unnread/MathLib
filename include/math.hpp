#pragma once

#include <cmath>

namespace math
{

// =========================
// Addition
// =========================
template<typename... Nombres>
auto addition(Nombres... nombres)
{
    return (nombres + ...);
}


// =========================
// Soustraction
// =========================
template<typename T, typename... Nombres>
auto soustraction(T premier, Nombres... nombres)
{
    return premier - (nombres + ...);
}


// =========================
// Multiplication
// =========================
template<typename... Nombres>
auto multiplication(Nombres... nombres)
{
    return (nombres * ...);
}


// =========================
// Division
// =========================
template<typename T, typename... Nombres>
auto division(T premier, Nombres... nombres)
{
    return premier / (nombres * ...);
}


// =========================
// Carré d'un nombre
// =========================
template<typename T>
auto carre(const T nombre)
{
    return nombre * nombre;
}


// =========================
// Puissance
// =========================
template<typename T, typename U>
auto puissance(T nombre, U exposant)
{
    return std::pow(nombre, exposant);
}


// =========================
// Racine carrée
// =========================
template<typename T>
auto racineCarree(T nombre)
{
    return std::sqrt(nombre);
}


// =========================
// Distance entre deux points
// =========================
inline float pythagoreCalculDistance(
    float x1,
    float y1,
    float x2,
    float y2
)
{
    float dx = x2 - x1;
    float dy = y2 - y1;

    return std::sqrt(dx * dx + dy * dy);
}


// =========================
// Hypoténuse d'un triangle rectangle
// =========================
inline float pythagoreHypotenuse(float a, float b)
{
    return std::sqrt(a * a + b * b);
}


// =========================
// Sinus
// =========================
template<typename T>
auto sinus(T angle)
{
    return std::sin(angle);
}


// =========================
// Cosinus
// =========================
template<typename T>
auto cosinus(T angle)
{
    return std::cos(angle);
}


// =========================
// Tangente
// =========================
template<typename T>
auto tangente(T angle)
{
    return std::tan(angle);
}


// =========================
// Conversion degrés -> radians
// =========================
inline float degresVersRadians(float degres)
{
    return degres * (3.14159265358979323846f / 180.0f);
}


// =========================
// Conversion radians -> degrés
// =========================
inline float radiansVersDegres(float radians)
{
    return radians * (180.0f / 3.14159265358979323846f);
}


// =========================
// Factorielle
// =========================
// Exemple : 5! = 5 × 4 × 3 × 2 × 1 = 120
inline unsigned long long factorielle(unsigned int nombre)
{
    unsigned long long resultat = 1;

    for(unsigned int i = 1; i <= nombre; i++)
    {
        resultat *= i;
    }

    return resultat;
}


}
