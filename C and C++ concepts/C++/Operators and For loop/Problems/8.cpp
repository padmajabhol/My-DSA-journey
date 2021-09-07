#include<iostream>
using namespace std;
//square root

int main(){
    int n;
    cin>>n;
    int output = 0;
    while(output * output <= n){
        output = output + 1;
    }
    output = output - 1;
    cout<<output;
    return 0;
}