#include<iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int length = 0, breadth = 0;

    cout<<"enter length and breadth";
    cin>>length>>breadth;

    int area = length * breadth;
    int peri = 2*(length + breadth);

    printf("Area = %d\n Perimeter = %d\n", area, peri);
    return 0;
}