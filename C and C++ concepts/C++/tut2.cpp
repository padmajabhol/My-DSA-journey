 //variables
 //int, float, char, double, boolean

 #include<iostream>

 using namespace std;

 int glo = 6;
 void sum() {
     int a;
     cout<< glo; //this will take the global variable  , 6
 }

 int main(){
     int glo = 9;
     glo = 78;
    //  int a = 4;
    //  int b = 5;
    int a=14, b=15;
    float pi=3.14;
    char c = 'd';//dont write more than one character
    bool is_true = true;
    sum();
    cout<<glo<< is_true; //78 (local variable precedence leta hai) here it will print the local variable, is_true will print 1, if false then will print 0
    //  cout<<"This is tutorial 4.\n Here the value of a is "<<a<<"\n The value of b is " << b;
    //  cout<<"\nThe value of pi is: "<<pi;
    //  cout<<"\nThe value of c is: "<<c;
     return 0;
 }