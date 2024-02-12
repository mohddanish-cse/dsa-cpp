#include <iostream>
using namespace std;

void nStarDiamond(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << ' ';
        }
        for (int j = 1; j < 2 * i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << ' ';
        }
        for (int j = 1; j < 2 * i; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}

int main()
{
    nStarDiamond(3);
    return 0;
}