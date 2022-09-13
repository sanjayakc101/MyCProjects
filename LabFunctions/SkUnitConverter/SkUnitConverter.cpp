#include "SkUnitConverter.h"
#include<iostream>
using namespace std;
int main()
{
    SkUnitConverter uc;
    string var;
    float mile, kilometer, pound, kilogram, fahrenheit, celsius, liter, gallon, quit;
    float i = 1;
    while (i <= 1000000000) {
        cout << "Enter the unit you want to convert from: l for liter, g for gallon, p for pound, kg for kilogram, m for mile, km for kilometer, f for fahrenheit, c for celsius" << endl;
        cout << "Conversion from l to g, g to l, p to kg, kg to p, m to km, km to m, f to c, c to f" << endl;
        cout << "Enter q to quit" << endl;
        cin >> var;
        cout << endl;

        if (var == "q")
        {
            return 0;
        }
        if (var == "list")
        {
            cout << "liter to gallon, kilogram to pound, celsius to fahrenheit, kilometer to mile" << endl << endl << endl;
        }
        if (var == "l")
        {
            cout << "enter liter" << endl;
            cin >> liter;
            cout << "in gallons: "<< uc.Gallon(liter) << endl;
        }
        if (var == "g")
        {
            cout << "enter gallon" << endl;
            cin >> gallon;
            cout << "in liters: " << uc.Liter(gallon) << endl;
        }
        if (var == "kg")
        {
            cout << "enter kilogram" << endl;
            cin >> kilogram;
            cout << "in pounds: " << uc.Pound(kilogram) << endl;
        }
        if (var == "p")
        {
            cout << "enter pound" << endl;
            cin >> pound;
            cout << "in kilograms: " << uc.Kilogram(pound) << endl;
        }
        if (var == "m")
        {
            cout << "enter mile" << endl;
            cin >> mile;
            cout << "in kilometers: " << uc.Kilometer(mile) << endl;
        }
        if (var == "km")
        {
            cout << "enter kilometer" << endl;
            cin >> kilometer;
            cout << "in miles: " << uc.Mile(kilometer) << endl;
        }
        if (var == "f")
        {
            cout << "enter fahrenheit" << endl;
            cin >> fahrenheit;
            cout << "in celsius: " << uc.Celsius(fahrenheit) << endl;
        }
        if (var == "c")
        {
            cout << "enter celsius" << endl;
            cin >> celsius;
            cout << "in fahrenheit: " << uc.Fahrenheit(celsius) << endl;
        }
        i++;
    }
    system("PAUSE");
}