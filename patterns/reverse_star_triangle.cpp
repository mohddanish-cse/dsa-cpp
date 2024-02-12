#include <iostream>
using namespace std;

void nStarTriangle(int n)
{
    // Write your code here.
    for (int i = n; i >= 1; i--)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << ' ';
        }
        for (int k = 1; k < 2 * i; k++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}

int main()
{
    int n;
    cin >> n;
    nStarTriangle(n);
    return 0;
}