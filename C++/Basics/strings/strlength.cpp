#include<iostream>
#include<cstring>
using namespace std;

int main(){

    //length
    // char s[50] = "Hello World";

    // cout<<strlen(s)<<endl;//11



    //concat
    // char s1[20]="Good";
    // char s2[10]="Morning";

    // strcat(s1,s2);

    // strncat(s1,s2,3);
    // cout<<s1<<endl;


    //string copy
    char s1[20] = "Good";
    char s2[10] = "";
    // strcpy(s2,s1);
    strncpy(s2, s1, 2);
    cout<<s2<<endl;


    return 0;
};