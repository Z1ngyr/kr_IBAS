#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >>  x;
    if (x <= 4)
        cout << exp(-3 * x) - pow(2 - x, 1 / 3);
    else if (x <= 7)
        cout << x / (x - 6);
    else cout << pow(x, 3) + 9;

     


}


