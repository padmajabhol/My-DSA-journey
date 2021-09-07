#include<iostream>
using namespace std;

//binary to decimal

int main(){
    int n;
    cin>>n;
    int x = 1;
    int final = 0;
    while(n>0){
        int lastDig = n % 10;
        n = n / 10;
        final = final + lastDig*x;
        x = x*2;
    }
    cout<< final;
    return 0;
}