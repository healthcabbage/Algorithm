#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    
	for (int i = 1; i <= b; i++)
	{
		for (int c = 1; c <= a; c++)
		{
			cout << "*";
		}			
		cout << "\n";
	}
    return 0;
}