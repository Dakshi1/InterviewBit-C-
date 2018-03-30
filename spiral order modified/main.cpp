#include <iostream>

using namespace std;

int main()
{
    int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int m=4;
    int n=4;
    int T=0, B=m-1, L=0, R=n-1;
    int countx=m*n;
    int dir=0;
    while(countx > 0)
    {
        if(dir == 0)
        {
            for(int i=L; i<=R; i++)
            {
                cout << a[T][i] << "   ";
                countx--;
            }
            T++;
        }
        if(dir == 1)
        {
            for(int i=T; i<=B; i++)
            {
                cout << a[i][R] << "   ";
                countx--;
            }
            R--;
        }
        if(dir == 2)
        {
            for(int i=R; i>=L; i--)
            {
                cout << a[B][i] << "   ";
                countx--;
            }
            B--;
        }
        if(dir == 3)
        {
            for(int i=B; i>=T; i--)
            {
                cout << a[i][L] << "   ";
                countx--;
            }
            L++;
        }
        dir=(dir+1)%4;
    }
    return 0;
}
