#include<iostream>
using namespace std;

//u csn only pass arrays as address

// void fun(int A[],int n)
// {
//     int i;
//     for ( i = 0; i < 5; i++)
//     {
//         cout<<i<<endl;
//         /* code */
//     }
    
// }

void fun(int A[ ], int n) //a pointer
{
//     for(int x:A)
//    cout<<a<<endl; // error since u cant use an array over a pointer

      for(int i=0;i<5;i++)
      cout<<A[i]<<endl;
};

int main(){
    int A[ ] = {2,4,6,8,10};
    int n=5;
    fun(A);
    for(int x:A)
    cout<<x<<" ";
    return 0;
}