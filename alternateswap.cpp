#include<iostream>
using namespace std;
void alternate_swap(int arr[],int n){
for(int i = 0;i<n;i+=2){
    if(i+1 < n){
        swap(arr[i], arr[i+1]);
    }
}

}
void printarray(int arr[],int n){
    for ( int i = 0 ;i <n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
  int arr[5] = {5,8,9,14,3};
  int arr1[8] = {1,11,26,18,7,24,94,75};
  alternate_swap(arr,5);
  alternate_swap(arr1,8);
  printarray(arr,5);
  printarray(arr1,8);
  
  
  
  return 0;
}