#include <iostream>
using namespace std;

void nStarTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
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
    nStarTriangle(3);
    return 0;
}