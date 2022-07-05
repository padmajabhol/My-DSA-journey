#include<iostream>
using namespace std;

int main(){
    int A[7] = {3,4,5,6,7,8,9};
    int n = 7, max;
    max = A[0];
    for( int i = 1; i < 7; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout<<max<<endl;
    return 0;
};