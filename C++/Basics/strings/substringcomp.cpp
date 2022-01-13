#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char s1[20] = "Programming";
    // char s2[10] = "gram";

    // cout<<strstr(s1,s2)<<endl; //will start from gram to gramming

    // char s1[20]="Programming";
    // char s2[10]="k";

    // if(strstr(s1,s2) != NULL)
    // cout<<strstr(s1, s2)<<endl;
    // else
    // cout<<"Not Found"<<endl;

    // char s1[20]="Programming";

    // cout<<strchr(s1, 'g')<<endl; 

    char s1[20] = "HellO";
    char s2[20] = "Hello";

    cout<<strcmp(s1, s2)<<endl;
    return 0;
}