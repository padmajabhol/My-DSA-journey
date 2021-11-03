#include<iostream>
using namespace std;

//factorial

//recursion
int fact(int n)
{
    if(n==0)
    return 1;
    return fact(n-1)*n;
}

//loop
int Ifact(int n)
{
    int f=1;
    int i;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}

int main(){
    int r;
    r = Ifact(5);
    printf("%d", r);
    return 0;
}