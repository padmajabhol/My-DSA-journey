#include<iostream>
using namespace std;

//print all prime numbers from n=2 to n

int main(){
    int n;
    cin>>n;
    for(int d = 2; d <= n; d++){
        bool isPrime = true;
        for(int j = 2; j < d; j++){
            if(d % j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout<< d << endl;
        }
        
      
        
    }
    return 0;
}