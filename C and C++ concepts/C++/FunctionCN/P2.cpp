#include<iostream>
using namespace std;

bool fibo(int n){
    int a = 0;
    int b = 1;
    int c;
    while(a < n){
        c = a + b;
        a = b;
        b = c;
    }
    return a == n;
}

int main(){
    bool ans = fibo(4);
    cout<<ans;
}