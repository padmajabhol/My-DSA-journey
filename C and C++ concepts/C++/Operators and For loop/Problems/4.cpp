#include<iostream>
using namespace std;

//AP 
int main(){
    int x;
    cin>>x;
    int current = 1;
    for(int count = 1; count <= x; current++){
        int y = 3*current + 2;
        if( y % 4 != 0){
            cout<<y<<" ";
            count++;
        }
       
    }
    return 0;
}
