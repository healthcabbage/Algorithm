#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;

    int a = 13;
    double b = 0.165;

    double c = 0;
    c = a * b;

    cout.precision(6);
    cout << a << " * " << b << " = " << c;

    return 0;
}