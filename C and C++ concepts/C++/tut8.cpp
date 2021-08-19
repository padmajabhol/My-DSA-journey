 #include<iostream>
 using namespace std;

 int main(){
     //Loops in C++, WHILE LOOP, FOR LOOP, DO WHILE LOOP

     //For loop in C++
    //  int i = 1;
    //  cout<<i;
    //  i++;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<i<<endl; //0,2
    //     i++;
    // }

    //printing 1 to 40 using while loop
    // int i = 1;
    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    //Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //    cout<<i<<endl;
    //    i++;
    // }

    //Do while loop

    int i = 1;
    do{
        cout<<i<<endl;
        i++;
    }while (i<=40); //whatever be the condition, the loop will be executed atleast once

     return 0;
 }
