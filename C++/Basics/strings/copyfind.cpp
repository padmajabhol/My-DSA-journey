#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "Welcome";

    // string str = "Programming";

    // // char str[10];

    // // s.copy(str, 3);

    // cout<<str.find("i")<<endl;

    // cout<<str.find("k")<<endl;

    string str = "hello world";

    cout<<str.find_first_of('l',4)<<endl;
    
    return 0;
}