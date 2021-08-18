 #include<iostream>
 using namespace std;

 //input stream: direction of flow of bytes takes place from input device( for ex keyboard) to the main memeory

 //output stream: direction of flow of bytes takes place from main memeory to the output device( for example display)

int main()
{
    int num1, num2;
    cout<<"Enter the values of num1:\n"; //<< this is called insertion operator
    cin>>num1; // << this is called the extraction operator

    cout<<"Enter the values of num2:\n"; //<< this is called insertion operator
    cin>>num2; // << this is called the extraction operator

    cout<<"The sum is "<< num1+num2;
    return 0;
}
