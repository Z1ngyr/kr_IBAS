
#include <iostream>
using namespace std;
int main()
{
	cout << "Vvedi epsilon" << endl;;
	double e;
	cin >> e;
	double x;
	cout << "Vvedi x" << endl;;
	cin >> x;
	double a1 = x;
	double a2 = 5 * a1 + x * x * x / (3 * a1 - 1);
	
	while (abs(a2-a1)>=e) {
		a1 = a2;
		a2= 5 * a1 + x * x * x / (3 * a1 - 1);
		
	}
	cout << a2;
}
