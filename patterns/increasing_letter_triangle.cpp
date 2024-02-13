#include <iostream>
using namespace std;

void nLetterTriangle(int n)
{
    // Write your code here.

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch++ << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    nLetterTriangle(n);
    return 0;
}