#include<iostream>
#include<vector>
using namespace std;
/*--------------------------Search Item in 2D Array------------------------- */
bool searchItem(int arr[][3],int item,int row,int col){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (item == arr[i][j])
            {
                return 1;
            }
            
        }
        
    }
    return 0;
}
/*-----------------------Sum of The Array--------------------------------- */
void sumoArr(int arr[][3],int row,int col){
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<sum;
        cout<<endl;
    }
    
}
/*------------------------Largest Sum of The Array----------------------- */
int largestRowSum(int arr[][3],int row,int col){
    int maxi = INT_MIN;
    int rowInd = 0;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        if(maxi < sum){
            maxi = sum;
            rowInd = i;
        }
    }
    cout<<"largest Sum of Row is :- "<<maxi<<endl;
    return rowInd;
}
//--------------------------------------------------------------------------


int main(){
    // int row,col;
    // cout<<"Enter The Size of the Row and Column :-";
    // cin>>row>>col;
    int arr[3][3];
    /*---------------------Inserting Element In Array------------------ */
    cout<<"Enter The Element:-";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }    
    }
    /*--------------------------Printing Array---------------------------*/
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   /*----------------------------------------------------------------- */
    sumoArr(arr,3,3);
    cout<<"Row :- "<<largestRowSum(arr,3,3);

    /* ---------------Search Item----------------------*/
    // cout<<"Enter The element you want to search:- ";
    // int item;
    // cin>>item;
    // if (searchItem(arr,item,3,3))
    // {
    //     cout<<"Item found!";
    // }
    // else
    //     cout<<"Item not found!";
    
    /*------------------------------------------------------*/

    // createArr(arr,row,col);
    // printArr(arr,row,col);

return 0;
}