
class SkUnitConverter
{
public:
    float mile;
    float kilometer;
    float pound;
    float kilogram;
    float fahrenheit;
    float celsius;
    float gallon;
    float liter;

    float Mile(float kilometer)
    {
        mile = kilometer / 1.609344;
        return mile;
    }
    float Kilometer(float mile)
    {
        kilometer = mile * 1.609344;
        return kilometer;
    }
    float Pound(float kilogram)
    {
        pound = kilogram * 2.20462;
        return pound;
    }
    float Kilogram(float pound)
    {
        kilogram = pound / 2.20462;
        return kilogram;
    }
    float Fahrenheit(float celsius)
    {
        fahrenheit = (celsius * (9 / 5)) + 32;
        return fahrenheit;
    }
    float Celsius(float fahrenheit)
    {
        celsius = (fahrenheit - 32) * (5 / 9);
        return celsius;
    }
    float Gallon(float liter)
    {
        gallon = liter * 0.264172;
        return gallon;
    }
    float Liter(float gallon)
    {
        liter = gallon / 0.264172;
        return liter;
    }
};

