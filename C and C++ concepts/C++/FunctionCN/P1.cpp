#include<iostream>
using namespace std;

// void printTable(int start, int end, int step){
//     int currentValue = start;
//     while(currentValue <= end){
//         int celciusValue = (int)((5.0/9)*(currentValue - 32));
//         cout<<currentValue<<"\t"<<celciusValue<<endl;
//         currentValue += step;
//     }
// }

void printTable(int start, int end, int step){
    while(start <= end){
        int celciusValue = (int)((5.0/9)*(start - 32));
        cout<<start<<"\t"<<celciusValue<<endl;
        start += step;
    }
}

int main(){
    printTable(20, 120, 40);
    
    return 0;
}