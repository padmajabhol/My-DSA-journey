#include<iostream>
using namespace std;

int main(){
    int  n;
    cin>>n;
    int i = 1; //row
    while (i <= n)
    {
        int j=1; // columns
        while (j <= i)
        {
            cout<<j;
            j++;
        }
        cout << endl;
        i = i + 1;
        
    }
    
    return 0;
}