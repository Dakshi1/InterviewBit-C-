#include <iostream>

using namespace std;
void swapx(int arr[], int i, int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void reverseArr(int arr[], int start, int endx)
{
    while(start < endx)
    {
        swapx(arr, start, endx);
        start++;
        endx--;
    }
}
void reverseAlgorithm(int arr[], int n, int d)
{
    reverseArr(arr, 0, d-1);
    reverseArr(arr, d, n-1);
    reverseArr(arr, 0, n-1);
}
int main()
{
    int t;
    cin >> t;
    while(t > 0)
    {
        int n, d;
        cin >> n;
    //d=d % n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        cin >> d;
        d=d%n;
        if(d!=0)
            reverseAlgorithm(a, n, d);
        for(int i=0; i<n; i++)
            cout << a[i] << endl;
    }
    return 0;
}
