#include<iostream>
using namespace std;



int main(){
      int n;
    cin>>n;
    int i = 1; //rows
    int val = 1;
    while (i <=n)
    {
        int k = 1; //spaces
        while (k <= n - i)
        {
            cout<<" ";
            k = k + 1;
        }
        
        int j = 1;
        while (j <= i)
        {
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}