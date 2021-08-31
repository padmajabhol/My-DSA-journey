#include<iostream>
using namespace std;

//subtract the product and sum of digits of an integer

int main(){
   int n, sum,product=1, m;
   cout<<"enter a number"<<endl;
   cin>>n;

//    while (n > 0)
//    {
//        m = n % 10;
//        sum += m;
//        product = product * m;
//        n = n/10;
//    }
   for (sum= 0; n > 0; n = n/10)
   {
       sum = sum + (n % 10);
    //    product = product * m;
   }
   
  cout<<"sum is "<<sum<<endl;
//   cout<<"product is "<<product<<endl;
//   cout<<"output "<< product - sum;
  
   

    return 0;
}