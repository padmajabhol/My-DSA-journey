#include<iostream>
using namespace std;

///         1
 //        232
///       34543
////     4567654
 /////  567898765

int main(){
    int n;
    cin>>n;
    int row = 1;
    while (row <= n)
    {
        int spaces = 1;
        while (spaces <= n-row)
        {
            cout<<" ";
            spaces++;
        }
        int val = row;
        int col = 1;
        while (col<=row)
        {
            cout<<val;
            val++;
            col++;
        }
        int col2 =2*(row - 1);
        
        while (col2 >= row)
        {
            cout<<col2;
            col2--;
        }
        
        cout<<endl;
        row++;  
    }
    
    return 0;
}