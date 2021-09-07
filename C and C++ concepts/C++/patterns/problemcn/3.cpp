#include<iostream>
using namespace std;

//4444
//333
//22
//1

int main(){
    int n;
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        int col = n;
        while (col>=row)
        {
            cout<<(n-row+1);
            col--;
        }
        cout<<endl;
        row++;
        
    }
    
    return 0;
}