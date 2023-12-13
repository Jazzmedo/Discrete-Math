#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter 'X' and 'Y' to solve 'X mod Y' \nEnter 'X' : ";
    cin >> x;
    cout << "Enter 'Y' : ";
    cin >> y;
    cout << "X mod Y = " << x % y << "\n";
    return 0;
}