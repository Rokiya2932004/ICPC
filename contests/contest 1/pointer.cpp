#include <iostream>
using   namespace std;  
int main(){
int arr[3]={1 ,2 ,3 };

for(int i=0;i<3;i++){
    cout<<&arr[i]<<endl;
}
cout<< *arr <<endl; //print the element (* : refears to the value for the element)


}