 #include<iostream>
 using namespace std;

 int c = 45; //global c
 
 int main()
 {

     //********Build in data types*******//
    //  int a, b, c;
    //  cout<<"Enter the value of a:"<<endl;
    //  cin>>a;
    //  cout<<"Enter the value of b:"<<endl;
    //  cin>>b;
    //  c = a + b;
    //  cout<<"The sum is "<<c<<endl;
    //  cout<<"The global c is "<<::c; //this will give u the global scope c global c 45, :: is called the scope resolution operator


     //*******float, double amd long double literals*************
    // float d=34.4f;
    // long double e = 34.4l;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f);
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e; //both 34.4

    //************reference variables***********

    float x = 455;
    float & y = x; //y is a reference that points to x
    cout<<x<<endl;
    cout<<y<<endl; //both 455 

    //***************Typecasting***************

    int a = 45;
    float b = 4.98;
    // cout<<"The value of a is "<<(float)a<<endl; //45
    // cout<<"The value of b is "<<(int)b<<endl; //45
    // cout<<"The value of b is "<<int(b)<<endl; //45
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;


     return 0; 
 }
 