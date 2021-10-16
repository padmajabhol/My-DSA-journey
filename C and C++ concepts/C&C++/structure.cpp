#include<iostream>
using namespace std;

struct Rectangle
{
   int length;
   int breadth; 
};

void initialise(struct Rectangle *r, int l, int b)
{
    r->length=l;
    r->breadth=b;
}

int area(Rectangle r){
    return r.length*r.breadth;
}

int perimeter(Rectangle r){
    int p;
    p = 2*(r.length+r.breadth);
    return p;
}

int main(){

    Rectangle r ={0,0};

    int l,b;


    cout<<"enter length and breadth";
    cin>>l>>b;

    initialise(&r, l, b);

    int a = area(r);
    int p = perimeter(r);

    printf("Area = %d\n Perimeter = %d\n", a, p);
    
    
    return 0;
}