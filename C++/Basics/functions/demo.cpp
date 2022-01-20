#include<iostream>
using namespace std;

void display()
{
    cout<<"Hello";
}

float add(float x, float y)
{
    float z;
    z=x+y;
    return z;
}

int maxim(int a, int b, int c)
{
    if(a>b && a>c)
     return a;
    else if(b>c)
     return b;
    else return c;
}

int main(){
    // display();
    // float x=2.3, y=7.9,z;
    // z=add(x,y);
    // cout<<z<<endl;
    int x = 10, y = 15, z = 5, r;
    r = maxim(x,y,z);
    cout<<r<<endl;
    return 0;
}