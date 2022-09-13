#include "UnitConverter.h"
#include <iostream>
#include <string>
using namespace std;

int main(int a, char* b[])
{
    string var, var1;
    float mile, kilometer, pound, kilogram, fahrenheit, celsius, liter, gallon, quit, i;
    //program
    i = 1;
    while (i <= 1000000000) {
        cout << "Enter the starting unit. For a list of all units and commands, type list. To exit, type quit. Please note that this program will only loop one billion times." << endl << endl;
        cin >> var;
        cout << endl;

        if (var == "quit")
        {
            return 0;
        }
        //list of functions
        if (var == "list")
        {
            cout << "For cm to inch type centimeter. For inch to cm type inch. For miles to km type mile. For km to miles type kilometer. For meters to AU or feet type meter. For AU to meters type AU. For feet to meters type feet. For fahrenheit to celsius type fahrenheit. For Celsius to Fahrenheit type celsius then rerun the program." << endl << endl << endl;
        }

        if (var == "liter")
        {
            cout << "Please enter the number of gallon" << endl;
            cin >> gallon;
        }
        if (var == "gallon")
        {
            cout << "Please enter the number of liter" << endl;
            cin >> liter;
        }
        if (var == "kilogram")
        {
            cout << "Please enter the number of pound" << endl;
            cin >> pound;
        }
        if (var == "pound")
        {
            cout << "Please enter the number of kilogram" << endl;
            cin >> kilogram;
        }
        if (var == "mile")
        {
            cout << "Please enter the number of kilometer" << endl;
            cin >> kilometer;
        }
        if (var == "kilometer")
        {
            cout << "Please enter the number of mile" << endl;
            cin >> mile;
        }
        if (var == "fahrenheit")
        {
            cout << "Please enter temperature in Fahrenheit." << endl;
            cin >> fahrenheit;
        }
        if (var == "celsius")
        {
            cout << "Please enter temperature in Celsius." << endl;
            cin >> celsius;
        }
        i++;

        UnitConverter unitconverter{ mile, kilometer, pound, kilogram, fahrenheit, celsius, gallon, liter };
        cout << "In liter: " << unitconverter.getLiter() << "\n";

        system("PAUSE");
}
