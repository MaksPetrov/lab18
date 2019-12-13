#include <iostream>

using namespace std;

int main()
{
    int k, m, n, s = 0, p = 1;
    cin >> k >> m >> n;
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
    for(int j = 0; j<n; j += 1)
    {
        s += a[k-1][j];
        p *= a[k-1][j];
    }
    cout << s << " " << p;
}
