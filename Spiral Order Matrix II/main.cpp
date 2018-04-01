#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int m=n;
    //int n=4;
    int T=0, B=m-1, L=0, R=n-1;
    int countx=m*n;
    int dir=0;
    while(countx > 0)
    {
        if(dir == 0)
        {
            for(int i=L; i<=R; i++)
            {
                a[T][i]=m*n - countx +1;
                //cout << a[T][i] << "   ";
                countx--;
            }
            T++;
        }
        if(dir == 1)
        {
            for(int i=T; i<=B; i++)
            {
                a[i][R]=m*n - countx +1;
                //cout << a[i][R] << "   ";
                countx--;
            }
            R--;
        }
        if(dir == 2)
        {
            for(int i=R; i>=L; i--)
            {
                //cout << a[B][i] << "   ";
                a[B][i]=m*n - countx +1;
                countx--;
            }
            B--;
        }
        if(dir == 3)
        {
            for(int i=B; i>=T; i--)
            {
                //cout << a[i][L] << "   ";
                a[i][L]=m*n - countx +1;
                countx--;
            }
            L++;
        }
        dir=(dir+1)%4;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }
    return 0;
}
