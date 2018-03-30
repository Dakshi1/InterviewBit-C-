#include <iostream>

using namespace std;
int neg_ele=0;
int pos_ele=0;
void swapx(int arr[], int i, int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void swapalt(int arr[], int st_neg, int st_pos, int n)
{
    int i=st_neg;
    int j=st_pos;
    while(i < st_pos && j < n)
    {
        swapx(arr, i, j);
        i+=2;j+=1;
    }
}
void separateArr(int arr[], int n)
{
    int i=-1;// index of last negative element in current arr
    // 'k'index of element in current arr
    for(int k=0; k<n; k++)
    {
        if(arr[k] < 0)
        {
            i++;
            swapx(arr, i, k);
        }
    }
    neg_ele=i+1;
    pos_ele=n-neg_ele;
}
int main()
{
    int t;
    cin >> t;
    while(t > 0)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        separateArr(a, n);
        t--;
        cout << pos_ele << "  " << neg_ele << endl;
        //if(pos_ele >= neg_ele)
        {
            swapalt(a, 0, neg_ele, n);
        }
        for(int i=0;i<n;i++)
            cout << a[i] << endl;
    }
    return 0;
}
