#include <iostream>
#include <math.h>
using namespace std;
void swapx(int arr[], int i, int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        int n, pos=0, neg=0;
        cin >> n;
        int a[n];//={-1, -2, 3, 4, -5};
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i] >= 0)
                pos++;
            else
                neg++;
        }
        int countx=min(pos, neg);
        int position_pos=0, position_neg=1;
        for(int i=0; i<n && countx > 0; i++)
        {
            if(i % 2==0)
            {
                if(a[i] > 0 && position_pos < i)
                {
                    swapx(a, i, position_pos);
                    position_pos+=2;
                }
                else if(a[i]>0 && position_pos==i)
                    position_pos+=2;
                else if(a[i] < 0 && position_neg<n && a[position_neg] > 0)
                {
                    swapx(a, i, position_neg);
                    position_pos+=2;position_neg+=2;
                    countx--;
                    i++;
                }
                else if(position_neg<n)
                {
                    swapx(a, i, position_neg);
                    position_neg+=2;
                    i++;
                }
            }
            else
            {
                if(a[i] < 0 && position_neg < i)
                {
                    swapx(a, i, position_neg);
                    position_neg+=2;
                }
                else if(a[i]<0 && position_neg==i)
                    position_neg+=2;
                else if(a[i] > 0 && position_pos<n && a[position_pos] < 0)
                {
                    swapx(a, i, position_pos);
                    position_pos+=2;position_neg+=2;
                    countx--;
                    i++;
                }
                else if(position_pos<n)
                {
                    swapx(a, i, position_pos);
                    position_pos+=2;
                    i++;
                }
            }
        }
        t--;
        for(int i=0; i<n; i++)
        {
            cout << a[i] << endl;
        }
    }
    return 0;
}
