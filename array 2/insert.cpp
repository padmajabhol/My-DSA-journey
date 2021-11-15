#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0; i < arr.length; i++)
    printf("%d ", arr.A[i]);

}

vaoid Append(struct Array *arr, int x)
{ //it will modify the array so its callback value type
  

}

int main(){
    struct Array arr = {{2,3,4,5,6}, 10, 5};

    Display(arr);

    
    return 0;
}