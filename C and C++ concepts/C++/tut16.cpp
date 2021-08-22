#include<iostream>
using namespace std;


int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

//step by step
// fib(4) = fib(2) + fib(3)
//fib(4) = fib(0) + fib(1) + fib(1) + fib(2)
//fib(4) = 1 + 1 + 1 + 1 + 1;
//1+1+2+3

//Recurs ions
// int factorial(int n){
//     if (n<=1){
//         return 1;
//     }
//     return n * factorial(n - 1);
// }


//step by step calculation 
// factorial(3) = 3 * factorial(2);
// factorial(3) = 3 * 2 * factorial(1);
// factorial(3) = 3 * 2 * 1;

int main(){
    int a;
    // cout<<"Enter a number"<<endl;
    // cin>>a;
    // cout<<"The factorial of a is "<<factorial(a)<<endl;
    //Factorial of a number
    

    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The term in fibonacci sequence at position  "<<a<<" is " <<fib(a)<<endl;


    return 0;
}