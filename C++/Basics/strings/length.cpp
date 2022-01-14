#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello";
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    str.resize(50);
    cout<<str.capacity()<<endl; //50

    cout<<str<<endl;
    
    return 0;
}