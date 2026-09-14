#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    double a = 30.48 * 9.2;
    double b = 160934 * 1.3;

    cout.precision(1);
    cout << "9.2ft = " << a << "cm" << "\n";
    cout << "1.3mi = " << b << "cm";
    return 0;
}