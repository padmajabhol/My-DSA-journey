



//      1
//    1 2
//  1 2 3
//1 2 3 4

int main(){
    int n;
    cin>>n;
    int row = 1;
    while (row <= n)
    {
        int spaces = 1;
        while (spaces <= n-row)
        {
            cout<<" ";
            spaces++;
        }

        int col = 1;
        while (col <= row)
        {
            cout<<col;
            col++;
        }
        cout<<endl;
        row++;
        
        
    }
    
    
    return 0;
}