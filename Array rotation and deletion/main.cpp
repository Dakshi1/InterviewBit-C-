#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;

void rotate_arr(int n, int d)
{
    int temp_prev, temp_next, st, j, m;
    m=n;
    // i= n-1 for anti-clockwise rotation

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
}

int main()
{
    int t,temp;
    cin >> t;
    while(t > 0)
    {
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            cin >> temp;
            vec.push_back(temp);
        }
        int d=1;
        for(int i=0;vec.size()>1;i++)
        {
            rotate_arr(n, d);
            int delx;
            if(n-1-i < 0)
                delx=0;
            else
                delx=n-1-i;
            vec.erase(vec.begin()+delx);
            n=vec.size();
        }
        cout << vec[0] << endl;
        vec.erase(vec.begin());
        t--;
    }

    return 0;
}
