#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    cout << endl;
    float a[m][n];
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
        bool s = true;
        for(int j = 0; j<m; j += 1)
        {
            if(a[j][i]/2==0)
            {
                s = false;
            }
        }
        if(s==true)
        {
            cout << i;
            break;
        }
        if(i==n-1 && s==false)
        {
            cout << 0;
        }
    }
}
