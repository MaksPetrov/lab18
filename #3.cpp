#include <iostream>

using namespace std;

int main()
{
    int m, n, min = 0, mins = 1;
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
    for(int i = 0; i<m; i += 1)
    {
        mins *= a[i][0];
    }
    for(int i = 1; i<n; i += 1)
    {
        int s = 1;
        for(int j = 0; j<m; j += 1)
        {
            s *= a[j][i];
        }
        if(s<mins)
        {
            mins = s;
            min = i;
        }
    }
    cout << min << " " << mins;
}
