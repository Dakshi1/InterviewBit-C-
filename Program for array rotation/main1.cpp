
#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;
void rotate_arr_clock(vector<int> arr, int n, int d)
{
    int temp_prev, temp_next, st, j, m;
    m=n;
    // i= 0 for anti-clockwise rotation

    for(int i=0; m>0;)
    {
        temp_prev=vec[i];
        st=i;
        j=i;
        do
        {
            if(j + d >= n)
                j=j + d - n;
            else
                j=j + d;
            temp_next=vec[j];
            vec[j]=temp_prev;
            temp_prev=temp_next;
            m--;
        }
        while(j != st);
        i=st+1;
    }
    for(int i=0;i<n;i++)
        cout << arr[i] << endl;
}

int main()
{
    int arr[]={1, 2, 3, 4, 5, 6};

    vec (arr, arr + sizeof(arr) / sizeof(arr[0]) );
    int d=1;
    int n=sizeof(arr)/sizeof(arr[0]);
    d=d % n;
    //for(int i=0;i<n-1;i++)
        rotate_arr_clock(vec, n, d);
    for(int i=0;i<n;i++)
        cout << vec[i] << endl;
    cout << "The final desired value is " << arr[0] << endl;
    return 0;
}
