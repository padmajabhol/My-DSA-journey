#include<iostream>
#include<string>
using namespace std;

int main(){

    string str="today";

    // string::reverse_iterator it;

    // for(it=str.rbegin(); it!=str.rend(); it++)
    // {
    //     cout<<*it;
    // }

    //forloop

    for( int i=0;str[i]!='\0';i++ )
    {
        str[i]=str[i]-32;
    }
    cout<<str;

    return 0;
};