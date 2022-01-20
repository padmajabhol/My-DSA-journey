#include<iostream>
using namespace std;

void display()
{
    cout<<"Hello";
}

int max(int x, int y)
{
    return x>y?x:y;
}

int min(int x, int y)
{
    return x<y?x:y;
}

int main(){

    // void (*fp)(); //declare
    // fp = display; //initialize
    // (*fp)(); //calling

    int (*fp)(int, int);
    fp = max;
    (*fp)(10,5);
    fp = min;
    (*fp)(10,5);
    
    return 0;
}