
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    double c = 2.1;
    //b0-больше нуля m0-меньше нуля
    int b0=0, m0=0;
    while (c <= 4.2)
    {
        double z = pow(sin(abs(c * pow(x, 3) + x * x)), 2) / (sqrt(pow(c * x * x - pow(x, 3), 2) - 6.14));
        cout << c <<" " <<z<<endl;
        if (z > 0)b0++;
        else m0++;
        c += 0.2;
    }
    cout << b0 <<" " << m0;
}

