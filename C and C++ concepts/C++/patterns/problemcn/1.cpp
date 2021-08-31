#include<iostream>
#include<cmath>
using namespace std; 

int main() {
    double basic;
    cin >> basic;
    char allow;
    cin >> allow;
  
    double hra = 0.2 * basic;
    double da = 0.5 * basic;
   
   int allow1;
    
    if(allow == 'A'){
        allow1 = 1700;
    }else if(allow == 'B'){
        allow1 = 1500;
    }else{
        allow1 = 1300;
    }
    
    double pf = 0.11*100;
    
    double totalSalary = basic + hra + da + allow1 - pf;
    int ans = round(totalSalary);
    cout<<ans;
    
    return 0;
    
        

    
}