 #include<iostream>
 //there are two types of header files
 //1. system header files: it comes with the compiler
 //2. User defined header files: It is written by the programmer
 // #include "this.h" --> this will produce an error if this.h is not present in the current directory
 using namespace std;

 int main()
 {
     int a=4, b=5;
     cout<<"Operators in C++"<<endl; //endl makes a new line
     cout<<"Following are the types of operators in C++"<<endl;
     // Arithmetic operators
     cout<<"The value of a + b is "<<a+b<<endl;
     cout<<a++<<endl; //4 //prints a(4) and then add 1 to it 
     cout<<a--<<endl; //5 //(prints the currents value of a(5)) and then substract 1 from it
    //  cout<<++a<<endl;
    cout<<a<<endl; //4
    cout<<++a<<endl; //first increment then print (5)
    cout<<--a<<endl; //4

    // Assignment Operators --> used to assign values to variables
    // int a = 3, b = 9;
    // char d = 'd';

    //Comparision Operators
    cout<<"a == b "<<(a==b)<<endl;
    cout<<"a != b "<<(a!=b)<<endl;
    cout<<"a >= b "<<(a>=b)<<endl;
    cout<<"a <= b "<<(a<=b)<<endl;
    cout<<"a > b "<<(a>b)<<endl;
    cout<<"a < b "<<(a<b)<<endl;

    //Logical operators

    cout<<"&& "<<((a==b) && (a<b)) <<endl;
    cout<<"&& "<<((a==b) || (a<b)) <<endl;
    cout<<"&& "<<(!(a==b)) <<endl;

     return 0;
 }
 