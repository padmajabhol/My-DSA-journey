#include<iostream>
using namespace std;

//sum prod or -1

int main(){
    int n;
    int c;
    cin>>n;
    cin>>c;
    int sum = 0;
    int pro = 1;
    if( c == 1){
        for(int i = 1; i <= n; i++){
            sum = sum + i;
        }  
        cout<<sum;
    } else if( c == 2){
        for(int j = 1; j <= n; j++){
            pro = pro * j;
        }
        cout<<pro;
    } else {
        cout<<-1<<endl;
    }
 
    return 0;
}