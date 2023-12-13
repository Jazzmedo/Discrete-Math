#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, n;
    cout << "Enter 'a' and 'n' to solve 'a mod n' \nEnter 'a' : ";
    cin >> a;
    cout << "Enter 'n' : ";
    cin >> n;
    int q=a/n;
    int r=a-(q*n);
    cout << "X mod Y = " << r << "\n";
    return 0;
}