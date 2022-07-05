#include<iostream>
using namespace std;

int main(){
    int A[5] = {3, 4, 10};

    // for(int i = 0; i < 5; i++)
    //     cout<<A[i]<<endl;

    for(int x:A)
        cout<<x<<endl;
    return 0;
};