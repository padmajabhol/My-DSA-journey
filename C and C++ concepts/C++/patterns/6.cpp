#include<iostream>
using namespace std;

//   1
//  121
// 12321
//1234321

int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int space = 1;
        while (space<=n-row)
        {
            cout<<" ";
            space++;
        }
        int col = 1;
        while (col <= row)
        {
            cout<<col;
            col++;
        }
        int col2 = row - 1;
        while (col2 >= 1 )
        {
            cout<<col2;
            col2--;
        }
        
        cout<<endl;
        row++;
        

    }
    return 0;
}