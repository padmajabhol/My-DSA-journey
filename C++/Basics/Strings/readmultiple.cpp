#include<iostream>
using namespace std;

int main(){
    char s1[100];
    char s2[100];
    cout<<"Enter your name";
    cin.get(s1, 100);

    cout<<"Welcome "<<s1<<endl;

    cin.ignore();

    cout<<"Enter your name again ";
    cin.get(s2, 100);

    cout<<"Welcome "<<s2<<endl;

    return 0;
};