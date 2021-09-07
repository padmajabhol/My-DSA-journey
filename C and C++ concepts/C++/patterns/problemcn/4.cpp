#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        int space = 1;
        while (space <= n - row)
        {
            cout<<" ";
            space++;
        }
        int col = 1;
        while (col <= row)
        {
            cout<<"*";
            col++;
        }
        int col2 = row - 1;
        while (col2 >= 1)
        {
            cout<< "*";
            col2--;
        }

        cout<<endl;
        row++;
        
        
        
    }
    
    return 0;
}