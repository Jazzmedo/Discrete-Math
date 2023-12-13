#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cout << "Enter The Number of ELements : ";
    cin >> t;
    double check = 0.0;
    double x[t], fx[t], xfx = 0, x2fx = 0;
    while (true)
    {
        check = 0.0;
        for (int i = 0; i < t; i++)
        {
            cout << "Enter x Number " << i + 1 << " : ";
            cin >> x[i];
            cout << "Enter f(x) Number " << i + 1 << " : ";
            cin >> fx[i];
            check += fx[i];
        }
        if (check == 1)
            break;
        else
            cout<<"Logic error: The sum of 'f(x)' not equal to 1\nTry again\n";
    }
    cout << "=========================================\n   X";
    for (int i = 0; i < t; i++)
        cout << " | " << fixed << setprecision(2) << x[i];
    cout << "\nF(x)";
    for (int i = 0; i < t; i++)
        cout << " | " << fx[i];

    for (int i = 0; i < t; i++)
    {
        xfx += x[i] * fx[i];
        x2fx += pow(x[i], 2) * fx[i];
    }
    cout << "\n=========================================\nE(x)  : " << xfx;
    cout << "\nE(x2) : " << x2fx;
    xfx = pow(xfx, 2);
    cout << "\nV(x)  : " << x2fx - xfx;
    return 0;
}