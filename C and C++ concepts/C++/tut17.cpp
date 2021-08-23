#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with 2 arguements"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguements"<<endl;
    return (a+b+c);
}

int volume(double r, int h){
    return (3.14 * r * r * h);
}

int volume(int a){
    return (a*a*a);
}

int volume(int l, int b, int h){
    return (l*b*h);
}
int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3,7 and 6 is "<<sum(3,7,6)<<endl;
    cout<<"cyliner "<<volume(3,4)<<endl;
    cout<<"cube "<<volume(2)<<endl;
    cout<<"cuboid "<<volume(2,3,4)<<endl;
    return 0;
}