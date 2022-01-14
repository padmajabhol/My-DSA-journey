#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "today";

    // string::iterator it;

    // for(it=str.begin(); it!=str.end(); it++)
    // {
    //     *it=*it-32; //string will become uppercase
    // }

    
    string::iterator it;

    for(it=str.begin(); it!=str.end(); it++)
    {
        *it=*it-32; //string will become uppercase
    }

    // for(it=str.rbegin(); it!=str.end(); it++)
    // {
    //     cout<<*it;
    // }

    cout<<str;
    
    return 0;
}