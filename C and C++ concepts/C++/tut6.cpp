 #include<iostream>
 #include<iomanip>
 using namespace std;

 int main() {
    //  int a = 34;
    //  cout<<"The value of a was: "<<a<<endl;
    //  a = 45;
    //  cout<<"The value of a is: "<<a;

    //  //constants in c++
    //  const int a = 3; // u wont be able to change it

    //Manipulators
    int a = 3, b = 78, c = 1233;
    cout<<"The value of a withput setw is: "<<a<<endl; //3
    cout<<"The value of b withput setw is: "<<b<<endl;//78
    cout<<"The value of c withput setw is: "<<c<<endl;//1233

    cout<<"The value of a is: "<<setw(4)<<a<<endl;//   3
    cout<<"The value of b is: "<<setw(4)<<b<<endl;//  78
    cout<<"The value of c is: "<<setw(4)<<c<<endl;//1233

    //Operator Precedence
    int a = 3, b = 4;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
     return 0;
 }