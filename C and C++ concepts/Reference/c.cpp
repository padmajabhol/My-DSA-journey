#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a;
    r = 25; //changing any among r or a will change both as basically both are same due to reference

    // int b = 25;
    // r = b; //a will become 25

    cout<<a<<endl<<r<<endl; //10
    r++;
    cout<<r<<endl; //11
    cout<<a; //11
    return 0;
}