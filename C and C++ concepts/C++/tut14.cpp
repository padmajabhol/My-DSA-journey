#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b; 
    return c;
}


//This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;       // 4    4 5
    a = b;             //  4    5 5
    b = temp;         //   4    5 4
}


//call by reference using pointer using c++ pointer reference
void swapPointer(int* a, int* b){ //temp a b (address at a and address at b )
    int temp = *a;       // 4    4 5 , value at address a
    *a = *b;             //  4    5 5
    *b = temp;         //   4    5 4
}

//call by reference using pointer using c++ reference variables
void swapReferenceVar(int  &a, int &b){ //temp a b , a points at x, b points at b
    int temp = a;       // 4    4 5 , value at address a
    a = b;             //  4    5 5
    b = temp;         //   4    5 4
}

int main(){
    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(a,b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; //4,5
    // swap(x,y); // won't swap
    swapPointer(&x, &y); //address x and address y // this will swap a and b using pointer reference
    swapReferenceVar(x, y); //address x and address y // this will swap a and b using reference variable 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; //5,4
    return 0;
}