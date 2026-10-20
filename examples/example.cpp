#include <iostream>
#include "include/math.hpp"
#include "include/conversion.hpp"

int main()
{
    std::cout << "=====================\n";
    std::cout << "      MathLib Demo\n";
    std::cout << "=====================\n\n";


    // Basic calculations

    std::cout << "=== Addition ===\n";
    std::cout << math::add(5, 3, 10, 20) << "\n\n";


    std::cout << "=== Subtraction ===\n";
    std::cout << math::subtract(100, 20, 10) << "\n\n";


    std::cout << "=== Multiplication ===\n";
    std::cout << math::multiply(5, 2, 3) << "\n\n";


    std::cout << "=== Division ===\n";
    std::cout << math::divide(100, 5, 2) << "\n\n";


    // Powers

    std::cout << "=== Square ===\n";
    std::cout << math::square(8) << "\n\n";


    std::cout << "=== Power ===\n";
    std::cout << math::power(2, 5) << "\n\n";


    std::cout << "=== Square root ===\n";
    std::cout << math::squareRoot(25) << "\n\n";


    // Geometry

    std::cout << "=== Distance between two points ===\n";
    std::cout << math::distance(0, 0, 3, 4) << "\n\n";


    std::cout << "=== Hypotenuse ===\n";
    std::cout << math::hypotenuse(3, 4) << "\n\n";


    // Trigonometry

    std::cout << "=== Sine of 90 degrees ===\n";
    std::cout << math::sine(math::degreesToRadians(90)) << "\n\n";


    std::cout << "=== Cosine of 0 degrees ===\n";
    std::cout << math::cosine(math::degreesToRadians(0)) << "\n\n";


    std::cout << "=== Tangent of 45 degrees ===\n";
    std::cout << math::tangent(math::degreesToRadians(45)) << "\n\n";


    // Conversions

    std::cout << "=== Degrees to radians ===\n";
    std::cout << math::degreesToRadians(180) << "\n\n";


    std::cout << "=== Radians to degrees ===\n";
    std::cout << math::radiansToDegrees(3.14159265358979323846f) << "\n\n";

    // Length conversions

    std::cout << "=== Kilometers to hectometers ===\n";
    std::cout << KmToH(2) << "\n\n";

    std::cout << "=== Hectometers to decameters ===\n";
    std::cout << HTtoDam(2) << "\n\n";

    std::cout << "=== Kilometers to meters ===\n";
    std::cout << KmToM(2) << "\n\n";

    std::cout << "=== Decameters to meters ===\n";
    std::cout << DamToM(3) << "\n\n";

    std::cout << "=== Meters to centimeters ===\n";
    std::cout << MToCm(3) << "\n\n";

    std::cout << "=== Meters to millimeters ===\n";
    std::cout << MToMm(3) << "\n\n";

    std::cout << "=== Centimeters to meters ===\n";
    std::cout << CmToM(250) << "\n\n";

    std::cout << "=== Millimeters to meters ===\n";
    std::cout << MmToM(2500) << "\n\n";

    // Weight conversions

    std::cout << "=== Kilograms to grams ===\n";
    std::cout << KgToG(2) << "\n\n";

    std::cout << "=== Grams to milligrams ===\n";
    std::cout << GToMg(5) << "\n\n";

    std::cout << "=== Milligrams to grams ===\n";
    std::cout << MgToG(2500) << "\n\n";

    // Temperature conversions

    std::cout << "=== Celsius to Fahrenheit ===\n";
    std::cout << CelsiusToFahrenheit(20) << "\n\n";

    std::cout << "=== Fahrenheit to Celsius ===\n";
    std::cout << FahrenheitToCelsius(68) << "\n\n";

    std::cout << "=== Factorial ===\n";
    std::cout << math::factorial(5) << "\n\n";


    return 0;
}
