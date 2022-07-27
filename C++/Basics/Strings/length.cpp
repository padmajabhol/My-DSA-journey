#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char s[50] = "Hello World";

    //using pointer

    char *s;

    cout<<"Enter a string";
    cin.getline(s, 100);
    
    cout<<strlen(s)<<endl;
    return 0;
};