#include<iostream>
using namespace std;

struct Rectangle
{
    int length; // 2 bytes but 4
    int breadth; //2 bytes but 4
    char x; // 1 bytes
} ;


//struct example

struct Complex
{
    int real; //2 b
    int complex; //2 b
};

struct Student
{
    int roll; // 2 b
    char name[25]; //store name upto 25 characters //25 b
    char dept[10]; //10 b
    char address[50]; //50 b
};





int main(){
    struct Rectangle r1 = {10,5};
    r1.length = 15; //changes from 10 to 15
    r1.breadth = 10; //changes from 5 to 10

    cout<<"Area of the rectangle is "<<(r1.length * r1.breadth)<<endl; //150
    cout<<sizeof(r1); //12 bytes, at a time it will pick 4-4-4 bytes but use only 1 byte for char
    
    return 0;
}