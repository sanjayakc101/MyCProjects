/*
Sanjaya Kc
Heidi Gentry Kolen
COMSC-165-5556
Lab: Functions
3 Oct 2021
*/
#include <iostream>
using namespace std;
int maximum(int a, int b, int c) {
    int max;
    max = 0;
    if (a > b and a > c) {
        max = a;
    }
    else if (b > a and b > c) {
        max = b;
    }
    else if (c > a and c > b) {
        max = c;
    }
    return max;
}
int minimum(int a, int b, int c) {
    int min;
    min = 0;
    if (a < b and a < c) {
        min = a;
    }
    else if (b < a and b < c) {
        min = b;
    }
    else if (c < a and c < b) {
        min = c;
    }
    return min;
}
int main() {
    int x=0;
    int y=0;
    int z=0;
    int min1=0;
    int max1=0;
    cout << "Enter first value: " << endl;
    cin >> x;
    cout << "Enter second value: " << endl;
    cin >> y;
    cout << "Enter third value: " << endl;
    cin >> z;
    min1 = minimum(x, y, z);
    max1 = maximum(x, y, z);
    cout << "Minimum value: " << min1 << "\n";
    cout << "Maximum value: " << max1 << "\n";
    return 0;
}