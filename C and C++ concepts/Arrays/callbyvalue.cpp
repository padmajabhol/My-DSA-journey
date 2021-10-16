#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;
};

void fun(struct Rectangle rect)//call by value
{
    rect.length = 20;
    cout<<"Length"<<rect.length<<endl<<"Breadth"<<rect.breadth<<endl;
}

int main(){
    struct Rectangle r = {10, 5};
    fun(r);
    printf("Length %d \nBreadth %d\n", r.length, r.breadth);
    return 0;
}