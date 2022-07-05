#include<iostream>
using namespace std;

int main(){
    int A[5] = {6, 7, 8, 56, 7};

    // for(int i = 0; i < 6; i++)
    // {
    //     cout<<A[i]<<endl;
    // };

    for( auto x: A)
    {
        cout<<++x<<endl;
    };

    return 0;
};