#include <iostream>

using namespace std;

void rotate_arr(int arr[], int n, int d)
{
    int temp_prev, temp_next, st, j, m;
    m=n;
    // i= n-1 for anti-clockwise rotation

    for(int i=n-1; m>0;)
    {
        temp_prev=arr[i];
        st=i;
        j=i;
        do
        {
            if(j - d < 0)
                j=j - d + n;
            else
                j=j - d;
            temp_next=arr[j];
            arr[j]=temp_prev;
            temp_prev=temp_next;
            m--;
        }
        while(j != st);
        i=st-1;
    }
}

int mainx()
{
    int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int d=17;
    int n=sizeof(arr)/sizeof(arr[0]);
    d=d % n;
    if(d!=0)
        rotate_arr(arr, n, d);
    for(int i=0;i<n;i++)
        cout << arr[i] << endl;
    return 0;
}
