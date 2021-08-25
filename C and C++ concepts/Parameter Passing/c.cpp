#include<iostream>
using namespace std;

//call ny address
// void swapAddress(int *x, int *y) //temp x y (address at x and address at y )  temp x y
// {
//     int temp; //    -   10 20
//     temp = *x;//    10  10 20
//     *x = *y;  //    10  20 20
//     *y = temp; //   10  20 10
// }

//call by reference

void swapReference(int &x, int &y)//temp x y
{
    int temp; //                -   10 20
    temp = x;//                 10  10 20
    x = y;  //                  10  20 20
    y = temp; //                10  20 10
}


int main()
{
    int a, b;
    a = 10;
    b = 20;
    // swapAddress(&a, &b); //address x and address y // this will swap a and b using pointer reference
    // cout<<a<<endl<<b;

    swapReference(a,b);
    cout<<a<<endl<<b;
    
    return 0;
}