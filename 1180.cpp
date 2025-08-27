#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, p=1000, position;
    cin >> n;
    int x[n];

    for(i = 0;i < n;i++)
    {
        cin >> x[i];
        if (x[i] < p)
        {
            p = x[i];
            position = i;
        }
        
    }

    cout << "Menor valor: " << p << endl;
    cout << "Posicao: " << position << endl;
    
    return 0;
}