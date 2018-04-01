#include <iostream>

using namespace std;

int main()
{
    int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int m=4;
    int n=4;
    int check[4][4]={0};
    int countx=m*n;
    int row=0,column=0, turn=0;
    while(countx)
    {
        if(turn % 2==0)
        {
        while(column < n )
        {
            //cout << check[row][column] << endl;
            if(check[row][column]==0)
            {
                //cout << "hello";
                check[row][column]=1;
                cout << a[row][column] << " ";
                countx--;
            }
            else
                break;
            column++;
        }
        column--;row++;
        //cout << "Column is " << column << endl;
        while(row < m)
        {
            if(check[row][column]==0)
            {
                check[row][column]=1;
                cout << a[row][column] << " ";
                countx--;
            }
            else
                break;
            row++;
        }
        row--;column--;
        //cout << "Row is " << row << endl;
        }
        else
        {
            while(column >= 0 )
            {
            if(check[row][column]==0)
            {
                check[row][column]=1;
                cout << a[row][column] << " ";
                countx--;
            }
            else
                break;
            column--;
            }
            column++;row--;
            //cout << "Column is " << column << endl;
            while(row >= 0)
            {
            if(check[row][column]==0)
            {
                check[row][column]=1;
                cout << a[row][column] << " ";
                countx--;
            }
            else
                break;
            row--;
            }
            row++;column++;
            //cout << "Row is " << row << endl;
        }

        turn++;

    }
    return 0;
}
