#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr={1,2,3,6,7,8,4,5};
    vector<int> solution;
    sort(arr.begin(), arr.end());
    int countx=arr.size();
    int mid=countx/2;
    int i=0;
    while(countx>0)
    {
        solution.push_back(arr[mid+i]);
        solution.push_back(arr[i]);
        i++;
        countx-=2;
    }
    for(int i=0;i<8;i++)
        cout << solution[i] << endl;

    return 0;
}
