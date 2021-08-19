 #include<iostream>
 using namespace std;

int main(){
    // for(int i = 0; i < 4; i++)
    // {
    //    cout<<i<<endl;
    //    if(i==2){
    //       break; // 0,1,2
    //     }
    // }

      for(int i = 0; i < 4; i++)
    {
       cout<<i<<endl;
       if(i==2){
          continue; //skips2, prints 0,1,2,3
        }
    }
    return 0;
}