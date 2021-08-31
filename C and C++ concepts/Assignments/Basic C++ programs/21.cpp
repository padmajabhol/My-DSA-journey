#include<iostream>
using namespace std;

//fibonacci

int fib (int a){
if (( a == 0) ||( a == 1))
{
    return a;
}else{
    return (fib(a-1) + fib(a-2));
}

}

int main(){
    int a, i = 0;
    cin>>a;

    while (i<a)
    {
        cout<<" "<<fib(i);
        i++;
    }
    
    return 0;
}