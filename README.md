# MathLib

A small C++ library for common mathematical calculations.

## Features

- Addition, subtraction, multiplication, and division
- Squares, powers, and square roots
- Distance between two points and hypotenuse calculations
- Sine, cosine, and tangent
- Degree-to-radian and radian-to-degree conversions
- Factorials
- Length conversions between km, hm, dam, m, dm, cm, and mm
- Weight conversions between kg, hg, dag, g, dg, cg, and mg
- Celsius-to-Fahrenheit and Fahrenheit-to-Celsius conversions

## Installation

Clone the repository:

```sh
git clone https://github.com/unnread/MathLib.git
```

The math functions are in `include/math.hpp`. Unit and temperature conversions
are in `include/conversion.hpp`.

## Usage

```cpp
#include "include/conversion.hpp"
#include "include/math.hpp"
#include <iostream>

int main()
{
    std::cout << math::add(5, 3, 10) << '\n';
    std::cout << math::hypotenuse(3, 4) << '\n';

    std::cout << KmToM(2) << " meters\n";
    std::cout << KgToG(2) << " grams\n";
    std::cout << CelsiusToFahrenheit(20) << " Fahrenheit\n";
}
```

Compile the full example from the repository root with a C++17 compiler:

```sh
g++ -std=c++17 -I. examples/example.cpp -o mathlib-demo
```

See [examples/example.cpp](examples/example.cpp) for arithmetic, geometry,
trigonometry, length, weight, and temperature examples. Conversion functions
return integers, so conversions that produce fractional values are truncated.

## Documentation

Open [documentation/index.html](documentation/index.html) in a web browser.

## License

MathLib is distributed under the MIT License. See [LICENSE](LICENSE) for details.
