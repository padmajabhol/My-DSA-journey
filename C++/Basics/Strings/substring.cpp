#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char s1[20]="Programming";
    // char s2[10]="gram";

    // cout<<strstr(s1, s2)<<endl;

    char s1[20]="Programming";
    char s2[10]="k";

    if(strstr(s1, s2) != NULL)
    cout<<strstr(s1, s2)<<endl;
    else
       cout<<"Not found "<<endl;
    return 0;
};