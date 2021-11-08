#include<iostream>
using namespace std;

bool isPowerOfThree(int n){
    while(n>=3){
        if(n%3 !=0) return false;
        n=n/3;
    }
    return n==1;
}

int main(){
    printf("%d \n", isPowerOfThree(27));
    return 0;
}