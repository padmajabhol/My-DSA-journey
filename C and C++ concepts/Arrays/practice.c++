#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    // int A[] = {2,4,6,8,10,12,14};
    // A[0] = 12;
    // A[1] = 15;
    // A[2] = 25;
    int n;
    cout<<"Enter size";
    cin>>n;
    int A[n];
    A[0]=2;
    // int A[10] ={2,4,6,8,10,12};

    // for (int  i = 0; i < 10; i++)
    for(int x: A)
    {
        // cout<<A[i]<<endl;
        cout<<x<<endl;
    }
    

    // cout<<sizeof(A)<<endl; //xX4
    // cout<<A[1]<<endl;
    // printf("%d\n", A[2]);
    return 0;
}