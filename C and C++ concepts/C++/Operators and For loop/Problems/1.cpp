#include<iostream>
using namespace std;

//fibonacci number nth term

int fib(int n){
    if(n<2)
    return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    
    return 0;
}