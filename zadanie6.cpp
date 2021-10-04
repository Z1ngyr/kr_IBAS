

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double S = 0;
    for (int k = 1;k <= n;k++) {
        double z = 0;
        for (int i = 1;i <= k;i++) {
            z += pow(i + 3, 2);
        }
         S += pow(k, 4)*1/z;

    }
    cout << S;
}

