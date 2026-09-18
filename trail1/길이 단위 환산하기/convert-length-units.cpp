#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    double a;
    cin >> a;

    a *= 30.48;

    cout.precision(1);
    cout << a;
    return 0;
}