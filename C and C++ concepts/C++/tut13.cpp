#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

//function prototype

// type function-name (arguements);
void g();

int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;  
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}

void g(){
    cout<<"Hello, Good Morning";
}