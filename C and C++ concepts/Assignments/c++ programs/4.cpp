#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    char operators;
    cin>>num1>>num2;
    cout<<"enter an operator";
    cin>>operators;

    if(operators == '+'){
        cout<<num1+num2;
    }if(operators == '-'){
        cout<<num1-num2;
    }if(operators == '*'){
        cout<<num1*num2;
    };




    return 0;
}