#include <iostream>
#include <string>
using namespace std;
class UnitConverter
{
public:
    UnitConverter(float m, float km, float p, float kg, float f, float c, float g, float l)
        : mile{ m }, kilometer{ km }, pound{ p }, kilogram{ kg }, fahrenheit{ f }, celsius{ c }, gallon{ g }, liter{ l } {}

void setMile(float m)
{
    mile = m;
}
float getMile()
{
    mile = kilometer / 1.609344;
    return mile;
}
void setKilometer(float km)
{
    kilometer = km;
}
float getKilometer()
{
    kilometer = mile * 1.609344;
    return kilometer;
}
void setPound(float p)
{
    pound = p;
}
float getPound()
{
    pound = kilogram * 2.20462;
    return pound;
}
void setKilogram(float kg)
{
    kilogram = kg;
}
float getKilogram()
{
    kilogram = pound / 2.20462;
    return kilogram;
}
void setFahrenheit(float f)
{
    fahrenheit = f;
}
float getFahrenheit()
{
    fahrenheit = (celsius * (9 / 5)) + 32;
    return fahrenheit;
}
void setCelsius(float c)
{
    celsius = c;
}
float getCelsius()
{
    celsius = (fahrenheit - 32) * (5 / 9);
    return celsius;
}
void setGallon(float g)
{
    gallon = g;
}
float getGallon()
{
    gallon = liter * 0.264172;
    return gallon;
}
void setLiter(float l)
{
    liter = l;
}
float getLiter()
{
    liter = gallon / 0.264172;
    return liter;
}
private:

    float mile{ 0.0 };
    float kilometer{ 0.0 };
    float pound{ 0.0 };
    float kilogram{ 0.0 };
    float fahrenheit{ 0.0 };
    float celsius{ 0.0 };
    float liter{ 0.0 };
    float gallon{ 0.0 }; 
};

