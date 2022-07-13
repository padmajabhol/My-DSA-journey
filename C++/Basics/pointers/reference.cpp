#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int &y = x;
    cout<<x<<endl;
    y++;
    x++;
    cout<<x<<endl; //12
    cout<<&x<<endl<<&y<<endl;
    //y is the nickname of x (a reference)
    return 0;
};