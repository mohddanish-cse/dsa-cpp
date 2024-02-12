#include <iostream>
using namespace std;

void nBinaryTriangle(int n)
{
    // Write your code here.
    int bin = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            bin = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << bin << ' ';
            if (bin == 1)
                bin = 0;
            else
                bin = 1;
        }
        cout << endl;
        if (bin == 1)
            bin = 0;
        else
            bin = 1;
    }
}

int main()
{
    int n;
    cin >> n;
    nBinaryTriangle(n);
    return 0;
}