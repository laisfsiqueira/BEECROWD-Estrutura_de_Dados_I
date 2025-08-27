#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[10], i, v;
    cin >> v;

    for (i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            x[i] = v;
            v = v * 2;
        }
        else
        {
            x[i] = v;
            v *= 2;
        }
    }

    for (i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << x[i] << endl;
    }

    return 0;
}