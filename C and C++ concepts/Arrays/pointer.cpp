#include<iostream>
using namespace std;

int *fun(int size)
{
    int * p;//take a pointer
    p = new int[size]; //use the pointer to create an array
    for(int i = 0; i < size; i++)
    p[i] = i + 1;
    return p;
}

int main(){
    int *ptr, sz = 5;
    ptr = fun(sz);
    for(int i = 0; i < sz; i++)
    cout<<ptr[i]<<endl;
    return 0;
}