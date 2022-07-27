#include<iostream>
#include<string>
using namespace std;

int main(){
    // copy
    // string s="Welcome";
    // char str[10];

    // s.copy(str, 3);
    // str[3]='\0';
    // find
    string str="How are you";
    cout<<str.find("are")<<endl;
    cout<<str.find_first_of("o")<<endl;
    cout<<str.find_last_of("o");
    return 0;
};