/*
Sanjaya Kc
Heidi Gentry Kolen
COMSC-165-5556
Semester Project Lab: Sanjaya's Unit Converter - File 2 of 2
5 Dec 2021
*/
#include "SkUnitConverter.h"
#include<iostream>
using namespace std;
int main()
{
    SkUnitConverter uc;
    string str;
    float mile, kilometer, pound, kilogram, fahrenheit, celsius, liter, gallon, quit;
    float i = 1;
    while (i <= 1000000000) {
        cout << "SANJAYA'S UNIT CONVERTER\n" << "*************************" << endl;
        cout << "Pick a number for a desired conversion\n" << endl;
        cout << "1. Gallons to Liters\n" << "2. Liters to Gallons\n" << "3. Pounds to Kilograms\n" << "4. Kilograms to Pounds" << endl;
        cout << "5. Kilometers to Miles\n" << "6. Miles to Kilometers\n" << "7. Celsius to Fahrenheit\n" << "8. Fahrenheit to Celsius" << endl;
        cout << "9. To Quit\n" << "*************************" << endl;

        cin >> str;
        cout << endl;

        if (str == "9")
        {
            return 0;
        }
        if (str == "1")
        {
            cout << "Enter number of Gallons: " << endl;
            cin >> gallon;
            cout << "Your Conversion in Liters: " << uc.Liter(gallon) << endl << endl;
        }
        if (str == "2")
        {
            cout << "Enter number of Liters: " << endl;
            cin >> liter;
            cout << "Your conversion in Gallons: " << uc.Gallon(liter) << endl << endl;
        }
        if (str == "3")
        {
            cout << "Enter number of Pounds: " << endl;
            cin >> pound;
            cout << "Your conversion in Kilograms: " << uc.Kilogram(pound) << endl << endl;
        }
        if (str == "4")
        {
            cout << "Enter number of Kilograms: " << endl;
            cin >> kilogram;
            cout << "Your conversion in Pounds: " << uc.Pound(kilogram) << endl << endl;
        }
        if (str == "5")
        {
            cout << "Enter number of Kilometers: " << endl;
            cin >> kilometer;
            cout << "Your conversion in Miles: " << uc.Mile(kilometer) << endl << endl;
        }
        if (str == "6")
        {
            cout << "Enter number of Miles: " << endl;
            cin >> mile;
            cout << "Your conversion in Kilometers: " << uc.Kilometer(mile) << endl << endl;
        }
        if (str == "7")
        {
            cout << "Enter temperature in Celsius: " << endl;
            cin >> celsius;
            cout << "Your converted temperature in Fahrenheit: " << uc.Fahrenheit(celsius) << endl << endl;
        }
        if (str == "8")
        {
            cout << "Enter temperature in Fahrenheit: " << endl;
            cin >> fahrenheit;
            cout << "Your converted temperature in Celsius: " << uc.Celsius(fahrenheit) << endl << endl;
        }
        i++;
    }
    system("PAUSE");
}