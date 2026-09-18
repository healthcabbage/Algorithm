#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    double a;
    cin >> a;
    a += 1.5;

    cout.precision(2);
    cout << a;
    return 0;
}