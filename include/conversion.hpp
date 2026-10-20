#pragma once
#include <cmath>

int KmToH(int km)
{
    return km * 10;
}

int KmToDam(int km) 
{
    return km * 100;
}

int KmToM(int km)
{
    return km * 1000;
}

int KmToDm(int km) 
{
    return km * 10000;
}

int KmToCm(int km) 
{
    return km * 100000;
}

int KmToMm(int km) 
{
    return km * 1000000;
}

int HToKm(int h) 
{
    return h / 10;
}

int HTtoDam(int h) 
{
    return h * 100;
}

int HToM(int h) 
{
    return h * 1000;
}   

int HToDm(int h) 
{
    return h * 10000;
}

int HToCm(int h) 
{
    return h * 100000;
}

int HToMm(int h) 
{
    return h * 1000000;
}

int DamToKm(int dam) 
{
    return dam / 100;
}

int DamToH(int dam) 
{
    return dam / 10;
}

int DamToM(int dam) 
{
    return dam * 10;
}

int DamToDm(int dam) 
{
    return dam * 100;
}

int DamToCm(int dam) 
{
    return dam * 1000;
}

int DamToMm(int dam) 
{
    return dam * 10000;
}

int MToKm(int m) 
{
    return m / 1000;
}

int MToH(int m) 
{
    return m / 100;
}

int MToDam(int m) 
{
    return m / 10;
}

int MToDm(int m) 
{
    return m * 10;
}

int MToCm(int m) 
{
    return m * 100;
}

int MToMm(int m) 
{
    return m * 1000;
}

int DmToKm(int dm) 
{
    return dm / 10000;
}

int DmToH(int dm) 
{
    return dm / 1000;
}

int DmToDam(int dm) 
{
    return dm / 100;
}
int DmToM(int dm) 
{
    return dm / 10;
}

int DmToCm(int dm) 
{
    return dm * 10;
}

int DmToMm(int dm) 
{
    return dm * 100;
}

int CmToKm(int cm) 
{
    return cm / 100000;
}

int CmToH(int cm) 
{
    return cm / 10000;
}

int CmToDam(int cm) 
{
    return cm / 1000;
}

int CmToM(int cm) 
{
    return cm / 100;
}

int CmToDm(int cm) 
{
    return cm / 10;
}

int CmToMm(int cm) 
{
    return cm * 10;
}

int MmToKm(int mm) 
{
    return mm / 1000000;
}

int MmToH(int mm) 
{
    return mm / 100000;
}

int MmToDam(int mm) 
{
    return mm / 10000;
}

int MmToM(int mm) 
{
    return mm / 1000;
}

int MmToDm(int mm) 
{
    return mm / 100;
}

int MmToCm(int mm) 
{
    return mm / 10;
}

// Weight conversions

int KgToHg(int kg)
{
    return kg * 10;
}

int KgToDag(int kg)
{
    return kg * 100;
}

int KgToG(int kg)
{
    return kg * 1000;
}

int KgToDg(int kg)
{
    return kg * 10000;
}

int KgToCg(int kg)
{
    return kg * 100000;
}

int KgToMg(int kg)
{
    return kg * 1000000;
}

int HgToKg(int hg)
{
    return hg / 10;
}

int HgToDag(int hg)
{
    return hg * 10;
}

int HgToG(int hg)
{
    return hg * 100;
}

int HgToDg(int hg)
{
    return hg * 1000;
}

int HgToCg(int hg)
{
    return hg * 10000;
}

int HgToMg(int hg)
{
    return hg * 100000;
}

int DagToKg(int dag)
{
    return dag / 100;
}

int DagToHg(int dag)
{
    return dag / 10;
}

int DagToG(int dag)
{
    return dag * 10;
}

int DagToDg(int dag)
{
    return dag * 100;
}

int DagToCg(int dag)
{
    return dag * 1000;
}

int DagToMg(int dag)
{
    return dag * 10000;
}

int GToKg(int g)
{
    return g / 1000;
}

int GToHg(int g)
{
    return g / 100;
}

int GToDag(int g)
{
    return g / 10;
}

int GToDg(int g)
{
    return g * 10;
}

int GToCg(int g)
{
    return g * 100;
}

int GToMg(int g)
{
    return g * 1000;
}

int DgToKg(int dg)
{
    return dg / 10000;
}

int DgToHg(int dg)
{
    return dg / 1000;
}

int DgToDag(int dg)
{
    return dg / 100;
}

int DgToG(int dg)
{
    return dg / 10;
}

int DgToCg(int dg)
{
    return dg * 10;
}

int DgToMg(int dg)
{
    return dg * 100;
}

int CgToKg(int cg)
{
    return cg / 100000;
}  

int CgToHg(int cg)
{
    return cg / 10000;
}

int CgToDag(int cg)
{
    return cg / 1000;
}

int CgToG(int cg)
{
    return cg / 100;
}

int CgToDg(int cg)
{
    return cg / 10;
}

int CgToMg(int cg)
{
    return cg * 10;
}

int MgToKg(int mg)
{
    return mg / 1000000;
}

int MgToHg(int mg)
{
    return mg / 100000;
}

int MgToDag(int mg)
{
    return mg / 10000;
}

int MgToG(int mg)
{
    return mg / 1000;
}

int MgToDg(int mg)
{
    return mg / 100;
}

int MgToCg(int mg)
{
    return mg / 10;
}



int CelsiusToFahrenheit(int celsius)
{
    return (celsius * 9 / 5) + 32;
}

int FahrenheitToCelsius(int fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
