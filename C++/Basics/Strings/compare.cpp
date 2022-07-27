#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[20]="Hello";
    char s2[20]="hello";

    // cout<<strcmp(s1, s2)<<endl;
    
    string str1 = "Hello";
    string str2 = "hello";
    cout<<str1.compare(str2);
    return 0;
};