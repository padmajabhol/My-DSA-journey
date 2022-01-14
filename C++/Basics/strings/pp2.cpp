#include<iostream>
#include<string>
using namespace std;

//uppercase to lower case

//for uppercase: 65-90
// lowercase: 97 to 122
//diff between uppercase and lowercase 32

int main(){

    // string str = "WELCOmE";

    // for(int i = 0; str[i]!='\0';i++)
    // {
    //     if(str[i]>=65 && str[i]<=90)
    //     str[i] = str[i]+32;
    // }

    string str = "WeLcOmE5";

    for(int i = 0; str[i]!='\0'; i++)
    {
        if(str[i]>=97 && str[i]<=122)
        str[i] = str[i]-32;
    }

    cout<<str<<endl;
    
    return 0;
}