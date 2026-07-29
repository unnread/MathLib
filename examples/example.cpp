#include <iostream>
#include "include/math.hpp"

int main()
{
    std::cout << "=====================\n";
    std::cout << "      MathLib Demo\n";
    std::cout << "=====================\n\n";


    // Calculs de base

    std::cout << "=== Addition ===\n";
    std::cout << math::addition(5, 3, 10, 20) << "\n\n";


    std::cout << "=== Soustraction ===\n";
    std::cout << math::soustraction(100, 20, 10) << "\n\n";


    std::cout << "=== Multiplication ===\n";
    std::cout << math::multiplication(5, 2, 3) << "\n\n";


    std::cout << "=== Division ===\n";
    std::cout << math::division(100, 5, 2) << "\n\n";


    // Puissances

    std::cout << "=== Carre ===\n";
    std::cout << math::carre(8) << "\n\n";


    std::cout << "=== Puissance ===\n";
    std::cout << math::puissance(2, 5) << "\n\n";


    std::cout << "=== Racine carree ===\n";
    std::cout << math::racineCarree(25) << "\n\n";


    // Géométrie

    std::cout << "=== Distance entre deux points ===\n";
    std::cout << math::pythagoreCalculDistance(0, 0, 3, 4) << "\n\n";


    std::cout << "=== Hypotenuse ===\n";
    std::cout << math::pythagoreHypotenuse(3, 4) << "\n\n";


    // Trigonométrie

    std::cout << "=== Sinus 90 degres ===\n";
    std::cout << math::sinus(math::degresVersRadians(90)) << "\n\n";


    std::cout << "=== Cosinus 0 degres ===\n";
    std::cout << math::cosinus(math::degresVersRadians(0)) << "\n\n";


    std::cout << "=== Tangente 45 degres ===\n";
    std::cout << math::tangente(math::degresVersRadians(45)) << "\n\n";


    // Conversions

    std::cout << "=== Degres vers radians ===\n";
    std::cout << math::degresVersRadians(180) << "\n\n";


    std::cout << "=== Radians vers degres ===\n";
    std::cout << math::radiansVersDegres(3.14159265358979323846f) << "\n\n";


    return 0;
}
