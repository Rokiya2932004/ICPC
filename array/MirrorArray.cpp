#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int row , col;
    cin >> row >> col;
  int** arr = new int*[row];
  for (size_t i = 0; i < row; i++)
  {
    arr[i] = new int[col];
    for (size_t j = 0; j < col; j++)
    {
        cin >> arr[i][j];
    }
  }
  /* Reversing the rows*/
  for (size_t i = 0; i < row; i++)
  {
    reverse(arr[i], arr[i]+col);  // reverse all rows
  }
  for (size_t i = 0; i < row; i++)
  {
    for (size_t j = 0; j < col; j++)
    {
        cout <<arr[i][j] <<" " ;
    }
    cout << endl;
  }
}






/*#include <iostream>
using namespace std;
int main(){
    int raw , col;
    cin >> raw >> col;
    int** arr= new int*[raw];
    for (size_t i = 0; i < raw; i++)
    {
        arr[i] = new int[col];
        for (size_t j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }  
    }
    for (size_t i = raw-1; i > 0; i--)
    {
        for (size_t j = col-1; j > 0; j--)
        {
            cout<< arr[i][j]<<" ";
        } 
        cout<< endl; 
    }
    
    
}*/