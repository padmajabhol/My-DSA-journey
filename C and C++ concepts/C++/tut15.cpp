#include<iostream>
using namespace std;

inline int product(int a, int b){
    //do not use below lines with inline
    // static int c = 0; //this executes only once
    // c = c + 1; //next time this function is run, the value of c will be retained ,dont use inline with static
    // return a*b+c;
    return a*b;
}

float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

//const arguements
// int strlen(const char *p){

// }

int main(){
    // int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The sum of a and b is "<<product(a,b)<<endl;
    // cout<<"The sum of a and b is "<<product(a,b)<<endl;
    // cout<<"The sum of a and b is "<<product(a,b)<<endl;
    // cout<<"The sum of a and b is "<<product(a,b)<<endl;
    // cout<<"The sum of a and b is "<<product(a,b)<<endl;

    //default arguements
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyReceived(money)<<"Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyReceived(money, 1.10)<<"Rs after 1 year";

    //constant arguements

    return 0;
}