#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    cout << endl;
    int a[m][n];
    for(int i = 0; i<m; i += 1)
    {
        for(int j = 0; j<n; j += 1)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    for(int i = 0; i<n; i += 1)
    {
        float s = 0;
        int q = 0;
        for(int j = 0; j<m; j += 1)
        {
            s += a[j][i];
        }
        s /= n;
        for(int j = 0; j<m; j += 1)
        {
            if(a[j][i]>s)
            {
                q += 1;
            }
        }
        cout << q << " ";
    }
}
