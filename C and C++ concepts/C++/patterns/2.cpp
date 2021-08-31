#include<iostream>
using namespace std;




int main(){
    int n;
    cin>>n;
    int sumE = 0, sumO=0;
    while(n>0){
        int j = n % 10;
        if (j % 2 == 0)
        {
            sumE = sumE+j;
        
        }else if(j % 2 != 0){
            sumO = sumO + j;
            
            
        }

        n = n/10;
      
    }
      cout<<sumE<<"\t"<<sumO;;
    return 0;
}