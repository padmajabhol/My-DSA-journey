#include<iostream>
using namespace std;

int main(){
    int marks[4] = {23, 45, 56, 89};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // marks[2] = 90;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
       
    //     cout<<"The value of marks "<<i<<"  is "<<marks[i]<<endl;  
    // }

    //pointers and array
    //pointer arithmetic


    //address new = address current + i * sizeof(datatype)
    //adress new = p+1, address current = p


    int* p = marks;
    cout<<*(p++)<<endl; //23 and then increase by 1
    cout<<*(++p)<<endl; //56
    // cout<<"The value of marks[0] is "<<*p<<endl; //23
    // cout<<"The value of marks[0] is "<<*(p+1)<<endl; //45
    // cout<<"The value of marks[0] is "<<*(p+2)<<endl; //56
    // cout<<"The value of marks[0] is "<<*(p+3)<<endl; //89
    return 0;
}