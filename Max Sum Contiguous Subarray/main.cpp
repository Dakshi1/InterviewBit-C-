#include <iostream>

using namespace std;

int st=0;
int last;
int maxz=-99999999;
void removeNegatives(int arr[], int n)
{
    while(arr[st] < 0 && st < n)
    {
        if(arr[st] > maxz)
            maxz=arr[st];
        st++;
    }

    while(arr[last] < 0 && last > st)
    {
        if(arr[st] > maxz)
            maxz=arr[st];
        last--;
    }
}
int main()
{
    int arr[]={-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int n=9;
    last=n;
    int sum;

    while(st < last)
    {
        int grouped=0;
        //removeNegatives(arr, n);
        cout << st << "  " << last << endl;
        while(st<last)
        {
            grouped+=arr[st];
            if(arr[st]> grouped)
            {
                int temp=max(arr[st], grouped-arr[st]);
                maxz=max(maxz, temp);
                cout << maxz << endl;
                //st=i;
                break;
            }
            if(grouped > maxz)
                maxz=grouped;
            st++;
        }
    }
    cout << "max sum is " << maxz;
    return 0;
}
