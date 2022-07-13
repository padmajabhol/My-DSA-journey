#include<iostream>
using namespace std;

int main(){
    //array in heap
    // int *p = new int[5];
    // p[0]=12;
    // p[1]=13;
    // cout<<p[1]<<endl;

    // delete []p;
    // p=nullptr;

    
    int *p = new int[20];
    delete []p;
    p = new int[40];
    return 0;
};