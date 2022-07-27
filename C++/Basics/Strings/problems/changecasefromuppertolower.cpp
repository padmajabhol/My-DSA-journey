#include<iostream>
using namespace std;

// int main(){

//     // convert to lowercase
//     string str="WeLCOME";

//     for(int i=0; str[i]!='\0'; i++)
//     {
//         if(str[i]>=65 && str[i]<=90)
//         {
//             str[i]=str[i]+32;
//         }
//     };
//     cout<<str<<endl;
//     return 0;
// };

//convert to uppercase

int main()
{
    string str="WeLcOmE7";

    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
    cout<<str;
    return 0;
}