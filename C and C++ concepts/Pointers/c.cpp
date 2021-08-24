#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    // int a = 10;
    // int *p; //<----- declaration of a pointer
    // p = &a; //<---- initialization (&a: address of a)

    // cout<<p<<endl; //address of a
    // cout<<&a<<endl; //same as above

    // cout<<a<<endl; //10
    // cout<<*p<<endl; //10 <---- dereferencing 

    //Pointer to an array

    // int A[5] = {2,4,6,8,10};
    // int *p;
    // int *q;
    // p = A; //dont include & in array
    // q = &A[0];

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<A[i]<<endl;
    //     cout<<p[i]<<endl; //same
    // }

    //Create an array in heap memory using a pointer

    // int *p;
    // // p=(int *)malloc(5*sizeof(int)); //c
    // p=new int[5]; //c++

    // p[0]=10; p[1]=15; p[2]=14; p[3]=21; p[4]=31;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<p[i]<<endl;
    // };

    // delete [] p; //to deallocated the heap memory in c++
    // // free(p); //does the same but in c


    struct Rectangle
    {
        int length;
        int breadth;
    };

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl; // 4 bytes for all , size of a pointer is independent to it data type
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

    return 0;
}