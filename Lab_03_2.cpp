// Lab_03_2.cpp
// < Половінко Софія >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 3.2

#include <iostream>

using namespace std;

int main()
{
    double x, a, b, c, F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

     if ((x - 1 < 0) && (b - x != 0))
        F = a * x * x + b;
    
    if ((x - 1 > 0) && (b + x == 0))
        F = (x - a) / x;
    
    if (!((x - 1 < 0) && (b - x != 0)) && !((x - 1 > 0) && (b + x == 0)))
        F = x / c;

    cout << endl;
    cout << "1) F = " << F << endl;

    if ((x - 1 < 0) && (b - x != 0))
        F = a * x * x + b;
    else
        if ((x - 1 > 0) && (b + x == 0))
            F = (x - a) / x;
        else
            F = x / c;

    cout << "2) F = " << F << endl;

    return 0;
}