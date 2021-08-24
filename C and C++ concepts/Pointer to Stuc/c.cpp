#include<iostream>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

int main(){
    // Rectangle r = {10,5};
    // cout<<r.length<<endl; //10
    // cout<<r.breadth<<endl; //5

    // Rectangle *p = &r;
    // cout<<p->length<<endl; //10
    // cout<<p->breadth<<endl; //5 //use arrow for pointer

    //object of rectangle from heap
    Rectangle *p;
    p = new Rectangle;

    p->length=15;
    p->breadth=7;

    cout<<p->length<<endl; //15
    cout<<p->breadth<<endl; //7

    return 0;
}