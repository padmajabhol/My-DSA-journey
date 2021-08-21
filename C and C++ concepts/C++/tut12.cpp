#include<iostream>
using namespace std;


// typedef struct employee
// {
//     /* data */
//     int eId; //4
//     char favChar; //1
//     float salary; //4
// } ep;

// union money
// {
//     /* data */
//     int rice;
//     char car;
//     float pounds;
// };




int main(){
    // ep Harry;
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.rice<<endl; //gives garbage value with m1.rice as union can only store one thing
    // cout<<m1.car<<endl;


    // struct employee shubham;
    // Harry.eId = 1;
    // Harry.favChar = 'c';
    // Harry.salary = 1200000;
    // cout<<Harry.salary<<endl;
    // cout<<Harry.eId<<endl;
    // cout<<Harry.favChar<<endl;

    enum Meal{ Breakfast, lunch, dinner};
    Meal m1 = Breakfast;
    // cout<<m1; //0
    cout<<(m1==0); //true(1)
    cout<<Breakfast; //0
    cout<<lunch; //1
    cout<<dinner; //2 
    return 0;
}