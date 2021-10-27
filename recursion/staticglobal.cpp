#include<iostream>
using namespace std;

int x = 0; //global
int fun(int n)
{
    // static int x = 0;
    if(n > 0)
    {
        x++;
        return fun(n-1) + x;
    }
    return 0;
}
int main(){

    int r;
    r = fun(5);
    printf("%d\n", r); //25

    r = fun(5);
    printf("%d\n", r); //50
    
    return 0;
}