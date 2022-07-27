#include<iostream>
using namespace std;

int main(){

    string str="Hello";

    cout<<str.capacity()<<endl;

    str.append("How are you all i hope u are fine fdsfgds dfdf");
    cout<<str.capacity()<<endl;

    cout<<str<<endl;
    return 0;
};