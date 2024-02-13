#include <iostream>
using namespace std;

void alphaRamp(int n)
{
    // Write your code here.
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << ' ';
        }
        ch++;
        cout << '\n';
    }
}

int main()
{
    int n;
    cin >> n;
    alphaRamp(n);
    return 0;
}