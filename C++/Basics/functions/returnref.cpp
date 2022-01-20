#include<iostream>
using namespace std;

int &fun(int &a)
{
    cout<<a;
    return a;
}

int main(){
    int x = 10;
    fun(x) = 25; //func(x) becomes just x
    cout<<x;
    return 0;
}