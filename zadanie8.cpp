#include <iostream>

using namespace std;
long double f(int N)
{
    if (N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * f(N - 1);
}
int main()
{
    
    double e;
    cin >>  e; //вводим эпсилон
    double x;
    cin >> x;//вводим x
    double s = 0;
    int k = 0;
    do {
        s += pow(-x, 2 * k + 1) / f(2 * k + 1);
        k++;
    }     
    while (pow(-x,2*k)/f(2*k)>e);
    
    cout << s;
}
