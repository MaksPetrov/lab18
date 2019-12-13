#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;
    cout << endl;
    int a[m][m];
    for(int i = 0; i<m; i += 1)
    {
        for(int j = 0; j<m; j += 1)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i<m/2; i += 1)
    {
        for(int j = i; j<m-i; j += 1)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
        for(int j = i+1; j<m-i; j += 1)
        {
            cout << a[m-i-1][j] << " ";
        }
        cout << endl;
        for(int j = m-i-2; j>=i; j -= 1)
        {
            cout << a[j][m-i-1] << " ";
        }
        cout << endl;
        for(int j = m-i-2; j>i; j -= 1)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << a[m/2][m/2];
}
